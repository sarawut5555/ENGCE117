#include <stdio.h>

struct Node {
    int Data;
    struct Node *Next;
    struct Node *Back;
} typedef N;

void AddNode(N **, int *Data);
void InsertNode(N **, int *Data, int *pos);
void DeleteNode(N **, int *pos);
void SwapNode(N **, int *pos1, int *pos2);
void ShowFront(N **);
void ShowBack(N **);

int main() {
    N *start = NULL;
    int data = 0, pos1 = 0, pos2 = 0;

    AddNode(&start, &data); AddNode(&start, &data); AddNode(&start, &data);
    ShowFront(&start);
    ShowBack(&start);

    InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1);
    ShowFront(&start);

    DeleteNode(&start, &pos1); DeleteNode(&start, &pos1);
    ShowFront(&start);

    SwapNode(&start, &pos1, &pos2); ShowFront(&start);
    return 0;
}

void AddNode(N **Walk, int *Data) {
    N *temp = NULL ;    
    while( *Walk != NULL ) {    //ถ้า ไม่เท่ากับ NULL ให้เดินหน้าเรื่อยๆ
        temp = *Walk ;  //ให้ค่า tmp = walk
        Walk = &(*Walk)->Next ; //ให้ walk เดินหน้า 1 ครั้ง
    }
    *Walk = new N ; //สร้างตัวตนให้ 
    printf("Add (data) : ");
    scanf( "%d", Data ) ;   //รับ data เพราะใน main ไม่ได้ส่งมา
    (*Walk)->Data = *Data ; //ให้เก็บค่า data ไว้ใน สตัคของ walk
    (*Walk)->Next = NULL ;  
    (*Walk)->Back = temp ;  //ให้ walk back = ค่า temp ซึ่งก่อน walk จะเดิน จากบรรทัด 37
}

void ShowFront(N **Walk) {
    printf( "Show Front : ");   //ประกาศให้ปริ้นคำนี้ก่อนเพราะใน output มันมี
    while( *Walk != NULL ) {
        printf( "%d ",(*Walk)->Data ) ; //ให้แสดงค่า walk ปัจจุบัน 
        Walk = &(*Walk)->Next ;     //ให้ walk เดินหน้า 1 ครั้ง
    }//end while
    printf( "\n" ) ;    //เมื่อมันทำงานครบแล้วให้เว้นบรรทัดเพื่อจะไม่สับสน และตรงตาม output
}

void ShowBack(N **Walk) {
    printf( "Show Back : " ) ;
    while( (*Walk)->Next != NULL ) {    //ให้มันเดินไปหน้าเรื่อยๆจนสุด
        Walk = &(*Walk)->Next ;
    }
    while( (*Walk) != NULL ) {
        printf( "%d ", (*Walk)->Data ) ;    //ตอนนี้มันอยู่โหนดท้ายแล้ว เลยให้ปริ้นโหนดปัจจุบันก่อนซึ่งคือโหนดท้าย
        Walk = &(*Walk)->Back ; //ให้มันเดินถอยหลัง 1 ครั้ง
    }
    printf("\n");
}

void InsertNode(N **Walk, int *Data, int *position) {   
    int i = 1 ; //กำหนด i เพื่อมานับซึ่งโหนดที่ 1 คือ walk ปัจจุบัน ให้กูอธิบายถ้าคนไม่เข้าใจ
    printf("Insert (data pos) : ");
    scanf( "%d %d", Data, position ) ;  //ให้รับค่า data กับตำแหน่งที่จะแทรก
    while( *Walk != NULL ) {
        if( i == *position ) {  //ถ้า มันเท่ากับตำแหน่ง
            N *Newnode = new N ;    //ให้สร้างสตัคมาเก็บข้อมูลใหม่ไว้ก่อน ไม่งั้นมันจะแทนค่าใน walk เลย
            Newnode->Data = *Data ;
            Newnode->Next = *Walk ;
            Newnode->Back = (*Walk)->Back ;
            *Walk = Newnode ;
        }//end if
        Walk = &(*Walk)->Next ; 
        i++ ;
    }//end while
    if( *position > i && *Walk == NULL ) {  //ถ้ามันมากกว่า i และ มัน = NULL แล้ว ให้ถือว่ามันต้อสร้างโหนดใหม่ต่อท้าย เช่น มีแค่ 4 โหนด แต่ กรอกตำแหน่งที่ 9 
        N *overnode = new N ;
        overnode->Data = *Data ;
        overnode->Back = *Walk ;
        overnode->Next = NULL ;
        *Walk = overnode ; 
    }
}

void DeleteNode(N **Walk, int *position) {
    int i = 1 ;
    printf("Delete (pos) : ");
    scanf( "%d", position ) ;
    while( *Walk != NULL ) {
        if( i == *position ){
            N *temp = new N ;   //สร้างมาเก็บข้อมูลปัจจุบัน ก่อนหน้า และถัดไป เหมือนสร้างมาใหม่แต่ยังไม่ได้เชื่อมต่อ
            temp = *Walk ;  //ให้มันเท่ากับโหนดปัจจุบัน
            temp->Next = (*Walk)->Next ;    //ให้โหนดถัดไปของ temp = ค่าถัดไปของตำปหน่งปัจจุบัน
            temp->Next->Back = (*Walk)->Back ;  //ให้ back ของ tmp.next = ค่า ก่อนหน้าของ walk ปัจจุบัน
            (*Walk) = temp->Next ;  //ให้ค่าของ walk ตำแหน่งปัจุบน = ค่าถัดไปของตำแหน่งปัจจุบัน 
            delete temp ;   //ลบค่า temp 
        }
        Walk = &(*Walk)->Next ;
        i++ ;
    }
}

void SwapNode(N **Walk, int *position1, int *position2) {
    printf("Swap (pos1 pos2) : ");
    scanf( "%d %d", position1, position2 ) ;
    N *newnode = NULL;  //สร้างตมาเก็บค่าของตำแหน่ง
    N *secnode = NULL ;
    int i = 1 ;
    while( *Walk != NULL ) {
        if( i == *position1 ) {
            newnode = *Walk ;   //
        }
        if( i == *position2 ) {
            secnode = *Walk ;        
        }
        Walk = &(*Walk)->Next ;
        i++ ;
    }
    int datatemp = newnode->Data ;
    newnode->Data = secnode->Data ;
    secnode->Data = datatemp ;
}
#include <stdio.h>

void SetArray( int **, int *n ) ;
void PrintArray( int [], int n, char comment[ 20 ] ) ;
int BinarySearch( int [], int n, int find ) ;
void MergeSort( int t[], int k ) ;
void Merge( int *u, int m, int *v, int n, int *t ) ;

int main() {
    int n = 0, pos = -1, find = -1, *data ;
    SetArray( &data, &n ) ;     PrintArray( data, n, "Origin" ) ;
    MergeSort( data, n ) ;      PrintArray( data, n, "Sort" ) ;
    printf( "Search (value) : " ) ;
    scanf( "%d", &find ) ;
    pos = BinarySearch( data, n, find ) ;
    printf( "FOUND %d in POSITION = Arr[%d]\n", data[pos], pos ) ;
    return 0 ;
}

void PrintArray( int *Arr, int n, char comment[ 20 ] ) { //TODO: comment คือข้อความที่อยากแสดงตรงส่วนหัวของชุดข้อความ
    printf("%s : ", comment);
    for (int i = 0; i < n; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

void SetArray( int **Arr, int *n ) {
    printf("Enter Arr size : ");
    scanf("%d", n);

    *Arr = new int [ *n ] ;
    if (*Arr == NULL) {
        printf("Memory allocation failed!\n");
    }

    for (int i = 0; i < *n; i++) {
        printf("Arr[%d] : ", i);
        scanf("%d", &(*Arr)[i]);
    }
}

int BinarySearch( int arr[], int n, int find ) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == find) return mid; // เจอค่าที่ต้องการ
        else if (arr[mid] < find) left = mid + 1; // ไปทางขวา
        else right = mid - 1; // ไปทางซ้าย
    }
    
    return -1; // ไม่พบค่า
}

void MergeSort( int t[], int k ) {
    if (k < 2) return; // ถ้ามี 1 ตัวไม่ต้องจัดเรียง
    
    int mid = k / 2;
    
    int *left = new int [mid];
    int *right = new int [k - mid];
    
    for (int i = 0; i < mid; i++) left[i] = t[i]; // คัดลอกปีกซ้าย
    for (int i = mid; i < k; i++) right[i - mid] = t[i]; // คัดลอกปีกขวา
    
    MergeSort(left, mid);      // จัดเรียงปีกซ้าย
    MergeSort(right, k - mid); // จัดเรียงปีกขวา
    Merge(left, mid, right, k - mid, t); // รวม
    
}

void Merge( int *u, int m, int *v, int n, int *t ) {
    int i = 0, j = 0, k = 0;
    
    while (i < m && j < n) { // รวม 2 อาเรย์ที่เรียงแล้ว
        if (u[i] < v[j]) t[k++] = u[i++];
        else t[k++] = v[j++];
    }
    
    while (i < m) t[k++] = u[i++]; // กรณีเหลือจากปีกซ้าย
    while (j < n) t[k++] = v[j++]; // กรณีเหลือจากปีกขวา
}
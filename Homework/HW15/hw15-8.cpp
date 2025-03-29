#include <stdio.h>
#include <string.h>

void Ascending(char* arr[], int size) ;
void Descending(char* arr[], int size) ;

int main() {
    FILE *fp;
    char* items[100];
    char buffer[100];
    int count = 0;

    // เปิดไฟล์นี้ ในโหมด r (read = อ่าน)
    fp = fopen("a15-8.txt", "r");

    // ถ้าเป็น NULL แปลว่า ไม่มีสิทธิ์อ่านไฟล์ 
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // fscanf เหมือน scanf แต่ใช้กับไฟล์
    // อ่านไฟล์จนกว่าจะจบ (EOF = End of File)
    while (fscanf(fp, "%s", buffer) != EOF) {
        items[count] = strdup(buffer); // หั่นคำออกมาใส่ในตัวแปรนี้ (หรือก็คือดึงคำออกมาแล้วเติม null / \0)
        count++; // เพิ่มจำนวนคำที่พบ
    }
    fclose(fp); // จบการอ่านไฟล์

    // แสดงค่าแบบไม่มีการเรียงใด ๆ
    printf("Normal (%d Item): ", count);
    for (int i = 0; i < count; i++) {
        printf("%s", items[i]);
        if (i == count - 1) {
            printf(" .\n");
        } else {
            printf(", ");
        }
    }

    // แสดงค่าเรียงจาก A-Z
    Ascending(items, count); // ดูที่ฟังก์ชั่น Ascending
    printf("Sort (A to Z)  : ");
    for (int i = 0; i < count; i++) {
        printf("%s", items[i]);
        if (i == count - 1) {
            printf(" .\n");
        } else {
            printf(", ");
        }
    }

    // แสดงค่าเรียงจาก Z-A
    Descending(items, count); // ดูที่ฟังก์ชั่น Descending
    printf("Sort (Z to A)  : ");
    for (int i = 0; i < count; i++) {
        printf("%s", items[i]);
        if (i == count - 1) {
            printf(" .\n");
        } else {
            printf(", ");
        }
    }

    return 0;
}//end function

//เรียงจากน้อยไปมาก
void Ascending(char* arr[], int size) {
    // วนซ้ำจำนวน i ครั้ง (เท่ากับ size ของ arr)
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            // ถ้าตัวแรก (j) มีค่า ASCII น้อยกว่าตัวที่สอง (minIndex)
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j;
            }
        }
        // สลับตำแหน่ง นำตัวที่น้อยกว่าขึ้นก่อน
        char* temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}//end function

//เรียงจากมากไปน้อย
void Descending(char* arr[], int size) {
    // วนซ้ำจำนวน i ครั้ง (เท่ากับ size ของ arr)
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            // ถ้าตัวแรก (j) มีค่า ASCII มากกว่าตัวที่สอง (minIndex)
            if (strcmp(arr[j], arr[maxIndex]) > 0) {
                maxIndex = j;
            }
        }
        // สลับตำแหน่ง นำตัวที่มากกว่าขึ้นก่อน
        char* temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}//end function
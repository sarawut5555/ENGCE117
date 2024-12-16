#include <stdio.h>
#include <string.h>


void encrypt(char *str, int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // เลื่อนตัวอักษรพิมพ์ใหญ่ไปขวา 6 ตัว
            str[i] = ((str[i] - 'A' + shift) % 26) + 'A';
        }
        // ตัวอักษรพิมพ์เล็กจะไม่ถูกปรับ
    }
}

int main() {
    FILE *fp;
    char txt[100];

    fp = fopen("a15-9.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }


    while (fscanf(fp, "%s", txt) != EOF) {
        encrypt(txt, 6);

        printf("%s ", txt);
    }

    fclose(fp);

    return 0;
}

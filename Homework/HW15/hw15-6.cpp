#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    int salary;
    char job[50];
};

// ฟังก์ชันหาเงินเดือนสูงสุดในแต่ละตำแหน่งงาน
void findHighestSalaryInJob(struct Employee employees[], int count, char job[], int* highestSalaryIndex) {
    *highestSalaryIndex = -1;
    int highestSalary = -1;
    for (int i = 0; i < count; i++) {
        if (strcmp(employees[i].job, job) == 0) {
            if (employees[i].salary > highestSalary) {
                highestSalary = employees[i].salary;
                *highestSalaryIndex = i;
            }
        }
    }
}

// ฟังก์ชันสำหรับแสดงผลเงินเดือนที่มีการคอมมาและทศนิยม
void printSalaryWithComma(float salary) {
    char result_str[50];
    sprintf(result_str, "%.2f", salary);  // จัดรูปแบบเป็นทศนิยม 2 ตำแหน่ง
    int len = strlen(result_str);
    
    for( int i = 0 ; i < len - 3 ; i++ ) {  
        if( i != 0 && ( len - i ) % 3 == 0 ) {
            printf( "," ) ;  
        }
        printf( "%c", result_str[ i ] ) ;
    }
    printf( "%s Bath", strchr( result_str, '.' ) ) ;  
}

int main() {
    FILE *fp;
    struct Employee employees[100];
    int count = 0;
    float totalSalary = 0.0;
    char line[200];
    char job[50];

    fp = fopen("a15-6.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // ข้ามบรรทัดแรก (Header)
    fgets(line, sizeof(line), fp);

    // อ่านข้อมูลพนักงานจากไฟล์
    while (fscanf(fp, "%s %d %d %s", employees[count].name, &employees[count].age, &employees[count].salary, employees[count].job) == 4) {
        totalSalary += employees[count].salary;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No valid data found in the file.\n");
        return 1;
    }

    float averageSalary = totalSalary / count;

    // ใช้ตัวแปร checkedJobs[] เพื่อระบุว่าได้ตรวจสอบสายอาชีพไหนแล้ว
    int checkedJobs[100] = {0};  // array to track which job has been processed

    // แสดงผลข้อมูลสายอาชีพที่มีเงินเดือนสูงสุด
    for (int i = 0; i < count; i++) {
        if (checkedJobs[i]) continue;  // ถ้าเคยตรวจสอบแล้วข้ามไป

        // หาตำแหน่งงานที่มีข้อมูลหลายคนแล้วหาคนที่มีเงินเดือนเยอะที่สุดในแต่ละสายอาชีพ
        strcpy(job, employees[i].job);
        int highestSalaryIndex;
        findHighestSalaryInJob(employees, count, job, &highestSalaryIndex);

        // เช็คว่าไม่ใช่ตำแหน่งงานที่เราต้องการ (HR, Founder)
        if (strcmp(employees[highestSalaryIndex].job, "HR") != 0 && strcmp(employees[highestSalaryIndex].job, "Founder") != 0) {
            printf("%s: %s(%d yrs) ", job, employees[highestSalaryIndex].name, employees[highestSalaryIndex].age);
            printSalaryWithComma(employees[highestSalaryIndex].salary);  // แสดงผลเป็นทศนิยมพร้อมคอมมา
            printf("\n");

            // ทำการอัพเดท checkedJobs[] ว่าตำแหน่งงานนี้ได้รับการตรวจสอบแล้ว
            for (int j = 0; j < count; j++) {
                if (strcmp(employees[j].job, job) == 0) {
                    checkedJobs[j] = 1;
                }
            }
        }
    }

    // แสดงค่าเฉลี่ยเงินเดือนในบรรทัดสุดท้าย
    printf("Average Salary: ");
    printSalaryWithComma(averageSalary);  // แสดงผลค่าเฉลี่ยเป็นทศนิยมพร้อมคอมมา
    printf("\n");

    return 0;
}

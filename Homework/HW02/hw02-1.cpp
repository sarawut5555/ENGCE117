#include <stdio.h>

int main() {
    char noodle ;

    printf( "Your have noodle? ( y/n ) : " ) ; //มีบะหมี่มั้ย?
    scanf( " %c" , &noodle ) ;

    if( noodle == 'y' ) { //ตรวจสอบว่ามีบะหมี่มั้ย?
        printf( "Add water \n" ) ; //เติมน้ำ
        printf( "Boil water \n" ) ; //ต้มน้ำ
        printf( "Turn on the gas \n" ) ; //เปิดแก๊ส
        printf( "Wait for the water to boil \n" ) ; //รอน้ำเดือด
        printf( "Out of gas? ( y/n ) : " ) ; //แก๊สหมดมั้ย?
        scanf( " %c", &noodle ) ;

        if( noodle == 'y' ) { //ตรวจสอบว่าแก๊สหมดมั้ย?
            printf( "Ask for help from adults" ) ; //ขอความช่วยเหลือจากผู้ใหญ่
        }
        else {
            while( noodle != 'y' ) { //ตรวจสอบว่าน้ำยังไม่เดือด
                printf( "Wait for the water to boil \n" ) ; //รอน้ำเดือด
                printf( "Boiling water? ( y/n ) : " ) ; //น้ำเดือดหรือยัง?
                scanf( " %c", &noodle ) ;
            }//end while
            printf( "Scoop the noodles out of the pot. \n" ) ; //ตักเส้นออกจากหม้อ
            printf( "Put the noodles in the bowl \n" ) ; //ใส่บะหมี่ลงในชาม
            printf( "Put the seasonings in a bowl \n" ) ; //ใส่เครื่องปรุงลงในชาม
            printf( "Turn off the gas \n" ) ; //ปิดแก๊ส
            printf( "Scoop the noodles into a bowl \n" ) ; //ตักบะหมี่ใส่ชาม
        }//end if
    }
    else {
        printf( "Ask for money from adults \n" ) ; //ขอเงินจากผู้ใหญ่
        printf( "Go shopping at the market \n" ) ; //ไปซื้อของที่ตลาด
        printf( "Out of stock? ( y/n ) : " ) ; //ของหมดมั้ย?
        scanf( " %c", &noodle ) ;

        if( noodle == 'y' ) {
            printf( "Find other products" ) ; //หาสินค้าอย่างอื่น
        }
        else {
            printf( "Do you have enough money?? ( y/n ) : " ) ; //เงินพอมั้ย?
            scanf( " %c", &noodle ) ;
            if( noodle == 'y' ) {
                printf( "Buy noodles" ) ;
            }
            else {
                printf( "Ask for more money" ) ;
            }//end if
        }//end if
    }//end if
    return 0 ;
}//end function
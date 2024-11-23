#include <stdio.h>

int main() {
    char freelance ;

    printf( "Post a job \n" ) ; //โพสต์หางาน
    printf( "There are interested customers? ( y/n ) : " ) ; //มีลูกค้าสนใจมั้ย?
    scanf( " %c", &freelance ) ;

    while( freelance != 'y' ) { //ถ้าลูกค้าไม่สนใจ
        printf( "Post a job \n" ) ; //โพสต์หางาน
        printf( "There are interested customers? ( y/n ) : " ) ; //มีลูกค้าสนใจมั้ย?
        scanf( " %c", &freelance ) ;
    }//end while
    printf( "Talk about work \n" ) ; //คุยงาน
    printf( "Customers are interested in hiring? ( y/n ) : " ) ; //ลูกค้าสนใจจ้างงานมั้ย?
    scanf( " %c", &freelance ) ;

    while( freelance != 'y' ) { //ถ้าลูกค้าไม่สนใจจ้างงาน
        printf( "Post a job \n" ) ; //โพสต์หางาน
        printf( "There are interested customers? ( y/n ) : " ) ; //มีลูกค้าสนใจมั้ย?
        scanf( " %c", &freelance ) ;
    }//end while
    printf( "Employment contract \n" ) ; //ทำสัญญาจ้างาน
    printf( "Pay a deposit \n" ) ; //จ่ายเงินมัดจำ
    printf( "Work and report progress \n" ) ; //ทำงานและรายงานความคืบหน้า
    printf( "Finished work? ( y/n ) : " ) ; //ทำงานเสร็จยัง?
    scanf( " %c", &freelance ) ;

    if( freelance == 'y' ) {
        printf( "Pay the remaining amount \n" ) ; //จ่ายเงินส่วนที่เหลือ
        printf( "receive money \n" ) ; //รับเงิน
    }
    else {
        printf( "Refund of deposit \n" ) ; //คืนเงินมัดจำ
    }//end if
    return 0 ;
}//end function
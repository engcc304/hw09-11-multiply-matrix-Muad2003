/*
    รับค่า Array จากผู้ใช้มา 2 ค่า และเติมค่าในอาเรย์ให้เต็มทั้ง 2 ค่า นั้นนั้นทำ Array1 มาคูณกับ Array2 แบบ Matrix (คุณสามารถหาข้อมูลการคูณ Matrix เพิ่มเติมได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=Gocc4CriZdA)
    
    Test case:
        Array1 Value : 
            2 5
        Array1 element :
            2 5 3 8 3
            2 5 3 1 1
        Array2 Value : 
            5 2
        Array2 element :
            2 3
            4 4
            1 2
            1 1
            2 3
    Output:
        Array1
            2 5 3 8 3
            2 5 3 1 1
        Array2
            2 3
            4 4
            1 2
            1 1
            2 3
        Array1 x Array2
            41 49
            30 36

*/

#include <stdio.h>

int main () {
    
    int column1 , row1 ;
    int column2 , row2 ;
    // สร้างตัวแปร array1
    printf ( "Array1 Value :\n" ) ;
    scanf ( "%d %d", &row1 , &column1 ) ;
    int array1[ row1 ] [ column1 ] ;
    for ( int i = 0 ; i < row1 ; i++ ) {
        for ( int k = 0 ; k < column1 ; k++ ) {
            scanf ( "%d", &array1[ i ] [ k ] ) ;
        } // end for
    } // end for
    
    // สร้างตัวแปร array2
    printf ( "Array2 Value :\n" ) ;
    scanf ( "%d %d", &row2 , &column2  ) ;
    int array2[ row2 ] [ column2 ] ;
    for ( int i = 0 ; i < row2 ; i++ ) {
        for ( int k = 0 ; k < column2 ; k++ ) {
            scanf ( "%d", &array2[ i ] [ k ] ) ;
        } // end for
    } // end for
    
    // แสดง array1
    printf ( "Array1\n" ) ;
    for ( int i = 0 ; i < row1 ; i++ ) {
        for ( int k = 0 ; k < column1 ; k++ ) {
            printf ( "%d", array1[ i ] [ k ] ) ;
            if ( column1 > k + 1 ) {
                printf ( " " ) ;
            } // end if
        } // end for
        printf ( "\n" ) ;
    } // end for

    // แสดง array2
    printf ( "Array2\n" ) ;
    for ( int i = 0 ; i < row2 ; i++ ) {
        for ( int k = 0 ; k < column2 ; k++ ) {
            printf ( "%d", array2[ i ] [ k ] ) ;
            if ( column2 > k + 1 ) {
                printf ( " " ) ;
            } // end if
        } // end for
        printf ( "\n" ) ;
    } // end for
    
    // บวกเมทริ
    int matrix[ row1 ] [ column2 ] = { } ;
    if ( column1 == row2 ) {
        
        for ( int i = 0 ; i < row1 ; i++ ) {
            for ( int k = 0 ; k < column2 ; k++ ) {
                for ( int j = 0 ; j < column1 ; j++ ) {
                    matrix[ i ] [ k ] += array1[ i ] [ j ] * array2[ j ] [ k ] ;
                } // end for
            } // end for
        } // end for
    } // end if
    
    // แสดงค่า
    printf ( "Array1 x Array2\n" ) ;
    for ( int i = 0 ; i < row1 ; i++ ) {
        for ( int k = 0 ; k < column2 ; k++ ) {
            printf ( "%d", matrix[ i ] [ k ]  ) ;
            if ( k + 1 < column2 ) {
                printf ( " " ) ;
            } // end if
        } // end for
        printf ( "\n" ) ;
    } // end for

    return 0 ;
} // end for
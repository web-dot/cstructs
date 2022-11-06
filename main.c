#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*book information in array. This approach is not correct for dealing with information ralated to an entity*/
    /*
    char name[3] ;
    float price[3] ;
    int pages[3], i ;

    printf ( "\nEnter names, prices and no. of pages of 3 books\n" ) ;
    for ( i = 0 ; i <= 2 ; i++ )
        scanf ( "%c %f %d", &name[i], &price[i], &pages[i] );

    printf ( "\nAnd this is what you entered\n" ) ;
    for ( i = 0 ; i <= 2 ; i++ )
        printf ( "%c %f %d\n", name[i], price[i], pages[i] );

        */

    /*To solve this problem C provides a special data type - the structure*/
    /*A structure contains a number of data types grouped together*/
    /*These data types may or may not be of the same type*/


    struct book
    {
        char name;
        float price;
        int pages;
    };

    struct book b1 = {"Basic", 130.00, 550};
    struct book b2 = {"Physics", 150.80, 800};


    /*The elements of a structure are stored in contiguous memory locations*/
    printf("\nAddress of name = %u", &b1.name);     //6422036
    printf("\nAddress of price = %u", &b1.price);   //6422040
    printf("\nAddress of pages = %u", &b1.pages);   //6422044

}

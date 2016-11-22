#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{

    #if 1
    int *a  = 0;
    int c = 906542;  // 906542 = 46*1+213*256+13*65536
    unsigned char *b ;
    a = &c;
    cout << "*a = " << *a << endl;
    cout << "&a = " << &a << endl;
    cout << "a = " << a << endl;
    cout << "&b = " << &b << endl;
    cout << "b = " << b << endl;
    b = (unsigned char*) a ;
    cout << "after b = (unsigned char*) a " << endl <<endl;
    cout << "*a = " << *a << endl;
    cout << "&a = " << &a << endl;
    cout << "a = " << a << endl;
    cout << "&b = " << &b << endl;
    printf("b = %d\n",b);   // b store a value
    printf("*b = %d\n\n",*b);
    //printf("++*b = %d\n",++*b);

    *b++;
    cout << "after *b++" << endl ;

    cout << "&b = " << &b << endl;
    printf("b = %d\n",b);
    printf("*b = %d\n",*b);

    *b++;
    cout <<endl<< "after *b++" << endl ;
    cout << "&b = " << &b << endl;
    printf("b = %d\n",b);
    printf("*b = %d\n",*b);


    /*b++;
    cout << "after b++" << endl << endl;
    printf("b = %d\n",b);
    printf("*b = %d\n",*b);
    */
    #endif

    #if 0
    int *a;
    int b;
    char c;
    b = 12;
    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "&a = " << &a << endl;
    a = (int*)b;
    cout << "after a = (int*)b; " << endl <<endl;

    cout << "b = " << b << endl;
    cout << "&b = " << &b << endl;
    cout << "a = " << a << endl;
    //cout << "*a = " << *a << endl; <- because can't read 0xc this place value
    cout << "&a = " << &a << endl;

    #endif
}

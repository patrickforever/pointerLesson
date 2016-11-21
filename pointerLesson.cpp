#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main ()
{


    int *p ;
    int a = 10;
    int **q ;
    cout << "before" << endl;
    cout << "int a = 10"<< endl ;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "*p = " << *p << endl;
    cout << "&a = " << &a <<endl;
    cout << "q = " << q  << endl;
    cout << "*q = " << *q  << endl;
    cout << "&q = " << &q  << endl;
    cout << "*&q = " << *&q  << endl;
    //cout << "**q = " << **q  << endl;
    p = &a ;
    q = &p;
    //q = &a;
    cout << endl ;
    cout << "p = &a;" << endl;
    cout << "q = &p;" << endl;
    cout << "after" << endl;
    cout << "a =" << a << endl;
    cout << "&a =" << &a << endl;
    cout << "p = " << p << endl;
    cout << "&p = " << &p << endl;
    cout << "*p = " << *p << endl;
    cout << "*&p = " << *&p << endl;
    cout << "q = " << q << endl;
    cout << "*q = " << *q << endl;
    cout << "**q = " << **q << endl;
    cout << "*&q = " << *&q << endl;
    cout << "&q = " << &q << endl;

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
void callByValue(int a , int b)
{
    int temp;
    temp = a ;
    a = b ;
    b = temp;
}
void CallByPointer(int *a , int *b)
{
    cout << "inCallByPointer" << endl;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    int temp;
    temp = *a ;
    *a = *b;
    *b = temp;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    cout << "inCallByPointer" << endl;
}
void CallByReference(int &a , int &b)
{
    int temp;
    cout << "inCallByReference" << endl;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    temp = a ;
    a = b;
    b = temp;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    cout << "inCallByReference" << endl;
}
int main(int argc, char* argv[])
{
    int a , b ;
    a = 1 ;
    b = 2;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    callByValue(a , b);
    cout << endl << "after callByValue" << endl;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    CallByPointer(&a , &b);
    cout << endl << "after callByPointer" << endl;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    CallByReference(a , b);
    cout << endl << "after callByReference" << endl;
    cout << "a address = " << &a << endl;
    cout << "b address = " << &b << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

}

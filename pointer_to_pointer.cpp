#include<iostream>
using namespace std;

int main()
{
    int a = 111;
    cout << a <<endl;
    cout << endl;

    int* p = &a;
    cout << p <<endl;
    cout <<*p <<endl;
    cout << endl;

    int** q = &p;
    cout << q << endl;
    cout << *q <<endl;
    cout << **q <<endl;

    return 0;
}
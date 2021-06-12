#include<iostream> 
using namespace std;

void increment(int* a)
{
    *a += 1;
}

int main()
{
    int a = 10;
    int* aptr = &a;
    increment(aptr);
    cout << a <<endl;
    return 0;
}
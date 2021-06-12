#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* aptr = &a;

    // cout << a <<endl;
    // cout << &a << endl;
    // cout << aptr << endl;
    // cout << *aptr << endl;
    // cout << a+1 << endl;
    // cout << aptr+1 << endl;

    // *aptr = 20;
    // cout << endl;
    // cout << a <<endl;
    // cout << *aptr << endl;

    int arr[] = {10,20,30};
    cout << arr <<endl;
    cout << endl;

    cout << *arr <<endl;
    cout << endl;

    int *ptr = arr;
    for (int i =0 ; i < 3; i++)
    {
        cout << *ptr <<endl;
        ptr++;
    }
    cout <<endl;

    for(int i =0; i < 3; i++)
    {
        cout << *(arr+i) <<endl;
    }
    return 0;

}
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string n = "234567898765";

    sort(n.begin(), n.end(), greater<int>());

    cout << n <<endl;
}
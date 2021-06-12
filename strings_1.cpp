#include<iostream>
#include<string>

using namespace std;

int main()
{
    // string str;
    // cin >> str;
    // cout << str <<endl;

    // string str;
    // getline(cin, str);

    // cout << str <<endl;

    string s1 = "fam";
    string s2 = "ily";

    cout << s1 + s2 <<endl;
    s1.append(s2);
    cout << s1 <<endl;
    return 0;
}
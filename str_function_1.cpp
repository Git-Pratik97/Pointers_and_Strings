#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s1 = "abc";
    string s2 = "xyz";

    // cout << s2.compare(s1) <<endl;
    s2.clear();
    cout << s1 + s2 <<endl;
    cout << endl;
    if (!s1.compare(s2))
    { 
        cout << "Strings are not equal."<<endl;
    }

    if (s2.empty())
    {
        cout << "String is Empty." <<endl;
    }

    string s3 = "nincompoop";

    // s3.erase(3, 2);
    // cout << s3 <<endl;

    // cout << s3.find("poo") <<endl; 

    // s3.insert(3, "lol");
    // cout << s3 << endl;

    // cout << s3.size() <<endl;
    // cout << s3.length() <<endl;

    // for(int i = 0; i < s3.length(); i++)
    // {
    //     cout << s3[i] <<endl;
    // }

    // cout << s3.substr(6,4) <<endl;

    // string s4 = "786";

    // int x = stoi(s4);
    // cout << x + 2 <<endl;

    // int y = 4500;
    // string s5 = to_string(y);

    // cout << s5 + "2" << endl;

    string s6 = "adsaghsfgnmafsvmsfjsadsfasdfjhsfiuvcixvirjksdv";

    sort(s6.begin(), s6.end());

    cout << s6 << endl;


    return 0;
}
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s = "adakjrwiokjnmxvihrksdjfAKDLJAKQELDMFSFJ";

    for (int i =0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        
    }
    cout << s <<endl;

    for (int i =0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }  
    }
    cout << s <<endl;
    return 0;

}
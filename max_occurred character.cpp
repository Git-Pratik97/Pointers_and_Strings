#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s = "qertoplkjhgfdsergehrwuryhfjsdnfnsdhuerhfndsfnjrfuerfbsdfluiherhfsdkf";

    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    int max_f = 0;
    char ans = 'a';

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] >= max_f)
        {
            max_f = freq[i];
            ans = 'a' + i;
        }
    }

    cout << max_f <<endl;
    cout << ans <<endl;

    return 0;
}
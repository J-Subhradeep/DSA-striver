#include <bits/stdc++.h>
using namespace std;
int isPalindrom(string &s, int i, int j)
{
    if (i >= j)
        return 1;
    else if (s[i] != s[j])
        return 0;
    if (!isPalindrom(s, ++i, --j))
        return 0;
    else
        return 1;
}
int main()
{
    string s = "subhradeep";
    string s2 = "abcdcba";
    cout << isPalindrom(s, 0, s.size()-1);
    
    return 0;
}
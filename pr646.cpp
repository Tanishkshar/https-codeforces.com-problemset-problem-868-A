// As technologies develop, manufacturers are making the process of unlocking a phone as user-friendly as possible. To unlock its new phone,
// Arkady's pet dog Mu-mu has to bark the password once. The phone represents a password as a string of two lowercase English letters.

// Mu-mu's enemy Kashtanka wants to unlock Mu-mu's phone to steal some sensible information, but it can only bark n distinct words, each of
// which can be represented as a string of two lowercase English letters. Kashtanka wants to bark several words (not necessarily distinct) one
// after another to pronounce a string containing the password as a substring. Tell if it's possible to unlock the phone in this way, or not.

// Input
// The first line contains two lowercase English letters — the password on the phone.

// The second line contains single integer n (1 ≤ n ≤ 100) — the number of words Kashtanka knows.

// The next n lines contain two lowercase English letters each, representing the words Kashtanka knows. The words are guaranteed to be distinct.

// Output
// Print "YES" if Kashtanka can bark several words in a line forming a string containing the password, and "NO" otherwise.

// You can print each letter in arbitrary case (upper or lower).

// Examples
// inputCopy
// ya
// 4
// ah
// oy
// to
// ha
// outputCopy
// YES
// inputCopy
// hp
// 2
// ht
// tp
// outputCopy
// NO
// inputCopy
// ah
// 1
// ha
// outputCopy
// YES

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if (s == v[i])
        {
            check = true;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i][1] == s[0])
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j][0] == s[1])
                {
                    check = true;
                    break;
                }
            }
        }
    }

    if (check)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
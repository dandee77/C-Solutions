/*
2. Longest Substring Without Repeating Characters

Problem: Given a string s, find the length of the longest substring without repeating characters.
Example: 
    Input: s = "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.
*/

#include <iostream>

using namespace std;

int main()
{
    string s = "";
    cin >> s;

    int longest = 0;
    for (int i = 0; i < s.size(); i++){
        int count = 0;
        for (int j = i + 1; j < s.size(); j++){
            if (s.substr(i, j - i).find(s[j]) != string::npos) break;
            else count++;
        }

        if (count > longest) longest = count;
    }

    cout << ++longest << endl;

    return 0;
}
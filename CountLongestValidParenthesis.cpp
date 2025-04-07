/*
3. Count Longest Valid Parentheses
Problem: Given a string s containing just the characters '(' and ')', return the length of the longest valid parentheses substring.
Example:
    Input: s = "(()))())("
    Output: 4
    Explanation: The longest valid parentheses substring is "()()".
*/

// ! Input: ()(()(() = 2 Does not work :(

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count = 0;
    int longest = 0;
    string input = "";
    cin >> input;
    vector<char> arr;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == '(') 
        {
            arr.push_back(input[i]);
            count++;
        }
        else 
        {
            if (arr.empty()) count = 0;
            else if (arr.back() == '(')
            {
                arr.pop_back();
                count++;
            }
            else
            {
                if (count > longest) longest = count;
                count = 0;
                arr.clear();
            }
        }

        if (count > longest) longest = count;
    }

    while (arr.back() == '(')
    {
        arr.pop_back();
        longest--;
    }

    cout << longest << endl;
    
    for (auto& n : arr){
        cout << n << endl;
    }

    return 0;
}
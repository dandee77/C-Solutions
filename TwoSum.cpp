/*  
1. Two Sum 

Problem: Given an array of integers, return indices of the two numbers such that they add up to a specific target.
Example: 
    Input: nums = [2, 7, 11, 15], target = 9
    Output: [0, 1]
    Explanation: nums[0] + nums[1] = 2 + 7 = 9
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n = 0;
    cin >> n;
    vector<int> nums(n);
    int target;
    
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cin >> target;
    vector<int> result;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (nums[i] + nums[j] == target){
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
    }

    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}
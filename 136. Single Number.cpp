#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// solution1
// class Solution
// {
// public:
//     int single;
    
//     int singleNumber(vector<int> &nums)
//     {
//         for (int i=0; i<sizeof(nums)/sizeof(nums[0]); i++)
//         {
//             int counter = std::count(nums.begin(), nums.end(), i);
//                 if (counter==1)
//                 {
//                     single= i;
//                 }
                
                
//         };
//         return single;
//     };
       
// };    

// solution2
// Bitwise XOR operator => 0^0=0; 0^0=0; 0^1=1; 1^0=1
// Let take 4 as example - 0100
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int it : nums)
        {
            result ^= it; //0000^0100=0100(XOR)
        }
        return result;
    }
};



int main()
{

    return 0;
}
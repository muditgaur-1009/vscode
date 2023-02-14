#include <iostream>
using namespace std;

// class Solution
// {
// public:
//     int sum = 0, sum1 = 0;
//     bool isAnagram(string s, string t)
//     {
//         for (int i = 0; s[i] != '\0'; i++)
//         {
//             sum = sum + s[i];
            
//         }
//         for (int i = 0; t[i] != '\0'; i++)
//         {
//             sum1 = sum1 + t[i];
            
//         }

//         if (sum==sum1)
//         {
//             if ()
//             {
//                 /* code */
//             }
            
//         }
//         else{
//             return false;
//         }
        
//     }
// };



class Solution {
public:
    bool isAnagram(string a, string b) {
         
        int arr[26] {0};
        for(int i=0; i<a.length(); i++)
            arr[a[i]-97] += 1;

        for(int i=0; i<b.length(); i++)
            arr[b[i]-97] -= 1;
            
        for(int i=0; i<26; i++)
            if(arr[i] != 0)
                return false;
        return true;
        
    
    }
};

int main()
{

    return 0;
}
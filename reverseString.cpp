#include<iostream>
using namespace std;


class Solution {
public:
    string reverseString(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i++], s[j--]); 
        }
        
        cout<<s;
        return s;
    }
};

int main() {
            Solution s1;
            s1.reverseString("hello ")  ;
    return 0;
}


//-------------------------------------------------------------------------------
// 2nd code
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int i = 0, j = s.size() - 1;
//         while(i < j){
//             swap(s[i], s[j]); 
//             i++;
//             j--;
//         }
//     }
// };
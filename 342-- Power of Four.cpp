#include<iostream>
using namespace std;


class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return false;
        return ((n==1) || (n%4==0 && isPowerOfFour(n/4)));
    }
};

int main() {
    Solution s1;
    int g;
    cout<<"enter the number"<<endl;
    cin>>g;
    s1.isPowerOfFour(44);
    
    return 0;
}
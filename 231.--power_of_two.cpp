#include<iostream>
using namespace std;
class Solution {
public:
       bool isPowerOfTwo(int n) {
        if(n==0) return false;
        return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
    }
};

int main() {
    int r;
    cout<<"enter the number"<<endl;
    cin>> r;
    Solution s1;
    s1.isPowerOfTwo(r);
    return 0;
}
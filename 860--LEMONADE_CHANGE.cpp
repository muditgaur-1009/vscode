#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f = 0, t = 0;
        for (auto &&m : bills) {
            if (5 == m)
                ++f;
            else if (10 == m) {
                if (0 == f--)
                    return false;
                t++;
            }
            else if (t > 0 && f > 0) {
                f--;
                t--;
            }
            else if (f > 2)
                f -= 3;
            else
                return false;
        }
        
        return true;
    }
};

int main() {
    
    return 0;
}
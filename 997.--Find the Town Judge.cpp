#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        unordered_map<int, int> mp;
        int x=-1;

        // Creating a map
        for(int i=0;i<trust.size();i++) {
            mp[trust[i][0]] = trust[i][1];
        }

        // Finding which element doesn't trust anyone
        for(int i=1;i<=n;i++) {
            if(mp.find(i) == mp.end()) {
                x = i;
                break;
            }
        }

        if(x == -1) {
            return -1;
        }

        int count = 0;

        // If x is the town judge then count will definitely be (n-1).
        for(int i=0;i<trust.size();i++) {
            if(trust[i][1] == x)
                count++;
        }

        if(count == n-1) return x;
        else return -1;

    }
};
int main() {
    
    return 0;
}
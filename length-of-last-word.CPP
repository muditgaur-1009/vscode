class Solution {
public:
    int lengthOfLastWord(string s) {
    int ans=0, H=s.size()-1;
        while(H>=0 && s[H]==' '){
            H--;
        }
        while(H>=0 && s[H]!=' '){
            H--; ans++;
        }
        return ans;
    }
};
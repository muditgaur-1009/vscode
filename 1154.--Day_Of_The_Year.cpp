#include<iostream>
#include<vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int dayOfYear(string date) {
        int day,month,year;
        vector<int>m={31,28,31,30,31,30,31,31,30,31,30,31};
        if(date[8]==0){
                day=stoi(date.substr(9,1));
            }
            else{
               day=stoi(date.substr(8,2)); 
            }
        if(date[5]==0){
            month=stoi(date.substr(5,1));
        }
        else{
            month=stoi(date.substr(5,2));
        }
        year=stoi(date.substr(0,4));
        if(year%400==0){
            m[1]++;
        }
        else if(year%100==0){
            m[1]=28;
        }
        else if(year%4==0){
            m[1]++;
        }
        return accumulate(m.begin(),m.begin()+month-1,0)+day;
    }
};


int main() {
    
    return 0;
}
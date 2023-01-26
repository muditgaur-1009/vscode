#include<iostream>
#include<vector>
using namespace std;

int main() {
    cout<<"hello worls!!!1";
    vector<int> v1;
    int x;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the number";
        cin>> x;
        v1.push_back(x);
    }
    
for (auto it = v1.begin();
         it != v1.end(); ++it)
        cout << ' ' << *it;
    return 0;
}
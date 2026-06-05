#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {4,10,15,24,26};
    vector<int> b = {0,9,12,20};
    vector<int> c = {5,18,22,30};
    int l = 0;
    int r = INT_MAX;
    for(int x: a){
        for(int y : b){
            for(int z: c){
                int mn = min(x,min(y,z));
                int mx = max(x,max(y,z));

                if(mx-mn < r-l){
                    l=mn;
                    r=mx;
                }
            }
        }
    }
    cout<<l<<" "<<r;
    return 0;
}
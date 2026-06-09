#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int reverse(int n){
        int rev=0;
        while(n>0){
            rev=rev*10+(n%10);
            n=n/10;
        }
        return rev;
    }

};
int main(){
    Solution sol;
    int n;
    cin>>n;
    cout<<sol.reverse(n);
    return 0;
}
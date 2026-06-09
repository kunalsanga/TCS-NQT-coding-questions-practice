#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int odddig(int n){
            int count=0;
            while(n>0){
                int digit=n%10;
                if(digit%2==1){
                    count++;
                }
                n=n/10;
            }
            return count;
        }
};
int main(){
    Solution sol;
    int n;
    cin>>n;
    cout<<sol.odddig(n);
    return 0;
}
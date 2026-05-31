#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int l;
    cin>>str;
    cin>>l;
    int maxA=0;
    for(int i=0;i<str.length();i+=l){
        int countA=0;
        for(int j=i;j<i+l && j<str.length();j++){
            if(str[j]=='a'){
                countA++;

            }
        }
        if(countA>maxA){
            maxA=countA;
        }
        
    }
    cout<<maxA;
    return 0;
}
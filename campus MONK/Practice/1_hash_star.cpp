#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int stars=0;
    int hashes=0;
    for(char ch : s){
        if(ch=='*'){
            stars++;
            
        }else if(ch=='#'){
            hashes++;
        }
    }
    cout<<stars-hashes<<endl;
    return 0;
}

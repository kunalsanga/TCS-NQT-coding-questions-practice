#include<bits/stdc++.h>
using namespace std;
int main(){
    string start;
    int n;
    cin>>start;
    cin>>n;
    unordered_map<string,int> day={
        {"sun",0},
        {"mon",1},
        {"tue",2},
        {"wed",3},
        {"thur",4},
        {"fri",5},
        {"sat",6}
    };
    int startday = day[start];
    int count=0;
    for(int i=0;i<n;i++){
        int currentday = (startday+i)%7;
        if(currentday==0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
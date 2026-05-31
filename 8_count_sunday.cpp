#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string day;
    int n;
    cin>>day;
    cin>>n;
    unordered_map<string, int> mp={
        {"sun",0},
        {"mon",1},
        {"tue",2},
        {"wed",3},
        {"thur",4},
        {"fri",5},
        {"sat",6}
    };
    int start=mp[day];
    int daystosunday=(7-start)%7;
    if(daystosunday>=n){
        cout<<0;
    }else{
        cout<<1+(n-daystosunday)/7;
    }
    return 0;
}
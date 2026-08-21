#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Sumit Gupta";
    int n = s.size();
    // for(int i=0;i<n;i++){
    //     cout<<s[i];
    // }
    for(char ch : s){
        cout<<ch;
    }
}
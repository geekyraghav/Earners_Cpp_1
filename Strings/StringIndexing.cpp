#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Sumit Gupta";
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;
    cout<<s[1]<<endl;
    s[0] = 'Z';
    cout<<s<<endl;
}
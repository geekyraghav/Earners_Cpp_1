#include<iostream>
#include<string>
using namespace std;
int main(){
    string x = "abcdef";
    string y = "abz";
    if(x==y) cout<<"Same"<<endl;
    else cout<<"Not Same"<<endl;

    if(x > y) cout<<x<<" is greater than "<<y<<endl;
    else cout<<y<<" is greater than "<<x<<endl;
}
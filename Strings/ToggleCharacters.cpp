#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122)
            s[i] -= 32;
        else if(s[i]>=65 && s[i]<=90)
            s[i] += 32;
    }
    cout<<s<<endl;
}
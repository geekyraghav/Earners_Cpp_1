#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "111";
    string s2 = "222";
    string s3 = s1+s2;
    cout<<s3<<endl;

    string s = "abc";
    // string x = s + 4; // error
    string x = s + '4'; 
    string x2 = '4' + s;
    cout<<x2<<endl;

    string s4 = "Raghav";
    s4 += "Garg"; // s4 = "Raghav" + "Garg"
    cout<<s4<<endl;
}
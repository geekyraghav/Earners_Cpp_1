#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "Shubham";
    s.pop_back();
    s.push_back('k');
    cout<<s<<endl;

    sort(s.begin(),s.end());
    // reverse(s.begin()+1,s.end()-1);
    cout<<s<<endl;
}
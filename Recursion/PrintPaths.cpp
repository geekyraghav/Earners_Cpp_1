#include<iostream>
using namespace std;
void paths(int m, int n, string s){
    if(m==1 && n==1){
        cout<<s<<endl; // sahi path
        return;
    }
    if(m==0 || n==0) return;
    paths(m,n-1,s+"R"); // right
    paths(m-1,n,s+"D"); // down
}
int main(){
    int m,n; 
    cout<<"Enter rows & cols: ";
    cin>>m>>n;
    paths(m,n,"");
}
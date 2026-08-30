#include<iostream>
using namespace std;
void print(int x, int n){
    if(x>n) return; // base case
    cout<<x<<" "; // work
    print(x+1,n); // call
}
int main(){
    int n; 
    cin>>n;
    print(1,n);
}
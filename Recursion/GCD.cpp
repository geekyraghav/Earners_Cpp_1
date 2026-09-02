#include<iostream>
using namespace std;
// int hcf(int a, int b){
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i == 0 && b%i == 0) return i;
//     }
//     return 1;
// }
int hcf(int a, int b){
    if(a == 0) return b;
    return hcf(b%a, a);
}
int main(){
    int a,b; 
    cout<<"Enter 2 Numbers: ";
    cin>>a>>b;
    cout<<hcf(a,b);
}
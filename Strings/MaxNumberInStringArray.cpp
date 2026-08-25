#include<iostream>
#include<string>
using namespace std;
string biggerNumber(string s1, string s2){
    int i = 0;
    while(s1[i] == '0') i++;
    int s1_Real_Length = s1.length() - i;
    int j = 0;
    while(s2[j] == '0') j++;
    int s2_Real_Length = s2.length() - j;
    if(s1_Real_Length > s2_Real_Length) return s1;
    if(s2_Real_Length > s1_Real_Length) return s2;
    while(i<s1.length() && s1[i] == s2[j]){
        i++;
        j++;
    }
    if(i==s1.length()) return s1; // s1 and s2 are same numbers
    if(s1[i] > s2[j]) return s1;
    else return s2;
}
int main(){
    vector<string> arr = {"0123","10023","456","001829","940","2901"};
    string max = arr[0];
    int m = arr.size();
    for(int i=1;i<m;i++){
        max = biggerNumber(arr[i],max);
        // if(stoll(arr[i]) > stoll(max))
        //     max = arr[i];
    }
    cout<<max<<endl;
}
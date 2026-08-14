#include<iostream>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    // Insertion Sort
    for(int i=1;i<=n-1;i++){
        int j = i;
        while(j>=1 && arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--; 
        }
    }
    print(arr);
}
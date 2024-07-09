#include<iostream>
using namespace std;
int duplicate(int arr[], int n){
    int ans =0;
    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i] == arr[j])
            cout<<arr[i]<<" ";
        }
         }
    
}
int main(){
    int arr[5] = {1,2,4,2,4};
    // cout<<
    duplicate(arr,5);
}
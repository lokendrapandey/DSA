#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int ans =0;
    for(int i =0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5] = {1,2,4,2,4};
    cout<<unique(arr,5);
    }


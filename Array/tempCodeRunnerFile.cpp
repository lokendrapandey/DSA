#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    sort(arr.begin(), arr.end());
    int n = 5;
    int k =1;
    cout<<arr[n-k]<<" "<<arr[k-1];
}
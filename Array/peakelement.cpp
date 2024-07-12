#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[5] = {1,2,3,4,5};
    int arr[5] = {22,33,463,55,4};
    int n =5;
    int s=0, e= n-1; 
    int mid = (s+e)/2;
    while (s<e)
    {
        if(arr[mid]<arr[mid+1]) s= mid+1;
        else
        e = mid;
    
        mid = (s+e)/2;

    }
        cout<<s;
    
}
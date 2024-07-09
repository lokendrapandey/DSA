#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[5] = {1,2,3,-4,-5};
    int arr[5] = {-4,1,2,3,-5};
    int neg =0; 
    for(int i =0; i<5; i++){
        if(arr[i]>0)
        swap(arr[i],arr[neg++]);
    }
    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}
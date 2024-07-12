#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,3,2,4,5};
        for(int i =0; i<5; i++){
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }

}


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int sum =0; 
//     for(int i =0; i<5; i++){
//         sum += arr[i];
//     }
//     cout<<sum;
// }
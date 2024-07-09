// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
//     int arr[5] = {11,22,33,44,55};
//     int n = 5;
//     int s = 0 , e = n-1;
//     while (s<e){
//         swap(arr[s++], arr[e--]);
//     }
//     for(int i =0; i<5; i++){
//         cout<<arr[i]<<" ";
//     }
    
// }






#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> arr = {1,2,3,4,5};
    // reverse(arr.begin(),arr.end());
    int arr[5] = {1,2,3,4,5};
    int n =5;
    int s =0,e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
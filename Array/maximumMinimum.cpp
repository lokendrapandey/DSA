// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     //   int arr = {434,33,4,56,34,5,345};
//     vector<int> arr = {0,1,1,0,0,0,0,1,01,01,01,01,1,0,1,1,0,1,0,140,1,41,64,0,1,2,2,0,521,021,54,0,0,54,56,0,661,0};
//     sort(arr.begin(),arr.end());
//     int n = arr.size();
//     int k = 2;
//     for(int i =0; i<arr.size(); i++){
//         cout<<arr[i]<<" ";
//     }
//     // cout<<endl;
//     // cout<<arr[n-k]<<" jhhdh "<<arr[k-1];
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr ={11,22,33,44,55,66,7};
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     for(int i =0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int k =1;

//     cout<<arr[n-1]<<" "<<arr[k-1];
// }





#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,54,5,6,67,7,8,9};
    int k =5;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[n-k]<<"  "<<arr[k-1];
}














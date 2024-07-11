#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums= {1,2,3,4,5};
    // vector<int>nums= {5,4,5,3,1};
    int k = 2;

        // k=k%nums.size();
        reverse(nums.begin(),nums.end());
        
    
        reverse(nums.begin(),nums.begin()+k);
        for(int i =0; i<5; i++){
        cout<<nums[i]<<" ";
    }
cout<<endl;
        reverse(nums.begin()+k,nums.end());

    for(int i =0; i<5; i++){
        cout<<nums[i]<<" ";
    }

    // int n =5;
    // int i =0;
    // int j = n-1;
    // while(i!=j){
    //     swap(arr[i++], arr[j]);
    // }

    // for(int i =0; i<5; i++){
    //     cout<<nums[i]<<" ";
    // }
}
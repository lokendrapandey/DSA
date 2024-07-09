#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int x = 5;
    int num =0;
    for(int i =0; i<5; i++){
        for(int j =i+1; j<5; j++){
            if(arr[i]+arr[j]==x){
                num++;
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<x<<endl;
            }
        }
    }
    cout<<"pair sum present is "<<num;
}
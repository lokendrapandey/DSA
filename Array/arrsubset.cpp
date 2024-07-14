#include<iostream>
using namespace std;

int main(){
    int arr1[5]= {1,2,3,4,5};
    int arr2[4]= {1,2,3,4};
    for(int i =0; i<5; i++){
        for(int j = 0;j<4; j++){
            if(arr1[i]==arr2[j]){
             cout<<"yes";
             return 0;
            }
            else cout<<"no";
        }
    }
}   
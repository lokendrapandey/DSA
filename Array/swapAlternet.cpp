#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void swapalternet(int arr[],int n){
        for(int i =0; i<n; i+=2){
            if(i+1<n)
            swap(arr[i],arr[i+1]);
        }
        return;
}
int main(){
    int arr[5] = {2,3,4,5,6};
    int arr1[6] = {2,33,224,55,6,7};
    swapalternet(arr,5);
    printArray(arr, 5);
    cout<<endl;
    swapalternet(arr1,6);
    printArray(arr1, 6);
    
}
#include<iostream>
using namespace std;
int main(){
    int arr[5] ={1,3,4,5};
    int n =5;
    int total =1;
    for(int i =2; i<(n+1); i++){
        total += i;
        total -= arr[i-2];
    }
    cout<<total;
}
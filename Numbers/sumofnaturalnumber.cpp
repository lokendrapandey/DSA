#include<iostream>
using namespace std; 
int main(){
    cout<<"enter number : ";
    int n;
    cin>>n;
    int sum =0;
    for(int i =1; i<=n; i++){
        sum += i;
    }
    cout<<n<<" and "<<sum;
}
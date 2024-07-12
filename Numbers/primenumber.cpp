#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i    =2; i<=n/2; i++){
        if(n%i == 0)
        return false;
    }
    return true;
}
int main(){
    int num = 5;
    isprime(11) ? cout<<"true \n" : cout<<"not\n";
    isprime(15) ? cout<<"true \n" : cout<<"not\n";

    
}   
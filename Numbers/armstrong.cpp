#include<iostream>
using namespace std;
int main(){
    // int num = 371;
    int num = 37;
    int originalnum = num;

    int remainder,result =0;
    while(originalnum!=0){
        remainder = originalnum%10;
        result +=  remainder * remainder * remainder;
        originalnum/=10;
    }
    if(result == num) cout<<"num is armstrong "<<endl;
    else cout<<"num is not armstrong"<<endl;
}   
#include<iostream>
using namespace std;
int main(){
    int num = 455638;
    int cnt =0;
    while (num>0)
    {
        cnt++;
        num = num/10;
    }
    cout<<cnt;
    
}   
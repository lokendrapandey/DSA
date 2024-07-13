#include<iostream>
using namespace std; 
int main(){
    int year = 2000;
    if((year%4==0)&&(year%100==0)||(year%400==0))
    cout<<"yess "<<endl;
    else cout<<"not"<<endl;

    cout<<year%4<<endl;
    cout<<year%100<<endl;
    cout<<year%400<<endl;
}
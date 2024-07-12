#include<iostream>
using namespace std;
int main(){
    int num = 121;
    int num2 = num;
    int rev_num =0;
    while (num>0)
    {
        int id = num % 10;
        rev_num = (rev_num*10 )+ id;
        num = num/10;
    }
    cout<<rev_num<<endl;  
    if( num2 == rev_num)      cout<<"num is palindrome"<<endl;

    else cout<<"not palindrome "<<endl;
    
    // cout<<endl;
    // cout<<12345%10;
}   
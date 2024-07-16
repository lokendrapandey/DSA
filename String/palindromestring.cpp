#include<iostream>
using namespace std;
int main(){
    // string str = "shivam";
    string str = "noon";
    string st = str;
    int s =0, e =str.length()-1;
    while (s<=e)
    {
        swap(str[s++],str[e--]);
    }
    if(str == st) cout<<"palindrome"<<endl;
    else cout<<"not palindrome"<<endl;
    
}
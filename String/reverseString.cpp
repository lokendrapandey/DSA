#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "shivam";
    int n = str.length();
    int s =0, e = n-1;
    while (s<e)
    {
        swap(str[s++],str[e--]);
    }
    for(int i =0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
}
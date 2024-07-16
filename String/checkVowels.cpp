#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Shivam Pandey one";
    int n = str.length()-1;
    int vowels =0, constant =0, space = 0;
    for(int i =0 ; i<=n; i++){
        if(str[i] == ' ') space++;
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ) vowels++;
        else constant++;

    }
    cout<<"vowels : "<<vowels <<"  constant :"<<constant-space<<"  space :"<<space;
}
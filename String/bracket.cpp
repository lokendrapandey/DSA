#include<iostream>
using namespace std;
int main(){
    string str = "A(+B+C}";
    string ans;
    for(int i =0; i<str.length(); i++){
        if(str[i] != '(' && str[i] != '}'){
            ans.push_back(str[i]);
        }
    }
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "sh2iv2am";
    // int n = str.length();
    // int s =0, e = n-1;
    // while (s<e)
    // {
    //     swap(str[s++],str[e--]);
    // }
    int ans =0;
    for(int i =0; i<str.length(); i++){
        if(str[i]>='0' && str[i]<='9'){
            ans +=str[i];
        }
    }
    cout<<ans;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "DCBA  ";
    int n = str.length();
    for(int i =0; i<n; i++){
        for(int j = i+1;j<n; j++){
            if(str[i]>str[j])
            swap(str[i],str[j]);
        }
    }
    for(int i =0; i<n; i++){
        cout<<str[i]<<" ";
    }
}
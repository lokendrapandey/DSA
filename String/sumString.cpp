#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "sh2iv332am";
    int ans = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            ans += str[i] - '0'; // Convert character to its numeric value
        }
    }
    cout << ans;
    return 0;
}

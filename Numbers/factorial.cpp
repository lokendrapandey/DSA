#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int ans =1;
    for(int i =1; i<=n; i++){
        ans = ans*i;
    }
    cout<<ans;
}
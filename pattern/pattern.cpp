
#include <iostream>
using namespace std;
void print()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 5 - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i + 1; j++)
        {
            // cout << j<<" ";
            cout << i << " ";
        }
        cout << endl;
    }
}
void print2()
{
    int n = 5;
    for (int i = 0; i <= n; i++)
    {
        // space
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }
        // logic
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print3()
{
    int n = 5;
for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print4(){
int n = 5;
for(int i =1; i<=2*n-1; i++)
{
    int star = i;
if(i>n) star = 2*n-i;
for(int j = 1; j<=star; j++){
cout<<"*";
}
cout<<endl;
}
}

void print5(){
    int start = 1;
for(int i =0; i<5; i++){
if(i%2  == 0) start = 1;
else start = 0;
for(int j =0; j<i; j++){
cout<<start;
}
cout<<endl;
}
}
int main()
{
//     print();
//     print1();
//     print2();
//     print3();
// print4();
// print5();

    // for(int i =1; i<=6; i++){
    // for(int j =1 ; j<=i; j++){
    // // cout<<"*";
    // // cout<<i;
    // // cout<<j;
    // }
    // cout<<endl;
    // }
}
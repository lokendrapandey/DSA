#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {11,22,33,11,33};
    int num =0; 
    int num2 =0; 
    int x = 11;
    int x2 = 33;
    for(int i =0; i<5; i++){
        if(arr[i]==x){ num++; }
        if(arr[i]==x2){ num2++; }
    }
    cout<<x<<"  : times->  "<<num<<endl;
    cout<<x2<<" : times->  "<<num2;
}

















// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[10] = {1,2,2,55,2,2, 3, 4, 5};
//     int num = 0;
//     int x = 2;

//     for (int i = 0; i < 10; i++) {
//         if (arr[i] == x)
//             num++;
//     }

//     cout << x << " occurs " << num << " time(s)" << endl;

//     return 0;
// }












// #include <iostream>
// using namespace std;

// // Returns number of times x occurs in arr[0..n-1]
// // int countOccurrences(int arr[], int n, int x)
// // {
// // 	int res = 0;
// // 	for (int i = 0; i < n; i++)
// // 		if (x == arr[i])
// // 			res++;
// // 	return res;
// // }

// // Driver code
// int main()
// {
// 	int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int x = 2;
// 	int num =0;
// 	for(int i =0; i<n; i++){
// 		if(arr[i]==x)
// 		num++;
// 	}
// 	cout<<"number of occ : "<<x<<" :" <<num;


//     // int r=0;
// 	// printf("%d", countOccurrences(arr, n, x));
//     // for(int i =0; i<n; i++){
//     //     if(arr[i]==x)
//     //     r++;
//     // }
//     // cout<<"number of occ "<<r;
// 	// return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter lenght:- " ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter element:- ";
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    int maxsum=0;
    for(int start=0; start<n; start++){
        int sum=0;
        for(int end=start;end<n;end++){
                sum+=arr[end];
                maxsum= max(sum,maxsum);
            }
        }
        cout << "\n";
    cout << "maximum sum of subarray is " << maxsum;
    return 0;
}


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter lenght:- " ;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter element:- ";
//         cin >> arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     int max=0;
//     for(int start=0; start<n; start++){
//         for(int end=start;end<n;end++){
//             int sum=0;
//             cout << "(";
//             for(int i=start;i<=end;i++){
//                 cout << arr[i]<<",";
//                 sum+=arr[i];
//             }
//             cout << ")";
//             if (max<sum){
//                 max=sum;
//             }
//             cout << " ";
//         }
//         cout << "\n";
//     }
//     cout << "\n";

//     cout << "maximum sum of subarray is " << max;
//     return 0;
// }
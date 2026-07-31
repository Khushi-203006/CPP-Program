#include<bits/stdc++.h>
using namespace std;

int n_root(int n , int m){
long long power(int base, int exp, int m) {
    long long ans = 1;
    long long b = base;   // keep base separate
    while(exp > 0) {
        if(exp % 2 == 1) {
            ans *= b;
            if(ans > m) return ans;  // early stop
            exp -= 1;
        } else {
            b *= b;                  // square the base
            if(b > m) return b;      // early stop
            exp /= 2;
        }
    }
    return ans;
}
int NthRoot(int n, int m) {
    int low = 1, high = m;
    while(low <= high){
        int mid = low + (high - low) / 2;
        long long result = power(mid, n, m); // pass m for early stop

        if(result == m) return mid;
        else if(result > m) high = mid - 1;
        else low = mid + 1;     
    }
    return -1;
}


int main(){
    int n = 9;
    int m = 1953125;
    int result = n_root(n,m);
    cout << result << endl;
    return 0;
}
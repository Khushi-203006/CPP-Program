#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int rem;int sum=0;int org;int c=0;int n;
    cout << "Enter number: ";
    cin>> n;
	org=n;
	int temp=n;
    cout<< temp <<endl;
	while (n!=0){
		c+=1;
		n/=10;
	}
    cout<< c << endl;
	while(temp!=0){
		rem=temp%10;
		sum= sum + pow(rem,c);
		temp/=10;
	}
    cout<< sum << endl;
    return 0;
}
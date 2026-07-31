    #include<iostream>
    using namespace std;
    void nforest(int n){
        //pattern 1
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << "*";
            }
            cout<< endl;
        }
    }
    {
        //patter 2
        for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<< "* ";
		}
		cout<< endl;
	}}
    {
    //pattern 3
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<< j <<" ";
		} 
		cout<< endl;
	}
}
{
    //pattern 4
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			cout << i << " ";
		}
		cout<< endl;
	}
}
{
    //pattern 5
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<< "* ";
		}
		cout<< endl;
	}
}
{
    //pattern 6
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<< j << " ";
        }
        cout << endl;
    }
}
{
    //pattern 7
    for (int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;
    }
}
 {
    //pattern 8
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout << " ";
        }
        for (int j=0;j<2*(n-i)-1;j++){
            cout << "*";
        }
        for (int j=0;j<i;j++){
            cout << " ";
        }
        cout<<endl;
        }
}

    int main(){
        int n;
        cin>> n;
        nforest(n);
    }
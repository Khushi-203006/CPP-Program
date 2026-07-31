#include<iostream>
using namespace std;

class khushi{
    private:
        int a,b;
    public:
        int c, d;
        void setdata(int a1, int b1);
        void fetch_it(){
            cout<< "value of a " << a << " and b " << b << endl;
            cout<< "value of c " << c << " and d " << d << endl;
        }
};

void khushi :: setdata (int a1,int b1){
    a=a1;
    b=b1;
}

int main(){
    khushi k2;
    k2.c= 303;
    k2.d= 404;
    k2.setdata(101,202);
    k2.fetch_it();
    return 0;
}





/*
class solution{
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);
        void getdata(){
            cout<<"value of a "<<a<<endl;
            cout<<"value of b "<<b<<endl;
            cout<<"value of c "<<c<<endl;
            cout<<"value of d "<<d<<endl;
            cout<<"value of e "<<e<<endl;
        }
};

void solution :: setdata(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    solution s1;
    s1.e=5;
    s1.d=4;
    s1.setdata(1,2,3);
    s1.getdata();
    return 0;
}
*/
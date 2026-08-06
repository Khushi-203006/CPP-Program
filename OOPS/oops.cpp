#include <bits/stdc++.h>
using namespace std;

class Teacher{
    
    private:
        // properties / attributes
        double salary;

    public:
        // properties / attributes
        // non-parameterized constructor
        
        Teacher(){
            dept = "CSE";
    }
        string name;
        string dept;
        string subject;
    
        // methods / functions / member functions
        void change_dpt(string newdpt){
            dept = newdpt;
    }
    //setter
    void salary_1(double s){
        salary = s;
    }
    //getter
    double salary_2(){
        return salary;
    }
};

// encapsulation - used to create properties and mehtods in same class
// used to hide data
// here we are hiding data in private access modifier
// created class -> used access modifiers -> hide the data

class Account{
    public:
        string accountid;
        string name;
        string username;
    
    private:
        string password;
        double balance;
};

int main(){
    Teacher t1;
    t1.name = "Riya";
    // t1.dept = "Data Science";
    t1.subject = "OOPs";
    t1.salary_1(150000);
    // t1.salary = 50000; //now we cant access it

    cout << t1.name << endl;
    cout << t1.dept << endl;
    return 0;    
}

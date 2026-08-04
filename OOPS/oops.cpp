#include <bits/stdc++.h>
using namespace std;

class Teacher{
    public:
        // properties / attributes
        string name;
        string dept;
        string subject;
        double salary;

        // methods / functions / member functions
        void change_dpt(string newdpt){
            dept = newdpt;
    }
};

int main(){
    Teacher t1;

    t1.name = "Riya";
    t1.dept = "CSE";
    t1.subject = "OOPs";
    t1.salary = 50000;

    cout << t1.name;
    return 0;
    
}

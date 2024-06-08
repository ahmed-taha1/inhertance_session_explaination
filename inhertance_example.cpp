#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Human{
    string name;
    int age;
    string phone;
    string address;

    virtual void printInfo() = 0;
};

struct OfficeBoy : Human{
    int salary;
    OfficeBoy(){
        age = 0;
        salary = 100;
    }
    void printInfo() override{
        cout << "i am an office boy\n";
        cout << "and my salary is " << salary << '\n';
    }
};

struct Employee : Human{
    string rank;
    Employee(){
        age = 0;
        rank = "silver";
    }
    void printInfo() override{
        cout << "i am an employee\n";
        cout << "and my rank is " << rank << '\n';
    }
};

int main(){
    Human* m = new OfficeBoy();
    m->printInfo();

    m = new Employee();
    m->printInfo();
}

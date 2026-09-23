#include<bits/stdc++.h>
using namespace std;

class name1 {
    public:
    string name = "Rohan";
    int grade = 99;
    int rollno = 1;

};

class name2 {
    public:
    string name = "Chirag";
    int grade = 100;
    int rollno = 2;

};

class name3 {
    public:
    string name = "Ronaldo";
    int grade = 88;
    int rollno = 3;

};

int main() {
    name1 s1;
    name2 s2;
    name3 s3;



    cout << "Name:  " << s1.name << endl;
    cout << "Grade:  " << s1.grade << endl;
    cout << "Rollno:  " << s1.rollno << endl;

    cout << "===================================" << endl;

    cout << "Name:  " << s2.name << endl;
    cout << "Grade:  " << s2.grade << endl;
    cout << "Rollno:  " << s2.rollno << endl;

    cout << "===================================" << endl;

    cout << "Name:  " << s3.name << endl;
    cout << "Grade:  " << s3.grade << endl;
    cout << "Rollno:  " << s3.rollno << endl;


    return 0;

}
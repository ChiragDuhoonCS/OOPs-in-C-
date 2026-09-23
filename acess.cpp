#include<bits/stdc++.h>
using namespace std;

class hero { //! here we made class
    //@ here these all are properties of class
    public: //@ here we make access public we can use it anywhere
    char name[50] = "Chirag Duhoon";
    int health = 100;
    private: //@ can access only in class not outside of it
    char level = 'A';

    void fnx(){ // fnx in class
        cout << "here only i can acess inside class: " << level <<endl; //@ here only inside i can acess private
    }
    
};

int main() {
    hero ramesh;

    cout << "Name:  " << ramesh.name << endl;
    cout << "Health:  " << ramesh.health << endl;
    //cout << "Level:  " << ramesh.level << endl; //@ cant acess coz thats private
    return 0;
}
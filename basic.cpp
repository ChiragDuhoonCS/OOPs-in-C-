#include<bits/stdc++.h>
using namespace std;

class hero { //! here we made class
    //@ here these all are properties of class
    public: //@ here we make access public we can use it anywhere
    char name[50] = "Chirag Duhoon";
    int health = 100;
    char level = 'A';
    
};

int main() {
    hero ramesh;

    cout << "Name:  " << ramesh.name << endl;
    cout << "Health:  " << ramesh.health << endl;
    cout << "Level:  " << ramesh.level << endl;
    return 0;
}
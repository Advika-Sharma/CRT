#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    if (a>="0" && a<="9"){
        cout << "IS DIGIT" << endl;
    }
    else if (a>="a" && a<="z"){
        cout << "ALPHA" << endl<<"IS SMALL";
    }
    else if (a>="A" && a<="Z"){
        cout << "ALPHA" << endl<<"IS CAPITAL";
    }
}
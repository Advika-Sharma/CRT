#include <iostream>
using namespace std;
int main(){
    long long x ;
    cin >> x;
    long long digit = x/1000;
    if (digit % 2 == 0){
        cout << "EVEN"<< endl;
    } else cout<< "ODD" <<endl;
}
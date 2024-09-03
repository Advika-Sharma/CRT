#include <iostream>
using namespace std;
int main(){
    long long n ;
    cin >> n;
    bool found_even = false;

    for (int i=2 ; i<=n ; i+=2)
    {
        cout << i << endl;
        found_even=true;
    } 
    if (!found_even) {
        cout << -1 << endl;
    }
    return 0;
}
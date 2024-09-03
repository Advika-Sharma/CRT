#include <iostream>
using namespace std;

int main() {
    unsigned long long A, B, C, D;
    cin >> A >> B >> C >> D;
    
    unsigned long long result = (A % 100) * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100;
    
    cout << result % 100 << endl;
    
    return 0;
}

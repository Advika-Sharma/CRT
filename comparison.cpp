#include <iostream>
using namespace std;

int main() {
    long long A, B;
    char S;
    cin >> A >> S >> B;

    if ((S == '<' && A < B) || (S == '>' && A > B) || (S == '=' && A == B)) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }

    return 0;
}

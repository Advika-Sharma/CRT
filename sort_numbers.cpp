#include <iostream>
#include <algorithm> // for std::sort
using namespace std;
int main() {
    long long A, B, C;
    cin >> A >> B >> C;

    long long arr[3] = {A, B, C};
    sort(arr, arr + 3);
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}

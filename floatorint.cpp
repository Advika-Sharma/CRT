#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    cin >> N;

    // Check if the input contains a decimal point
    size_t pos = N.find('.');

    if (pos != string::npos) {
        // The number has a decimal part, extract it
        string integerPart = N.substr(0, pos);           // Part before the decimal point
        string decimalPart = N.substr(pos + 1);          // Part after the decimal point

        // Check if the decimal part consists only of zeros
        if (decimalPart.find_first_not_of('0') == string::npos) {
            // All zeros in the decimal part, treat as an integer
            cout << "int " << integerPart << endl;
        } else {
            // Non-zero decimal part, treat as a float
            cout << "float " << integerPart << " " << "." << decimalPart << endl;
        }
    } else {
        // The number is an integer
        cout << "int " << N << endl;
    }

    return 0;
}

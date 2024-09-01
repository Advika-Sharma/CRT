#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int years = N / 365;       // Calculate the number of years
    int remaining_days = N % 365; // Days left after extracting years

    int months = remaining_days / 30; // Calculate the number of months
    int days = remaining_days % 30;   // Days left after extracting months

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}

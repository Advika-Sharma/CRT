#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    double ab = b*log(a);
    double cd = d*log(c);

if (log(ab) > log(cd)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

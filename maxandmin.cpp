#include <iostream>
using namespace std;
int main(){
    long long l,n,m;
    cin>>l>>n>>m;
    cout<<min(l,min(n,m)) << " ";
    cout<<max(l,max(n,m));
}
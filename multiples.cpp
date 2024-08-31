#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m%n ==0 || n%m == 0){
        cout<<"Multiples"<<endl;
    }
    else{
        cout<<"No Multiples"<<endl;
    }
}
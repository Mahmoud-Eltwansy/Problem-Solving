// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
#include <iostream>
using namespace std;
int main() {
    int n,addition=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<1+addition<<" "<< 2+addition<<" "<< 3+addition <<" PUM"<<endl;
        addition+=4;
    }
    
    return 0;
}
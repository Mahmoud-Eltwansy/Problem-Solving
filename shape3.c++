// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <iostream>
using namespace std;
int main() {
    int n,spaces,line=1,diamond_num=1;
    cin>>n;
    spaces=n-1;

    while(line<= (2*n) )
    {
        for(int i=0; i<spaces ; i++ )
        {
            cout<<" ";
        }
        for (int j = 0; j < diamond_num; j++)
        {
            cout<<"*";
        }
        if(line > n)
        {
            spaces++;
            diamond_num-=2;
        }
        if(line < n)
        {
            spaces--;
            diamond_num+=2;
        }
        line++;
        cout<<endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
// int f=0;
void func(){
    if(cnt==8) return;
    cout<<cnt<<" ";
    cnt++;
    // int f=cnt;
    func();
    // cout<<endl<<"Function call of " <<f<<" time"<<endl;
}
int main()
{
    func();
}
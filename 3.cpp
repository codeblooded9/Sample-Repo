//Sum of first n natural numbers
#include<bits/stdc++.h>
using namespace std;
/*int f(int i,int n)
{
    if(i==n) return n;
    return i+f(i+1,n);
}*/ //Functional way (means we return value instead of printing ) and backtracking (mine) 😌

/*int f(int n)
{
    if(n==0) return 0;
    return n+f(n-1);
}*/// This is also functional way and is uses recursion only 

/*void f(int i,int sum)  // This is parametrized way (means we print value instead of returning )
{
    if(i<1) 
    {
        cout<<"Sum is "<<sum;
        return ;
    }
    f(i-1,sum+i);
} */ 

int fact(int n)
{
    if(n==1) return 1; //😭
    return n*fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
}
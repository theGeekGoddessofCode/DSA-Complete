#include<iostream>
using namespace std;

int int2binary(int n)
    {
        if (n==0)
            return 0;
        else
            return (n%2+10*int2binary(n/2));
        
    }



int main(){
    int n=12;
    
    cout<<int2binary(n);
    
    return 0;
}
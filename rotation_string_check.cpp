#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(string s,string s2){
    if(s.size()!=s2.size())
    return 0;
string s1=s+s;
     int M = s1.length();
    int N = s2.length();
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for
 pattern match */
        for (j = 0; j < M; j++)
            if (s1[i + j] != s2[j])
                break;
 
        if (j == M)
            cout<<"rotation";
    }
   
}

int main(){
    string s="Panama",s2="namapa";

    reverse(s,s2);
    
    return 0;
}
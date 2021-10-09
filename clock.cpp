#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int clock(string s){
    int h1,h2,i,hr;
    h1=s[0];
     h2=s[1];
    hr=h1*10+h2;
    if (s[8]=='A'){
        if(hr== 12){
          cout << "00";
            for (int i=2; i <= 7; i++)
                cout << s[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                cout << s[i];
        }
    }
    else 
   {
        if (hr == 12)
        {
            cout << "12";
            for (int i=2; i <= 7; i++)
                cout << s[i];
        }
        else
        {
            hr = hr + 12;
            cout << hr;
            for (int i=2; i <= 7; i++)
                cout << s[i];
        }
    }
}
int main(){
    string s="07:56:03PM";
    clock(s);
    return 0;
                    
}
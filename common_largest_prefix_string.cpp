#include<iostream>
using namespace std;

string comman(string a[],int n){
    string c=a[0], res = "";
    int min_siz = INT8_MAX;
    for(int i = 0; i<n; i++){
        min_siz = min_siz<a[i].size()? min_siz:a[i].size();
    }
    for (int i=0;i<min_siz;i++){
        bool flag = false;
        for(int j =0; j<n; j++){
            if(c[i]!=a[j][i]){
                flag = true;
                break;
            }
        }
        if(flag)
            break;
        res+= c[i];
    }
    return res;
}

int main(){
    string a[]={"rain", "race", "rat", "rabbit"};
    int n=sizeof(a)/sizeof(a[0]);
    string output=comman(a,4);
    cout<<output;
    return 0;
}
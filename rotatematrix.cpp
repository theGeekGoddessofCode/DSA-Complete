#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int rotatematrix(int a[3][3]){
    int i,j;
    for (i=0;i<3;i++){
        //for(j=0;j<3;j++)    //for tranpose
        for(j=2;j>=0;j--){      //for ratation
            cout<<a[j][i]<<" ";
        }cout<<endl;
    }

}
int main(){
    int a[3][3]={{1,2,3},
                {4,5,6},
                {7,8,9}}; //vedio on youtube 
    rotatematrix(a);
    return 0;
    
}
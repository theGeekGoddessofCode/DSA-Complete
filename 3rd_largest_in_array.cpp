#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largest(int a[],int n){
    int i,j,k;
    for (i=0;i<n-1;i++){                 //bubble sort
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
        }}
    }
    for (i=0;i<n;i++){
    cout<<a[i]<<" ";
    
}cout<<endl;
cout<<a[n-3];       //print 3rd largest
}


int main(){
     int a[]={1,11,11,14,2,3,40,42,30,5};
    int n=sizeof(a)/sizeof(a[0]);
    largest(a,n);   
     
    return 0;
}
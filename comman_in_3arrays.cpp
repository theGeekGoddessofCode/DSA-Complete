#include<iostream>
using namespace std;

int comman(int a[],int b[],int c[],int n,int m,int o){
    int i=0,j=0,k=0;
   while(i<n && j<m && k<o){
       if (a[i] == b[j] && b[j] == c[k])
         {   cout << a[i] << " ";   
         i++; 
         j++; 
         k++; }
         
         else if (a[i] < b[j])
             i++;
 
         // y < z
         else if (b[j] < c[k])
             j++;
 
         // We reach here when x > y and z < y, i.e., z is smallest
         else
             k++;


   }

}
int main(){
    int a[]={1,2,3,4,5};
    int b[]={2,5,7,8};
    int c[]={1,2,5,10};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int o=sizeof(c)/sizeof(c[0]);
    comman(a,b,c,n,m,o);
    return 0;

}
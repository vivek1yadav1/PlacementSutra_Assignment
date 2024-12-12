#include<iostream>
using namespace std;
//q2
//  int f(int *p,int n){
//         if(n<=1)return 0;
//         else return max(f(p+1,n-1),p[0]-p[1]);
//     }
    
int main (){

    //q3  answer will be null string becoz when starting element of string becomes null then string becomes null.
    char a[6] = "world";
    int i,j;
    for (i=0, j=5;i<j; a[i++] = a[j--]);
    cout<<a<<endl;
   
   
    //q2 ans 3
    // int a[]= {3,5,2,6,4};
    // cout<<f(a,5)<<endl;
    
    
    //q1 b1 will give compilation error as it is 2d array
     // int *A[10],B[10][10],C[10];
    // *A = C;
    // *A[2] = 1;
    // A[2][3]= 5;
    // B[1] = 23;
    // B[2][3]= 6;
    // cout<<A[2],A[2][3],B[1],B[2][3]<<endl;
}
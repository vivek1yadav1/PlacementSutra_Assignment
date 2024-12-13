#include<iostream>
using namespace std;
void chng(int *a){
    *a = 10;
    cout<<"inside chng function"<<endl;
    cout<<a<<endl;
}
void print(int a){
    cout<<a<<endl;
}
int main(){
    int a = 5;
    cout<<"value before function"<<endl;
    cout<<a<<endl;
    chng(&a);
     cout<<"use of print function"<<endl;
    print(a);
    cout<<"value after function"<<endl;
    cout<<a<<endl;


}
#include <iostream>
using namespace std;

// Q1. define class student with attribute 
//      a.name b.string
//      create an object of the student class and assign values to attributes.
//      print details of the student using cout.
//      upload on the git hub.

// class Student{
//     public:
//     string name;
//     int age;
//     void input(){
//         cout<<"enter ur name = ";
//         cin>>name;
//         cout<<"enter ur age = ";
//         cin>>age;
//     }
// };


//Q2. define class Number with one attribute value (integer).
  // add a member function checkEvenOdd() to check even or odd using if else.
  // create object assign value to it and call the function.

class Number{
    public:
    int n;
    void checkEvenOdd(){
        if(n%2 == 0){
            cout<<"entered number "<<n<<" is even."<<endl;
        }
        else{
            cout<<"entered number "<<n<<" is odd."<<endl;
        }

    }
};

int main(){
   
    //Q1
    // Student Vivek;
    // Vivek.input();
    // cout<<"student name is "<<Vivek.name<<endl;
    // cout<<"student age is "<<Vivek.age<<endl;
    
    //Q2
    Number number;
    cout<<"enter a number = ";
    cin>>number.n;
    number.checkEvenOdd();
    

}
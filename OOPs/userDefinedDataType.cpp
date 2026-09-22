#include<iostream>
using namespace std;
class Student{ //user defined data type
    public:
    string name;
    long long rno;
    float cgpa;

    Student(string n,int r,float c){
        name = n;
        rno = r;
        cgpa = c;
    }

    Student(){
        //Default constructor

    }
};
int main(){
    Student x;
    x.name = "Shubham Singh";
    x.rno = 2503203100121;
    x.cgpa = 9.12;

    Student y("Bill Gates",2503203100122,9.02);
    y.name = "Bill Gates";
    y.rno = 2503203100122;
    y.cgpa = 9.02;


  Student  z;
  z.name = "Albert Einstein";
  z.rno = 2503203100123;
  z.cgpa = 9.002;

 cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<" ";
}
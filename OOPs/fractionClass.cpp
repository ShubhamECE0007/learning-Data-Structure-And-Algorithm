#include<iostream>
using namespace std;
class Fraction{
    public:
    int num;
    int den; 
    Fraction(int num,int den){
        this->den= den;
        this->num=num;
    }
Fraction(){

};
void print(){
    cout<<num<<"/"<<den<<endl;
}

};
Fraction multiply(Fraction& f1,Fraction& f2){
  Fraction res;
  res.num = f1.num*f2.num;
  res.den = f1.den*f2.den;
  return res;
}

Fraction Addition(Fraction& f1,Fraction& f2){
  Fraction res;
//   res.num = f1.num*f2.num;
//   res.den = f1.den*f2.den;
res.num = f1.num*f2.den + f2.num*f1.den;
res.den = f1.den*f2.den;
  return res;
}


Fraction Subtraction(Fraction& f1,Fraction& f2){
  Fraction res;
 res.num = f1.num*f2.den - f2.num*f1.den;
res.den = f1.den*f2.den;
  return res;
}



int main(){
    Fraction f1(2,5);
    Fraction f2(3,7);
    Fraction ans = multiply(f1,f2);
   
    Fraction ans1 = Addition(f1,f2);
    Fraction ans2 = Subtraction(f1,f2);
     ans.print();
     ans1.print();
     ans2.print();

}
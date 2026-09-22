#include<iostream>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int power;
    float average;
    bool patrol;
    bool sunroof;
    bool isE20Compatible;
    int seats;
    int price;
};
int main(){
 Car c1;
 c1.name = "fortuner";
 c1.power=118;
 c1.average = 9.2;
 c1.isE20Compatible = true;
 c1.sunroof = true;

  Car c2;
 c2.name = "Hynduai";
 c2.power=120;
 c2.average = 10.2;
 c2.isE20Compatible = true;
 c2.sunroof = false;


  Car c3;
 c3.name = "Porsche";
 c3.power=190;
 c3.average = 3.5;
 c3.isE20Compatible = false;
 c3.sunroof = false;

 cout<<c3.name<<" "<<c2.name<<" "<<c1.name;
 cout<<c3.power<<" "<<c2.power<<" "<<c1.power;

}
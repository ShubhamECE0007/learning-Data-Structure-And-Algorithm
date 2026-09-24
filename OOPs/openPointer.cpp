#include<iostream>
using namespace std;
class Cricketer{
    private:
     int runs;
    public:
    string name;
    float average;
    Cricketer(string name,int runs, flaot average)
    {
        this->name = name;
        this->averge = average;
        this->runs = runs;

    }
    Cricketer(){// deafault parameter

    }


};
int main(){
    Cricketer c1("Virat Kohli",10000,55.7);
    Cricketer c2("MS Dhoni",9878,44.57 );
    Cricketer c3("Sachin Tendulkar",18000,46.57 );
    // Cricketer c4("M",9878,44.57 );

    Cricketer* ptr = &c1;
    Cricketer* p = new  Cricketer("ABD",10000,56.09);
    (*p).print();

}
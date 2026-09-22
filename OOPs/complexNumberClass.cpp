#include <iostream>
using namespace std;
class Complex
{
public:
    float re;
    float img;
    int num;
    int den;

    Complex(float re, flaot img)
    {
        this->re = re;
        this->img = img;
    }
    Complex()
    { // Default Constructor
    };
    void print()
    {
        if (img >= 0)
        {
            cout << re << "+" << img << "i" << endl;
        }
        else
        {
            cout << re << img << "i" << endl;
        }
    }
};

    Complex Addition(Complex &c1, Complex &c2)
    {
        Complex c3;
        c3.re = c1.re + c2.re;
        c3.img = c1.img + c2.img;
        return c3;
    }

    Complex Subtraction(Complex &c1, Complex &c2)
    {
        Complex c3;
        c3.re = c1.re - c2.re;
        c3.img = c1.img - c2.img;
        return c3;
    }

    Complex Multiplication(Complex &c1,Complex &c2){
        Complex c3;
        c3.re = c1.re*c2.re - c1.img*c2.img;
        c3.img = c1.re*c2.img + c2.re*c1.img;
        return c3;

    }

    Complex Divison(Complex &c1,Complex &c2){
        Complex c3;
        c3.num = c3.re; 
        c3.re = (c1.re*c2.re - c1.img*c2.img)/(c2.re*c2.re + c2.img*c2.img); 
        c3.img = (c1.img*c2.re - c1.re*c2.img)/(c2.re*c2.re + c2.img*c2.img); 
        return c3;
    }
    int main()
    {
        Complex c1(3, 7);
        Complex c2(4, -9);
        Complex ans = Addition(c1, c2);
        Complex ans1 = Subtraction(c1, c2);
        Complex ans2 = Multiplication(c1, c2);
        ans.print();
        ans1.print();
        ans2.print();
    }
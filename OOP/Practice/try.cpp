#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;
public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    int get_real()
    {
        return real;
    }
    int get_imag()
    {
        return imag;
    }

    void add(Complex c1)
    {
        cout << c1.get_real()+real << "+i" << c1.get_imag()+imag << endl;
    }

    void difference(Complex c1)
    {
        cout << real-c1.get_real() << "+i" << imag-c1.get_imag() << endl;
    }

    void multiply(Complex c1)
    {
        cout << ((real*c1.get_real())-(imag*c1.get_imag())) << "+i" << ((real*c1.get_imag())+(imag*c1.get_real())) << endl;
    }
};

int main()
{
    Complex c1(4,5);
    Complex c2(2,3);
    c1.add(c2);
    c1.difference(c2);
    c1.multiply(c2);
    return 0;
}
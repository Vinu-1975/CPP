#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
};

/*int main(){
    student s;
    s.name="john";
    s.roll_no=2;
    cout<<s.name<<" "<<s.roll_no;
    student j;
    j.name="Sam";
    j.roll_no=5;
    cout<<endl<<j.name<<" "<<j.roll_no;
}*/

class triangle
{
public:
    void area_perimeter(int s1, int s2, int s3)
    {
        double s = (s1 + s2 + s3) / 2.0;
        cout << s << endl;
        cout << "perimeter is: " << (s1 + s2 + s3);
    }
};

/*int main()
{
    triangle a;
    a.area_perimeter(3, 4, 5);
}*/

class ctriangle
{
public:
    int s1, s2, s3;
    ctriangle(int a, int b, int c)
    {
        s1 = a;
        s2 = b;
        s3 = c;
    }
    void area_perimeter();
};

void ctriangle ::area_perimeter()
{
    double s = (s1 + s2 + s3) / 2.0;
    cout << s << endl;
    cout << "perimeter is: " << (s1 + s2 + s3);
}

/*int main(){
    ctriangle s(3,4,5);
    s.area_perimeter();

}*/

class rectangle
{
public:
    int l, b;
    rectangle(int x, int y)
    {
        l = x;
        b = y;
    };
    void area()
    {
        cout << "area : " << l * b << endl;
        ;
    }
};
/*
int main(){
    rectangle r(4,5);
    r.area();
    rectangle s(5,8);
    s.area();
}*/

class area
{
public:
    int l, b;
    void setDim()
    {
        cout << "enter length:";
        cin >> l;
        cout << "enter breadth:";
        cin >> b;
    }
    void getArea()
    {
        cout << l * b << endl;
    }
};
/*
int main(){
    area rec;
    rec.setDim();
    rec.getArea();
}*/

// Using class without creating object
class average
{
public:
    static double Average(int a, int b, int c)
    { // static
        return (a + b + c) / 2;
    }
};
/*
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << average::Average(a, b, c) << endl;
}
*/
class Complex{
    private:
    int r,i;
    public:
    Complex(int a,int b){
        r=a;
        i=b;
    }
    int getReal(){
        return r;
    }
    int getImg(){
        return i;
    }
    void add(Complex c1){
        cout<<c1.getReal()+r<<"+i("<<c1.getImg()+i<<")\n";
    }
    void subtract(Complex c1){
        cout<<c1.getReal()-r<<"+i("<<c1.getImg()-i<<")"<<endl;
    }
    void product(Complex c1){
        cout<<c1.getReal()*r<<"+i("<<c1.getImg()*i<<")\n";
    }
};

int main(){
    Complex c1(4,5);
    Complex c2(2,3);
    c1.add(c2);         //c2+c1
    c1.subtract(c2);    //c2-c1
    c1.product(c2);     //c2*c1
}
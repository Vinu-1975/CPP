#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;//encapsulation

public:
    void setName(string name)
    { // encapsulation
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }
    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

// access modifiers
// private-not accessible  (private by default)
// public-accessible
// protected-some rules to acess

int main()
{
    Employee employee1 = Employee("Vinayak", "Amrita", 18);
    // employee1.Name = "vinayak";
    // employee1.Company = "Sun City";
    // employee1.Age = 18;
    employee1.IntroduceYourself();

    Employee employee2 = Employee("Aswin", "VIT", 19);
    // employee2.Name = "Aswin";
    // employee2.Company = "VIT";
    // employee2.Age = 19;
    employee2.IntroduceYourself();

    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
}
#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age; // encapsulation

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
    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got promoted !" << endl;
        }
        else
        {
            cout << Name << " ,sorry No promotion for you!" << endl;
        }
    }
};

// access modifiers
// private-not accessible  (private by default)
// public-accessible
// protected-some rules to acess

int main()
{
    Employee employee1 = Employee("Vinayak", "Amrita", 18);

    Employee employee2 = Employee("Aswin", "VIT", 39);
    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
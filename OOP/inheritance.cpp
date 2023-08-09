#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
    string Company;
    int Age; // encapsulation
protected:
    string Name;

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

class Developer : public Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug()
    {
        cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl; // protected
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson " << endl;
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{
    Developer d = Developer("Vinayakan", "Amrita", 18, "C++");
    d.FixBug();
    d.FixBug();
    d.AskForPromotion();
    Teacher t = Teacher("Jack", "Vit", 35, "History");
    t.PrepareLesson();
    t.AskForPromotion();
}
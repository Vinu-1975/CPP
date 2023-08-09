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
    virtual void Work()
    {
        cout << Name << " is checking email, task backlog, performing tasks.." << endl;
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
    void Work()
    {
        cout << Name << " is writing " << FavProgrammingLanguage << " code " << endl;
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
    void Work()
    {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main()
{
    Developer d = Developer("Vinayakan", "Amrita", 18, "C++");
    Teacher t = Teacher("Jack", "Vit", 35, "History");

    Employee *e1 = &d;
    Employee *e2 = &t;
    e1->Work();
    e2->Work();
}
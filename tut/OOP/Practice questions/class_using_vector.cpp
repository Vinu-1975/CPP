/*

Write a program to print the name, salary and date of joining
of 10 employees in a company. Use array of objects.

*/

#include<iostream>
#include<vector>
using namespace std;

class employee{
    string name;
    int salary;
    string date;
    public:
        employee(string name,int salary,string date){
            this->name=name;
            this->salary=salary;
            this->date=date;
        }
        void show_data(){
            cout<<name<<" "<<salary<<" "<<date<<endl;
        }
};

int main(){

    int n;
    cout<<"enter no.of employes";
    cin>>n;
    string name;
    int salary;
    string date;
    vector<employee> item;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>salary;
        cin>>date;
        item.push_back(employee(name,salary,date));
    }
    for(int i=0;i<n;i++){
        item[i].show_data();
    }
}
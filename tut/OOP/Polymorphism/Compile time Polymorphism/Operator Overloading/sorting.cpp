/*

Write a program to print the roll number and average marks
of 8 students in three subjects (each out of 100). 
The marks are entered by the user and the roll numbers 
are automatically assigned.

*/

#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    int rollno;
    int marks[5];
    double avg;
    static int cnt;
    public:
        bool operator<(student &p){//for sort function to work
            return avg<p.avg;//true or false
        }
        void set_roll(int i){
            rollno=++i;
        }
        student(int i,string name, int mar[])
        {
            this->name = name;
            rollno=i;
            for (int i = 0; i < 5; i++)
            {
                marks[i] = mar[i];
            }
        }
        void calc_avg(){
            int sum=0;
            for(int i=0;i<5;i++){
                sum+=marks[i];
            }
            avg=sum/5;
        }
        void show(){
            cout<<rollno<<" "<<name<<" : "<<avg<<endl;
        }
};

int student::cnt=1;//0

int main(){
    vector<student> s;
    for(int i=0;i<2;i++){
        string name;
        int mark[5];
        cout << "enter name: ";
        cin>>name;
        cout << "enter marks";
        for (int j = 0; j < 5; j++)
        {
                cout << "enter marks of subject " << j + 1 << ":";
                cin >> mark[j];
        }
        s.push_back(student(i+1,name,mark));
    }
    for(int i=0;i<2;i++){
        s[i].calc_avg();
        s[i].show();
    }
    sort(s.begin(),s.end());
    for (int i = 0; i < 2; i++)
    {
        s[i].show();
    }
}
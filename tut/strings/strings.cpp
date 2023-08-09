#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str;

    string str1(5,'n');
    cout<<str1<<endl;//nnnnnn

    getline(cin,str);//to get a sentence
    cout<<str<<endl;

    str.clear();//removes everything from the string
    cout<<str<<endl;

    string s1="abc";
    string s2="bcd";
    cout<<s2.compare(s1)<<endl;//outputs
    string s3="abc"; 
    if(s3.compare(s1)==0){
        cout<<"string are equal"<<endl;
    }

    //to check for empty string;
    s3.clear();
    if(!s3.empty()){
        cout<<"string is not empty"<<endl;
    }

    //to delete characters from a string
    string s4="nincompoop";
    s4.erase(3,2);//outputs ninmpoop
    cout<<s4<<endl;

    cout<<s4.find("poo")<<endl;//returns the starting index

    s4.insert(3,"co");//starts inserting at 3rd index
    cout<<s4<<endl;

    cout<<s4.size()<<endl;
    cout<<s4.length()<<endl;

    //to make a substring;
    cout<<s4.substr(6,4)<<endl;//returns poop

    //to convert string to int
    string a="456";
    int x=stoi(a);
    cout<<a+"1"<<" "<<x+1<<endl;
    cout<<to_string(x)+"2"<<endl;//int to string

    //to sort a string
    //must include<algorithm>
    string s11="xxxkkksfjksfksfks";
    sort(s11.begin(),s11.end());
    cout<<s11<<endl;

}

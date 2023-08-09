#include<iostream>
#include<vector>
using namespace std;


// ! A singly linked list is maintained for vectors

void print_vector(vector <int> &v){
    for(auto item:v){
        cout<<item<<"  ";
    }
    cout<<endl;
}

// TODO:  emplace_back is faster than push_back

int main(){
    vector<int> a;

    vector<pair<int,int>> vec;
    vec.push_back({1,2}); // ! have to specify that its a pair
    vec.emplace_back(1,2); // ! automatically assumes (1,2) as pair

    vector<vector<int>> v;
    int rows;
    cin>>rows;
    int columns;
    for(int i=0;i<rows;i++){
        cin>>columns;
        vector<int> temp;
        for(int j=0;j<columns;j++){
            int data;
            cin>>data;
            temp.emplace_back(data);
        }
        v.emplace_back(temp);
    }
    for (int i=0;i<rows;i++){
        print_vector(v[i]);

    }


}
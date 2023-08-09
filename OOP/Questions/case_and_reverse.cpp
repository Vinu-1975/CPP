#include <bits/stdc++.h>
using namespace std;

string reverse(string x){
    for(int i = 0; i < x.length()/2; i++){
        char temp = x[i];
        x[i] = x[x.length() - 1 - i];
        x[x.length() - 1 - i] = temp;
    }
    
    return x;
}

string reverse_case(string x){
    for(int i = 0; i < x.length(); i++){
        if(islower(x[i])){
            x[i] = toupper(x[i]);
        }
        else if(isupper(x[i])){
            x[i] = tolower(x[i]);
        }
    }
    
    return x;
}

int main(){
    vector<string> sentence;
    
    string x;
    while(cin >> x){
        sentence.push_back(x);
    }
    
    for(int i = 0; i < sentence.size(); i++){
        sentence[i] = reverse_case(sentence[i]);
    }
    cout << "The string after changing case of each character: ";
    
    for(int i = 0; i < sentence.size(); i++){
        cout << sentence[i] << " ";
    }
    
    cout << endl;
    
    cout << "The string after reversing each word and string: ";
    
    for(int i = sentence.size() - 1; i >= 0; i--){
        cout << reverse(sentence[i]) << " ";
    }
}
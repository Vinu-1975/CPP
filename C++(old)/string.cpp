 #include<iostream>
 #include<cstring>
 using namespace std;

 int main(){
   char a[100] = "My name is Ayush";
   char* ch = strchr(a, 'a');
   cout << ch - a + 1<<endl;
   //to check if a letter is present or not
   if (ch!=NULL){
      cout<<'a'<<" "<<"is present";
   }

   return 0;
    
 } 
#include<iostream>
using namespace std;

class Sort{

protected:
int a[10];

public:
int n;
void read()
{   //@start-editable@

    for (int i = 0; i < n; i++) {
            cin >> a[i];
    }

 //@end-editable@

}
void print()
{   //@start-editable@

    for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
    }
 
 
 //@end-editable@

}

void selectionSort() {
 //@start-editable@

    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] < a[j]) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
        }
    }
 
 
 //@end-editable@
}
};

class binary_search : public Sort
{
    public:
    int num;
    int binarySearch(int startindex, int endindex) {
    //@start-editable@

        if(endindex >= startindex){
            int mid = startindex + (endindex - startindex) / 2;
            
            if(a[mid] == num){
                return mid;
            }
            
            else if(a[mid] > num){
                return binarySearch(startindex, mid - 1);
            }
            
            else{
                return binarySearch(mid + 1, endindex);
            }
        }

        return -1;
 
 
 //@end-editable@
}
};


int main() {
  binary_search BS;
  int choice,index;
  cin>>BS.n;
  BS.read();
  cin>>choice;
  if(choice==1)
  {
   //@start-editable@

 BS.print();
 
 
 //@end-editable@

  }
  if(choice==2)
  {
   //@start-editable@

 BS.selectionSort();
        BS.print();
 
 
 //@end-editable@

  }
  if(choice==3)
  {
   //@start-editable@

        cin >> BS.num;
        BS.selectionSort();
        int index = BS.binarySearch(0, BS.n-1);
 
 
 //@end-editable@

  if(index == -1){
      cout<< BS.num <<" is not present in the array";
   }else{
      cout<< BS.num <<" is present at index "<< index <<" in the Sorted array A";
   }
  }
return 0;
}
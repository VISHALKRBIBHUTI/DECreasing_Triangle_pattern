#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=(i-1);j>=1;j--){
            cout<<" ";
        }
        for(int j=(num+1);j>=(i+1);j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

/*  // output of the code :
if ---> 5 as input;
*****
 ****
  ***
   **
    * 



  */
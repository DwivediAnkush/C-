#   include <iostream>
using namespace std;
int global=7;
void sum(){
    int a;
    cout<< global;
  
     }
int main(){
    int global=45;
    global=40;
    int a=20 , h= 89;
    sum();
    cout<<global;  /*'<<' this is insertion operator*/
}
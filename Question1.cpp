#include <iostream>
#include <string>
using namespace std;
int main(){
    //dynamic allocate integer variable
    int* varl=new int;
    
    cout<<"Enter the integer value: "<<endl;
    cin>>*varl;
    string* words=new string[100];
    cout<<"Enter string value :"<<endl;
    cin.ignore();
    getline(cin,*words);
    cout << " Dynamically allocated integer value: " << *varl << endl;
    cout << " Dynamically allocated string value: " << *words << endl;
delete varl;
delete [] words;
}   
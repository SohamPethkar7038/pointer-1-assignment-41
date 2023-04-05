// write a program to print the integer values whose value is input by the user //

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    int *ptr=&num;
    cout<<"The address of the num which is an integer value is : "<<ptr<<endl;
    return 0;
}
// implement swapping function using pointers //

#include<iostream>
using namespace std;
void swap(int *num1 , int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}

int main(){
    int num1,num2;
    cout<<"enter the number : ";
    cin>>num1;
    cout<<"enter the second number : ";
    cin>>num2;
    swap(num1,num2);
    cout<<"Swapping of the number is : "<<num1 <<" "<<num2<<endl;
    return 0;
}
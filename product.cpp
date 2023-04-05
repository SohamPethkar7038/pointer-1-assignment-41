// write a product of two number using pointer //

#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    int *ptr1=&num1;
    int *ptr2=&num2;
    int product=*ptr1 * *ptr2;
    cout<<"Multiplication of the two number is : "<<product;
    return 0;
}
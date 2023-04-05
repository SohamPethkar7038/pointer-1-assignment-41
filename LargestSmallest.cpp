// write a function which returns a largest and smallest number out of 3 given number. //
// The main function should call this function to get largest and smallest number and print the output //

#include<iostream>
using namespace std;
int SmallestAndLargest(int n1,int n2,int n3,int *largest){
    *largest=max(n1,max(n2,n3));
    return min(n1,min(n2,n3));
}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int largest;
    int smallest=SmallestAndLargest(n1,n2,n3,&largest);
    cout<<"largest number is: "<<largest<<' '<<"smallest : "<<smallest<<endl;
    return 0;
}

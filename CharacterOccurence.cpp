// write a function that returns first character last character and number of occurence of 't' in string input by user //

#include<iostream>
using namespace std;
char find(string s, char *f, char *l)
{
    int ln,cnt=0,i;
    ln=s.length()-1;
   *f=s[0];
   *l=s[ln];
    for(i=0;i<=ln;i++)
    {
        if(s[i]=='t')
            cnt++;
    }
    return cnt;
}

int main(){
    char f,l;
    int cnt;
    string str;
    cin>>str;
    cnt=find(str,&f,&l);
    cout<<"Firts char="<<f<<endl;
    cout<<"Last Char"<<l<<endl;
    cout<<"No of t="<<cnt<<endl;
}

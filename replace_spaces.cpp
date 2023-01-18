#include<iostream>
using namespace std;
int main()
{
    string str = " my name is shubham " ; 
    cout <<str <<endl;
    for (int i=0 ; i<str.length() ; i++)
    {
        if ( str[i]==' ') //means agar space dikha toh ..space k jgh pr @ fill karo.
    {
        str[i]='@';
    }
    else{
        str[i];
    }
    }
    cout<<str<<endl;
}
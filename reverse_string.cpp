#include<iostream>
#include<cstring>
using namespace std;
//Reverse function.It is as same as we were doing in array.
void reverse(char name[] , int n )
{
    int start = 0;
    int end = n-1 ;
    while(start<end)
    {
        swap(name[start++] , name[end--]);
    }
}
int main()
{
    char name[6] = "intel" ;
    cout<<"perfect name is :"<<name<<endl; //Displaying original name.
    cout<<strlen(name) <<endl; //Length of the name.
    reverse(name,strlen(name)); //Calling reverse function.
    cout<<"reverse name will b ::"<<name<<endl; //Displaying the reverse name.
}
#include<iostream>
#include<cstring> // use for string 
using namespace std ;

// length nikal ne k liye function ..
 int getLength(char name[])
 {
    int count =0;
    for (int i=0 ; name[i] != '\0' ; i++) //name[i] != '\0' This means Key jab Tak hume null character nahi milta tbh thk loop ko traverse karte raho.
    {
         count++;
    }
    return count;
 }

int main()
{
    char name[10] = "shub\0ham\0" ;
    // string str ="shub\0ham";
    // cout<<"string name"<<str<<endl;
   // cout<<"string lenghth"<<strlen(str)<<endl;
    cout<<name<<endl;
    cout<<"length::"<<strlen(name)<<endl; //length inbuilt function ..

                // or in other way ..We can use string length in function type also.
                // Creating function.Below.
    cout<<getLength(name)<<endl;

}
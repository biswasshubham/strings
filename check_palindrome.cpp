//What is palindrome? ...Palindrome means the original name and the reverse name will be the same.
#include<iostream>
#include<cstring>
using namespace std;
bool checkPalindrome(char name[] , int n )
{
    int start =0;
    int end = n-1;
    while(start<=end)
    {
        if (name[start] == name[end]) // If the starting and ending values are same... Means name[0]==name[n-1]
        {
             start++;
            end--; 
        }
        else{ //If the starting and ending values are different.Then just move Out from the loop.
           return 0;
        }
         return 1;
    }
   
}
int main()
{
    char name[20]="noon";
    cout<<name<<endl;
    cout<<strlen(name)<<endl;
    cout<<"palindrome is ::"<<checkPalindrome(name ,strlen(name));

   
}

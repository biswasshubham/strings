#include<iostream>
using namespace std ;
void reverse(string &str )
{
    int start = 0;
    int n = str.length()  ;
    int end = n-1 ;
    while(start<=end)
    {
        swap(str[start] , str[end]) ;
        start++;
        end-- ;
        
    }
}
int main()
{
    string str = "shubham biswas" ;
    reverse(str) ;
    cout<<str<<endl;
}
#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string s;
    //cin>>s;   --> means yh vala statmenet spcae k phele thk ka he print karega 
    getline(cin , s); // or yaha getline means pura sentence i/p mh lega space bhi (cin , s ) means taking i/p type of string s 
    cout<<s<<endl; // printing 


}
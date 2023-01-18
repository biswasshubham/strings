                                                                //L - 22 STRINGS  

#include<iostream>
using namespace std;
char getMaxOccCharacter(string s)
{
    int arr[26]  = {0} ; //1) sare alphabtes ko starting zero se intialize krdiya.

    // PART 1 - creating an array for count of characters..

    for(int i=0;i<26;i++) //traversing to all 26alphabhets. or sare alphabets ko indexes k sath map krdiya hai ..{FOR MAPPING C NTBK.}
    {
        char ch = s[i] ; //2) joh bhi word mh i/p mh de rha hu voh array mh store karega

        //lowercase..
        int number = 0 ;
        number = ch -'a'; // formula for getting number by alphabhet in lowercase.
        arr[number]++; //3) main step ..count ko increment kiya ...
        // 1) for eg: if i given i/p as: TEST ..ismh sbhse phele voh array k andhr zero hoga ..bcoz inat arr[26]={0};
        // 2) phir mh voh i/p (TEST) ko array mh set kiya ..yani ki ek box mh T ayega , phir ek box mh E ayega ,  phir ek box mh S ayega ,  phir  phirse T aya ...
        // 3) jbhi koi alphabtes phir se aa rha hai tbhi hum usk count ko ++ kr rhe hai ...jaise ki yaha t ko phele zero se 1 kiya ..phir one se two kiya ..

            //FOR UPPERCASE ::  number = ch -'A';

        // PART-2 :: FINDING MAXIMUM OCC CHARACTER
        int maxi = 0;
        int ans = 0;
        for (int i=0 ; i<26 ; i++)
        {
            if(maxi < arr[i])
            {
                ans = i;  // ans mh index store kr liya 
                maxi = arr[i];
            }
        }
        char finalAns = 'a'+ ans; //formula for removing integer se character mh 
        return finalAns ; 
    }
}

int main()
{   
    //taking i/p string 
    string s ;
    cin>>s;
    cout<<s<<endl;

    cout<<getMaxOccCharacter(s)<<endl;

}
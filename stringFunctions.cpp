#include<iostream>
#include<algorithm>
// #include<string>
using namespace std;
int main()
{


//IF BOTH STRING ARE EQUAL THE FUNCTION RETURNS 0;
    string s1="Adi";
    string s2="Adi";
    cout<<s1.compare(s2)<<endl;;

//IF THE FIRST STRING IS LARGER THAN THE SECOND STRING, IT RETURNS POSITIVE NUMBER OF CHARACTERS THAT ARE EXTRA

    string s3="Adii";
    string s4="Ad";
    cout<<s3.compare(s4)<<endl;

//IF THE SECOND STRING IS LARGER THAN THE FIRST STRING, IT RETURNS NEGATIVE NUMBER OF CHARACTERS THAT ARE EXTRA
    
    string s5="Ad";
    string s6="Adii";
    cout<<s5.compare(s6)<<endl;

//IF THE STRINGS ARE OF EQUAL LENGTH BT ARE NOT IDENTICAL AND THE FIRST UNIDENTICAL CHAARCTER OF FIRST STRING IS LARGER THAN THAT OF SECOND STRING, THEN IT RETURNS 1 

    string s7="mah";  // we can use Mah or mah
    string s8="Adi";
    cout<<s7.compare(s8)<<endl;

    //IF THE STRINGS ARE OF EQUAL LENGTH BT ARE NOT IDENTICAL AND THE FIRST UNIDENTICAL CHAARCTER OF SECOND STRING IS LARGER THAN THAT OF FIRST STRING, THEN IT RETURNS -1 

    string s9="Adi";  // we can use Mah or mah
    string s10="Mah";
    cout<<s9.compare(s10)<<endl;

    //FINDS AND RETURN THE STARTING INDEX OF THE SPCIFIED SUBSTRING
    string s12="Adi is here";
    cout<<s12.find("here")<<endl;
    

    //RETURNS THE SUBSTRING OF A STRING
    cout<<s12.substr(2,5)<<endl;
    
    //SORTS THE STRING 
    string s13="zyxwvuts";
    sort(s13.begin(),s13.end());
    cout<<s13<<endl;

    //REVERSES THE STRNG 
    string s14="adiTanu";
    reverse(s14.begin(),s14.end());
    cout<<s14<<endl;

    //SORT STRING IN DESCENDING ORDER
    string s15="asdjhgjhdgdfdg";
    sort(s15.begin(),s15.end());
    cout<<s15<<endl;
    reverse(s15.begin(),s15.end());
    cout<<s15<<endl;
    return 0;
}
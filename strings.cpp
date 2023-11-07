#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    // cin>>str;
    // cout<<str;
    // string str1(5, 'n');
    // string str = "ApniKaksha";
    // cout << str << endl;

    // string str;
    // getline(cin, str);
    // cout << str << endl;

    // string s1 = "fam";
    // string s2 = "ily";
    // s1.append(s2);
    // s1 += s2;
    // cout << s1 + s2 << endl;
    // cout << s1[2] << endl;

    // string abc = "asfsg cfdsg dfg df gdfs g";
    // abc.clear(); //clears the content of the string
    // cout << abc << endl;

    // string s1 = "abc";
    // string s2 = "xyz";
    // cout << s1.compare(s1) << endl;

    /*
    s1.compare(s2)>0 then s1 is greater than s2
    s1.compare(s2)<0 then s1 is smaller than s2
    s1.compare(s2)=0 then s1 is equal than s2
    */

    // string s1 = "abc";
    // cout << s1 << endl;
    // s1.clear();
    // if (s1.empty())
    // {
    //     cout << "string is empty" << endl;
    // }

    // string s1 = "nincompoop";
    // s1.erase(3 /*start idex*/, 3 /*number of characters to delete*/);
    // cout << s1.find("com") << endl;
    // s1.insert(2 /*the index we need to insert*/, "lol" /*the string that has to be inserted*/);
    // cout << s1 << endl;

    // cout<<s1.size(); //length() can also be used

    // string s = s1.substr(6,4);
    // cout<<s;

    // string s1 = "786";
    // int x = stoi(s1); //converting a numeric string into integer
    // cout<<x+1<<endl;

    // int x = 888;
    // cout << to_string(x) + "2" << endl; //converting an integer to a string

    string s1 = "asfgogsdkencvkodg";
    sort(s1.begin(), s1.end());
    cout << s1;

    return 0;
}
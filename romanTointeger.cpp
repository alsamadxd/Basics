// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, 
// which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. 
// Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances 
// where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.


// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.


// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.







#include<iostream>
#include<string>
using namespace std;

int romantoInt(string s){
    int i,len,sum=0;
    char c,c2;
    string s1=s;
    len=s1.length();
    for(i=len;i>0;i--){
        if(s.at(i-1)=='I'){
            sum+=1;
        }
        if(s.at(i-1)=='V'){
            sum+=5;
        }
        if(s.at(i-1)=='X'){
            sum+=10;
        }
        if(s.at(i-1)=='L'){
            sum+=50;
        }
        if(s.at(i-1)=='C'){
            sum+=100;
        }
        if(s.at(i-1)=='D'){
            sum+=500;
        }
        if(s.at(i-1)=='M'){
            sum+=1000;
        }
    }

    for(int i=0;i<s1.length()-1;i++){
        c=s.at(i);
        c2=s.at(i+1);       

        if((c=='I') && ((c2=='V') || (c2=='X'))){
            sum-=1+1;
        }
        if((c=='X') && (c2=='L' || c2=='C')){
            sum-=10+10;
        }
        if((c=='C') && (c2=='D' || c2=='M')){
            sum-=100+100;
        }
    }
    
    return sum;
}

int main(){
    string s;
    cout<<"enter the roman numbers"<<endl;
    getline(cin,s);
    int sum=romantoInt(s);
    cout<<sum;
}
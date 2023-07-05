//
//  Reverse a String.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 05/07/23.
//
string reverseWord(string str){
    
int i=0;
int j=str.length()-1;
for(;i<j;){
    swap(str[i],str[j]);
    i++;
    j--;
}
return str;
}

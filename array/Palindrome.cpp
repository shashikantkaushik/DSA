//
//  Palindrome.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

string is_palindrome(int n)
{
string num = to_string(n);
string yes="Yes";
string no="No";
int k=num.size()-1;
int i=0;
while(i<k){
if(num[i]==num[k]){

}
else{
return no;
}
i++;
k--;
}
return yes;

}

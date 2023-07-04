//
//  Palindrome String.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

int isPalindrome(string S)
{
    int i=0;
    int j=S.size()-1;
       while(i<j){
        if(S[i]==S[j]){
           
        }
        else{
            return 0;
        }
        j--;
        i++;
    }
    return 1;
}

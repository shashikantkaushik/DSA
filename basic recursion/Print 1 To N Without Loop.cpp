//
//  Print 1 To N Without Loop.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

Print 1 To N Without Loop
void printNos(int N)
 {
         if(N==0) return;
printNos(N-1);
     cout<<N<<" ";
     
 }

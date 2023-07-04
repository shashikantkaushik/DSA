//
//  Print GFG n times.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

void printGfg(int N) {
     if(N==0) return;
     printGfg(N-1);
     cout<<"GFG"<<" ";
  }

//
//  Print N to 1 without loop.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//

void printNos(int N) {
  if(N==0) return;
  cout<<N<<" ";
  printNos(N-1);
}

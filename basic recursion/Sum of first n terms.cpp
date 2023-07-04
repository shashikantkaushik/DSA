//
//  Sum of first n terms.cpp
//  C++ DSA 
//
//  Created by Shashi Kant on 30/06/23.
//
//solve this with the help of recursion
long long sumOfSeries(long long N) {
     // code hereint =
          if (N == 0)
     return 0;
     
     return (N * N * N) + sumOfSeries(N-1);
 }

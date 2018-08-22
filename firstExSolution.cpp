#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
NumericVector rowMeans_Cpp(NumericMatrix x) {
  int p;
  p = x.nrow();
  NumericVector meanVec(p);
  
  for(int i =0; i < p; i++){
    meanVec[i] = mean(x(i,_));
  }
  
  return meanVec;
}

/*** R
mat <- matrix(runif(1000),100,10)
rowMeans_Cpp(mat)

#Do you get the same results?
range(rowMeans_Cpp(mat)-apply(mat,1,mean))
range(rowMeans_Cpp(mat)-rowMeans(mat))

library(microbenchmark)
microbenchmark(apply(mat,1,mean),rowMeans_Cpp(mat))
microbenchmark(rowMeans(mat),rowMeans_Cpp(mat))
*/

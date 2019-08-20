#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
rowMeans_Cpp <- function(x){
  p = nrow(x)
  meanVec = rep(NA,p)
  for(i in 1:p){
    meanVec[i] = mean(x[i,])
  }
  
  return(meanVec)
}


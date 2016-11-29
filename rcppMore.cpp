#include <Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
float quantos(NumericVector x) {
  float soma = 0;
  float media = 0;
  int cont = 0;
  int n = x.size();
  
  for(int i=0; i<n; i++)
    soma += x[i];
  
  media = soma/n;
  
  for(int j=0; j<n; j++){
    if(x[j] > media)
      cont += 1;
  }

  return cont;
}


// [[Rcpp::export]]
NumericVector bubble(NumericVector x){
  
  int n = x.size();
  float a, b;
  bool trocado;
  
  do{
    trocado = false;
    
    for(int i=0; i<(n-1); i++){
      if(x[i] > x[i+1]){
        a = x[i];
        b = x[i+1];
        x[i] = b;
        x[i+1] = a;
        trocado = true;
      }
    }
  } while (trocado);
  
  return x;
}


// [[Rcpp::export]]
float arctan(float x){
  int k=1;
  float acu = 0;
  float exp= 2;
  
  do{
    acu += pow(-1,exp)*pow(x,k)/k;
    exp += 1;
    k += 2;
  } while (sqrt(pow(x,k)/k) > sqrt(0.0001));
  
  return acu;
}

/*** R
library(microbenchmark)

#notas = runif(30,0,10)
#microbenchmark(quantos(notas),length(notas[notas>mean(notas)]))
Nordenado = runif(100)
bubble(Nordenado)
setequal(bubble(Nordenado),sort(Nordenado))
microbenchmark(bubble(Nordenado),sort(Nordenado))  
microbenchmark(atan(0.5), arctan(0.5))

*/

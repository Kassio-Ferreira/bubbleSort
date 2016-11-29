vet <- runif(10)
sort(vet)

bubbleSort<-function(vet){

  repeat{
    trocado = FALSE;
    for (i in 1:(length(vet)-1)){
      if(vet[i] > vet[i+1]){
        a = vet[i]
        b = vet[i+1]
        vet[i] <- b 
        vet[i+1] <- a
        trocado = TRUE
      }
    }
  
  if(trocado == FALSE)
    break;
  }
 
  return(vet) 
}

bubbleSort(rnorm(1000))
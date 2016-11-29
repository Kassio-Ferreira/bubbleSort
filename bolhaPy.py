# -*- coding: utf-8 -*-
"""
Created on Fri Nov 18 09:35:22 2016

@author: kassio
"""

# Escreva um algoritmo para ler a nota de 30 alunos, calcular a média
# geral da turma e escrever quantos 
# alunos tiveram a nota acima da média calculada. 

import numpy as np
import time

notas = np.random.uniform(0,10,30)
notas

len(notas[notas > np.mean(notas)]) # jeito moleza

# jeito dureza:

def quantos(vetor):
    media = sum(vetor/len(vetor))
    contador = 0
    
    for i in vetor:
        if i > media:
            contador = contador + 1
    return contador
    
    
quantos(notas)

# bubblesort in python

def bubble(vetor):
    trocado = True
    
    while(trocado):
        trocado = False
        for i in range(0,len(vetor)-1):
            if vetor[i] > vetor[i+1]:
                a = vetor[i]
                b = vetor[i+1]
                vetor[i] = b
                vetor[i+1] = a
                trocado = True
        if trocado==False:
            break
    return vetor

            
sort1 = bubble(notas)
sort2 = np.sort(notas)    
np.array_equal(sort1,sort2)


t0 = time.time()
data = bubble(notas)   
time.time() - t0












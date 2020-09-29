// Faça um programa que receba do usuário a quantidade de elementos de uma Progressão Aritmetica (PA) e a razão,
// gere uma PA em lista com a quantidade de elementos definida pelo usuário e imprima.
// Uma PA tem como primeiro elemento o número 0 e o próximo elemento é o anterior somando a razão.

#include <iostream>  
#include <stdio.h> 
 
  using namespace std;  
  int main()
  {  
  int numero[10];  
  int razao,n1; 
    
  	cout <<"Digite um valor inicial o qual iniciara nossa sequencia: ";  
  	cin >>n1;  
  	cout <<"Digite um numero como razao para nossa sequencia: ";  
  	cin >>razao;
	    
  for (int i=0; i<10; i++)
  {  
   cout <<n1 << " ";  
   n1=n1+razao;  
  }  
  return 0;  
  } 

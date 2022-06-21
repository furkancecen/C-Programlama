#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void insertion(int dizi[],int boyut){
	 
	int eleman;
	int oncesi;
	
	
	for(int i=1;i<boyut;i++){
		eleman = dizi[i];
		oncesi=i-1;
		
		while(oncesi>=0 && dizi[oncesi]>eleman){
			dizi[oncesi+1]=dizi[oncesi];
			oncesi--;
		}   
		
		dizi[oncesi+1]=eleman; 
		
		
		
		
		
	}
	
}





int main(){
	
	int sayilar[MAX],boyut;
	printf("Kac Elamnlý Bir Dizi Olsun ?");
	scanf("%d",&boyut);
	
	for(int i=0;i<boyut;i++){
		printf("%d. Elemani Giriniz.",i+1);
		scanf("%d",&sayilar[i]);
	}
	
    for(int i=0;i<boyut;i++){
    	printf("%d ",sayilar[i]);
	}	
	
	insertion(sayilar,boyut);
	
	for(int i=0;i<boyut;i++){
    	printf("%d ",sayilar[i]);
	}	
    
    
    	
	
	
	
	
	
	return 0;
}

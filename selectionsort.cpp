#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void selection(int dizi[],int boyut){
	 int enKucuk;
	 
	 for(int i=0;i<boyut;i++){
	 	enKucuk=i;
	 	for(int j=i;j<boyut;j++){
	 		if(dizi[j]<dizi[enKucuk]){
	 			enKucuk=j;
			 }
		 }
		 
		 int temp=dizi[i];
		 dizi[i]=dizi[enKucuk];
		 dizi[enKucuk]=temp;
		 
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
	
	selection(sayilar,boyut);
	
	for(int i=0;i<boyut;i++){
    	printf("%d ",sayilar[i]);
	}	
    
    
    	
	
	
	
	
	
	return 0;
}

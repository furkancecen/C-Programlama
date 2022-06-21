#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void bubble(int dizi[],int boyut){
	
	for(int i=0;i<boyut;i++){
		for(int j=0;j<boyut-i-1;j++){
			if(dizi[j]>dizi[j+1]){
				int temp=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=temp;
				
				
			}
		}
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
	
	bubble(sayilar,boyut);
	
	for(int i=0;i<boyut;i++){
    	printf("%d ",sayilar[i]);
	}	
    
    
    	
	
	
	
	
	
	return 0;
}

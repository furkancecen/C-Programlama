#include<stdio.h>
#include<stdlib.h>

int faktoriyel(int sayi){
	if(sayi==0){
		return 1;
	}else if(sayi==1){
		return 1;
	}else{
		return sayi * faktoriyel(sayi-1);
	}
}



int main(){
	int sayi,sonuc;
	sayi=6;
	sonuc=faktoriyel(sayi);
	printf("%d",sonuc);
	
}

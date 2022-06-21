#include<stdio.h>
#include<stdlib.h>

struct node{
	int sayi;
	struct node* sonraki;
};


int main(void){
	//Ekleme
	struct node *ilk=NULL;
	struct node *ptr=NULL;
	int okunan;
	
	for(int i=0;i<10;i++){
		printf("Lütfen sayý giriniz...");
		scanf("%d",&okunan);
		
		if(ilk==NULL){
			ilk = (struct node*) malloc (sizeof(struct node));
			ilk->sayi=okunan;
			ilk->sonraki=NULL;
			ptr=ilk;
		}else{
			ptr->sonraki=(struct node*) malloc (sizeof(struct node));
			ptr=ptr->sonraki;
			ptr->sayi=okunan;
			ptr->sonraki=NULL;
			
			
		}
	}
	// Listeleme
	struct node* gecici;
	gecici=ilk;
	
	while(gecici!=NULL){
		printf("Deger: %d \n",gecici->sayi);
		gecici=gecici->sonraki;
	}
	
	// Arama
	
	struct node *BUL=NULL;
	int aranan,bulundu;
	
	bulundu =0;
	
	printf("Lutfen Aranan Degeri Giriniz: ");
	scanf("%d",&aranan);
	
	gecici=ilk;
	
	while(gecici!=NULL){
		if(gecici->sayi==aranan){
			bulundu =1;
			BUL = gecici;
			break;
		}
		gecici = gecici -> sonraki;
	}
	
	if(bulundu>0){
		printf("Aranan Deger %d Bulundu.",BUL->sayi);
	}else{
		printf("Aranan Deger Bulunamadi.");
	}
	
	// Bastan Silme
	
	gecici=ilk;
	ilk = ilk->sonraki;
	free(gecici);
	
	//sondan silme
	
	gecici=ilk;
	
	while(gecici->sonraki->sonraki!=NULL){
		gecici=gecici->sonraki;
	}
	free(gecici->sonraki);
	
	//tüm listeyi silme
	
	while(ilk!=NULL){
		gecici=ilk;
		ilk = ilk->sonraki;
		free(gecici);
	}
	
}

#include<stdio.h>
#include<stdlib.h>

int girilenSayiyaKadargoster(int x) {
    if (x == 0)
        return 0;
    printf("%d ", x);
    return girilenSayiyaKadargoster(x - 1);
 
}
 
int main() {
    int sayi = 10;
    int sonuc = girilenSayiyaKadargoster(sayi);
    printf("%d",sonuc);
    
    return 0;
}
 


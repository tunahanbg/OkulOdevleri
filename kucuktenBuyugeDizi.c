#include <stdio.h>

void sirala(int dizi[]){

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (dizi[j] < dizi[i])
            {
                int temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
            
        }
        
    }
    
}


int main(){
    
    int dizi[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Bir sayi giriniz:");
        scanf("%d", &dizi[i]);
    }

    sirala(dizi);

    for (int j = 0; j < 5; j++)
    {
        printf("%d ", dizi[j]);
    }
    
    
    
    return 0;
}
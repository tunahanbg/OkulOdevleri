#include <stdio.h>

int main(){

    float lisans, yds, mort, gort;
    
    printf("Lisans ortalamasini giriniz: ");
    scanf("%f", &lisans);
    printf("Yds ortalamsini giriniz: ");
    scanf("%f", &yds);

    if(yds < 70)
    {
        printf("Yds ortalamasi 70'den kucuk oldugu icin basvuru yapilamaz.");
        return 0;
    }

    printf("Mezuniyet ortalamsini giriniz: ");
    scanf("%f", &mort);

    gort = lisans * 0.5 + yds * 0.25 + mort * 0.25;
    printf("Genel ortalamaniz: %.2f \n", gort);

    if(gort <= 60)
    {
        printf("Genel ortalama 60'dan kucuk oldugu icin basvuru yapılamaz.");
    }
    if(gort > 60 && yds >= 70)
    {
        printf("Basvurunuz onaylanmistir.");
    }
    
    
    return 0;
}
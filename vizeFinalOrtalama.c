#include <stdio.h>
int i;
void ortalma(float vize[] , float final[],float ortalama[]){

    for (int i = 0; i < 5; i++)
  {
    ortalama[i]=final[i] * 0.6  + vize[i] * 0.4;
  }

}

void yazdir(float vize[] , float final[] , float ortalama[]){
  for (int i = 0; i < 5; i++)
  {
    int n=i+1;
    printf("%d. ogrencinin bilgileri : \n",n);
    printf(" ogrencinin vizesi %2.f\n",vize[i]);
    printf(" ogrencinin finali %2.f\n",final[i]);
    printf(" ogrencinin  ortalamasi:%2.f\n",ortalama[i]);
  }

}


int main(){


  float vize[5], final[5],ortalama[5];
  int c=0,v=0;
  for (int i = 0; i < 5; i++)
  {
    c=i+1;
    printf("%d. ogrencinin vize notunu giriniz:\n", c);
    scanf("%f", &vize[i]);
  }

  for (int j = 0; j < 5; j++)
  {
    v=j+1;
    printf("%d. ogrencinin final notunu giriniz:\n", v);
    scanf("%f", &final[j]);
  }

    ortalma(vize,final,ortalama);
    yazdir(vize,final,ortalama);

  return 0;
}

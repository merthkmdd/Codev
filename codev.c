#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
		
		Odev 1 Kullanicidan alinan bir metni tersine �eviren bir C programi yazin. 
		(�rnegin, "Merhaba d�nya!" ifadesini "!ayn�d abahreM" seklinde �evirin.) 
		(Fonksiyon adi: ReverseText)
	
	  char metin[1000] = "";

  		printf("Kelime girin: ");
  		gets(metin);

		printf("%s\n", strrev(metin));


	
	return 0;
}  


int main() {

	
	�dev2: Kullanicidan alinan bir kelimenin polindrom olup olmadigini kontrol eden bir C programi yazin. 
	(Polindrom, tersten okundugunda da ayni olan kelimelerdir. 
	�rnegin, "kayak" veya "madam" gibi.) (Fonksiyon adi: IsPolindrom)
	
	char str[100];
 	printf("Metni Gir: ");
 	gets(str);
      int i, length;
      int flag = 0;
      length = strlen(str);
      
	  for(i=0;i < length ;i++){
         if(str[i] != str[length-i-1]) {
            flag = 1;
            break;
         }
      }
      if (flag==1){
         printf("%s palindrom degildir.",str);
      } else {
         printf("%s palindromdur.",str);
      }


	
	
	return 0;
}


int main() {

	�dev3: Kullanicidan alinan integer bir dizinin elemanlarini
	 k���kten b�y�ge siralayan bir C programi yazin. 
	 (Siralama algoritmalarini kullanacagiz.) 
	 (Fonksiyon adi: SortIntArr)
	
int dizi[8],i,j,t,fark,min,max;
      
      for(i=1;i<9;i++){
            printf("%d. sayiyi giriniz: ",i);
            scanf("%d",&dizi[i]);
      }
      
      for(i=1;i<9;i++){
            for(j=1;j<9;j++){
                  if(dizi[j]<=dizi[i]){
                        t=dizi[i];  
                        dizi[i]=dizi[j];
                        dizi[j]=t;
                        }
                  }
            }
      
      printf("\nsiralama: ");
      
      for(i = 1;i < 9; i++){
            printf("%d ",dizi[i]);
      }
      
      getch();
      return 0;
}
	
	

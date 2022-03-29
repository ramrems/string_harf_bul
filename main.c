#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int alfabetik_sirala(char array[],int k);
int main()
{
    printf("islem yapmak istediginiz metni giriniz:\n");
    char *metin;
    metin=(char*)malloc(sizeof(char)*42);
    scanf("%s",metin);
    printf("girdiginiz metin: %s\n",metin);
    int x=strlen(metin);
    alfabetik_sirala(metin,x);
}
int alfabetik_sirala(char array[],int k)
{
    for(int n=0; n<k; n++){
        if(array[n]<97){
            array[n]=array[n]+32;
        }
    }
    int i,j,temp,min;
    for(i=0; i<k; i++){
        min=i;
        for(j=i+1;j<k; j++){
            if(array[j]<array[min]){
                min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }
    printf("girdiginiz metnin alfabetik olarak sıralanmıs hali: ");
    for(int i=0; i<k; i++){
        printf("%c",array[i]);
    }
    return 0;
}

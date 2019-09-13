#include <stdio.h>
#include <string.h>

int main(int argc,char* argv[]){

char frase[20];
int i=0;
int chave;
printf("\n\nEscreva uma chave:");
scanf("%d",&chave);



printf("\nDigite a frase a ser encriptada:");

scanf("%s",frase);

printf("\n\nFrase encriptada com sucesso!\n\n");
printf("Encriptacao:  ");
for(i=0;i<strlen(frase);i++)
{

int enc=(int)frase[i]+chave;
printf("%c",(char)enc);
                 }








printf("\n\n");





}

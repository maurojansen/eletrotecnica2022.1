#include <cstdlib>
#include <iostream>
// Este programa calcula a média e verifica a situação de um aluno

using namespace std;

int main(int argc, char *argv[])
{
    float nota1, nota2, media;
    
    printf("Qual a 1a nota? ");
    scanf("%f",&nota1);
    printf("Qual a 2a nota? ");
    scanf("%f",&nota2);
    media=(nota1+nota2)/2;
    printf("A média é: %f \n",media);  
    if(media>=7)
       printf("Aprovado!\n");
    else
       printf("Recuperação\n");
     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

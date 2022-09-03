#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float n=1, soma=0, quantidade=0, media=0, menor=0, maior=0;   // -- aqui
    while(n!=0) {
       printf("Digite um número (zero=fim):");
       scanf("%f",&n);
       soma+=n;
       if(n!=0) {
          quantidade++;
          if(n > maior )
             maior=n;
          if(n < menor || menor==0  )
             menor=n;
       }
    }
    printf("A soma dos números digitados eh: %f \n",soma);
    media=soma/quantidade;
    printf("Você digitou %f numeros \n",quantidade);
    printf("A media eh: %f \n",media);
    printf("O maior eh: %f \n",maior);
    printf("O menor eh: %f \n",menor);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

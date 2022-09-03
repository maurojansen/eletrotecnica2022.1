#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float n=1, soma=0;
    while(n!=0) {
       printf("Digite um número (zero=fim):");
       scanf("%f",&n);
       soma+=n;
       }
    printf("A soma dos números digitados eh: %f",soma);
    system("PAUSE");
    return EXIT_SUCCESS;
}

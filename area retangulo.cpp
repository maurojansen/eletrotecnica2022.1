#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float base, altura, area;
    
    printf("Qual o valor da base?");
    scanf("%f",&base);
    printf("Qual o valor da altura?");
    scanf("%f",&altura);
    area=base*altura;
    printf("A área é: %f \n",area);    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

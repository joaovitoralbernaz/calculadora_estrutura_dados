#include <stdio.h>
#include <stdlib.h>



void menu_principal(){
    int op;

    printf("============================================\n");
    printf("               CALCULADORA                  \n");
    printf("============================================\n");

    printf("Qual operacao voce deseja fazer hoje: \n1.Soma\n2.Subtração\n3.Multiplicação\n4.Divisão\n5.Exponenciação\n6.Raiz Quadrada\n7.Soma de n valores\n8.Calculo da sequencia de fibonacci\n9.Area do Circulo\n10.Area do retangulo\n11.Volume do cubo\n12.Volume do Cilindro\n0.Sair\n ");
    scanf("%d" , &op);




    switch(op){
        case 1:
            void soma();
            printf("oooo");

 /*       case 2:
            subtracao();
            break;

        case 3:
            multiplica();
            break;

        case 4:
            divisao();
            break;

        case 5:
            potencia();
            break;

        case 6:
            raiz();
            break;

        case 7:
            somavalr();
            break;

        case 8:
            fibonacci();
            break;

        case 9:
            areacirculo();
            break;

        case 10:
            arearetangulo();
            break;

        case 11:
            volumecubo();
            break;

        case 12:
            volumecilindro();
            break;
*/
        case 0:

            break;

        default:
            printf("Escolha uma op valida");
            break;


    }


}

void soma(){

    float n1, n2, res;

    printf("Digite o 1 termo: ");
    scanf("%f" , &n1);
    printf("Digite o 2 termo: ");
    scanf("%f" , &n2);

    res = n1 + n2;


    printf("\nO resultado: %f" , res);

    menu_principal();

}


void subtracao(){

    float n1, n2, res;

    printf("Digite o 1 termo: ");
    scanf("%f" , &n1);
    printf("Digite o 2 termo: ");
    scanf("%f" , &n2);

    res = n1 - n2;


    printf("\nO resultado: %f" , res);

    menu_principal();

    return 1;
}




int main(){
    menu_principal();

    return 0;
}

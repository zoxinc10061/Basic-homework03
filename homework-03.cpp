#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   float height,m,weight,BMI; 

    printf("======�ӨϥΪ̪�BMI��T======\n"); 

    printf("�z���������G");

    scanf("%f",&height);

    printf("�z���魫���G");

    scanf("%f",&weight);

    printf("=============================\n");

    m=height/100;

    BMI=weight/(m*m);

    printf("BMI = %.2f\n\n",BMI);

    system("pause");

    return 0;

}

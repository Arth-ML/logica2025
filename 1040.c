#include <stdio.h>
#include <stdlib.h>

int main(){
    double N1, N2, N3, N4;
    double Media;

    scanf("%lf", &N1);
    scanf("%lf", &N2);
    scanf("%lf", &N3);
    scanf("%lf", &N4);

    Media = (N1 * 2 + N2 * 3 +  N3 * 4 + N4 * 1)/10.0;

    if(Media >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(Media < 5.0){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame. \n");

        double notaExame, MediaFinal;
        scanf("%lf", &notaExame);
        printf("Nota do exame: %.1lf\n", notaExame);

        MediaFinal = (Media + notaExame)/2.0;

        if(MediaFinal >= 5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", MediaFinal);
    }


    printf("Media: %.1lf", Media);

    
    return 0;
}
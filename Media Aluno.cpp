#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
setlocale(LC_ALL, "Portuguese");

struct ficha_do_Aluno {

char nome_do_Aluno [80];
int idade_do_Aluno;
float nota1_do_Aluno, nota2_do_Aluno, nota3_do_Aluno, nota4_do_Aluno, media_do_Aluno; //notas e media

};

struct ficha_do_Aluno Aluno;

printf ("___________________________ \n");
printf ("| ___Cadastro do Aluno____ | \n\n\n");

printf("Digite o nome do aluno..................: ");
fgets(Aluno.nome_do_Aluno, 80, stdin);

printf("Digite a idade do aluno.................: ");
scanf("%d", &Aluno.idade_do_Aluno);

printf("\nDigite a 1ª nota do aluno...............: ");
scanf("%f", &Aluno.nota1_do_Aluno);

printf("Digite a 2ª nota do aluno...............: ");
scanf("%f", &Aluno.nota2_do_Aluno);

printf("Digite a 3ª nota do aluno...............: ");
scanf("%f", &Aluno.nota3_do_Aluno);

printf("Digite a 4ª nota do aluno...............: ");
scanf("%f", &Aluno.nota4_do_Aluno);

Aluno.media_do_Aluno = (Aluno.nota1_do_Aluno + Aluno.nota2_do_Aluno + Aluno.nota3_do_Aluno + Aluno.nota4_do_Aluno) / 4;


printf ("\n\n____________________________ \n");
printf ("| _____Ficha do Aluno______ | \n\n");

printf("Nome do aluno.................................: %s", Aluno.nome_do_Aluno);

printf("Idade do aluno................................: %d \n", Aluno.idade_do_Aluno);

printf ("_____________________________ \n");
printf ("|______Média do Aluno_______ | \n\n");

printf("Média do aluno................................: %.2f \n\n", Aluno.media_do_Aluno);

if (Aluno.media_do_Aluno < 6 && Aluno.media_do_Aluno > 0) {

printf("Aluno reprovado porém não foi zerado");

} else if (Aluno.media_do_Aluno < 6 && Aluno.media_do_Aluno == 0) {

printf("Aluno reprovado e zerado");

} else if (Aluno.media_do_Aluno > 6 && Aluno.media_do_Aluno < 10){

printf("Aluno aprovado");

} else {

printf("Aluno tirou 10, parabéns");

}




return 0;

}

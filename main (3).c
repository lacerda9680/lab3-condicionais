
#include <stdio.h>
#include <stdlib.b>
#include<math.h>

/* EXERCICIO 1
int main(){
    int valorA, valorB;
    printf("Digite o primeiro numero: ");
    scanf("%d", &valorA);
    printf("Digite o segundo numero: ");
    scanf("%d", &valorB);
    if(valorA>valorB){
    printf("%d", valorA);
    }
else(valorB>valorA);
{
    printf("%d",valorB);
    
}
    }*/
    
  /* EXERCICIO 2
int main()
{
    float num1,result;
    printf("digite um numero:\n");
    scanf("%f",&num1);
    

    
    if(num1>0)
    {
        result=sqrt(num1);
        printf("%f",result);
    }
    else
    {
        printf("numero invalido");
    }
    
}

   */
/* EXERCICIO 3
int main(){
float num1,result;
printf("digite um numero real:\n");
scanf("%f",&num1);

if(num1>0){
    result=sqrt(num1);
    printf("%f",result);}
    
    else
    {
        result=num1*num1;
        printf("%f",&result);
        
        
        
    }
    
    
    
}
*/
/* EXERCICIO 4
   int  main()
   {
       float num1,result,result2;
       printf("digite um numero:\n");
       scanf("%f",&num1);
       if(num1>0){
          result=num1*num1;
          result2=sqrt(num1);
    printf("%f""%5.f",result,result2);      
           
           
           
       }
       
       
       
   }
   
   */
   
   /* EXERCICIO 5
   int main()
   { 
       
int num1;

printf("digite um numero:\n");
scanf("%d",&num1);
if

(num1%2 == 0){
    
    printf("esse numero %d eh par",num1);
}
else
{
    
    printf("esse numero e impar");
    
}
       
   }
   
 */
   
   
/* EXERCICIO 7
int main()
{
  int num1,num2;
  
  scanf("%d""%d",&num1,&num2);
  
  if(num1>num2){
      printf("%d",num1);
  }
  if(num1<num2){
      
      printf("%d",num2);
  }
  
 else if(num1=num2){
     printf("numeros iguais");
 }
 

else{
    
    printf("%d",num1,num2);
}
return 0;
}
*/

/*
int main() EXERCICIO 8

{
    float num1,num2,media;
    scanf("%f""%f",&num1,&num2);
    
    
    if((num1>=0)&&(num1<=10)&&(num2>=0)&&(num2<=10))
    {
        
        media= (num1 + num2)/2;
        
        printf("a media das notas e \n %f",media);
    }
   
    
    else{
        
        printf("esse numero é invalido");
    }
    
    
    
}

*/
/* EXERCICIO 9
 int main()
 
 {
     float salario,prestacao;
     scanf("%f""%f",&salario,&prestacao);
     if (prestacao>salario*0.2)
     {
         
         printf("emprestimo não concedido\n");
     }
     
     else{
         
         printf("emprestimo concedido");
         return 0;
     }
     
     
     
 }
*/
/*
 int main() EXERCICIO 10
 { float altura;
 int sexo,masculino,feminino;
 
printf("digite sua altura:\n");
printf("digite qual  e o seu sexo:\n");
scanf("%f""%d""%d""%d",&altura,&sexo,&masculino,&feminino);

if (sexo = masculino)
{
    masculino=(72,7*altura)-58,0;
 printf("seu peso ideal e:%d\n",masculino);
}

else if(sexo=feminino){
feminino=(62,1*altura)-44,7;

printf("seu peso ideal e:%d \n",feminino);
}
     
 }
*/

/* EXERCICIO 11
int main()
{
    
    int n, i, x=0; 
    printf("Digite o numero de elementos:\n"); 
    scanf("%d", &n);
    if (n<0) 
    { printf("Numero invalido\n"); } 
    else{ for(i=0;i<n;i++) { x=x+i; } 
    printf("Valores somados de zero a %d = %d\n", n, x);
    }return 0;}
}

*/
/* EXERCICIO 12
int main()
{ int num1;
    printf("digite um numero: \n");
    scanf("%d",&num1);
    if(num1<0)
    
    {printf("numero invalido\n");
        
    }
    
    else if(num1>0)
    
}

*/


/*exercicio 22
int main ()
{
    int idade, temposerv;
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Tempo de servico: ");
    scanf("%d", &temposerv);

    if(idade>65){
        printf("Pode aposentar\n");
    }
    else if(temposerv > 30){
        printf("Pode aposentar\n");
    }
    else if(idade > 60 && temposerv > 25){
        printf("Pode aposentar\n");
    }
    else {
        printf("Nao pode aposentar\n");
    }

    return 0;
}
/*
 
int main () EXERCICIO 23
{
    int ano;
    printf("Digite o ano: ");
    scanf ("%d", &ano);

    if (ano % 400 == 0)
    {
        printf("Bissexto");
    }
    else if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("Bissexto");
    }
    else
    {
        printf("Nao e Bissexto");
    }

    return 0;
}


*/
/*
int main () EXERCICIO 26
{
    int km, l, media;
    printf("Digite a distancia: ");
    scanf ("%d", &km);
    printf("Digite os litros: ");
    scanf ("%d", &l);

    media = km / l;

    if (media < 8){
        printf("Venda o carro!");
    }
    else if (media > 8 && media < 14){
        printf("Economico!");
    }
    else{
        printf("Super economico!");
    }

    return 0;
}
*/

/* exercicio 27
int main ()
{
    int idade;
    printf("Digite a idade: ");
    scanf ("%d", &idade);

    if (idade >= 5 && idade <= 7){
        printf("Infantil A");
    }
    else if (idade >= 8 && idade <= 10){
        printf("Infantil B");
    }
    else if (idade >= 11 && idade <= 13){
        printf("Juvenil A");
    }
    else if (idade >= 14 && idade <= 17){
        printf("Juvenil B");
    }
    else{
        printf("Senior");
    }

    return 0;
}
*/


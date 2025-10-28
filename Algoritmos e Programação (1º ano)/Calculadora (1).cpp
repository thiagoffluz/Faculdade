#include <stdio.h>

int main() {
	float val1, val2, r;
	char oper, op;
	do {
		printf("Informe equacao: ");
		scanf("%f %c %f", &val1, &oper, &val2);
		switch (oper) {
			case '+': r=val1+val2; 
			          printf("Soma: %.2f\n", r);
			          break;
			case '-': r=val1-val2;
			          printf("Dif: %.2f\n", r);
					  break;
			case '*':
			case 'x': r=val1*val2;
			          printf("Prod: %.2f\n", r);
					  break;
			case '/': if (val2 != 0){
          		          r=val1/val2;
						  printf("Div: %.2f\n", r);
					   } 
                       else printf("Div por zero\n");
					   break;					  
			case '%': r= (int)val1 % (int)val2;        // uso de cast
			          printf("Resto: %.2f\n", r);
			          break;
			default: printf("Operador desconhecido\n");
		}
        printf("Deseja continuar? (s/n): ");
        fflush(stdin);
		scanf("%c", &op);		
	} while (op != 'n' && op != 'N');
	return 0;
}

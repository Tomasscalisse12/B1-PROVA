#include <stdio.h>

int opção;
float tc, tf, tk;


// converter Celsius em Fahrenheits
void Celsius_Fahrenheits() {
  printf("\nDigite a temperatura em Celsius.: ");
  scanf("%f", &tc);
  tf = ((9*tc + 160)/5);
  printf("\nA temperatura em Fahrenheits = %f\n", tf);

}

// converter Fahrenheits em Celsius
void Fahrenheits_Celsius() {
  printf("\nDigite a temperatura em Fahrenheits.: ");
  scanf("%f", &tf);
  tc = ((5*(tf - 32))/9);
  printf("\nA temperatura em Celsius = %f\n", tc);

}

// escolher a opção desejada de calculo ou sair
int main() {
  printf("==========CELSIUS <-> FAHRENHEITS==========\n");
  printf("\n1-Celsius -> Fahrenheits \n2-Fahrenheits -> Celsius\n3-Sair\n\nOpcao.: ");
  scanf("%d", &opção);
  switch (opção) {
    case 1:
      Celsius_Fahrenheits();
      break;
      
    case 2:
      Fahrenheits_Celsius();
      break;
    case 3:
      printf("\nFinalizando o programa...\n");
      break;

    default:
      printf("\nErro! Opcao inexistente.\n");
      break;

  }

return(0);

}
#include <stdio.h>

int main() {

    float precio_art, pago_cliente, cambio;

    printf("\n Ingrese precio del art%cculo \n\n", 161);
    scanf("\t%f", &precio_art);
    printf("\n Cuánto ha pagado el cliente \n\n");
    scanf("\t%f", &pago_cliente);
    
    cambio = pago_cliente - precio_art;
    
    
    printf("\n El cambio es : %5.2f \n\n", cambio);
    
    return 0;
}

/*
ASCCI

í 161
á 160
¿ 168

%c

*/
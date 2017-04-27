# include <stdio.h>

# define MSJ_ING_VAR_BASE     "Ingrese el valor de la base del rectangulo"
# define MSJ_ING_VAR_ALTURA   "Ingrese el valor de la altura del rectangulo"
# define MSJ_PERIMETRO        "El perimetro del rectangulo es:"

/* FALTA VALIDAR LOS VALORES INGRESADOS */
int main (void)
{
  float ladoA, ladoB;
  
  puts (MSJ_ING_VAR_BASE);
  scanf ("%f", &ladoA);
  puts (MSJ_ING_VAR_ALTURA);
  scanf ("%f", &ladoB);
  
  printf ("%s %f\n", MSJ_PERIMETRO, ladoA + ladoB);
  
  return 0;
  
}


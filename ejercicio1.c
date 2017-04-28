# include <stdio.h>

# define MSJ_ING_VAR_BASE     "Ingrese el valor de la base del rectangulo"
# define MSJ_ING_VAR_ALTURA   "Ingrese el valor de la altura del rectangulo"
# define MSJ_PERIMETRO        "El perimetro del rectangulo es:"

/* FALTA VALIDAR LOS VALORES INGRESADOS */
int main (void)
{
  float base, altura;

  puts (MSJ_ING_VAR_BASE);
  scanf ("%f", &base);
  puts (MSJ_ING_VAR_ALTURA);
  scanf ("%f", &altura);

  printf ("%s %.2f\n", MSJ_PERIMETRO, base + altura);

  return 0;

}


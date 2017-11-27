#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto {
  float x;
  float y;
  float z;
} Ponto;

float distancia (Ponto p1, Ponto p2)
{
  float d;
  d = sqrt (pow( p2.x - p1.x, 2) + pow( p2.y - p1.y, 2) + pow( p2.z - p1.z, 2) );

  return d;
}

int main()
{
  Ponto p1, p2;


  scanf ("%f , %f , %f", &(p1.x) , &(p1.y) , &(p1.z));
  scanf ("%f , %f , %f", &(p2.x) , &(p2.y) , &(p2.z));

  printf("%.2f\n", distancia(p1, p2));

  return 0;
}

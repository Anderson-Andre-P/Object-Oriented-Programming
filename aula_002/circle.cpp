#include "circle.h"
#include <iostream>

using namespace std;

/*
    ===============================
    Construtor
    ===============================
    Inicializa os membros da classe Circle com os valores fornecidos
    ou com os valores padrão {0,0,0}.
*/
Circle::Circle(float rr, int xx, int yy)
{
  radius = rr;
  x = xx;
  y = yy;
}

/*
    ===============================
    Funções principais
    ===============================
*/

// Retorna área do círculo: π * raio²
float Circle::area()
{
  return radius * radius * 3.141592;
}

// Retorna diâmetro do círculo: 2 * raio
float Circle::diameter()
{
  return radius * 2;
}

/*
    ===============================
    Setters
    ===============================
*/

// Altera o raio, garantindo que seja não-negativo
void Circle::set_radius(float rr)
{
  if (rr > 0)
    radius = rr;
  else
    radius = 0;
}

// Altera o centro do círculo
void Circle::set_origin(int xx, int yy)
{
  x = xx;
  y = yy;
}

/*
    ===============================
    Getters
    ===============================
*/

// Retorna o raio atual
float Circle::get_radius()
{
  return radius;
}

/*
    ===============================
    Função de exibição
    ===============================
    Imprime o círculo no formato: {raio; x; y}
*/
void Circle::printCircle()
{
  cout << "{" << radius << "; " << x << "; " << y << "}";
}

#include "time.h"
#include <iostream>

using namespace std;

/*
    ===============================
    Construtores
    ===============================
*/

// Construtor padrão: inicializa horário com 0:0:0
Time::Time()
{
  hour = 0;
  minute = 0;
  second = 0;
}

// Construtor parametrizado: inicializa horário com valores passados
Time::Time(int hh, int mm, int ss)
{
  setTime(hh, mm, ss); // Reutiliza função setTime() para validação
}

/*
    ===============================
    Métodos principais
    ===============================
*/

// Valida e define hora, minuto e segundo
void Time::setTime(int hh, int mm, int ss)
{
  // Validação da hora
  if (hh >= 0 && hh <= 23)
    hour = hh;
  else
    hour = 0;

  // Validação do minuto
  if (mm >= 0 && mm <= 59)
    minute = mm;
  else
    minute = 0;

  // Validação do segundo
  if (ss >= 0 && ss <= 59)
    second = ss;
  else
    second = 0;
}

// Imprime horário no formato {hh:mm:ss}
void Time::printTime()
{
  cout << "{" << hour << ":" << minute << ":" << second << "}";
}

#ifndef TIME_H
#define TIME_H // Include guard para evitar múltiplas inclusões

/*
    ===============================
    Classe Time
    ===============================
    Representa um horário no formato 24h, definido por:
    - hour: horas (0-23)
    - minute: minutos (0-59)
    - second: segundos (0-59)

    Métodos principais:
    - setTime(): altera a hora, minuto e segundo, com validação
    - printTime(): exibe a hora no formato {hh:mm:ss}
*/

class Time
{
private:
  int hour, minute, second; // Atributos privados do horário

public:
  /*
      -------------------------------
      Construtores
      -------------------------------
  */
  Time();              // Construtor padrão, inicializa 0:0:0
  Time(int, int, int); // Construtor parametrizado, inicializa com valores específicos

  /*
      -------------------------------
      Métodos principais
      -------------------------------
  */
  void setTime(int, int, int); // Define hora, minuto e segundo (com validação)
  void printTime();            // Exibe o horário no terminal

  ~Time() {} // Destrutor padrão
};

#endif

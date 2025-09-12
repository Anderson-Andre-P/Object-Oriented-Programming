#ifndef CIRCLE_H
#define CIRCLE_H // Include guard para evitar múltiplas inclusões do header

/*
    ===============================
    Classe Circle
    ===============================
    Representa um círculo no plano 2D, definido por:
    - raio (radius)
    - centro (x, y)

    Inclui métodos para:
    - calcular área e diâmetro
    - alterar e obter raio e centro
    - imprimir informações do círculo
*/

class Circle
{
private:
  float radius; // Raio do círculo
  int x, y;     // Coordenadas do centro do círculo

public:
  /*
      -------------------------------
      Construtor
      -------------------------------
      Permite criar círculos com valores padrão ou personalizados.
      Circle(float radius = 0, int x = 0, int y = 0)
      - Se nenhum valor for passado, cria círculo {0,0,0}
  */
  Circle(float = 0, int = 0, int = 0);

  /*
      -------------------------------
      Destrutor
      -------------------------------
      Apenas padrão, não há alocação dinâmica dentro da classe
  */
  ~Circle() {}

  /*
      -------------------------------
      Funções principais
      -------------------------------
      Calculam propriedades do círculo
  */
  float area();     // Retorna área do círculo: π*raio²
  float diameter(); // Retorna diâmetro do círculo: 2*raio

  /*
      -------------------------------
      Setters (modificadores)
      -------------------------------
  */
  void set_radius(float);    // Altera o raio do círculo
  void set_origin(int, int); // Altera o centro do círculo

  /*
      -------------------------------
      Getters (acessores)
      -------------------------------
  */
  float get_radius(); // Retorna o raio atual

  /*
      -------------------------------
      Função de exibição
      -------------------------------
      Imprime informações do círculo no formato {raio; x; y}
  */
  void printCircle();
};

#endif

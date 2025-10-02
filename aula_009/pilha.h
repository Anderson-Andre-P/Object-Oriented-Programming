#ifndef PILHA_H
#define PILHA_H

template <typename T, int tamanho>
class Pilha
{
private:
  int topo;
  T *pilha;

public:
  Pilha();
  ~Pilha()
  {
    delete[] pilha;
  }

  bool push(T &);
  bool pop(T &);

  bool is_empty()
  {
    if (topo == -1)
      return true;
    return false;
  }

  bool is_full()
  {
    if (topo == (tamanho - 1))
      return true;
    return false;
  }
};

#endif

template <typename T, int tamanho>
Pilha<T, tamanho>::Pilha()
{
  // tamanho = (sz > 0 ? sz : 10);
  topo = -1;
  pilha = new T[tamanho];
}

template <typename T, int tamanho>
bool Pilha<T, tamanho>::push(T &valor)
{
  if (is_full())
    return false;
  topo++;
  pilha[topo] = valor;
  return true;
}

template <typename T, int tamanho>
bool Pilha<T, tamanho>::pop(T &valor)
{
  if (is_empty())
    return false;
  valor = pilha[topo];
  topo--;
  return true;
}

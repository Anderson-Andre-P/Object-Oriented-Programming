# 📘 Resumo de Classes em C++

## 1. O que é uma classe?

* Uma **classe** é um **modelo (template)** para criar **objetos**.
* Define **atributos** (dados) e **métodos** (funções) que os objetos terão.
* Exemplo: `Circle` e `Time`.

```cpp
class Circle {
private:
    float radius;
    int x, y;

public:
    Circle(float r = 0, int xx = 0, int yy = 0);
    float area();
    float diameter();
    void printCircle();
};
```

---

## 2. Objetos

* Um **objeto** é uma **instância de uma classe**.
* Exemplo:

```cpp
Circle c1;             // Cria círculo padrão {0,0,0}
Circle c2(10, 5, 5);   // Cria círculo com valores específicos
```

---

## 3. Atributos (Membros de dados)

* **Privados** (`private`): só podem ser acessados dentro da classe.
* **Públicos** (`public`): podem ser acessados fora da classe.
* Exemplo:

```cpp
private:
    float radius;
    int x, y;

public:
    void set_radius(float r);
    float get_radius();
```

---

## 4. Métodos (Funções da classe)

* Funções que **operam sobre os atributos**.
* Podem ser **getters** (acessores), **setters** (modificadores) ou funções que calculam algo.

Exemplo de `Circle`:

```cpp
float area() { return 3.141592 * radius * radius; }
float diameter() { return 2 * radius; }
void printCircle() { cout << "{" << radius << ";" << x << ";" << y << "}"; }
```

Exemplo de `Time`:

```cpp
void setTime(int h, int m, int s);
void printTime(); // Imprime {hh:mm:ss}
```

---

## 5. Construtores e Destrutores

* **Construtor**: inicializa os objetos com valores padrão ou passados.
* **Destrutor**: chamado automaticamente quando o objeto é destruído, usado para liberar memória ou limpar recursos.

```cpp
Circle(float r = 0, int x = 0, int y = 0); // Construtor
~Circle() {}                               // Destrutor
```

```cpp
Time() {}                  // Construtor padrão
Time(int h, int m, int s); // Construtor parametrizado
```

---

## 6. Encapsulamento

* Mantém atributos **privados** e fornece **métodos públicos** para acessar ou alterar valores.
* Garante **validação de dados** e **segurança**.

Exemplo:

```cpp
void Time::setTime(int hh, int mm, int ss)
{
    hour = (hh >= 0 && hh <= 23) ? hh : 0;
    minute = (mm >= 0 && mm <= 59) ? mm : 0;
    second = (ss >= 0 && ss <= 59) ? ss : 0;
}
```

---

## 7. Uso de objetos no `main()`

* Criar objetos, chamar métodos, imprimir valores.

```cpp
Circle c1;
c1.set_radius(5);
c1.printCircle();      // {5;0;0}
cout << c1.area();     // 78.5398
```

```cpp
Time t1(12, 30, 45);
t1.printTime();        // {12:30:45}
t1.setTime(25, 61, 10); // Valores inválidos → reset para 0:0:0
```

---

## 8. Boas práticas estudadas

1. **Use include guards** nos headers (`#ifndef/#define/#endif`).
2. **Separe** declaração (`.h`) e implementação (`.cpp`).
3. **Comente** funções e seções do código para facilitar revisão.
4. **Use construtores** para inicializar objetos de forma segura.
5. **Encapsule atributos** e valide entradas via setters.
6. **Use métodos de exibição** (`printCircle`, `printTime`) para debugging.


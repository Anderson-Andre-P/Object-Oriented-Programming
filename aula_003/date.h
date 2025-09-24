#ifndef DATE_H
#define DATE_H

class Date
{
private:
  int d, m, y;
  mutable int count;
  static int howmany; // é um espaço na memória compartilhado por todas as classes

public:
  Date(int = 1, int = 1, int = 1972); // Construtor que recebe 3 parâmetros e já tem valor default

  ~Date(); // Destrutor In-class

  int get_day() const { return d; };
  int get_month() const { return m; };
  int get_year() const { return y; };
  int get_count() const { return count; };

  void print() const;

  static int how_many_instances() { return howmany; };

  Date &set_day(int);
  Date &set_month(int);
  Date &set_year(int);
};

#endif

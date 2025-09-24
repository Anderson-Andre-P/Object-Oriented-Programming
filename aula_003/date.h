#ifndef DATE_H
#define DATE_H

class Date
{
private:
  int d, m, y;

public:
  Date(int = 1, int = 1, int = 1972); // Construtor que recebe 3 parâmetros e já tem valor default

  ~Date(); // Destrutor In-class

  int get_day() { return d; };
  int get_month() { return m; };
  int get_year() { return y; };

  void print();

  void set_day(int);
  void set_month(int);
  void set_year(int);
};

#endif

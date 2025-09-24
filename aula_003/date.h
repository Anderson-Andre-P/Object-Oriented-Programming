#ifndef DATE_H
#define DATE_H

class Date
{
private:
  int d, m, y;
  mutable int count;
  static int howmany;

public:
  Date(int = 1, int = 1, int = 1972); // Construtor que recebe 3 parâmetros e já tem valor default

  ~Date(); // Destrutor In-class

  int get_day() const { return d; };
  int get_month() const { return m; };
  int get_year() const { return y; };
  int get_count() const { return count; };

  void print() const;

  static int how_many_instances() { return howmany; };

  void set_day(int);
  void set_month(int);
  void set_year(int);
};

#endif

#ifndef TIME_H
#define TIME_H
// Header compoent
class Time
{
  // private members
private:
  int hour, minute, second; // data members

  // public members
public:
  Time(); // constructor - initialize data with default values or the values
  Time(int, int, int);

  void setTime(int, int, int);
  void printTime();

  ~Time() {} // destroier
};

#endif
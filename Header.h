#pragma once
using namespace std;
class Kvadrat {
public:
  Kvadrat(double a, double b, double c, double d);
  double P();
private:
  double x1, y1, x2, y2;
  double perimetr;
};

Kvadrat::Kvadrat(double a, double b, double c, double d) {
  x1 = a;
  y1 = b;
  x2 = c;
  y2 = d;

  if (x1 == x2 == y1 == y2) {
    cout << "Координаты введены не правильно." << endl;
  }
}

double Kvadrat::P()
{
  perimetr = ((sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)))) + (sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1))))) * 2;
  return perimetr;
}
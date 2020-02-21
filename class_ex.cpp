  //Copyright 2019 pichugin.ilya
#include <iostream>
#include <conio.h>
#include <math.h>
#include "Header.h"
using namespace std;

int main()
{
  double x1, x2, y1, y2;
  cout << "Vvedite koordinati dlya kvadrata(pryamougolnika)" << endl;
  cout << "coordinate x1: " << endl;
  cin >> x1;
  cout << "coordinate y1: " << endl;
  cin >> y1;
  cout << "coordinate x2: " << endl;
  cin >> x2;
  cout << "coordinate y2: " << endl;
  cin >> y2;
  Kvadrat res = Kvadrat(x1, y1, x2, y2);
  cout << "Perimetr kvadrata(pryamougolnika) =: " << res.P();
  cout << endl;
  system("pause");
}
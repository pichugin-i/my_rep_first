#include <iostream>
#include <fstream>
#include <clocale>                                   // для русского языка, если вам очень нужно
#include "Header.h"

using namespace std;

int main() {
  setlocale(LC_CTYPE, "Russian");

  Complex c0;              // пример использования конструткора по умолчанию
  Complex c1(1.1, 2.2);    // примеры использования конструктора инициализации
  Complex c2(3.3, -4.4);
  Complex c3(c1);          // пример использования конструктора копирования
  Complex c4(3.3);         // пример использования конструктора преобразования типа

  // указатели на комплексные числа (в конце нужно удалять деструтором)
  Complex *pc0 = new Complex();                        // по умолчанию
  Complex *pc1 = new Complex(1.1, 2.2);                // инициализация
  Complex *pc3 = new Complex(c1);                      // копирования
  Complex *pc4 = new Complex(3.3);                     // преобразования типа

  // пример использования функции вывода
  cout << "Число, созданное конструктором по умолчанию: с0 = ";
  c0.output();
  cout << "Число, созданное конструктором инициализации: с1 = ";
  c1.output();
  cout << endl;
  cout << "Число, созданное конструктором инициализации: с2 = ";
  c2.output();
  cout << "Число, созданное конструктором копирования: с3 = ";
  c3.output();
  cout << endl;
  cout << "Число, созданное конструктором преобразования типа: с4 = ";
  c4.output();
  cout << endl;

  Complex c5;
  c5 = c2;                                            // применение перегруженой операции присваивания
  cout << "Результат применения присваивания c2 новой переменной: с5 = ";
  c5.output();
  cout << endl;






  cout << "Сравнение c1 и c3, знак *==* если равны, знак *!=* если не равны";
  cout << endl;
  if (c1 == c3) {
    c1.output();
    cout << " == ";
    c3.output();
    cout << endl;
    cout << endl;
  }
  else {
    c1.output();
    cout << " != ";
    c3.output();
    cout << endl;
    cout << endl;
  }

  Complex c6;
  c6 = c3.Add(c2);                                    // применение функции сложения
  cout << "Результат сложения функцией сложения: с6 = c3 + c2 = ";
  c6.output();
  cout << endl;

  Complex c7;
  c7 = c3 + c2;                                       // применение перегруженой операции сложения
  cout << "Результат сложения с помощью перегруженного оператора: c7 = c3 + c2 = ";
  c7.output();
  cout << endl;

  Complex c8;
  c8 = c3 * c1;
  cout << "Результат умножения с помощью перегруженного оператора: c8 = c3 * c2 = ";
  c8.output();
  cout << endl;
  cout << endl;

  Complex c9;
  c9 = c3 / c2;
  cout << "Результат деления с помощью перегруженного оператора: c9 = c3 / c2 = ";
  c9.output();
  cout << endl;
  cout << endl;



  // вызовы деструктора для указателей
  delete pc0;
  delete pc1;
  delete pc3;
  delete pc4;

  system("pause");
  return 0;                                         // <---- в С++ этот return можно не писать вообще
}

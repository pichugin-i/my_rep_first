#include <iostream>
#include <fstream>
#include <clocale>                                   // ��� �������� �����, ���� ��� ����� �����
#include "Header.h"

using namespace std;

int main() {
  setlocale(LC_CTYPE, "Russian");

  Complex c0;              // ������ ������������� ������������ �� ���������
  Complex c1(1.1, 2.2);    // ������� ������������� ������������ �������������
  Complex c2(3.3, -4.4);
  Complex c3(c1);          // ������ ������������� ������������ �����������
  Complex c4(3.3);         // ������ ������������� ������������ �������������� ����

  // ��������� �� ����������� ����� (� ����� ����� ������� �����������)
  Complex *pc0 = new Complex();                        // �� ���������
  Complex *pc1 = new Complex(1.1, 2.2);                // �������������
  Complex *pc3 = new Complex(c1);                      // �����������
  Complex *pc4 = new Complex(3.3);                     // �������������� ����

  // ������ ������������� ������� ������
  cout << "�����, ��������� ������������� �� ���������: �0 = ";
  c0.output();
  cout << "�����, ��������� ������������� �������������: �1 = ";
  c1.output();
  cout << endl;
  cout << "�����, ��������� ������������� �������������: �2 = ";
  c2.output();
  cout << "�����, ��������� ������������� �����������: �3 = ";
  c3.output();
  cout << endl;
  cout << "�����, ��������� ������������� �������������� ����: �4 = ";
  c4.output();
  cout << endl;

  Complex c5;
  c5 = c2;                                            // ���������� ������������ �������� ������������
  cout << "��������� ���������� ������������ c2 ����� ����������: �5 = ";
  c5.output();
  cout << endl;






  cout << "��������� c1 � c3, ���� *==* ���� �����, ���� *!=* ���� �� �����";
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
  c6 = c3.Add(c2);                                    // ���������� ������� ��������
  cout << "��������� �������� �������� ��������: �6 = c3 + c2 = ";
  c6.output();
  cout << endl;

  Complex c7;
  c7 = c3 + c2;                                       // ���������� ������������ �������� ��������
  cout << "��������� �������� � ������� �������������� ���������: c7 = c3 + c2 = ";
  c7.output();
  cout << endl;

  Complex c8;
  c8 = c3 * c1;
  cout << "��������� ��������� � ������� �������������� ���������: c8 = c3 * c2 = ";
  c8.output();
  cout << endl;
  cout << endl;

  Complex c9;
  c9 = c3 / c2;
  cout << "��������� ������� � ������� �������������� ���������: c9 = c3 / c2 = ";
  c9.output();
  cout << endl;
  cout << endl;



  // ������ ����������� ��� ����������
  delete pc0;
  delete pc1;
  delete pc3;
  delete pc4;

  system("pause");
  return 0;                                         // <---- � �++ ���� return ����� �� ������ ������
}

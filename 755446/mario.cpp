#include <iostream>
using namespace std;
int main() {
  int count, total, temporarily = 0;
  
  cout << "�аݦ��X�����: ";
  cin >> count;

  for (int i = 0; i < count; i++) {
      temporarily = 0;
      cout << "�п�J��" << i+1 << "���s��:" ;
      cin >> temporarily;
      total = total + temporarily;
  }
  cout << "�@�@�O " << total << "��";
}

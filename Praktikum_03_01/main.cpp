#include <iostream>
int t1 = 0, t2 = 0, m1 = 0, m2 = 0, j1 = 0, j2 = 0;

int main() {
  std::cout << "Bitte geben Sie den Tag des ersten Datums ein: " << std::endl;
   std::cin >> t1;
  std::cout << "Bitte geben Sie den Monat des ersten Datums ein: "<< std::endl;
   std::cin >> m1;
  std::cout << "Bitte geben Sie das Jahr des ersten Datums ein: " << std::endl;
   std::cin >> j1;
  std::cout << "Bitte geben Sie den Tag des zweiten Datums ein: " << std::endl;
   std::cin >> t2;
  std::cout << "Bitte geben Sie den Monat des zweiten Datums ein:"<< std::endl;
   std::cin >> m2;
  std::cout << "Bitte geben Sie das Jahr des zweiten Datums ein: "<< std::endl;
   std::cin >> j2;
if (j1 == j2) {

 if (m1 == m2){

     if (t1 == t2) {
         std::cout << "Das Datum ist das gleiche." << std::endl;

     }
     else if (t1 > t2) {
         std::cout << "Das zweiten Datum liegt vor dem ersten Datum." << std::endl;
     }
     else if (t1 < t2) {
         std::cout << "Das ersten Datum liegt vor dem zweiten Datum." << std::endl;
     }


 }
 else if (m1 > m2)   {
         std::cout << " Das zweiten Datum liegt vor dem ersten Datum" << std::endl;
     }
 else if (m1 < m2) {
         std::cout << "Das erstem Datum liegt vor dem zweiten Datum" << std::endl;
     }
}
else if (j1>j2) {
    std::cout << "Das zweite Datum liegt vor dem ersten Datum." << std::endl;
}
else if (j1<j2) {
    std::cout << "Das erste Datum liegt vor dem zweiten Datum." << std::endl;
}

 return 0;
}
#include <iostream>

int main() 
{
    double* ptr; // объявление указателя на double
    ptr = new double;
    *ptr = 0; // присвоение значения 0 по выделенному указателю

    std::cout << *ptr <<  std::endl; // вывод значения на указателе
  
    ptr -= 3; // смещение указателя влево на 3
    std::cout  << *ptr <<  std::endl;
  
    ptr += 5; // смещение указателя вправо на 5
    std::cout << *ptr <<  std::endl;

    delete ptr; // освобождение выделенной памяти
    return 0;
}

#include <iostream>
#include <iomanip>

int main() {
    short int* ptr; // объявление указателя на short int
    ptr = new short int[10]; // выделение памяти на 10 элементов и присвоение адреса указателю

    for (int i = 0; i < 10; i++) {
        ptr[i] = i; // присвоение значения равного индексу
        std::cout << std::hex << std::setw(2) << std::setfill('0') << (unsigned long long)&ptr[i] << " "; // вывод 16-теричного представления адреса
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << ptr[i] << " "; // вывод значения элемента
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i += 2) {
        *(ptr + i) *= *(ptr + i); // возведение в квадрат значения каждого второго элемента
    }

    for (int i = 0; i < 10; i++) {
        std::cout << ptr[i] << " "; // вывод всех значений элементов
    }
    std::cout << std::endl;

    delete[] ptr; // освобождение выделенной памяти
    return 0;
}

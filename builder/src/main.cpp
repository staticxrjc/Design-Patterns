#include <carBuilder.h>
#include <expensiveFordBuilder.h>
#include <cheapFordBuilder.h>
#include <engineer.h>
#include <iostream>

int main() {
    carBuilder* cheapBuilder = new cheapFordBuilder();
    engineer* carEngineer = new engineer(cheapBuilder);

    carEngineer->constructCar();

    car* cheapCar = carEngineer->getCar();

    std::cout << "Car Engine: "; 
    cheapCar->getEngine();
    std::cout << std::endl;
    return 1;
}
#include <iostream>
#include "include/Facade.hpp"

void clientCode(std::unique_ptr<Facade> facade);

int main()
{
    std::unique_ptr<Subsystem1> subsystem1;
    std::unique_ptr<Subsystem2> subsystem2;
    std::unique_ptr<Facade> facade = std::make_unique<Facade>(std::move(subsystem1), std::move(subsystem2));
    clientCode(std::move(facade));
}

void clientCode(std::unique_ptr<Facade> facade)
{
    std::cout << facade->operation();
}
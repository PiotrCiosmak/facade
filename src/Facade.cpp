#include "../include/Facade.hpp"

Facade::Facade(std::unique_ptr<Subsystem1> subsystem_1, std::unique_ptr<Subsystem2> subsystem_2)
{
    this->subsystem1 = std::move(subsystem_1) ?: std::make_unique<Subsystem1>();
    this->subsystem2 = std::move(subsystem_2) ?: std::make_unique<Subsystem2>();
}

std::string Facade::operation()
{
    std::string result = "Facade initializes subsystems:\n";
    result += this->subsystem1->operation1();
    result += "\n";
    result += this->subsystem2->operation1();
    result += "\n";
    result += "\nFacade orders subsystems to perform the action:\n";
    result += this->subsystem1->operation2();
    result += "\n";
    result += this->subsystem2->operation3();
    return result;
}

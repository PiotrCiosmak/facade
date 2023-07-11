#include "../include/Facade.hpp"

Facade::Facade(const std::shared_ptr<Subsystem1>& new_subsystem_1,
               const std::shared_ptr<Subsystem2>& new_subsystem_2)
        : subsystem1{new_subsystem_1}, subsystem2{new_subsystem_2}
{}

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

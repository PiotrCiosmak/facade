#pragma once

#include <memory>
#include "Subsystem1.hpp"
#include "Subsystem2.hpp"

class Facade
{
public:
    explicit Facade(std::unique_ptr<Subsystem1> new_subsystem_1, std::unique_ptr<Subsystem2> new_subsystem_2);
    std::string operation();
private:
    std::unique_ptr<Subsystem1> subsystem1;
    std::unique_ptr<Subsystem2> subsystem2;
};

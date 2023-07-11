#pragma once

#include <memory>
#include "Subsystem1.hpp"
#include "Subsystem2.hpp"

class Facade
{
public:
    explicit Facade(std::unique_ptr<Subsystem1> subsystem_1 = nullptr, std::unique_ptr<Subsystem2> subsystem_2 = nullptr);
    std::string operation();
protected:
    std::unique_ptr<Subsystem1> subsystem1;
    std::unique_ptr<Subsystem2> subsystem2;
};

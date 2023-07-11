#pragma once

#include <memory>
#include "Subsystem1.hpp"
#include "Subsystem2.hpp"

class Facade
{
public:
    explicit Facade(const std::shared_ptr<Subsystem1>& new_subsystem_1,
                    const std::shared_ptr<Subsystem2>& new_subsystem_2);
    [[nodiscard]] std::string operation();
private:
    std::shared_ptr<Subsystem1> subsystem1;
    std::shared_ptr<Subsystem2> subsystem2;
};

#pragma once

#include <iostream>

class Subsystem1
{
public:
    [[nodiscard]] std::string operation1() const;
    [[nodiscard]] std::string operation2() const;
};

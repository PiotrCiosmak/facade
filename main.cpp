#include "include/Facade.hpp"

void clientCode(const std::shared_ptr<Facade>& facade);

int main()
{
    std::shared_ptr<Subsystem1> subsystem1;
    std::shared_ptr<Subsystem2> subsystem2;
    std::shared_ptr<Facade> facade = std::make_shared<Facade>(subsystem1, subsystem2);
    clientCode(facade);
}

void clientCode(const std::shared_ptr<Facade>& facade)
{
    std::cout << facade->operation();
}
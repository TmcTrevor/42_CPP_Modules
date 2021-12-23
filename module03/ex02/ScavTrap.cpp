#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    Hitpoints = 100;
    EnergyPoints = 50;
    attackdmg = 20;
    Cout << GREEN << " ScavTrap Default constuctor called" << DEFAULT << Endl;
}

ScavTrap::~ScavTrap()
{
    Cout << RED << "ScavTrap destroyed" << DEFAULT << Endl;
}

ScavTrap::ScavTrap(string name)
{
    Name = name;
    Hitpoints = 100;
    EnergyPoints = 50;
    attackdmg = 20;
    Cout << GREEN << "ScavTrap name constuctor called" << DEFAULT << Endl;
}

ScavTrap::ScavTrap(const ScavTrap& c)
{
    this->Name = c.Name;
    this->Hitpoints = c.Hitpoints;
    this->EnergyPoints = c.EnergyPoints;
    this->attackdmg = c.attackdmg;
    Cout << GREEN << "ScavTrap Copy constuctor called" << DEFAULT << Endl;
}
string ScavTrap::get_Name() const
{
    return (Name);
}

int ScavTrap::get_Hitpoints() const
{
    return (Hitpoints);
}

int ScavTrap::get_attackdmg() const
{
    return (attackdmg);
}

int ScavTrap::get_EnergyPoint() const
{
    return (EnergyPoints);
}

ScavTrap& ScavTrap::operator = (const ScavTrap& c)
{
    this->Name = c.Name;
    this->Hitpoints = c.Hitpoints;
    this->EnergyPoints = c.EnergyPoints;
    this->attackdmg = c.attackdmg;
    Cout << GREEN << "Assignment operator called" << DEFAULT << Endl;
    return (*this);
}

void    ScavTrap::attack(string const &target)
{
    Cout << RED << "ScavTrap " << Name << " attack " << target << ", causing " << attackdmg << " point of damage!" << DEFAULT << Endl;
}
void    ScavTrap::takeDamage(unsigned int damage)
{
    Cout << YELLOW << "ScavTrap " << Name << " takes " << damage << " of damage!" << DEFAULT << Endl;
    Hitpoints -= damage;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    Cout << GREEN << "ScavTrap " << Name << " heals " << amount << ", point of health!" << DEFAULT << Endl;
    Hitpoints+=amount;
}
std::ostream&	operator<<(std::ostream &os, const ScavTrap &s)
{
    os << "Name : " << s.get_Name() << Endl;
    os << "Hitpoints : " << s.get_Hitpoints() << Endl;
    os << "EnegerPoint : " << s.get_EnergyPoint() << Endl;
    os << "attackdmg : " << s.get_attackdmg() << Endl;
    return (os);
}

void    ScavTrap::guardGate()
{
    Cout << PURPLE << Name << " is Gate keeper Now" << DEFAULT << Endl;
}

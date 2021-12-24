#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    Hitpoints = 100;
    EnergyPoints = 100;
    attackdmg = 30;
    Cout << PURPLE << " FragTrap Default constuctor called" << DEFAULT << Endl;
}

FragTrap::~FragTrap()
{
    Cout << RED << "FragTrap destroyed" << DEFAULT << Endl;
}

FragTrap::FragTrap(string name)
{
    Name = name;
    Hitpoints = 100;
    EnergyPoints = 100;
    attackdmg = 30;
    Cout << PURPLE << "FragTrap name constuctor called" << DEFAULT << Endl;
}

FragTrap::FragTrap(const FragTrap& c)
{
    this->Name = c.Name;
    this->Hitpoints = c.Hitpoints;
    this->EnergyPoints = c.EnergyPoints;
    this->attackdmg = c.attackdmg;
    Cout << GREEN << "FragTrap Copy constuctor called" << DEFAULT << Endl;
}
FragTrap& FragTrap::operator = (const FragTrap& c)
{
    this->Name = c.Name;
    this->Hitpoints = c.Hitpoints;
    this->EnergyPoints = c.EnergyPoints;
    this->attackdmg = c.attackdmg;
    Cout << GREEN << "FragTrap Assignment operator called" << DEFAULT << Endl;
    return (*this);
}

void    FragTrap::attack(string const &target)
{
    Cout << RED << "FragTrap " << Name << " attack " << target << ", causing " << attackdmg << " point of damage!" << DEFAULT << Endl;
}
void    FragTrap::takeDamage(unsigned int damage)
{
    Cout << YELLOW << "FragTrap " << Name << " takes " << damage << " of damage!" << DEFAULT << Endl;
    Hitpoints -= damage;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    Cout << GREEN << "FragTrap " << Name << " heals " << amount << ", point of health!" << DEFAULT << Endl;
    Hitpoints+=amount;
}

void	FragTrap::highFiveGuys(void)
{
        Cout << GREEN << "FragTrap " << Name << " : *high Five Guys*" << DEFAULT << Endl;
}
std::ostream&	operator<<(std::ostream &os, const FragTrap &s)
{
    os << "Name : " << s.get_Name() << Endl;
    os << "Hitpoints : " << s.get_Hitpoints() << Endl;
    os << "EnegerPoint : " << s.get_EnergyPoint() << Endl;
    os << "attackdmg : " << s.get_attackdmg() << Endl;
    return (os);
}
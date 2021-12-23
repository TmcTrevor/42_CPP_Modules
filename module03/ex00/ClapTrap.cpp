#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Hitpoints = 10;
    EnergyPoints = 10;
    attackdmg = 0;
    Cout << GREEN << "ClapTrap Default constuctor called" << DEFAULT << Endl;
}

ClapTrap::~ClapTrap()
{
    Cout << RED << "ClapTrap destroyed" << DEFAULT << Endl;
}

ClapTrap::ClapTrap(string name)
{
    Name = name;
    Hitpoints = 10;
    EnergyPoints = 10;
    attackdmg = 0;
    Cout << GREEN << "ClapTrap name constuctor called" << DEFAULT << Endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
    this->Name = c.Name;
    this->Hitpoints = c.Hitpoints;
    this->EnergyPoints = c.EnergyPoints;
    this->attackdmg = c.attackdmg;
    Cout << GREEN << " ClapTrap Copy constuctor called" << DEFAULT << Endl;
}
string ClapTrap::get_Name() const
{
    return (Name);
}

int ClapTrap::get_Hitpoints() const
{
    return (Hitpoints);
}

int ClapTrap::get_attackdmg() const
{
    return (attackdmg);
}

int ClapTrap::get_EnergyPoint() const
{
    return (EnergyPoints);
}

ClapTrap& ClapTrap::operator = (const ClapTrap& c)
{
    this->Name = c.Name;
    this->Hitpoints = c.Hitpoints;
    this->EnergyPoints = c.EnergyPoints;
    this->attackdmg = c.attackdmg;
    Cout << GREEN << "Assignment operator called" << DEFAULT << Endl;
    return (*this);
}

void    ClapTrap::attack(string const &target)
{
    Cout << RED << "ClapTrap " << Name << " attack " << target << ", causing " << attackdmg << " point of damage!" << DEFAULT << Endl;
}
void    ClapTrap::takeDamage(unsigned int damage)
{
    Cout << YELLOW << "ClapTrap " << Name << " takes " << damage << " of damage!" << DEFAULT << Endl;
    Hitpoints -= damage;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    Cout << GREEN << "ClapTrap " << Name << " heals " << amount << ", point of health!" << DEFAULT << Endl;
    Hitpoints+=amount;
}
std::ostream&	operator<<(std::ostream &os, const ClapTrap &s)
{
    os << "Name : " << s.get_Name() << Endl;
    os << "Hitpoints : " << s.get_Hitpoints() << Endl;
    os << "EnegerPoint : " << s.get_EnergyPoint() << Endl;
    os << "attackdmg : " << s.get_attackdmg() << Endl;
    return (os);
}

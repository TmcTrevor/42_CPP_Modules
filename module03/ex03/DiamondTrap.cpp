#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Anonymous")
{
    this->Hitpoints = FragTrap::get_Hitpoints();
    this->EnergyPoints = ScoreTrap::get_EnergyPoints();
    this->attackdmg = FragTrap::get_Attackdmg();
	Cout << "DiamondTrap::Default contructor called" << Endl;
}

DiamondTrap::DiamondTrap(string const & name) : ClapTrap(name + "_clapName")
{
    this->Hitpoints = FragTrap::get_Hitpoints();
    this->EnergyPoints = ScoreTrap::get_EnergyPoints();
    this->attackdmg = FragTrap::get_Attackdmg();
	Cout << "DiamondTrap::Parameterized contructor called" << Endl;
	Name = name;
}

void	DiamondTrap::whoAmI(void)
{
	Cout << "My DiamondTrap name is : " << Name << " My  clapTrap name is : " << ClapTrap::Name << Endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	Cout << "DiamondTrap::Copy contructor called" << Endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	Name = rhs.Name;
	return(*this);
}

string	DiamondTrap::getName_diamond(void) const
{
	return (Name);
}

void		DiamondTrap::setName_diamond(string const & name)
{
	Name = name;
}

void	DiamondTrap::attack(string const & target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(void)
{
	Cout << "DiamondTrap::Destructor called" << Endl; 
}
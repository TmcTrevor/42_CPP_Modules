#include <iostream>
#include <string>
#define RESET   	"\033[0m"
#define WHITE   	"\033[37m"
#define RED     	"\033[31m"
#define GREEN 		"\e[1;32m"

typedef struct s_Data {
    int a;
    std::string q;
}       Data;

uintptr_t serialize(Data* ptr)
{
    uintptr_t *newd;

    newd = reinterpret_cast<uintptr_t *>(ptr);
    return *newd;
}
void	print_mystruct(Data x)
{
	std::cout << RED;
	std::cout << "Data informations : " << std::endl;
	std::cout << "Int	: " << x.a << std::endl;
	std::cout << "String  : " << x.q << std::endl;
	std::cout << RESET;
}
Data* deserialize(uintptr_t raw)
{
    Data *newd;
    newd = reinterpret_cast<Data *>(raw);
    return newd;
}

int main()
{
    Data data;
    Data *data2;
    uintptr_t ptr;
    data.a = 18;
    data.q = "hello";
    std::cout << "******************************** before ***********************************" << std::endl;
    print_mystruct(data);
    ptr = serialize(&data);
    data2 = deserialize(ptr);
    std::cout << "******************************** after ************************************" << std::endl;
    print_mystruct(data);

}



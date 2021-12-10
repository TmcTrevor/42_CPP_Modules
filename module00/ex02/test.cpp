#include <iostream>
#include <ctime>

using namespace std;

void	print_time(int i)
{
	if (i < 10)
		cout << "0";
	cout << i; 
}
int main() {
   // current date/time based on current system
//    time_t now = time(0);

//    //cout << "Number of sec since January 1,1970 is:: " << now << endl;

//    tm *ltm = localtime(&now);

struct tm	*tim;
	const time_t var = time(0);

	tim = localtime(&var);
	
	cout << "[";
	print_time(tim->tm_year + 1900);
	print_time(tim->tm_mon + 1); print_time(tim->tm_mday);
	cout << "_";
	print_time(tim->tm_hour);
	print_time(tim->tm_min);
	print_time(tim->tm_sec);
	cout << "] ";
   // print various components of tm structure.
//    cout << "Year:" << 1900 + ltm->tm_year<<endl;
//    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
//    cout << "Day: "<< ltm->tm_mday << endl;
//    cout << "Time: "<< 5+ltm->tm_hour << ":";
//    cout << 30+ltm->tm_min << ":";
//    cout << ltm->tm_sec << endl;

   //cout << 1900 + ltm->tm_year<< 1 + ltm->tm_mon << ltm->tm_mday << "_" << ltm->tm_hour  << ltm->tm_min << ltm->tm_sec << endl;
}
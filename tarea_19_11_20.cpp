#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int x{7};
	int y{4};
	
   std::cout<<"int/int = "<< x/y <<"\n";
   std::cout<<"double/int = "<<static_cast <double>(x)/ y<<"\n";
   std::cout<<"double/int = "<<x / static_cast<double>(y)<<"\n";
   std::cout<<"double/int = "<<static_cast<double>(x)/ static_cast<double>(y)<<"\n";
   
	
	
	return 0;
}

#include "main.hpp"

using namespace std;
__declspec(dllimport) unsigned long long int abstraction( unsigned long long int first ,unsigned long long int second );
__declspec(dllimport) unsigned long long int expansion( unsigned long long int first ,unsigned long long int second );
__declspec(dllimport) unsigned long long int splitting( unsigned long long int first ,unsigned long long int second );
__declspec(dllimport) unsigned long long int supplement( unsigned long long int first ,unsigned long long int second );

int main(){
  
  std::cout << "start" ;
  unsigned long long int second = 10 ;
  unsigned long long int first = 10 ;

  std::cout << "abstraction"<< std::endl;
  std::cout << abstraction( first , second ) << std::endl ;
  
  std::cout << "expansion" << std::endl;
  std::cout << expansion( first , second ) << std::endl ;
  
  std::cout << "splitting" << std::endl;
  std::cout << splitting( first , second ) << std::endl  ;
  
  std::cout << "supplement" << std::endl;
  std::cout << supplement( first , second ) << std::endl ;
  std::cout << "end" ;
  return EXIT_SUCCESS ;
}

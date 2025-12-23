#include "main.hpp"

using namespace std;
__declspec(dllimport) unsigned long long int abstraction( unsigned long long int first ,unsigned long long int second );
//__declspec(dllimport) unsigned long long int expansion( unsigned long long int first ,unsigned long long int second );
//__declspec(dllimport) unsigned long long int splitting( unsigned long long int first ,unsigned long long int second );
//__declspec(dllimport) unsigned long long int modulusArthmetic( unsigned long long int first ,unsigned long long int second );
//__declspec(dllimport) unsigned long long int supplement( unsigned long long int first ,unsigned long long int second );

int main(){
  
  unsigned long long int second = 10 ;
  unsigned long long int first = 10 ;
  std::cout << abstraction( first , second ) ;
  return EXIT_SUCCESS ;
}

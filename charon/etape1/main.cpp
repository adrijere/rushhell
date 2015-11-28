#include	<iostream>
#include	<string>
#include	"FunctionSignature.hpp"

int	test(const std::string &toto, const std::string &titi, const std::string &tata, const std::string &kinoo)
{
  std::cout << "test function with 4 strings:" << toto << titi << tata << kinoo << std::endl;
  return (84);
}

char test2(int jeremy, const std::string &mathon)
{
  std::cout << "Hi ! I'm test2 function with 2 arguments, an int:" << jeremy << " and a string:" << mathon << std::endl;
  return ('t');
}

int	main(int ac, char **av)
{
  int	ret;
  FunctionSignature<int (const std::string &, const std::string &, const std::string &, const std::string &)>::type monTest = &test;

  ret = monTest("je ", "dors ","encore ", "à 8h.");
  std::cout << "test ret: " << ret << std::endl;

  FunctionSignature<char (int, const std::string &)>::type mtest2 = &test2;

  char ret2 = mtest2(42, "pokemon");
  std::cout << "test2 ret:" << ret2 << std::endl;
  return (0);
}

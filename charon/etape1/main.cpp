/*
** main.cpp for main in /home/mathon_j/rendu/rushhell/charon/etape1
**
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
**
** Started on  Sat Nov 28 14:55:35 2015 Jérémy MATHON
** Last update Sat Nov 28 18:29:59 2015 kiuKisas
*/

#include	<iostream>
#include	<string>
#include	"FunctionSignature.hpp"

int	test(const std::string &toto, const std::string &titi, const std::string &tata, const std::string &kinoo)
{
  std::cout << "Test avec des strings mais renvoie un int : " << toto << titi << tata << kinoo << std::endl;
  return (84);
}

int test2(int jeremy, const std::string &mathon)
{
  std::cout << "Hi ! My number is " << jeremy << ", my name is " << mathon << std::endl;
  return (11);
}

int	main(int ac, char **av)
{
  int	ret;
  FunctionSignature<int (const std::string &, const std::string &, const std::string &, const std::string &)>::type monTest = &test;

  ret = monTest("je ", "dors ","encore ", "à 8h.");
  std::cout << "le retour de la fonction  test: " << ret << std::endl;

  FunctionSignature<int (int, const std::string &)>::type mtest2 = &test2;

  ret = mtest2(42, "pokemon");
  std::cout << "test2 says that it's " << ret << std::endl;
  return (0);
}

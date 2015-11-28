/*
** main.cpp for main in /home/mathon_j/rendu/rushhell/charon/etape1
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Nov 28 14:55:35 2015 Jérémy MATHON
** Last update Sat Nov 28 15:11:48 2015 Jérémy MATHON
*/

#include	<iostream>
#include	<string>
#include	"FunctionSignature.hpp"

int	test(std::string toto, std::string titi, std::string tata, std::string kinoo)
{
  std::cout << "Test avec des strings mais renvoie un int : " << toto << titi << tata << kinoo << std::endl;
  return (84);
}

int	main(int ac, char **av)
{
  int	ret;
  FunctionSignature<int (std::string, std::string, std::string, std::string)>::type monTest = &test;

  ret = monTest("je ", "dors ","encore ", "à 8h.");
  std::cout << "le retour de la fonction  test: " << ret << std::endl;
  return (0);
}

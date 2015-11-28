/*
** main.cpp for main in /home/mathon_j/rendu/rushhell/charon/etape2
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Nov 28 15:35:30 2015 Jérémy MATHON
** Last update Sat Nov 28 15:57:35 2015 Jérémy MATHON
*/

#include	<iostream>
#include	<string>
#include	"Function.hpp"

int	function(char c)
{
  std::cout << c << std::endl;
  return (0);
}

int	main(int ac, char **av)
{
  Function<int(char)> f = &function;

  f('c');
  return (0);
}

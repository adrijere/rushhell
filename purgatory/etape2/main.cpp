/*
** main.cpp for main in /home/mathon_j/rendu/rushhell/purgatory/etape1
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Nov 28 23:33:05 2015 Jérémy MATHON
Last update Sun Nov 29 16:00:43 2015 Jérémy MATHON
*/

#include	<iostream>
#include	"Machine.hpp"

void	state_machine(const char *str)
{
  eState	currentState = S0;
  eState        nextState;
  eAction       nextAction;
  int		i;

  currentState = S0;
  i = 0;
  while (str[i])
    {
      std::cout << "currentState : " << currentState << std::endl;
      switch (str[i])
	{
	case 'm':
	  nextState  = gStateTable[currentState][0];
	  nextAction = gActionTable[currentState][0];
	  std::cout << "Token lu : " << str[i] << std::endl;
	  break;
	case 'e':
   	  nextState  = gStateTable[currentState][1];
	  nextAction = gActionTable[currentState][1];
	  std::cout << "Token lu : " << str[i] << std::endl;
	  break;
	case 'c':
	  std::cout << "currentState : " << currentState << std::endl;
	  nextState  = gStateTable[currentState][2];
	  nextAction = gActionTable[currentState][2];
	  std::cout << "Token lu : " << str[i] << std::endl;
	  std::cout << "Next action : " << nextAction << std::endl;
	  break;
	case 'h':
	  nextState  = gStateTable[currentState][3];
	  nextAction = gActionTable[currentState][3];
	  std::cout << "Token lu : " << str[i] << std::endl;
	  break;
	case 'a':
	  nextState  = gStateTable[currentState][4];
	  nextAction = gActionTable[currentState][4];
	  std::cout << "Token lu : " << str[i] << std::endl;
	  break;
	case 'n':
	  nextState  = gStateTable[currentState][5];
	  nextAction = gActionTable[currentState][5];
	  std::cout << "Token lu : " << str[i] << std::endl;
	  break;
	case 't':
	  nextState  = gStateTable[currentState][6];
	  nextAction = gActionTable[currentState][6];
	  std::cout << "Token lu : " << str[i] << std::endl;
	  break;
	default:
	  nextState  = gStateTable[currentState][7];
	  nextAction = gActionTable[currentState][7];
	  std::cout << "Token lu : " << str[i] << " --> STATE ERROR" << std::endl;
	  break;
	}
      switch (nextAction)
	{
	case MA:
	  std::cout << "MOVE APPEND" << std::endl;
	  break;
	case HR:
	  currentState = S0;
	  std::cout << "HALT RESET" << std::endl;
	case ACTION_ERROR:
	  currentState = S0;
	  std::cout << "ACTION ERROR" << std::endl;
	  return ;
	}
      currentState = nextState;
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac != 2)
    return (-1);
  state_machine(av[1]);
  return (0);
}

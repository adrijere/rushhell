/*
** Function.hpp for Function in /home/mathon_j/rendu/rushhell/charon/etape2
** 
** Made by Jérémy MATHON
** Login   <mathon_j@mathonj>
** 
** Started on  Sat Nov 28 13:33:03 2015 Jérémy MATHON
** Last update Sat Nov 28 16:02:12 2015 Jérémy MATHON
*/

#ifndef FUNCTION_HPP_
# define FUNCTION_HPP_

template <typename T>

class	Function;

template <typename T, typename U>
class Function< T(U) >
{
protected:
  typedef T  (*type)(U);
  type _func;

public:
  Function(T);
  Function(T (*f)(U))
  {
    _func = f; 
  }
  ~Function(){}
  Function operator=(T (*t)(U))
  {
    _func = t;
    return (this);
  }
  T operator()(U t)
  {
    return (_func(t));
  }
};

#endif /* !FUNCTION_HPP_ */

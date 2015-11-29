#include	<iostream>
#include	<string>
#include  <boost/bind.hpp>
#include	"Function.hpp"

int	function(char c)
{
  std::cout << c << std::endl;
  return (0);
}

int otherFunct(int n) {
  std::cout << "hello, my number is:" << n << std::endl;
  return 0;
}

int	main(int ac, char **av)
{
  Function<int(char)> f = &function;
    //    Function<int(int)> f2 = boost::bind(::otherFunct, _1);
  f('c');
  // f2(78);
  return (0);
}

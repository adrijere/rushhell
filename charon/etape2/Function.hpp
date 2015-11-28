#ifndef FUNCTION_HPP_
# define FUNCTION_HPP_

template <typename T>
class	Function;

template <typename T, typename U>
class Function< T(U) >
{
private:
  typedef T  (*type)(U);
  type _f;

public:
  Function operator=(T (*f)(U)) {
    _f = f;
    return this;
  };
  T operator()(U t) {return (_f(t));};

  Function() {};
  Function(T (*f)(U)) :_f(f) {};

  ~Function(){};
};

#endif /* !FUNCTION_HPP_ */

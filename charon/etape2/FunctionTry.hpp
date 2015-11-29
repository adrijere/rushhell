#ifndef FUNCTION_HPP_
# define FUNCTION_HPP_

// donc !! ici, on initialise une classe vide qui se template
template <typename T>
class	Function;

// ici on prends le (seul) cas de template avec un objet callable
template <typename T, typename U>
class Function<T(U)> {
private:

  // tout d'abord, une interface pour l'objet callable
  class ICallable {
  public:
    virtual T operator()(U) = 0;
    virtual ~ICallable(){};
  };

  // template class heritant de ICallable prenant un objet callable en template
  template <typename C>
  class FunctCallable : public ICallable {
  private:
    C *_ptr;
  public:
    FunctCallable(C const &call) : _ptr(new C(call)) {}; // reference objet
    FunctCallable(FunctCallable<C> const &funct) : _ptr(funct._ptr) {};// copain

    T operator()(U const & p) { // execution
      if (_ptr)
        return _ptr->operator()(p);
      return T(p);
    }
    virtual ~FunctCallable() { delete _ptr};
  };

  typedef T(*type)(U);
  typedef Function<T(U)> &ret;
  ICallable *_callable;

public:
  template <typename C>
  Function(C const &c) : _callable(new FunctCallable<C>(c)) {};

  Function(Function<T(U)> const &f) : _callable(f._callable) {};
  Function(type c) : _callable(new FunctCallable<T(U)>(c)) {};

  T operator()(U const &a) {
  }

  ret operator=(_call p) {

  }
};

#endif /* !FUNCTION_HPP_ */

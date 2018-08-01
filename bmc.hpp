// This list is continuously being aggregated from existing projects

template <typename T, class = typename std::enable_if<std::is_integral<T>::value>::type>
inline constexpr T Pow2(const T exponent)
{
  // Returns 2^exponent 
  return (exponent == 0) ? 1 : (2 * Pow2(exponent-1));
}

template <typename T, class = typename std::enable_if<std::is_integral<T>::value>::type>
inline constexpr T Log2(const T n, const T p = 0) 
{
  // Returns Log2(N), the second argument is needed for recursion 
  return (n <= 1) ? p : Log2(n / 2, p + 1);
}

template <typename T>
inline constexpr T NMax(T a, T b){return (a>b) ? a : b;}

template <typename T>
inline constexpr T NMin(T a, T b){return (a<b) ? a : b;}

template <typename T>
inline constexpr T NMax(T a, T b, T c){return NMax(NMax(a,b),NMax(a,c));}

template <typename T>
inline constexpr T NMin(T a, T b, T c){return NMin(NMin(a,b),NMin(a,c));}

//Calculates binomial coefficients
template<typename T>
inline constexpr T NBinCoeff(const T n,const T k)
{
  return (k>n||k<0) ? 0 : (k==0||n==k) ? 1 : NBinCoeff(n-1,k-1)+NBinCoeff(n-1,k);
}

//Returns integer exponent of base
template<typename T>
inline constexpr T NPow(const T base, const long exp)
{
  return (exp==0) ? 1 : (base * NPow(base,exp-1));
}

//Returns absolute value
template<typename T>
inline constexpr T NAbs(const T val)
{
  return ( val>-val ) ? val : -val;
}

template<typename T>
inline constexpr T NSqrt(T arg, T ans = 1.0, const T err = 1e-10)
{
  return ((ans*ans-arg)*(ans*ans-arg)/(arg*arg) < err*err) ? ans : sqrt_ct_0(arg,ans-(ans*ans-arg)/(2*ans),err);
}

`constexpr` functions allow the compiler to evaluate expressions at compile-time
while being used like normal functions at runtime.  `constexpr` was introduced
in C++11, simplifling hacky template metaprogramming techniques that were
previously required to enable compile-time evaluation.  The scope usability of
`constexpr` function was expanded and improved in C++14 and the current C++17
draft.  This header file is a collection of binary and mathematical constexpr
functions which I've used on various projects.  


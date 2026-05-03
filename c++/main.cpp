//Brett Rogers

#include <pybind11/pybind11.h>
#include "viperCore.h"
#include <iostream>

namespace py = pybind11;

Generic Spawn(int id)
{
    std::cout << " C++ calls rust! " << '\n';
    std::cout << " C++ says: Rust! Make me a Generic! " << '\n';
    return make_generic(id);
}

int Get(Generic g)
{
    std::cout << " C++ says: Rust! Get me this Generic! " << '\n';
    return get_generic(g);
}

PYBIND11_MODULE(Viper, m)
{

    py::class_<Generic>(m, "Generic")
        .def_readwrite("id", &Generic::id);
    m.def("Spawn", &Spawn);
    m.def("Get", &Get);
}
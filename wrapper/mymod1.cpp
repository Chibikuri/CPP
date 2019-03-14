#define BOOST_PYTHON_STATIC_LIB
#define BOOST_PYTHON_STATIC_LIB
#include <boost/python/numpy.hpp>
#include <stdexcept>
#include <algorithm>

namespace p = boost::python;
namespace np = boost::python::numpy;

void mult_two(np::ndarray a){
	int nd = a.get_nd();
	if (nd !=1)
		throw std::runtime_error("a must be 1-dimensional");
	size_t N = a.shpae(0);
	if (a.get_dtype() != np::dtype::get_builtin<float>())
		throw std::runtime_error("a must be float32 array");
	float *p = reinterpret_cast<float *>(a.get_data());
	std::transform(p, p+N, p, [](float x){ return 2* x;});
}

BOOST_PYTHON_MODULE(mymod1){
	Py_Initialize();
	np::initialize();
	p::def("mult_two", mmult_two);
}



#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../make_opaque_vectors.hpp"

#include "recognition/dotmod.hpp"
#include "recognition/sparse_quantized_multi_mod_template.hpp"


void defineRecognitionClasses5(py::module &m) {
    py::module m_recognition = m.def_submodule("recognition", "Submodule recognition");
    defineRecognitionDotmodClasses(m_recognition);
    defineRecognitionSparseQuantizedMultiModTemplateClasses(m_recognition);
}

#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include <pcl/point_types.h>

namespace py = pybind11;
using namespace pybind11::literals;

PYBIND11_DECLARE_HOLDER_TYPE(T, boost::shared_ptr<T>);
#include "../make_opaque_vectors.hpp"

#include "sample_consensus/sac_model_parallel_plane.hpp"
#include "sample_consensus/sac_model_perpendicular_plane.hpp"


void defineSampleConsensusClasses9(py::module &m) {
    py::module m_sample_consensus = m.def_submodule("sample_consensus", "Submodule sample_consensus");
    defineSampleConsensusSacModelParallelPlaneClasses(m_sample_consensus);
    defineSampleConsensusSacModelPerpendicularPlaneClasses(m_sample_consensus);
}
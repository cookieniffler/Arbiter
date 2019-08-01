set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterMath)

arbiter_add_sources(
    Autodiff/AutomaticDifferentiation.hpp
    Autodiff/ForwardModeAD.hpp
    Autodiff/ReverseModeAD.hpp
    Geometry/Geometry.hpp
    Kernels/Kernel.hpp
    LinearAlgebra/Angle.hpp
    LinearAlgebra/CholeskyDecomposition.hpp
    LinearAlgebra/Complex.hpp
    LinearAlgebra/DenseMatrix.hpp
    LinearAlgebra/Matrix.hpp
    LinearAlgebra/NaiveGaussianElimination.hpp
    LinearAlgebra/Quaternion.hpp
    LinearAlgebra/SparseMatrix.hpp
    LinearAlgebra/Vector.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)

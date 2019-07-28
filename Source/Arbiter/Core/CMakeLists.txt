set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterCore)

arbiter_add_sources(
	Common/Base.hpp
	Common/Platform.hpp
	Common/Singleton.hpp
	Common/StdHeaders.hpp
	Common/Type.hpp
	Containers/Containers.hpp
	Diagnostics/Diagnostics.hpp
	Exception/Exception.hpp
	Framework/Application.hpp
	Framework/Application.cpp
	Framework/ApplicationContextSDL.hpp
	Framework/ApplicationContextSDL.cpp
	Framework/Scene.hpp
	Framework/Scene.cpp
	Framework/SceneBuffer.hpp
	Framework/SceneBuffer.cpp
	Framework/SceneManager.hpp
	Framework/SceneManager.cpp
	Graph/ComputationalGraph.hpp
	Graph/ComputationalGraph.cpp
	Logger/Logger.hpp
	Math/Autodiff/AutomaticDifferentiation.hpp
	Math/Autodiff/ForwardModeAD.hpp
	Math/Autodiff/ReverseModeAD.hpp
	Math/Geometry/Geometry.hpp
	Math/Kernels/Kernel.hpp
	Math/LinearAlgebra/Angle.hpp
	Math/LinearAlgebra/CholeskyDecomposition.hpp
	Math/LinearAlgebra/Complex.hpp
	Math/LinearAlgebra/DenseMatrix.hpp
	Math/LinearAlgebra/Matrix.hpp
	Math/LinearAlgebra/NaiveGaussianElimination.hpp
	Math/LinearAlgebra/Quaternion.hpp
	Math/LinearAlgebra/SparseMatrix.hpp
	Math/LinearAlgebra/Vector.hpp
	Memory/AlignedMemory.hpp
	Parser/Parser.hpp
	Threading/Threading.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)

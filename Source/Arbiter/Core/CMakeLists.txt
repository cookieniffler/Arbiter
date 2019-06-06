set(CMAKE_CXX_STANDARD 17)
set(library_name ArbiterCore)

arbiter_add_sources(
	Logger/Logger.hpp
	Math/Complex.hpp  
	Math/Matrix.hpp  
	Math/Quaternion.hpp  
	Math/Utility.cpp  
	Math/Utility.hpp  
	Math/Vector.hpp
	Containers.hpp
	Diagnostics.hpp
	Math.hpp
	Memory.hpp
)
arbiter_add_library(${library_name} STATIC)
set_target_properties(${library_name} PROPERTIES LINKER_LANGUAGE CXX)
FIND_PATH(SDL2_INCLUDE_DIR SDL.h
	HINTS
	$ENV{SDL2DIR}
	PATH_SUFFIXES include/SDL2 include
	PATHS
	${PROJECT_SOURCE_DIR}/External
	/usr/local/include/SDL2
	/usr/include/SDL2
	/sw # Fink
	/opt/local # DarwinPorts
	/opt/csw # Blastwave
	/opt
)

FIND_LIBRARY(SDL2_LIBRARY_TEMP
	NAMES SDL2
	HINTS
	$ENV{SDL2DIR}
	PATH_SUFFIXES lib64 lib lib/${MSVC_CXX_ARCHITECTURE_ID}/Release
	PATHS
	/sw
	/opt/local
	/opt/csw
	/opt
)

FIND_FILE(SDL2_BINARY
  NAMES "SDL2.dll"
  HINTS ${Cg_BIN_SEARCH_PATH}
  $ENV{SDL2DIR}
  PATH_SUFFIXES bin64 bin bin/${MSVC_CXX_ARCHITECTURE_ID}/Release
)

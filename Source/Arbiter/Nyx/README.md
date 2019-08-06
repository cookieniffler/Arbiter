<h1 align="center">
  <br>
  nyx
  <br>
</h1>

<h4 align="center">Deep Learning Library</a></h4>

CMake options that are available:

|options|description|default|additional requirements to use|
|-----|-----|----|----|
|USE_TBB|Use [Intel TBB](https://www.threadingbuildingblocks.org/) for parallelization|OFF|[Intel TBB](https://www.threadingbuildingblocks.org/)|
|USE_OMP|Use OpenMP for parallelization|OFF|[OpenMP Compiler](http://openmp.org/wp/openmp-compilers/)|
|USE_SSE|Use Intel SSE instruction set|OFF|Intel CPU which supports SSE|
|USE_AVX|Use Intel AVX instruction set|OFF|Intel CPU which supports AVX|
|USE_AVX2|Build nyx with AVX2 library support|OFF|Intel CPU which supports AVX2|
|USE_NNPACK|Use NNPACK for convolution operation|OFF|[Acceleration package for neural networks on multi-core CPUs](https://github.com/Maratyszcza/NNPACK)|
|USE_OPENCL|Enable/Disable OpenCL support (experimental)|OFF|[The open standard for parallel programming of heterogeneous systems](https://www.khronos.org/opencl/)|
|USE_LIBDNN|Use Greentea LibDNN for convolution operation with GPU via OpenCL (experimental)|OFF|[An universal convolution implementation supporting CUDA and OpenCL](https://github.com/naibaf7/libdnn)|
|USE_SERIALIZER|Enable model serialization|ON|-|
|USE_DOUBLE|Use double precision computations instead of single precision|OFF|-|
|USE_ASAN|Use Address Sanitizer|OFF|clang or gcc compiler|
|USE_IMAGE_API|Enable Image API support|ON|-|
|USE_GEMMLOWP|Enable gemmlowp support|OFF|-|
|BUILD_TESTS|Build unit tests|OFF|-|
|BUILD_EXAMPLES|Build example projects|OFF|-|
|BUILD_DOCS|Build documentation|OFF|[Doxygen](http://www.doxygen.org/)|
|PROFILE|Build unit tests|OFF|gprof|

### References
1. Y. Bengio, [Practical Recommendations for Gradient-Based Training of Deep Architectures.](https://arxiv.org/pdf/1206.5533v2.pdf) arXiv:1206.5533v2, 2012

2. Y. LeCun, L. Bottou, Y. Bengio, and P. Haffner, [Gradient-based learning applied to document recognition.](http://yann.lecun.com/exdb/publis/pdf/lecun-01a.pdf) Proceedings of the IEEE, 86, 2278-2324.

Other useful reference lists:
- [UFLDL Recommended Readings](http://deeplearning.stanford.edu/wiki/index.php/UFLDL_Recommended_Readings)
- [deeplearning.net reading list](http://deeplearning.net/reading-list/)

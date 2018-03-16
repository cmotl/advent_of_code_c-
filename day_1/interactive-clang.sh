docker run -it --rm \
  -v ${PWD}:/src \
  -w /src \
  build-clang:5.0.0 bash

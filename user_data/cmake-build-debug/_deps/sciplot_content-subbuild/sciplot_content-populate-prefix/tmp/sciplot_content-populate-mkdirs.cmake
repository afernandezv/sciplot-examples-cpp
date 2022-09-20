# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-src"
  "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-build"
  "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-subbuild/sciplot_content-populate-prefix"
  "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-subbuild/sciplot_content-populate-prefix/tmp"
  "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-subbuild/sciplot_content-populate-prefix/src/sciplot_content-populate-stamp"
  "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-subbuild/sciplot_content-populate-prefix/src"
  "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-subbuild/sciplot_content-populate-prefix/src/sciplot_content-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/afernandez/Escritorio/sciplot-examples-cpp/user_data/cmake-build-debug/_deps/sciplot_content-subbuild/sciplot_content-populate-prefix/src/sciplot_content-populate-stamp/${subDir}")
endforeach()

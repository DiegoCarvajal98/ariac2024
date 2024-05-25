# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ariac_plugins_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ariac_plugins_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ariac_plugins_FOUND FALSE)
  elseif(NOT ariac_plugins_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ariac_plugins_FOUND FALSE)
  endif()
  return()
endif()
set(_ariac_plugins_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ariac_plugins_FIND_QUIETLY)
  message(STATUS "Found ariac_plugins: 2024.4.1 (${ariac_plugins_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ariac_plugins' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ariac_plugins_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ariac_plugins_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${ariac_plugins_DIR}/${_extra}")
endforeach()

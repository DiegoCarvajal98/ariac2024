# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/overlay_ws/install/ariac_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/overlay_ws/install/ariac_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/overlay_ws/install/ariac_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/overlay_ws/install/ariac_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AdvancedLogicalCameraImage.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AdvancedLogicalCameraImage.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AGVStatus.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AGVStatus.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyPart.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyPart.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyStationState.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyStationState.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyTask.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyTask.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyState.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/AssemblyState.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BasicLogicalCameraImage.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BasicLogicalCameraImage.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BinInfo.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BinInfo.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BinParts.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BinParts.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BreakBeamStatus.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/BreakBeamStatus.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Condition.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Condition.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Challenge.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Challenge.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/CombinedTask.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/CombinedTask.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/CompetitionState.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/CompetitionState.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/ConveyorBeltState.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/ConveyorBeltState.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/ConveyorParts.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/ConveyorParts.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/DroppedPartChallenge.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/DroppedPartChallenge.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/FaultyPartChallenge.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/FaultyPartChallenge.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/KittingPart.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/KittingPart.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/KittingTask.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/KittingTask.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/KitTrayPose.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/KitTrayPose.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Order.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Order.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/OrderCondition.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/OrderCondition.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/PartLot.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/PartLot.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Part.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Part.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/PartPlaceCondition.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/PartPlaceCondition.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/PartPose.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/PartPose.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Parts.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Parts.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/QualityIssue.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/QualityIssue.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/RobotMalfunctionChallenge.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/RobotMalfunctionChallenge.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Robots.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Robots.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/SensorBlackoutChallenge.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/SensorBlackoutChallenge.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Sensors.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Sensors.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/SubmissionCondition.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/SubmissionCondition.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/TimeCondition.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/TimeCondition.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Trial.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/Trial.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/VacuumGripperState.json" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/msg/VacuumGripperState.json" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ChangeGripper.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ChangeGripper.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ChangeGripperColor.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ChangeGripperColor.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ConveyorBeltControl.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ConveyorBeltControl.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/MoveAGV.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/MoveAGV.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ScoreTask.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/ScoreTask.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/SubmitOrder.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/SubmitOrder.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/VacuumGripperControl.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/VacuumGripperControl.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/PerformQualityCheck.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/PerformQualityCheck.json" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/GetPreAssemblyPoses.json" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_generator_type_description/ariac_msgs/srv/GetPreAssemblyPoses.json" "DESTINATION" "share/ariac_msgs/srv")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_generator_c/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_generator_c/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.h")

# install(FILES "/opt/ros/iron/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/opt/ros/iron/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/ariac_msgs/environment")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/ariac_msgs/environment")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_fastrtps_c/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_fastrtps_c/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_generator_cpp/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_generator_cpp/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_fastrtps_cpp/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_fastrtps_cpp/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_introspection_c/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_introspection_c/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.h")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_introspection_cpp/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_typesupport_introspection_cpp/ariac_msgs/" "DESTINATION" "include/ariac_msgs/ariac_msgs" "PATTERN" "*.hpp")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/ariac_msgs/environment")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/ariac_msgs/environment")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/ament_cmake_python/ariac_msgs/ariac_msgs.egg-info/" "DESTINATION" "lib/python3.10/site-packages/ariac_msgs-2024.4.1-py3.10.egg-info")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/ament_cmake_python/ariac_msgs/ariac_msgs.egg-info/" "DESTINATION" "lib/python3.10/site-packages/ariac_msgs-2024.4.1-py3.10.egg-info")

# install(DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_generator_py/ariac_msgs/" "DESTINATION" "lib/python3.10/site-packages/ariac_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")
ament_cmake_symlink_install_directory("/overlay_ws/src/ARIAC/ariac_msgs" DIRECTORY "/overlay_ws/build/ariac_msgs/rosidl_generator_py/ariac_msgs/" "DESTINATION" "lib/python3.10/site-packages/ariac_msgs" "PATTERN_EXCLUDE" "*.pyc" "PATTERN_EXCLUDE" "__pycache__")

# install("TARGETS" "ariac_msgs__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "lib/python3.10/site-packages/ariac_msgs")
include("/overlay_ws/build/ariac_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "ariac_msgs__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "lib/python3.10/site-packages/ariac_msgs")
include("/overlay_ws/build/ariac_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "ariac_msgs__rosidl_typesupport_c__pyext" "DESTINATION" "lib/python3.10/site-packages/ariac_msgs")
include("/overlay_ws/build/ariac_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AdvancedLogicalCameraImage.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AdvancedLogicalCameraImage.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AGVStatus.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AGVStatus.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyPart.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyPart.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyStationState.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyStationState.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyTask.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyTask.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyState.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/AssemblyState.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BasicLogicalCameraImage.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BasicLogicalCameraImage.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BinInfo.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BinInfo.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BinParts.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BinParts.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BreakBeamStatus.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/BreakBeamStatus.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Condition.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Condition.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Challenge.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Challenge.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/CombinedTask.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/CombinedTask.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/CompetitionState.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/CompetitionState.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/ConveyorBeltState.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/ConveyorBeltState.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/ConveyorParts.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/ConveyorParts.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/DroppedPartChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/DroppedPartChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/FaultyPartChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/FaultyPartChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/KittingPart.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/KittingPart.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/KittingTask.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/KittingTask.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/KitTrayPose.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/KitTrayPose.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Order.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Order.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/OrderCondition.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/OrderCondition.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/PartLot.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/PartLot.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Part.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Part.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/PartPlaceCondition.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/PartPlaceCondition.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/PartPose.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/PartPose.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Parts.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Parts.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/QualityIssue.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/QualityIssue.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/RobotMalfunctionChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/RobotMalfunctionChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Robots.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Robots.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/SensorBlackoutChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/SensorBlackoutChallenge.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Sensors.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Sensors.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/SubmissionCondition.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/SubmissionCondition.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/TimeCondition.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/TimeCondition.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Trial.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/Trial.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/VacuumGripperState.idl" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/msg/VacuumGripperState.idl" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ChangeGripper.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ChangeGripper.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ChangeGripperColor.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ChangeGripperColor.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ConveyorBeltControl.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ConveyorBeltControl.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/MoveAGV.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/MoveAGV.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ScoreTask.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/ScoreTask.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/SubmitOrder.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/SubmitOrder.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/VacuumGripperControl.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/VacuumGripperControl.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/PerformQualityCheck.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/PerformQualityCheck.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/GetPreAssemblyPoses.idl" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_adapter/ariac_msgs/srv/GetPreAssemblyPoses.idl" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AdvancedLogicalCameraImage.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AdvancedLogicalCameraImage.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AGVStatus.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AGVStatus.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyPart.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyPart.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyStationState.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyStationState.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyTask.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyTask.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyState.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/AssemblyState.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BasicLogicalCameraImage.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BasicLogicalCameraImage.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BinInfo.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BinInfo.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BinParts.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BinParts.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BreakBeamStatus.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/BreakBeamStatus.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Condition.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Condition.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Challenge.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Challenge.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/CombinedTask.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/CombinedTask.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/CompetitionState.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/CompetitionState.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/ConveyorBeltState.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/ConveyorBeltState.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/ConveyorParts.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/ConveyorParts.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/DroppedPartChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/DroppedPartChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/FaultyPartChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/FaultyPartChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/KittingPart.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/KittingPart.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/KittingTask.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/KittingTask.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/KitTrayPose.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/KitTrayPose.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Order.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Order.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/OrderCondition.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/OrderCondition.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/PartLot.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/PartLot.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Part.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Part.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/PartPlaceCondition.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/PartPlaceCondition.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/PartPose.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/PartPose.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Parts.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Parts.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/QualityIssue.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/QualityIssue.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/RobotMalfunctionChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/RobotMalfunctionChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Robots.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Robots.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/SensorBlackoutChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/SensorBlackoutChallenge.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Sensors.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Sensors.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/SubmissionCondition.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/SubmissionCondition.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/TimeCondition.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/TimeCondition.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Trial.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/Trial.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/VacuumGripperState.msg" "DESTINATION" "share/ariac_msgs/msg")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/msg/VacuumGripperState.msg" "DESTINATION" "share/ariac_msgs/msg")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ChangeGripper.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ChangeGripper.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripper_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripper_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripper_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripper_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ChangeGripperColor.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ChangeGripperColor.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripperColor_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripperColor_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripperColor_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ChangeGripperColor_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ConveyorBeltControl.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ConveyorBeltControl.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ConveyorBeltControl_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ConveyorBeltControl_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ConveyorBeltControl_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ConveyorBeltControl_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/MoveAGV.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/MoveAGV.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/MoveAGV_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/MoveAGV_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/MoveAGV_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/MoveAGV_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ScoreTask.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/ScoreTask.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ScoreTask_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ScoreTask_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ScoreTask_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/ScoreTask_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/SubmitOrder.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/SubmitOrder.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/SubmitOrder_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/SubmitOrder_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/SubmitOrder_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/SubmitOrder_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/VacuumGripperControl.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/VacuumGripperControl.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/VacuumGripperControl_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/VacuumGripperControl_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/VacuumGripperControl_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/VacuumGripperControl_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/PerformQualityCheck.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/PerformQualityCheck.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/PerformQualityCheck_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/PerformQualityCheck_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/PerformQualityCheck_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/PerformQualityCheck_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/GetPreAssemblyPoses.srv" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/srv/GetPreAssemblyPoses.srv" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/GetPreAssemblyPoses_Request.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/GetPreAssemblyPoses_Request.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/GetPreAssemblyPoses_Response.msg" "DESTINATION" "share/ariac_msgs/srv")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/srv/GetPreAssemblyPoses_Response.msg" "DESTINATION" "share/ariac_msgs/srv")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/ariac_msgs/environment")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/ariac_msgs/environment")

# install(FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/opt/ros/iron/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/ariac_msgs/environment")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/ariac_msgs/environment")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/ariac_msgs/environment")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/ariac_msgs")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/ariac_msgs")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/ariac_msgs")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/ariac_msgs")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/ariac_msgs")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/ariac_msgs")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/ariac_msgs")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/ariac_msgs")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/ariac_msgs")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/ariac_msgs")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/packages/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_index/share/ament_index/resource_index/packages/ariac_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/build/ariac_msgs/ament_cmake_core/ariac_msgsConfig.cmake" "/overlay_ws/build/ariac_msgs/ament_cmake_core/ariac_msgsConfig-version.cmake" "DESTINATION" "share/ariac_msgs/cmake")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/build/ariac_msgs/ament_cmake_core/ariac_msgsConfig.cmake" "/overlay_ws/build/ariac_msgs/ament_cmake_core/ariac_msgsConfig-version.cmake" "DESTINATION" "share/ariac_msgs/cmake")

# install(FILES "/overlay_ws/src/ARIAC/ariac_msgs/package.xml" "DESTINATION" "share/ariac_msgs")
ament_cmake_symlink_install_files("/overlay_ws/src/ARIAC/ariac_msgs" FILES "/overlay_ws/src/ARIAC/ariac_msgs/package.xml" "DESTINATION" "share/ariac_msgs")

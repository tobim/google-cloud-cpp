#!/bin/bash
#
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# NOTE: This build does not have a trigger file and is not automatically run by
# GCB. To manually run this build use:
#   ci/cloudbuild/build.sh --distro fedora scan-build --docker

set -euo pipefail

source "$(dirname "$0")/../../lib/init.sh"
source module ci/cloudbuild/builds/lib/cmake.sh

export CC=clang
export CXX=clang++
mapfile -t cmake_args < <(cmake::common_args)

scan_build=(
  "scan-build"
  "-o"
  "${HOME}/scan-build"
)
"${scan_build[@]}" cmake "${cmake_args[@]}"
"${scan_build[@]}" cmake --build cmake-out

// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/devtools/clouddebugger/v2/debugger.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_DEBUGGER2_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_DEBUGGER2_CONNECTION_H

#include "google/cloud/debugger/debugger2_connection_idempotency_policy.h"
#include "google/cloud/debugger/internal/debugger2_retry_traits.h"
#include "google/cloud/debugger/internal/debugger2_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace debugger {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using Debugger2RetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    debugger_internal::Debugger2RetryTraits>;

using Debugger2LimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        debugger_internal::Debugger2RetryTraits>;

using Debugger2LimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        debugger_internal::Debugger2RetryTraits>;

class Debugger2Connection {
 public:
  virtual ~Debugger2Connection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::devtools::clouddebugger::v2::SetBreakpointResponse>
  SetBreakpoint(
      google::devtools::clouddebugger::v2::SetBreakpointRequest const& request);

  virtual StatusOr<google::devtools::clouddebugger::v2::GetBreakpointResponse>
  GetBreakpoint(
      google::devtools::clouddebugger::v2::GetBreakpointRequest const& request);

  virtual Status DeleteBreakpoint(
      google::devtools::clouddebugger::v2::DeleteBreakpointRequest const&
          request);

  virtual StatusOr<google::devtools::clouddebugger::v2::ListBreakpointsResponse>
  ListBreakpoints(
      google::devtools::clouddebugger::v2::ListBreakpointsRequest const&
          request);

  virtual StatusOr<google::devtools::clouddebugger::v2::ListDebuggeesResponse>
  ListDebuggees(
      google::devtools::clouddebugger::v2::ListDebuggeesRequest const& request);
};

std::shared_ptr<Debugger2Connection> MakeDebugger2Connection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace debugger_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<debugger::Debugger2Connection> MakeDebugger2Connection(
    std::shared_ptr<Debugger2Stub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace debugger_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DEBUGGER_DEBUGGER2_CONNECTION_H

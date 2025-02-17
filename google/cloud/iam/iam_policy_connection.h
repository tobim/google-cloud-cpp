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
// source: google/iam/v1/iam_policy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_POLICY_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_POLICY_CONNECTION_H

#include "google/cloud/iam/iam_policy_connection_idempotency_policy.h"
#include "google/cloud/iam/internal/iam_policy_retry_traits.h"
#include "google/cloud/iam/internal/iam_policy_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IAMPolicyRetryPolicy = ::google::cloud::internal::TraitBasedRetryPolicy<
    iam_internal::IAMPolicyRetryTraits>;

using IAMPolicyLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        iam_internal::IAMPolicyRetryTraits>;

using IAMPolicyLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        iam_internal::IAMPolicyRetryTraits>;

class IAMPolicyConnection {
 public:
  virtual ~IAMPolicyConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);
};

std::shared_ptr<IAMPolicyConnection> MakeIAMPolicyConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<iam::IAMPolicyConnection> MakeIAMPolicyConnection(
    std::shared_ptr<IAMPolicyStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_POLICY_CONNECTION_H

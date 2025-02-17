// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_H

#include "google/cloud/iam/iam_credentials_connection_idempotency_policy.h"
#include "google/cloud/iam/internal/iam_credentials_retry_traits.h"
#include "google/cloud/iam/internal/iam_credentials_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IAMCredentialsRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        iam_internal::IAMCredentialsRetryTraits>;

using IAMCredentialsLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        iam_internal::IAMCredentialsRetryTraits>;

using IAMCredentialsLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        iam_internal::IAMCredentialsRetryTraits>;

class IAMCredentialsConnection {
 public:
  virtual ~IAMCredentialsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      google::iam::credentials::v1::GenerateAccessTokenRequest const& request);

  virtual StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
  GenerateIdToken(
      google::iam::credentials::v1::GenerateIdTokenRequest const& request);

  virtual StatusOr<google::iam::credentials::v1::SignBlobResponse> SignBlob(
      google::iam::credentials::v1::SignBlobRequest const& request);

  virtual StatusOr<google::iam::credentials::v1::SignJwtResponse> SignJwt(
      google::iam::credentials::v1::SignJwtRequest const& request);
};

std::shared_ptr<IAMCredentialsConnection> MakeIAMCredentialsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace iam_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<iam::IAMCredentialsConnection> MakeIAMCredentialsConnection(
    std::shared_ptr<IAMCredentialsStub> stub, Options options);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
namespace gcpcxxV1 = GOOGLE_CLOUD_CPP_NS;  // NOLINT(misc-unused-alias-decls)
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_H

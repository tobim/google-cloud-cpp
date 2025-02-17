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
// source: google/cloud/oslogin/v1/oslogin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_INTERNAL_OS_LOGIN_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_INTERNAL_OS_LOGIN_CONNECTION_IMPL_H

#include "google/cloud/oslogin/internal/os_login_retry_traits.h"
#include "google/cloud/oslogin/internal/os_login_stub.h"
#include "google/cloud/oslogin/os_login_connection.h"
#include "google/cloud/oslogin/os_login_connection_idempotency_policy.h"
#include "google/cloud/oslogin/os_login_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace oslogin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class OsLoginServiceConnectionImpl : public oslogin::OsLoginServiceConnection {
 public:
  ~OsLoginServiceConnectionImpl() override = default;

  OsLoginServiceConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<oslogin_internal::OsLoginServiceStub> stub,
      Options options);

  Options options() override { return options_; }

  Status DeletePosixAccount(
      google::cloud::oslogin::v1::DeletePosixAccountRequest const& request)
      override;

  Status DeleteSshPublicKey(
      google::cloud::oslogin::v1::DeleteSshPublicKeyRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::v1::LoginProfile> GetLoginProfile(
      google::cloud::oslogin::v1::GetLoginProfileRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::common::SshPublicKey> GetSshPublicKey(
      google::cloud::oslogin::v1::GetSshPublicKeyRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::v1::ImportSshPublicKeyResponse>
  ImportSshPublicKey(
      google::cloud::oslogin::v1::ImportSshPublicKeyRequest const& request)
      override;

  StatusOr<google::cloud::oslogin::common::SshPublicKey> UpdateSshPublicKey(
      google::cloud::oslogin::v1::UpdateSshPublicKeyRequest const& request)
      override;

 private:
  std::unique_ptr<oslogin::OsLoginServiceRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<oslogin::OsLoginServiceRetryPolicyOption>()) {
      return options.get<oslogin::OsLoginServiceRetryPolicyOption>()->clone();
    }
    return options_.get<oslogin::OsLoginServiceRetryPolicyOption>()->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<oslogin::OsLoginServiceBackoffPolicyOption>()) {
      return options.get<oslogin::OsLoginServiceBackoffPolicyOption>()->clone();
    }
    return options_.get<oslogin::OsLoginServiceBackoffPolicyOption>()->clone();
  }

  std::unique_ptr<oslogin::OsLoginServiceConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options
            .has<oslogin::OsLoginServiceConnectionIdempotencyPolicyOption>()) {
      return options
          .get<oslogin::OsLoginServiceConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<oslogin::OsLoginServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<oslogin_internal::OsLoginServiceStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oslogin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_OSLOGIN_INTERNAL_OS_LOGIN_CONNECTION_IMPL_H

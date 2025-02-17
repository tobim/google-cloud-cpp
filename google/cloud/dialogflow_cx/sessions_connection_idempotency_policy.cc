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
// source: google/cloud/dialogflow/cx/v3/session.proto

#include "google/cloud/dialogflow_cx/sessions_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

SessionsConnectionIdempotencyPolicy::~SessionsConnectionIdempotencyPolicy() =
    default;

namespace {
class DefaultSessionsConnectionIdempotencyPolicy
    : public SessionsConnectionIdempotencyPolicy {
 public:
  ~DefaultSessionsConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<SessionsConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultSessionsConnectionIdempotencyPolicy>(*this);
  }

  Idempotency DetectIntent(
      google::cloud::dialogflow::cx::v3::DetectIntentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency MatchIntent(
      google::cloud::dialogflow::cx::v3::MatchIntentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency FulfillIntent(
      google::cloud::dialogflow::cx::v3::FulfillIntentRequest const&) override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<SessionsConnectionIdempotencyPolicy>
MakeDefaultSessionsConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultSessionsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

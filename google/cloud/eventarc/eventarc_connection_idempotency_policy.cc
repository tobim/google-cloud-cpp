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
// source: google/cloud/eventarc/v1/eventarc.proto

#include "google/cloud/eventarc/eventarc_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace eventarc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

EventarcConnectionIdempotencyPolicy::~EventarcConnectionIdempotencyPolicy() =
    default;

namespace {
class DefaultEventarcConnectionIdempotencyPolicy
    : public EventarcConnectionIdempotencyPolicy {
 public:
  ~DefaultEventarcConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<EventarcConnectionIdempotencyPolicy> clone() const override {
    return absl::make_unique<DefaultEventarcConnectionIdempotencyPolicy>(*this);
  }

  Idempotency GetTrigger(
      google::cloud::eventarc::v1::GetTriggerRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListTriggers(
      google::cloud::eventarc::v1::ListTriggersRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateTrigger(
      google::cloud::eventarc::v1::CreateTriggerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateTrigger(
      google::cloud::eventarc::v1::UpdateTriggerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteTrigger(
      google::cloud::eventarc::v1::DeleteTriggerRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetChannel(
      google::cloud::eventarc::v1::GetChannelRequest const&) override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListChannels(
      google::cloud::eventarc::v1::ListChannelsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateChannel(
      google::cloud::eventarc::v1::CreateChannelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency UpdateChannel(
      google::cloud::eventarc::v1::UpdateChannelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteChannel(
      google::cloud::eventarc::v1::DeleteChannelRequest const&) override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency GetChannelConnection(
      google::cloud::eventarc::v1::GetChannelConnectionRequest const&)
      override {
    return Idempotency::kIdempotent;
  }

  Idempotency ListChannelConnections(
      google::cloud::eventarc::v1::ListChannelConnectionsRequest) override {
    return Idempotency::kIdempotent;
  }

  Idempotency CreateChannelConnection(
      google::cloud::eventarc::v1::CreateChannelConnectionRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency DeleteChannelConnection(
      google::cloud::eventarc::v1::DeleteChannelConnectionRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }
};
}  // namespace

std::unique_ptr<EventarcConnectionIdempotencyPolicy>
MakeDefaultEventarcConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultEventarcConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace eventarc
}  // namespace cloud
}  // namespace google

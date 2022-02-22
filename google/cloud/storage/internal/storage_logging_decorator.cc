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
// source: google/storage/v2/storage.proto

#include "google/cloud/storage/internal/storage_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/internal/streaming_write_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <google/storage/v2/storage.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace storage_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StorageLogging::StorageLogging(std::shared_ptr<StorageStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

Status StorageLogging::DeleteBucket(
    grpc::ClientContext& context,
    google::storage::v2::DeleteBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::DeleteBucketRequest const& request) {
        return child_->DeleteBucket(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::GetBucket(
    grpc::ClientContext& context,
    google::storage::v2::GetBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::GetBucketRequest const& request) {
        return child_->GetBucket(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::CreateBucket(
    grpc::ClientContext& context,
    google::storage::v2::CreateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::CreateBucketRequest const& request) {
        return child_->CreateBucket(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::ListBucketsResponse> StorageLogging::ListBuckets(
    grpc::ClientContext& context,
    google::storage::v2::ListBucketsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::ListBucketsRequest const& request) {
        return child_->ListBuckets(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::LockBucketRetentionPolicy(
    grpc::ClientContext& context,
    google::storage::v2::LockBucketRetentionPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::LockBucketRetentionPolicyRequest const&
                 request) {
        return child_->LockBucketRetentionPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::iam::v1::Policy> StorageLogging::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Bucket> StorageLogging::UpdateBucket(
    grpc::ClientContext& context,
    google::storage::v2::UpdateBucketRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::UpdateBucketRequest const& request) {
        return child_->UpdateBucket(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Object> StorageLogging::ComposeObject(
    grpc::ClientContext& context,
    google::storage::v2::ComposeObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::ComposeObjectRequest const& request) {
        return child_->ComposeObject(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status StorageLogging::DeleteObject(
    grpc::ClientContext& context,
    google::storage::v2::DeleteObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::DeleteObjectRequest const& request) {
        return child_->DeleteObject(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Object> StorageLogging::GetObject(
    grpc::ClientContext& context,
    google::storage::v2::GetObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::GetObjectRequest const& request) {
        return child_->GetObject(context, request);
      },
      context, request, __func__, tracing_options_);
}

std::unique_ptr<google::cloud::internal::StreamingReadRpc<
    google::storage::v2::ReadObjectResponse>>
StorageLogging::ReadObject(
    std::unique_ptr<grpc::ClientContext> context,
    google::storage::v2::ReadObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::unique_ptr<grpc::ClientContext> context,
             google::storage::v2::ReadObjectRequest const& request)
          -> std::unique_ptr<google::cloud::internal::StreamingReadRpc<
              google::storage::v2::ReadObjectResponse>> {
        auto stream = child_->ReadObject(std::move(context), request);
        if (components_.count("rpc-streams") > 0) {
          stream = absl::make_unique<
              google::cloud::internal::StreamingReadRpcLogging<
                  google::storage::v2::ReadObjectResponse>>(
              std::move(stream), tracing_options_,
              google::cloud::internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::Object> StorageLogging::UpdateObject(
    grpc::ClientContext& context,
    google::storage::v2::UpdateObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::UpdateObjectRequest const& request) {
        return child_->UpdateObject(context, request);
      },
      context, request, __func__, tracing_options_);
}

std::unique_ptr<::google::cloud::internal::StreamingWriteRpc<
    google::storage::v2::WriteObjectRequest,
    google::storage::v2::WriteObjectResponse>>
StorageLogging::WriteObject(std::unique_ptr<grpc::ClientContext> context) {
  using LoggingStream = ::google::cloud::internal::StreamingWriteRpcLogging<
      google::storage::v2::WriteObjectRequest,
      google::storage::v2::WriteObjectResponse>;

  auto request_id = google::cloud::internal::RequestIdForLogging();
  GCP_LOG(DEBUG) << __func__ << "(" << request_id << ")";
  auto stream = child_->WriteObject(std::move(context));
  if (components_.count("rpc-streams") > 0) {
    stream = absl::make_unique<LoggingStream>(
        std::move(stream), tracing_options_, std::move(request_id));
  }
  return stream;
}

StatusOr<google::storage::v2::ListObjectsResponse> StorageLogging::ListObjects(
    grpc::ClientContext& context,
    google::storage::v2::ListObjectsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::ListObjectsRequest const& request) {
        return child_->ListObjects(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::RewriteResponse> StorageLogging::RewriteObject(
    grpc::ClientContext& context,
    google::storage::v2::RewriteObjectRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::RewriteObjectRequest const& request) {
        return child_->RewriteObject(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::StartResumableWriteResponse>
StorageLogging::StartResumableWrite(
    grpc::ClientContext& context,
    google::storage::v2::StartResumableWriteRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::StartResumableWriteRequest const& request) {
        return child_->StartResumableWrite(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::QueryWriteStatusResponse>
StorageLogging::QueryWriteStatus(
    grpc::ClientContext& context,
    google::storage::v2::QueryWriteStatusRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::QueryWriteStatusRequest const& request) {
        return child_->QueryWriteStatus(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::storage::v2::ServiceAccount> StorageLogging::GetServiceAccount(
    grpc::ClientContext& context,
    google::storage::v2::GetServiceAccountRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::storage::v2::GetServiceAccountRequest const& request) {
        return child_->GetServiceAccount(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_internal
}  // namespace cloud
}  // namespace google

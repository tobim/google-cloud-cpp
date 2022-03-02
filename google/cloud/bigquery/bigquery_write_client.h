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
// source: google/cloud/bigquery/storage/v1/storage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_WRITE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_WRITE_CLIENT_H

#include "google/cloud/bigquery/bigquery_write_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// BigQuery Write API.
///
/// The Write API can be used to write data to BigQuery.
///
/// For supplementary information about the Write API, see:
/// https://cloud.google.com/bigquery/docs/write-api
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class BigQueryWriteClient {
 public:
  explicit BigQueryWriteClient(
      std::shared_ptr<BigQueryWriteConnection> connection, Options opts = {});
  ~BigQueryWriteClient();

  //@{
  // @name Copy and move support
  BigQueryWriteClient(BigQueryWriteClient const&) = default;
  BigQueryWriteClient& operator=(BigQueryWriteClient const&) = default;
  BigQueryWriteClient(BigQueryWriteClient&&) = default;
  BigQueryWriteClient& operator=(BigQueryWriteClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(BigQueryWriteClient const& a,
                         BigQueryWriteClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BigQueryWriteClient const& a,
                         BigQueryWriteClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Creates a write stream to the given table.
  /// Additionally, every table has a special stream named '_default'
  /// to which data can be written. This stream doesn't need to be created using
  /// CreateWriteStream. It is a stream that can be used simultaneously by any
  /// number of clients. Data written to this stream is considered committed as
  /// soon as an acknowledgement is received.
  ///
  /// @param parent  Required. Reference to the table to which the stream
  /// belongs, in the format
  ///  of `projects/{project}/datasets/{dataset}/tables/{table}`.
  /// @param write_stream  Required. Stream to be created.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::WriteStream,google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  /// [google.cloud.bigquery.storage.v1.CreateWriteStreamRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L370}
  /// [google.cloud.bigquery.storage.v1.WriteStream]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::WriteStream> CreateWriteStream(
      std::string const& parent,
      google::cloud::bigquery::storage::v1::WriteStream const& write_stream,
      Options opts = {});

  ///
  /// Creates a write stream to the given table.
  /// Additionally, every table has a special stream named '_default'
  /// to which data can be written. This stream doesn't need to be created using
  /// CreateWriteStream. It is a stream that can be used simultaneously by any
  /// number of clients. Data written to this stream is considered committed as
  /// soon as an acknowledgement is received.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::CreateWriteStreamRequest,google/cloud/bigquery/storage/v1/storage.proto#L370}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::WriteStream,google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  /// [google.cloud.bigquery.storage.v1.CreateWriteStreamRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L370}
  /// [google.cloud.bigquery.storage.v1.WriteStream]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::WriteStream> CreateWriteStream(
      google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
          request,
      Options opts = {});

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::bigquery::storage::v1::AppendRowsRequest,
      google::cloud::bigquery::storage::v1::AppendRowsResponse>>
  AsyncAppendRows(ExperimentalTag, Options opts = {});

  ///
  /// Gets information about a write stream.
  ///
  /// @param name  Required. Name of the stream to get, in the form of
  ///  `projects/{project}/datasets/{dataset}/tables/{table}/streams/{stream}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::WriteStream,google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  /// [google.cloud.bigquery.storage.v1.GetWriteStreamRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L485}
  /// [google.cloud.bigquery.storage.v1.WriteStream]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::WriteStream> GetWriteStream(
      std::string const& name, Options opts = {});

  ///
  /// Gets information about a write stream.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::GetWriteStreamRequest,google/cloud/bigquery/storage/v1/storage.proto#L485}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::WriteStream,google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  /// [google.cloud.bigquery.storage.v1.GetWriteStreamRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L485}
  /// [google.cloud.bigquery.storage.v1.WriteStream]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/stream.proto#L160}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::WriteStream> GetWriteStream(
      google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
          request,
      Options opts = {});

  ///
  /// Finalize a write stream so that no new data can be appended to the
  /// stream. Finalize is not supported on the '_default' stream.
  ///
  /// @param name  Required. Name of the stream to finalize, in the form of
  ///  `projects/{project}/datasets/{dataset}/tables/{table}/streams/{stream}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse,google/cloud/bigquery/storage/v1/storage.proto#L536}
  ///
  /// [google.cloud.bigquery.storage.v1.FinalizeWriteStreamRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L524}
  /// [google.cloud.bigquery.storage.v1.FinalizeWriteStreamResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L536}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
  FinalizeWriteStream(std::string const& name, Options opts = {});

  ///
  /// Finalize a write stream so that no new data can be appended to the
  /// stream. Finalize is not supported on the '_default' stream.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest,google/cloud/bigquery/storage/v1/storage.proto#L524}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse,google/cloud/bigquery/storage/v1/storage.proto#L536}
  ///
  /// [google.cloud.bigquery.storage.v1.FinalizeWriteStreamRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L524}
  /// [google.cloud.bigquery.storage.v1.FinalizeWriteStreamResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L536}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
  FinalizeWriteStream(
      google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
          request,
      Options opts = {});

  ///
  /// Atomically commits a group of `PENDING` streams that belong to the same
  /// `parent` table.
  ///
  /// Streams must be finalized before commit and cannot be committed multiple
  /// times. Once a stream is committed, data in the stream becomes available
  /// for read operations.
  ///
  /// @param parent  Required. Parent table that all the streams should belong
  /// to, in the form of
  ///  `projects/{project}/datasets/{dataset}/tables/{table}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse,google/cloud/bigquery/storage/v1/storage.proto#L509}
  ///
  /// [google.cloud.bigquery.storage.v1.BatchCommitWriteStreamsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L497}
  /// [google.cloud.bigquery.storage.v1.BatchCommitWriteStreamsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L509}
  ///
  StatusOr<
      google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
  BatchCommitWriteStreams(std::string const& parent, Options opts = {});

  ///
  /// Atomically commits a group of `PENDING` streams that belong to the same
  /// `parent` table.
  ///
  /// Streams must be finalized before commit and cannot be committed multiple
  /// times. Once a stream is committed, data in the stream becomes available
  /// for read operations.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsRequest,google/cloud/bigquery/storage/v1/storage.proto#L497}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse,google/cloud/bigquery/storage/v1/storage.proto#L509}
  ///
  /// [google.cloud.bigquery.storage.v1.BatchCommitWriteStreamsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L497}
  /// [google.cloud.bigquery.storage.v1.BatchCommitWriteStreamsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L509}
  ///
  StatusOr<
      google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
  BatchCommitWriteStreams(google::cloud::bigquery::storage::v1::
                              BatchCommitWriteStreamsRequest const& request,
                          Options opts = {});

  ///
  /// Flushes rows to a BUFFERED stream.
  ///
  /// If users are appending rows to BUFFERED stream, flush operation is
  /// required in order for the rows to become available for reading. A
  /// Flush operation flushes up to any previously flushed offset in a BUFFERED
  /// stream, to the offset specified in the request.
  ///
  /// Flush is not supported on the _default stream, since it is not BUFFERED.
  ///
  /// @param write_stream  Required. The stream that is the target of the flush
  /// operation.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::FlushRowsResponse,google/cloud/bigquery/storage/v1/storage.proto#L557}
  ///
  /// [google.cloud.bigquery.storage.v1.FlushRowsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L542}
  /// [google.cloud.bigquery.storage.v1.FlushRowsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L557}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse> FlushRows(
      std::string const& write_stream, Options opts = {});

  ///
  /// Flushes rows to a BUFFERED stream.
  ///
  /// If users are appending rows to BUFFERED stream, flush operation is
  /// required in order for the rows to become available for reading. A
  /// Flush operation flushes up to any previously flushed offset in a BUFFERED
  /// stream, to the offset specified in the request.
  ///
  /// Flush is not supported on the _default stream, since it is not BUFFERED.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::bigquery::storage::v1::FlushRowsRequest,google/cloud/bigquery/storage/v1/storage.proto#L542}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::bigquery::storage::v1::FlushRowsResponse,google/cloud/bigquery/storage/v1/storage.proto#L557}
  ///
  /// [google.cloud.bigquery.storage.v1.FlushRowsRequest]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L542}
  /// [google.cloud.bigquery.storage.v1.FlushRowsResponse]:
  /// @googleapis_reference_link{google/cloud/bigquery/storage/v1/storage.proto#L557}
  ///
  StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse> FlushRows(
      google::cloud::bigquery::storage::v1::FlushRowsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<BigQueryWriteConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERY_BIGQUERY_WRITE_CLIENT_H

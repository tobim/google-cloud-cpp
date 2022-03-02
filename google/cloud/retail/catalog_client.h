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
// source: google/cloud/retail/v2/catalog_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_CATALOG_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_CATALOG_CLIENT_H

#include "google/cloud/retail/catalog_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace retail {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for managing catalog configuration.
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
class CatalogServiceClient {
 public:
  explicit CatalogServiceClient(
      std::shared_ptr<CatalogServiceConnection> connection, Options opts = {});
  ~CatalogServiceClient();

  //@{
  // @name Copy and move support
  CatalogServiceClient(CatalogServiceClient const&) = default;
  CatalogServiceClient& operator=(CatalogServiceClient const&) = default;
  CatalogServiceClient(CatalogServiceClient&&) = default;
  CatalogServiceClient& operator=(CatalogServiceClient&&) = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(CatalogServiceClient const& a,
                         CatalogServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(CatalogServiceClient const& a,
                         CatalogServiceClient const& b) {
    return !(a == b);
  }
  //@}

  ///
  /// Lists all the [Catalog][google.cloud.retail.v2.Catalog]s associated with
  /// the project.
  ///
  /// @param parent  Required. The account resource name with an associated
  /// location.
  ///  If the caller does not have permission to list
  ///  [Catalog][google.cloud.retail.v2.Catalog]s under this location,
  ///  regardless of whether or not this location exists, a PERMISSION_DENIED
  ///  error is returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::retail::v2::Catalog,google/cloud/retail/v2/catalog.proto#L86}
  ///
  /// [google.cloud.retail.v2.ListCatalogsRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L126}
  /// [google.cloud.retail.v2.Catalog]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog.proto#L86}
  ///
  StreamRange<google::cloud::retail::v2::Catalog> ListCatalogs(
      std::string const& parent, Options opts = {});

  ///
  /// Lists all the [Catalog][google.cloud.retail.v2.Catalog]s associated with
  /// the project.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::retail::v2::ListCatalogsRequest,google/cloud/retail/v2/catalog_service.proto#L126}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::retail::v2::Catalog,google/cloud/retail/v2/catalog.proto#L86}
  ///
  /// [google.cloud.retail.v2.ListCatalogsRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L126}
  /// [google.cloud.retail.v2.Catalog]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog.proto#L86}
  ///
  StreamRange<google::cloud::retail::v2::Catalog> ListCatalogs(
      google::cloud::retail::v2::ListCatalogsRequest request,
      Options opts = {});

  ///
  /// Updates the [Catalog][google.cloud.retail.v2.Catalog]s.
  ///
  /// @param catalog  Required. The [Catalog][google.cloud.retail.v2.Catalog] to
  /// update.
  ///  If the caller does not have permission to update the
  ///  [Catalog][google.cloud.retail.v2.Catalog], regardless of whether or not
  ///  it exists, a PERMISSION_DENIED error is returned. If the
  ///  [Catalog][google.cloud.retail.v2.Catalog] to update does not exist, a
  ///  NOT_FOUND error is returned.
  /// @param update_mask  Indicates which fields in the provided
  ///  [Catalog][google.cloud.retail.v2.Catalog] to update.
  ///  If an unsupported or unknown field is provided, an INVALID_ARGUMENT error
  ///  is returned.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::retail::v2::Catalog,google/cloud/retail/v2/catalog.proto#L86}
  ///
  /// [google.cloud.retail.v2.UpdateCatalogRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L177}
  /// [google.cloud.retail.v2.Catalog]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog.proto#L86}
  ///
  StatusOr<google::cloud::retail::v2::Catalog> UpdateCatalog(
      google::cloud::retail::v2::Catalog const& catalog,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates the [Catalog][google.cloud.retail.v2.Catalog]s.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::retail::v2::UpdateCatalogRequest,google/cloud/retail/v2/catalog_service.proto#L177}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::retail::v2::Catalog,google/cloud/retail/v2/catalog.proto#L86}
  ///
  /// [google.cloud.retail.v2.UpdateCatalogRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L177}
  /// [google.cloud.retail.v2.Catalog]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog.proto#L86}
  ///
  StatusOr<google::cloud::retail::v2::Catalog> UpdateCatalog(
      google::cloud::retail::v2::UpdateCatalogRequest const& request,
      Options opts = {});

  ///
  /// Set a specified branch id as default branch. API methods such as
  /// [SearchService.Search][google.cloud.retail.v2.SearchService.Search],
  /// [ProductService.GetProduct][google.cloud.retail.v2.ProductService.GetProduct],
  /// [ProductService.ListProducts][google.cloud.retail.v2.ProductService.ListProducts]
  /// will treat requests using "default_branch" to the actual branch id set as
  /// default.
  ///
  /// For example, if `projects/*/locations/*/catalogs/*/branches/1` is set as
  /// default, setting
  /// [SearchRequest.branch][google.cloud.retail.v2.SearchRequest.branch] to
  /// `projects/*/locations/*/catalogs/*/branches/default_branch` is equivalent
  /// to setting
  /// [SearchRequest.branch][google.cloud.retail.v2.SearchRequest.branch] to
  /// `projects/*/locations/*/catalogs/*/branches/1`.
  ///
  /// Using multiple branches can be useful when developers would like
  /// to have a staging branch to test and verify for future usage. When it
  /// becomes ready, developers switch on the staging branch using this API
  /// while keeping using
  /// `projects/*/locations/*/catalogs/*/branches/default_branch` as
  /// [SearchRequest.branch][google.cloud.retail.v2.SearchRequest.branch] to
  /// route the traffic to this staging branch.
  ///
  /// CAUTION: If you have live predict/search traffic, switching the default
  /// branch could potentially cause outages if the ID space of the new branch
  /// is very different from the old one.
  ///
  /// More specifically:
  ///
  /// * PredictionService will only return product IDs from branch {newBranch}.
  /// * SearchService will only return product IDs from branch {newBranch}
  ///   (if branch is not explicitly set).
  /// * UserEventService will only join events with products from branch
  ///   {newBranch}.
  ///
  /// This feature is only available for users who have Retail Search enabled.
  /// Please submit a form [here](https://cloud.google.com/contact) to contact
  /// cloud sales if you are interested in using Retail Search.
  ///
  /// @param catalog  Full resource name of the catalog, such as
  ///  `projects/*/locations/global/catalogs/default_catalog`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.retail.v2.SetDefaultBranchRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L197}
  ///
  Status SetDefaultBranch(std::string const& catalog, Options opts = {});

  ///
  /// Set a specified branch id as default branch. API methods such as
  /// [SearchService.Search][google.cloud.retail.v2.SearchService.Search],
  /// [ProductService.GetProduct][google.cloud.retail.v2.ProductService.GetProduct],
  /// [ProductService.ListProducts][google.cloud.retail.v2.ProductService.ListProducts]
  /// will treat requests using "default_branch" to the actual branch id set as
  /// default.
  ///
  /// For example, if `projects/*/locations/*/catalogs/*/branches/1` is set as
  /// default, setting
  /// [SearchRequest.branch][google.cloud.retail.v2.SearchRequest.branch] to
  /// `projects/*/locations/*/catalogs/*/branches/default_branch` is equivalent
  /// to setting
  /// [SearchRequest.branch][google.cloud.retail.v2.SearchRequest.branch] to
  /// `projects/*/locations/*/catalogs/*/branches/1`.
  ///
  /// Using multiple branches can be useful when developers would like
  /// to have a staging branch to test and verify for future usage. When it
  /// becomes ready, developers switch on the staging branch using this API
  /// while keeping using
  /// `projects/*/locations/*/catalogs/*/branches/default_branch` as
  /// [SearchRequest.branch][google.cloud.retail.v2.SearchRequest.branch] to
  /// route the traffic to this staging branch.
  ///
  /// CAUTION: If you have live predict/search traffic, switching the default
  /// branch could potentially cause outages if the ID space of the new branch
  /// is very different from the old one.
  ///
  /// More specifically:
  ///
  /// * PredictionService will only return product IDs from branch {newBranch}.
  /// * SearchService will only return product IDs from branch {newBranch}
  ///   (if branch is not explicitly set).
  /// * UserEventService will only join events with products from branch
  ///   {newBranch}.
  ///
  /// This feature is only available for users who have Retail Search enabled.
  /// Please submit a form [here](https://cloud.google.com/contact) to contact
  /// cloud sales if you are interested in using Retail Search.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::retail::v2::SetDefaultBranchRequest,google/cloud/retail/v2/catalog_service.proto#L197}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.retail.v2.SetDefaultBranchRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L197}
  ///
  Status SetDefaultBranch(
      google::cloud::retail::v2::SetDefaultBranchRequest const& request,
      Options opts = {});

  ///
  /// Get which branch is currently default branch set by
  /// [CatalogService.SetDefaultBranch][google.cloud.retail.v2.CatalogService.SetDefaultBranch]
  /// method under a specified parent catalog.
  ///
  /// This feature is only available for users who have Retail Search enabled.
  /// Please submit a form [here](https://cloud.google.com/contact) to contact
  /// cloud sales if you are interested in using Retail Search.
  ///
  /// @param catalog  The parent catalog resource name, such as
  ///  `projects/*/locations/global/catalogs/default_catalog`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::retail::v2::GetDefaultBranchResponse,google/cloud/retail/v2/catalog_service.proto#L232}
  ///
  /// [google.cloud.retail.v2.GetDefaultBranchRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L222}
  /// [google.cloud.retail.v2.GetDefaultBranchResponse]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L232}
  ///
  StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
  GetDefaultBranch(std::string const& catalog, Options opts = {});

  ///
  /// Get which branch is currently default branch set by
  /// [CatalogService.SetDefaultBranch][google.cloud.retail.v2.CatalogService.SetDefaultBranch]
  /// method under a specified parent catalog.
  ///
  /// This feature is only available for users who have Retail Search enabled.
  /// Please submit a form [here](https://cloud.google.com/contact) to contact
  /// cloud sales if you are interested in using Retail Search.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::retail::v2::GetDefaultBranchRequest,google/cloud/retail/v2/catalog_service.proto#L222}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::retail::v2::GetDefaultBranchResponse,google/cloud/retail/v2/catalog_service.proto#L232}
  ///
  /// [google.cloud.retail.v2.GetDefaultBranchRequest]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L222}
  /// [google.cloud.retail.v2.GetDefaultBranchResponse]:
  /// @googleapis_reference_link{google/cloud/retail/v2/catalog_service.proto#L232}
  ///
  StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
  GetDefaultBranch(
      google::cloud::retail::v2::GetDefaultBranchRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<CatalogServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_CATALOG_CLIENT_H

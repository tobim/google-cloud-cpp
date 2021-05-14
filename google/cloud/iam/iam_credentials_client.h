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
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CLIENT_H

#include "google/cloud/iam/iam_credentials_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iam {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

/**
 * A service account is a special type of Google account that belongs to your
 * application or a virtual machine (VM), instead of to an individual end user.
 * Your application assumes the identity of the service account to call Google
 * APIs, so that the users aren't directly involved.
 *
 * Service account credentials are used to temporarily assume the identity
 * of the service account. Supported credential types include OAuth 2.0 access
 * tokens, OpenID Connect ID tokens, self-signed JSON Web Tokens (JWTs), and
 * more.
 */
class IAMCredentialsClient {
 public:
  explicit IAMCredentialsClient(
      std::shared_ptr<IAMCredentialsConnection> connection);
  ~IAMCredentialsClient();

  //@{
  // @name Copy and move support
  IAMCredentialsClient(IAMCredentialsClient const&) = default;
  IAMCredentialsClient& operator=(IAMCredentialsClient const&) = default;
  IAMCredentialsClient(IAMCredentialsClient&&) noexcept = default;
  IAMCredentialsClient& operator=(IAMCredentialsClient&&) noexcept = default;
  //@}

  //@{
  // @name Equality
  friend bool operator==(IAMCredentialsClient const& a,
                         IAMCredentialsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IAMCredentialsClient const& a,
                         IAMCredentialsClient const& b) {
    return !(a == b);
  }
  //@}

  /**
   * Generates an OAuth 2.0 access token for a service account.
   *
   * @param name  Required. The resource name of the service account for which
   * the credentials are requested, in the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param delegates  The sequence of service accounts in a delegation chain.
   * Each service account must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on its next service account in
   * the chain. The last service account in the chain must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on the service account that is
   * specified in the `name` field of the request. The delegates must have the
   * following format: `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`.
   * The `-` wildcard character is required; replacing it with a project ID is
   * invalid.
   * @param scope  Required. Code to identify the scopes to be included in the
   * OAuth 2.0 access token. See
   * https://developers.google.com/identity/protocols/googlescopes for more
   *  information.
   *  At least one value required.
   * @param lifetime  The desired lifetime duration of the access token in
   * seconds. Must be set to a value less than or equal to 3600 (1 hour). If a
   * value is not specified, the token's lifetime will be set to a default value
   * of one hour.
   * @return
   * [google::iam::credentials::v1::GenerateAccessTokenResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L72)
   */
  StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(std::string const& name,
                      std::vector<std::string> const& delegates,
                      std::vector<std::string> const& scope,
                      google::protobuf::Duration const& lifetime);

  /**
   * Generates an OpenID Connect ID token for a service account.
   *
   * @param name  Required. The resource name of the service account for which
   * the credentials are requested, in the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param delegates  The sequence of service accounts in a delegation chain.
   * Each service account must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on its next service account in
   * the chain. The last service account in the chain must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on the service account that is
   * specified in the `name` field of the request. The delegates must have the
   * following format: `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`.
   * The `-` wildcard character is required; replacing it with a project ID is
   * invalid.
   * @param audience  Required. The audience for the token, such as the API or
   * account that this token grants access to.
   * @param include_email  Include the service account email in the token. If
   * set to `true`, the token will contain `email` and `email_verified` claims.
   * @return
   * [google::iam::credentials::v1::GenerateIdTokenResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L186)
   */
  StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
  GenerateIdToken(std::string const& name,
                  std::vector<std::string> const& delegates,
                  std::string const& audience, bool include_email);

  /**
   * Signs a blob using a service account's system-managed private key.
   *
   * @param name  Required. The resource name of the service account for which
   * the credentials are requested, in the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param delegates  The sequence of service accounts in a delegation chain.
   * Each service account must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on its next service account in
   * the chain. The last service account in the chain must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on the service account that is
   * specified in the `name` field of the request. The delegates must have the
   * following format: `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`.
   * The `-` wildcard character is required; replacing it with a project ID is
   * invalid.
   * @param payload  Required. The bytes to sign.
   * @return
   * [google::iam::credentials::v1::SignBlobResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L109)
   */
  StatusOr<google::iam::credentials::v1::SignBlobResponse> SignBlob(
      std::string const& name, std::vector<std::string> const& delegates,
      std::string const& payload);

  /**
   * Signs a JWT using a service account's system-managed private key.
   *
   * @param name  Required. The resource name of the service account for which
   * the credentials are requested, in the following format:
   *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`. The `-` wildcard
   *  character is required; replacing it with a project ID is invalid.
   * @param delegates  The sequence of service accounts in a delegation chain.
   * Each service account must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on its next service account in
   * the chain. The last service account in the chain must be granted the
   * `roles/iam.serviceAccountTokenCreator` role on the service account that is
   * specified in the `name` field of the request. The delegates must have the
   * following format: `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`.
   * The `-` wildcard character is required; replacing it with a project ID is
   * invalid.
   * @param payload  Required. The JWT payload to sign: a JSON object that
   * contains a JWT Claims Set.
   * @return
   * [google::iam::credentials::v1::SignJwtResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L145)
   */
  StatusOr<google::iam::credentials::v1::SignJwtResponse> SignJwt(
      std::string const& name, std::vector<std::string> const& delegates,
      std::string const& payload);

  /**
   * Generates an OAuth 2.0 access token for a service account.
   *
   * @param request
   * [google::iam::credentials::v1::GenerateAccessTokenRequest](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L35)
   * @return
   * [google::iam::credentials::v1::GenerateAccessTokenResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L72)
   */
  StatusOr<google::iam::credentials::v1::GenerateAccessTokenResponse>
  GenerateAccessToken(
      google::iam::credentials::v1::GenerateAccessTokenRequest const& request);

  /**
   * Generates an OpenID Connect ID token for a service account.
   *
   * @param request
   * [google::iam::credentials::v1::GenerateIdTokenRequest](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L153)
   * @return
   * [google::iam::credentials::v1::GenerateIdTokenResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L186)
   */
  StatusOr<google::iam::credentials::v1::GenerateIdTokenResponse>
  GenerateIdToken(
      google::iam::credentials::v1::GenerateIdTokenRequest const& request);

  /**
   * Signs a blob using a service account's system-managed private key.
   *
   * @param request
   * [google::iam::credentials::v1::SignBlobRequest](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L81)
   * @return
   * [google::iam::credentials::v1::SignBlobResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L109)
   */
  StatusOr<google::iam::credentials::v1::SignBlobResponse> SignBlob(
      google::iam::credentials::v1::SignBlobRequest const& request);

  /**
   * Signs a JWT using a service account's system-managed private key.
   *
   * @param request
   * [google::iam::credentials::v1::SignJwtRequest](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L117)
   * @return
   * [google::iam::credentials::v1::SignJwtResponse](https://github.com/googleapis/googleapis/blob/6ce40ff8faf68226782f507ca6b2d497a77044de/google/iam/credentials/v1/common.proto#L145)
   */
  StatusOr<google::iam::credentials::v1::SignJwtResponse> SignJwt(
      google::iam::credentials::v1::SignJwtRequest const& request);

 private:
  std::shared_ptr<IAMCredentialsConnection> connection_;
};

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace iam
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CLIENT_H

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MDMRegistration.DLL by Windissect. 53 member(s).
class CEnrollmentLogger {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogger@CEnrollmentLogger@@SAPEAV1@XZ
    static CEnrollmentLogger * GetLogger();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAddingExtraHeaderFailure@CEnrollmentLogger@@QEAAXJPEBG@Z
    void LogAddingExtraHeaderFailure(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAikAlgorithmResult@CEnrollmentLogger@@QEAAXPEBGJ0@Z
    void LogAikAlgorithmResult(unsigned short const *, long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAikCertificateNotFound@CEnrollmentLogger@@QEAAXJ@Z
    void LogAikCertificateNotFound(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAikChoice@CEnrollmentLogger@@QEAAXK@Z
    void LogAikChoice(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAttestationStatus@CEnrollmentLogger@@QEAAXHH@Z
    void LogAttestationStatus(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollAADEnrollAsyncFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollAADEnrollAsyncFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollAttempt@CEnrollmentLogger@@QEAAXJH@Z
    void LogAutoEnrollAttempt(long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollAttemptRetryOnFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollAttemptRetryOnFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollDmGetAadDeviceTokenFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollDmGetAadDeviceTokenFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollDmRaiseToastNotificationAndWaitFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollDmRaiseToastNotificationAndWaitFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollDmRequestAadUserTokenFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollDmRequestAadUserTokenFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollEnrollmentInformation@CEnrollmentLogger@@QEAAXPEBG000@Z
    void LogAutoEnrollEnrollmentInformation(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollGetAadDeviceTokenWithDiscovery@CEnrollmentLogger@@QEAAXJPEBG@Z
    void LogAutoEnrollGetAadDeviceTokenWithDiscovery(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollGetAadToken@CEnrollmentLogger@@QEAAXJHPEBG0@Z
    void LogAutoEnrollGetAadToken(long, int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollGetAsyncResultsFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollGetAsyncResultsFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollImpersonateFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollImpersonateFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAutoEnrollWaitForCompletiongNoThrowFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogAutoEnrollWaitForCompletiongNoThrowFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAzureAttestationStatus@CEnrollmentLogger@@QEAAXH@Z
    void LogAzureAttestationStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogBeginCreateKeyInTPM@CEnrollmentLogger@@QEAAXPEBG@Z
    void LogBeginCreateKeyInTPM(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCertPolicyCreateMessageFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogCertPolicyCreateMessageFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCreatingExtraHeaderFailure@CEnrollmentLogger@@QEAAXJPEBG@Z
    void LogCreatingExtraHeaderFailure(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCryptoProviderInUseResult@CEnrollmentLogger@@QEAAXPEBGJ0KK@Z
    void LogCryptoProviderInUseResult(unsigned short const *, long, unsigned short const *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogCryptoProvidersEkAikMissing@CEnrollmentLogger@@QEAAXPEBGHHH@Z
    void LogCryptoProvidersEkAikMissing(unsigned short const *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogDmGetTpmInfoFailure@CEnrollmentLogger@@QEAAXPEBGKJ@Z
    void LogDmGetTpmInfoFailure(unsigned short const *, unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEndCreateKeyInTPM@CEnrollmentLogger@@QEAAXPEBGJ@Z
    void LogEndCreateKeyInTPM(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertAuthFail@CEnrollmentLogger@@QEAAXJ@Z
    void LogEnrollCertAuthFail(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertPolicyRequestSendFail@CEnrollmentLogger@@QEAAXJ@Z
    void LogEnrollCertPolicyRequestSendFail(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertPolicyResponseFail@CEnrollmentLogger@@QEAAXJ@Z
    void LogEnrollCertPolicyResponseFail(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertificateFailedDetailedFunction@CEnrollmentLogger@@QEAAXKPEBG00J@Z
    void LogEnrollCertificateFailedDetailedFunction(unsigned long, unsigned short const *, unsigned short const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertificateFindCertBasedOnContainerFailed@CEnrollmentLogger@@QEAAXPEBG00J@Z
    void LogEnrollCertificateFindCertBasedOnContainerFailed(unsigned short const *, unsigned short const *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertificateRenewFailed@CEnrollmentLogger@@QEAAXPEBGJ@Z
    void LogEnrollCertificateRenewFailed(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertificateRenewPKCS7SignFailed@CEnrollmentLogger@@QEAAXPEBGJ@Z
    void LogEnrollCertificateRenewPKCS7SignFailed(unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertificateRequestSendFail@CEnrollmentLogger@@QEAAXJ@Z
    void LogEnrollCertificateRequestSendFail(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollCertificateResponseFail@CEnrollmentLogger@@QEAAXJ@Z
    void LogEnrollCertificateResponseFail(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollDiscoveryFailure@CEnrollmentLogger@@QEAAXPEBG@Z
    void LogEnrollDiscoveryFailure(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollDualEnrollmentEntDMIdNotFound@CEnrollmentLogger@@QEAAXJ@Z
    void LogEnrollDualEnrollmentEntDMIdNotFound(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollDualEnrollmentMultipleMainEnrollmentFound@CEnrollmentLogger@@QEAAXXZ
    void LogEnrollDualEnrollmentMultipleMainEnrollmentFound();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollDualEnrollmentNoMainEnrollmentFound@CEnrollmentLogger@@QEAAXJ@Z
    void LogEnrollDualEnrollmentNoMainEnrollmentFound(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollFailureSoapTraceId@CEnrollmentLogger@@QEAAXPEBG@Z
    void LogEnrollFailureSoapTraceId(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollGenerateCertRequestFail@CEnrollmentLogger@@QEAAXJPEBG0K@Z
    void LogEnrollGenerateCertRequestFail(long, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollServerMessageParsingError@CEnrollmentLogger@@QEAAXJPEBD@Z
    void LogEnrollServerMessageParsingError(long, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEnrollServerMessageParsingFound@CEnrollmentLogger@@QEAAXJPEBG@Z
    void LogEnrollServerMessageParsingFound(long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogGettingCVAsStringFailed@CEnrollmentLogger@@QEAAXXZ
    void LogGettingCVAsStringFailed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogLimitedRenewStatus@CEnrollmentLogger@@QEAAXJ@Z
    void LogLimitedRenewStatus(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMmpcCertificationValidationFailure@CEnrollmentLogger@@QEAAXJ@Z
    void LogMmpcCertificationValidationFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMmpcDiscoverEndpointResults@CEnrollmentLogger@@QEAAXJIIPEBG000@Z
    void LogMmpcDiscoverEndpointResults(long, unsigned int, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMmpcDiscoveryResponseFailure@CEnrollmentLogger@@QEAAXJI@Z
    void LogMmpcDiscoveryResponseFailure(long, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMmpcSendDiscoveryRequestFailure@CEnrollmentLogger@@QEAAXJIPEBG@Z
    void LogMmpcSendDiscoveryRequestFailure(long, unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogUnparsedWSSecurityFault@CEnrollmentLogger@@QEAAXXZ
    void LogUnparsedWSSecurityFault();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogUsingNonCryptoProvidersPath@CEnrollmentLogger@@QEAAXK_N@Z
    void LogUsingNonCryptoProvidersPath(unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogWSSecurityFault@CEnrollmentLogger@@QEAAXPEBG0J@Z
    void LogWSSecurityFault(unsigned short const *, unsigned short const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNewCorrelationVector@CEnrollmentLogger@@QEAAXPEBG@Z
    void SetNewCorrelationVector(unsigned short const *);
};

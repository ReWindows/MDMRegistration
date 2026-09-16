#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MDMRegistration.DLL by Windissect. 28 member(s).
class Enrollment {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Enrollment@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Enrollment@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Enrollment@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClientCertThumb@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_ClientCertThumb(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Discovery@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_Discovery(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnrollmentType@Enrollment@@UEAAJPEAW4EnrollmentEnrollType@@@Z
    virtual long get_EnrollmentType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IntermediateCertThumb@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_IntermediateCertThumb(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Key@Enrollment@@UEAAJPEAU_GUID@@@Z
    virtual long get_Key(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_KeyAsString@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_KeyAsString(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NotificationState@Enrollment@@UEAAJPEAH@Z
    virtual long get_NotificationState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RootCertThumb@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_RootCertThumb(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SID@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_SID(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SspHyperLink@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_SspHyperLink(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@Enrollment@@UEAAJPEAW4EnrollmentStateTag@@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TenantID@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_TenantID(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TraceId@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_TraceId(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UPN@Enrollment@@UEAAJPEAPEAG@Z
    virtual long get_UPN(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_ClientCertThumb@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_ClientCertThumb(HKEY__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_Discovery@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_Discovery(HKEY__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_EnrollEngine@Enrollment@@UEAAXPEAUIEnrollEngine@@@Z
    virtual void set_EnrollEngine(IEnrollEngine *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_IntermediateCertThumb@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_IntermediateCertThumb(HKEY__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_NotificationState@Enrollment@@UEAAJH@Z
    virtual long set_NotificationState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_RootCertThumb@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_RootCertThumb(HKEY__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_SID@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_SID(HKEY__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_SspHyperLink@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_SspHyperLink(HKEY__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_TenantID@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_TenantID(HKEY__*, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_UPN@Enrollment@@QEAAJPEAUHKEY__@@PEAG@Z
    long set_UPN(HKEY__*, unsigned short *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Enrollment@@QEAA@XZ
    ~Enrollment();
};

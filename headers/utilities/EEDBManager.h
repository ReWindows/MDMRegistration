#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MDMRegistration.DLL by Windissect. 17 member(s).
class EEDBManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteEnrollment@EEDBManager@@UEAAJU_GUID@@@Z
    virtual long DeleteEnrollment(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentByKey@EEDBManager@@QEAAJU_GUID@@PEAPEAVEnrollment@@@Z
    long GetEnrollmentByKey(_GUID, Enrollment * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentEntDmId@EEDBManager@@SAJU_GUID@@PEAPEAG@Z
    static long GetEnrollmentEntDmId(_GUID, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentType@EEDBManager@@SAJU_GUID@@PEAW4EnrollmentEnrollType@@@Z
    static long GetEnrollmentType(_GUID, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentsByOpaqueID@EEDBManager@@UEAAJPEBGPEAPEAUIEnrollmentInfoEnumerator@@@Z
    virtual long GetEnrollmentsByOpaqueID(unsigned short const *, IEnrollmentInfoEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentsByPartnerOpaqueID@EEDBManager@@UEAAJPEBGPEAPEAUIEnrollmentInfoEnumerator@@@Z
    virtual long GetEnrollmentsByPartnerOpaqueID(unsigned short const *, IEnrollmentInfoEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentsByPartnerOpaqueIDPrefix@EEDBManager@@UEAAJPEBGPEAPEAUIEnrollmentInfoEnumerator@@@Z
    virtual long GetEnrollmentsByPartnerOpaqueIDPrefix(unsigned short const *, IEnrollmentInfoEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentsOfType@EEDBManager@@UEAAJW4EnrollmentEnrollType@@PEAPEAUIEnrollmentInfoEnumerator@@@Z
    virtual long GetEnrollmentsOfType(int, IEnrollmentInfoEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentsOfTypes@EEDBManager@@UEAAJ_KPEAPEAUIEnrollmentInfoEnumerator@@@Z
    virtual long GetEnrollmentsOfTypes(uint64_t, IEnrollmentInfoEnumerator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentsOfTypes@EEDBManager@@UEAAJ_KPEAPEAUIEnrollmentInfoEnumerator@@W4EnrollmentStateTag@@@Z
    virtual long GetEnrollmentsOfTypes(uint64_t, IEnrollmentInfoEnumerator * *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentsRootKey@EEDBManager@@SAPEBGXZ
    static unsigned short const * GetEnrollmentsRootKey();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnenrollmentOrigin@EEDBManager@@UEAAJU_GUID@@PEAPEAG@Z
    virtual long GetUnenrollmentOrigin(_GUID, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenEnrollmentHKEY@EEDBManager@@SAJPEAUHKEY__@@PEBGKPEAPEAU2@PEAG_K@Z
    static long OpenEnrollmentHKEY(HKEY__*, unsigned short const *, unsigned long, HKEY__* *, unsigned short *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenHKEY@EEDBManager@@SAJPEBGKPEAPEAUHKEY__@@@Z
    static long OpenHKEY(unsigned short const *, unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEnrollment@EEDBManager@@QEAAJPEAVEnrollment@@@Z
    long UpdateEnrollment(Enrollment *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnrollmentString@EEDBManager@@CAJU_GUID@@PEBGPEAPEAG@Z
    static long GetEnrollmentString(_GUID, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenEnrollmentKey@EEDBManager@@CAJU_GUID@@KPEBGPEAPEAUHKEY__@@@Z
    static long OpenEnrollmentKey(_GUID, unsigned long, unsigned short const *, HKEY__* *);
};

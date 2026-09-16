#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MDMRegistration.DLL by Windissect. 8 member(s).
class EnrollmentInfoEnumerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EnrollmentInfoEnumerator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@EnrollmentInfoEnumerator@@QEAAJPEAVEEDBManager@@W4EnrollmentStateTag@@1_KPEBGHH@Z
    long Initialize(EEDBManager *, int, int, uint64_t, unsigned short const *, int, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EnrollmentInfoEnumerator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EnrollmentInfoEnumerator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Next@EnrollmentInfoEnumerator@@UEAAJPEAPEAUIEnrollmentInfo@@@Z
    virtual long get_Next(IEnrollmentInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_EnrollEngine@EnrollmentInfoEnumerator@@UEAAXPEAUIEnrollEngine@@@Z
    virtual void set_EnrollEngine(IEnrollEngine *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnrollmentInfoEnumerator@@QEAA@XZ
    ~EnrollmentInfoEnumerator();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllEnrollmentIDsFiltered@EnrollmentInfoEnumerator@@AEAAJPEAKPEAPEAPEAGW4EnrollmentStateTag@@2_KPEBGHH@Z
    long GetAllEnrollmentIDsFiltered(unsigned long *, unsigned short * * *, int, int, uint64_t, unsigned short const *, int, int);
};

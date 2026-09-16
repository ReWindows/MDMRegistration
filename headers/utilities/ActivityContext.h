#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MDMRegistration.DLL by Windissect. 6 member(s).
class ActivityContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActivityContext@@QEAA@XZ
    ActivityContext();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ActivityContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ActivityContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ActivityContext@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?set_OrchestratorType@ActivityContext@@QEAAJPEBG@Z
    long set_OrchestratorType(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivityContext@@QEAA@XZ
    ~ActivityContext();
};

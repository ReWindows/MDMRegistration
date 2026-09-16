#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MDMRegistration.DLL by Windissect. 5 member(s).
class DefaultActivityContextStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteContext@DefaultActivityContextStore@@UEAAJAEAVActivityContext@@@Z
    virtual long DeleteContext(ActivityContext &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivityContext@DefaultActivityContextStore@@UEAAJW4EntPlatStateMachine@@AEBU_GUID@@PEAPEAVActivityContext@@@Z
    virtual long GetActivityContext(int, _GUID const &, ActivityContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivityContextFromStore@DefaultActivityContextStore@@UEAAJAEBU_GUID@@PEAPEAVActivityContext@@@Z
    virtual long GetActivityContextFromStore(_GUID const &, ActivityContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkActivitiesContextForCleanup@DefaultActivityContextStore@@UEAAJXZ
    virtual long MarkActivitiesContextForCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreContext@DefaultActivityContextStore@@UEAAJAEAVActivityContext@@@Z
    virtual long StoreContext(ActivityContext &);
};

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MDMRegistration.DLL by Windissect. 7 member(s).
class WinHttpHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectToServer@WinHttpHelper@@QEAAJPEBG0K@Z
    long ConnectToServer(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MmpcConnectToServer@WinHttpHelper@@QEAAJPEBG0K@Z
    long MmpcConnectToServer(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MmpcSendRequest@WinHttpHelper@@QEAAJPEBG0PEBDKPEAPEBGKKPEAHPEAK@Z
    long MmpcSendRequest(unsigned short const *, unsigned short const *, char const *, unsigned long, unsigned short const * *, unsigned long, unsigned long, int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PingServer@WinHttpHelper@@QEAAJPEBGHPEAHPEAPEAG@Z
    long PingServer(unsigned short const *, int, int *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReceiveResponse@WinHttpHelper@@QEAAJPEAPEADPEAK@Z
    long ReceiveResponse(char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendRequest@WinHttpHelper@@QEAAJPEBGPEBDKKPEAPEBGKPEAHPEAK@Z
    long SendRequest(unsigned short const *, char const *, unsigned long, unsigned long, unsigned short const * *, unsigned long, int *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinHttpHelper@@QEAA@XZ
    ~WinHttpHelper();
};

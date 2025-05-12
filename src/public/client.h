#pragma once

#include <cstdint>

#include "appsystem.h"

namespace hlapi {

#define INTERFACE_VERSION_GAME_CLIENTS "Source2GameClients001"
#define INTERFACE_VERSION_GAME_ENTITIES "Source2GameEntities001"
#define INTERFACE_VERSION_GAME_EVENT_SYSTEM_CLIENT "GameEventSystemClientV001"

class CSource2Client : public IAppSystem {
public:
    CSource2Client();

    virtual void unk2();
    virtual void* unk3();
    virtual uint64_t unk4(); // ret 5
    virtual void unk5(void* unk0, void* unk1, void* unk2); // calls ReconnectGameInterface(unk1, unk2, 2);
    virtual uint64_t unk6(); // ret 1
    virtual uint64_t unk7(); // ret 2
    virtual void unk8(void* unk0, void* unk1);
    virtual void unk9(uint64_t unk0, uint64_t unk1);
    virtual void unk10(uint64_t unk0, uint8_t unk1);
    virtual void unk11();
    virtual void unk12(uint64_t unk0, uint64_t unk1, uint8_t unk2);
    virtual int unk13(uint64_t unk0, int32_t unk1);
    virtual int unk14(uint64_t unk0, int32_t unk1);
    virtual void unk15(uint64_t unk0, int32_t unk1);
    virtual void unk16(int32_t unk0, uint64_t unk1, int32_t unk2, uint8_t unk3);
    virtual void WriteUsercmdDeltaToBuffer(void* unk0, int32_t unk1, int64_t unk2, int32_t unk3, int32_t unk4); // "CL:  WARNING! User command buffer overflow (%i->%i), last cmd was %i bits long\n"
    virtual void unk17(uint64_t unk0, int32_t unk1, uint64_t unk2, int32_t unk3);
    virtual void unk18(uint64_t unk0, int32_t unk1, uint64_t unk2, int32_t unk3);
    virtual uint64_t unk19(uint64_t unk0, uint32_t unk1, void* unk2);
    virtual char* unk20(uint64_t unk0, uint32_t unk1, char unk2); // "<no class info>"
    virtual uint64_t unk21();
    virtual void unk22(uint64_t unk0, void* unk1, uint64_t unk2, int32_t unk3); // "Entity %d: %s became %s on client\n", "dormant", "active"
    virtual uint64_t unk23();
    virtual uint64_t unk24(uint64_t unk0, uint64_t unk1, uint64_t unk2); // "CHudCloseCaption"
    virtual void unk25(uint64_t unk0, int32_t unk1); // "_vpc_/unity_client_hlvr/linuxsteamrt64/../../../cdll_client_int.cpp"
    virtual uint64_t unk26();
    virtual void unk27(uint64_t unk0, uint8_t unk1); // calls Plat_FloatTime
    virtual void unk28();
    virtual void unk29(uint64_t unk0, uint64_t unk1);
    virtual void unk30();
    virtual bool unk31(uint64_t unk0, uint32_t unk1, uint64_t unk2, uint8_t* unk3);
    virtual void unk32(uint64_t unk0, uint64_t unk1);
    virtual void unk33(uint64_t unk0, uint64_t unk1);
    virtual void unk34(uint64_t unk0, uint64_t unk1);
    virtual void unk35();
    virtual void unk36(); // nop
    virtual uint8_t unk37(uint64_t unk0, uint32_t unk1);
    virtual uint64_t unk38(); // ret 0
    virtual uint64_t unk39(); // ret 1
    virtual void unk40(); // nop
    virtual void unk41(); // nop
    virtual void unk42();
    virtual void unk43(uint64_t unk0, uint32_t unk1, uint32_t unk2, int32_t unk3);
    virtual void unk44(uint64_t unk0, uint16_t* unk1, uint32_t unk2);
    virtual void unk45(uint64_t* unk0, uint32_t* unk1, uint32_t unk2);
    virtual void unk46();
    virtual void unk47();
    virtual void unk48(uint64_t unk0, uint64_t unk1);
    virtual void unk49(uint32_t unk0);
    virtual uint64_t unk50(uint64_t unk0, uint32_t unk1, uint64_t unk2);
    virtual void unk51(uint64_t unk0, uint64_t unk1, uint64_t unk2);
    virtual uint64_t unk52(uint64_t unk0, uint64_t unk1);
    virtual void unk53(); // nop
    virtual void unk54(); // nop
    virtual void unk55(uint64_t* unk0, uint64_t unk1, uint64_t unk2);
    virtual void unk56(); // "demo_stop"
    virtual void unk57(); // nop
    virtual void unk58(uint64_t unk0, uint64_t unk1, int32_t unk2, uint64_t* unk3, uint32_t unk4);
    virtual void unk59(uint64_t unk0);
    virtual void unk60(); // nop
    virtual void unk61(uint64_t unk0, uint32_t unk1, uint32_t unk2, uint8_t unk3); // "CTSQueue corruption", "demo_skip"
    virtual void unk62(); // calls something in gameconfigclient
    virtual void unk63(uint64_t unk0, uint64_t* unk1, uint32_t unk2); // networkmessages, gameconfigclient
    virtual void unk64(uint64_t unk0);
    virtual uint32_t unk65(); // Plat_FloatTime
    virtual void unk66();
    virtual void unk67();
    virtual void unk68();
    virtual uint64_t unk69(); // ret 1
    virtual uint8_t* unk70(); // 16 byte array
    virtual void unk71(uint64_t unk0, int32_t unk1, uint64_t unk2, uint64_t unk3); // "keybind_changed"
    virtual void unk72();
    virtual bool unk73(uint64_t* unk0, uint64_t unk1, uint32_t unk2, uint8_t* unk3 /*16*/);
    virtual void unk74(uint64_t unk0, int32_t unk1, uint32_t* unk2);
    virtual void unk75(uint64_t unk0, int32_t unk1, uint32_t* unk2);
    virtual uint32_t unk76(uint64_t unk0, uint32_t unk1);
    virtual uint64_t unk77(uint64_t unk0, uint32_t unk1, uint32_t *unk2);
    virtual uint64_t unk78(uint64_t unk0, uint32_t unk1);
    virtual void unk79(uint64_t unk0, uint32_t unk1, uint32_t* unk2);
    virtual uint64_t unk80(uint64_t unk0, uint32_t unk1, uint32_t* unk2, uint32_t* unk3);
    virtual uint64_t unk81(uint64_t* unk0, uint32_t unk1, uint64_t unk2, int32_t* unk3);
    virtual uint32_t unk82(uint64_t unk0, uint32_t unk1, uint32_t* unk2, uint32_t* unk3);
    virtual uint64_t unk83(uint64_t unk0, uint64_t unk1, uint64_t unk2); // "ehandle", "%d (s/n %d)", "[-1] -> empty", "[%d %d] -> %s", "CStrongHandle", "CWeakHandle", "m_flPoseParameter", "RESOURCE_HANDLE_INVALID"
    virtual void unk84(uint64_t unk0, uint64_t* unk1, uint64_t unk2, int32_t* unk3, int32_t* unk4); // "Glows: Render Objects Solid Color"
    virtual void unk85();
    virtual void unk86(); // gameconfigclient
    virtual void unk87(uint64_t unk0, uint64_t* unk1, uint64_t** unk2);
    virtual void unk88(uint64_t unk0, uint64_t* unk1);
    virtual uint64_t unk89(); // ret 0
    virtual void unk90(); // nop
    virtual uint64_t unk91(uint64_t unk0, uint64_t unk1, uint32_t* unk2, uint64_t* unk3);
    virtual void unk92();
    virtual void unk93(uint64_t unk0, uint64_t unk1, uint64_t unk2);
    virtual uint64_t unk94(uint64_t unk0, uint32_t unk1, uint64_t unk2, uint64_t unk3);
    virtual void unk95(uint64_t unk0);
    virtual uint64_t unk96(uint64_t unk0, uint64_t unk1); // ret unk1
    virtual uint64_t unk97(); // ret 0
    virtual uint64_t unk98(); // ret 0x3f800000
    virtual void unk99(); // += 1 something
    virtual uint64_t unk100(); // ret 0
    virtual void unk101(uint32_t unk0);
    virtual void unk102(); // nop
    virtual uint64_t unk103(); // ret 0
    virtual uint64_t unk104(uint64_t unk0, uint64_t* unk1, uint64_t unk2); // some thread mutex stuff
    virtual void unk105();
    virtual uint64_t unk106(); // ret 0
    virtual void unk107();
    virtual void unk108(uint64_t unk0, uint32_t unk1, uint64_t unk2, uint64_t unk3); // "client_disconnect", "reason_code"
    virtual void unk109(uint64_t unk0, uint64_t unk1, uint64_t* unk2, uint32_t* unk3);
    virtual void unk110(uint64_t unk0, uint64_t unk1, uint64_t* unk2, uint32_t unk3, uint64_t unk4);
    virtual void unk111(uint64_t unk0, uint64_t unk1, uint64_t* unk2, uint32_t unk3, uint64_t unk4);
    virtual char* unk112(); // ret "hlvr.global_stack"
    virtual uint64_t unk113(); // ret 1
    virtual uint64_t unk114(uint64_t unk0, uint64_t* unk1);
    virtual uint64_t unk115();
    virtual uint8_t* unk116();
    virtual void unk117(); // nop
    virtual uint64_t unk118(); // return 0
    virtual void unk119(uint64_t unk0, uint64_t unk1);
    virtual void unk120(uint64_t unk0, uint64_t unk1);
    virtual uint64_t unk121(); // ret 0
    virtual uint64_t unk122();
    virtual uint64_t unk123(uint64_t unk0, uint64_t unk1, uint64_t unk2);
    virtual void unk124(uint64_t unk0, int32_t unk1, int32_t unk2);
    virtual void unk125(uint64_t unk0, uint64_t unk1);
    virtual void unk125(uint64_t unk0, uint64_t unk1, uint32_t unk2, uint8_t* unk3, uint64_t unk4); // "%5d: %8.6f msec change \'%s()\' on field %s(path=%s) for ent %s(%s) name= \'%s\'\n"
};
} // namespace hlapi

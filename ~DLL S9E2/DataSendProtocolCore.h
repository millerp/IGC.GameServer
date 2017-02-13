#ifndef DATASENDPROTOCOLCORE_H
#define DATASENDPROTOCOLCORE_H

bool DSProtocolCore(BYTE* buff, BYTE protoNum, int len, int enc, int unk1);
void CGLiveSend(PMSG_CLIENTTIME_OLD *lpMsg, BYTE* buff, int len);
void CGJoinIdPassRequest(PMSG_IDPASS_OLD *lpMsg, BYTE* buff, int len);
#endif
void TerminalTransitionInfo___ctor(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  TerminalTransitionInfo__Init(this, v3);
}


void TerminalTransitionInfo__Init(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w1
  struct System_String_o **p_voiceAssetName; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596D97A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D97A = 1;
  }
  this->fields.missionId = 0;
  this->fields.beforeActionVals = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.beforeActionVals, 0, v2, v3, v4, v5, v6, v7);
  this->fields.afterActionVals = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.afterActionVals, 0, v9, v10, v11, v12, v13, v14);
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceAssetName = &this->fields.voiceAssetName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_voiceAssetName, v15, v17, v18, v19, v20, v21, v22);
  p_voiceAssetName[1] = 0;
  p_voiceAssetName[2] = 0;
}


void TerminalTransitionInfo__SetParameters(
        TerminalTransitionInfo_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *voiceAssetName; // x8
  int32_t missionId; // w9
  struct System_String_o **p_voiceAssetName; // x0

  if ( !info )
    sub_2213CDC(this, 0);
  voiceAssetName = info->fields.voiceAssetName;
  missionId = info->fields.missionId;
  this->fields.voiceAssetName = voiceAssetName;
  p_voiceAssetName = &this->fields.voiceAssetName;
  *((_DWORD *)p_voiceAssetName - 6) = missionId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_voiceAssetName,
    (int32_t)voiceAssetName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
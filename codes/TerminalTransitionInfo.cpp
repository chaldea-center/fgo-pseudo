void TerminalTransitionInfo___ctor(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  TerminalTransitionInfo__Init(this, v3);
}


void TerminalTransitionInfo__Init(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct System_String_o **p_voiceAssetName; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CC4658 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC4658 = 1;
  }
  this->fields.missionId = 0;
  this->fields.beforeActionVals = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.beforeActionVals, 0, v2, v3, v4, v5, v6, v7);
  this->fields.afterActionVals = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.afterActionVals, 0, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceAssetName = &this->fields.voiceAssetName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_voiceAssetName, v15, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_voiceAssetName + 2) = 0;
}


void TerminalTransitionInfo__SetParameters(
        TerminalTransitionInfo_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o *voiceAssetName; // x1

  if ( !info )
    sub_1C71608(this, 0);
  this->fields.missionId = info->fields.missionId;
  voiceAssetName = info->fields.voiceAssetName;
  this->fields.voiceAssetName = voiceAssetName;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.voiceAssetName,
    (int32_t)voiceAssetName,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
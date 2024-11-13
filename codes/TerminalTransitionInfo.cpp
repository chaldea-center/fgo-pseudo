void __fastcall TerminalTransitionInfo___ctor(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  TerminalTransitionInfo__Init(this, v3);
}


void __fastcall TerminalTransitionInfo__Init(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  void *v15; // x1
  struct System_String_o **p_voiceAssetName; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B13670 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B13670 = 1;
  }
  this->fields.missionId = 0;
  this->fields.beforeActionVals = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.beforeActionVals, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.afterActionVals = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.afterActionVals, 0LL, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceAssetName = &this->fields.voiceAssetName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_voiceAssetName, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_voiceAssetName + 2) = 0;
}


void __fastcall TerminalTransitionInfo__SetParameters(
        TerminalTransitionInfo_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o *voiceAssetName; // x1

  if ( !info )
    sub_1BCAA3C(this, 0LL);
  this->fields.missionId = info->fields.missionId;
  voiceAssetName = info->fields.voiceAssetName;
  this->fields.voiceAssetName = voiceAssetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.voiceAssetName,
    (int64_t)voiceAssetName,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
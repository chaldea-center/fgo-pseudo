void __fastcall TerminalTransitionInfo___ctor(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  TerminalTransitionInfo__Init(this, v3);
}


void __fastcall TerminalTransitionInfo__Init(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct System_String_o **p_voiceAssetName; // x19
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A1CFD3 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_1/*""*/, method);
    byte_4A1CFD3 = 1;
  }
  this->fields.missionId = 0;
  this->fields.beforeActionVals = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.beforeActionVals, 0, v2, v3);
  this->fields.afterActionVals = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.afterActionVals, 0, v5, v6);
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.voiceAssetName = (struct System_String_o *)StringLiteral_1/*""*/;
  p_voiceAssetName = &this->fields.voiceAssetName;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_voiceAssetName, v7, v9, v10);
  *((_DWORD *)p_voiceAssetName + 2) = 0;
}


void __fastcall TerminalTransitionInfo__SetParameters(
        TerminalTransitionInfo_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct System_String_o *voiceAssetName; // x1

  if ( !info )
    sub_1B71828(this, 0LL);
  this->fields.missionId = info->fields.missionId;
  voiceAssetName = info->fields.voiceAssetName;
  this->fields.voiceAssetName = voiceAssetName;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.voiceAssetName,
    (int32_t)voiceAssetName,
    (int32_t)method,
    v3);
}
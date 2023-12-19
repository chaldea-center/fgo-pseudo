void __fastcall TerminalTransitionInfo___ctor(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  TerminalTransitionInfo__Init(this, v3);
}


void __fastcall TerminalTransitionInfo__Init(TerminalTransitionInfo_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_array **p_afterActionVals; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40F71F0 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F71F0 = 1;
  }
  this->fields.missionId = 0;
  this->fields.beforeActionVals = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.beforeActionVals, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.afterActionVals = 0LL;
  p_afterActionVals = &this->fields.afterActionVals;
  sub_B16F98((BattleServantConfConponent_o *)p_afterActionVals, 0LL, v10, v11, v12, v13, v14, v15);
  v16 = (System_Int32_array **)StringLiteral_1;
  p_afterActionVals[1] = (struct System_String_array *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)(p_afterActionVals + 1), v16, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_afterActionVals + 4) = 0;
}


void __fastcall TerminalTransitionInfo__SetParameters(
        TerminalTransitionInfo_o *this,
        TerminalTransitionInfo_o *info,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o *voiceAssetName; // x1

  if ( !info )
    sub_B170D4();
  this->fields.missionId = info->fields.missionId;
  voiceAssetName = info->fields.voiceAssetName;
  this->fields.voiceAssetName = voiceAssetName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.voiceAssetName,
    (System_Int32_array **)voiceAssetName,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
void __fastcall TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  if ( (byte_4BB29C2 & 1) == 0 )
  {
    sub_1C13D24(&CommonEffectComponent_TypeInfo, method);
    byte_4BB29C2 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall TitleInfoEventOpenHeaderEffect__animEndFunc(
        TitleInfoEventOpenHeaderEffect_o *this,
        const MethodInfo *method)
{
  System_Action_o *animEndCallback; // x0

  animEndCallback = this->fields.animEndCallback;
  if ( animEndCallback )
    ActionExtensions__Call(animEndCallback, 0LL);
}


void __fastcall TitleInfoEventOpenHeaderEffect__changeUIFunc(
        TitleInfoEventOpenHeaderEffect_o *this,
        const MethodInfo *method)
{
  System_Action_o *changeUiCallback; // x0

  changeUiCallback = this->fields.changeUiCallback;
  if ( changeUiCallback )
    ActionExtensions__Call(changeUiCallback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventOpenHeaderEffect__setup(
        TitleInfoEventOpenHeaderEffect_o *this,
        int32_t eventId,
        System_Action_o *changeUiCallback,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  System_String_o *v9; // x0
  struct System_String_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  v29 = eventId;
  if ( (byte_4BB29C1 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16781/*"__toggle"*/, *(_QWORD *)&eventId);
    sub_1C13D24(&StringLiteral_19135/*"ef_difference21"*/, v8);
    byte_4BB29C1 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v29, 0LL);
  v10 = System_String__Concat_62979204(
          (System_String_o *)StringLiteral_19135/*"ef_difference21"*/,
          v9,
          (System_String_o *)StringLiteral_16781/*"__toggle"*/,
          0LL);
  this->fields.baseName = v10;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  this->fields.changeUiCallback = changeUiCallback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.changeUiCallback,
    (int64_t)changeUiCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.animEndCallback = endCallback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.animEndCallback,
    (int64_t)endCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}
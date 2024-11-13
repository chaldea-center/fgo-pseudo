void __fastcall TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14512 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B14512 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
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
  __int64 v9; // x2
  System_String_o *v10; // x0
  struct System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF

  v30 = eventId;
  if ( (byte_4B14511 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16696/*"_anim"*/, *(_QWORD *)&eventId, changeUiCallback);
    sub_1BCA7E0(&StringLiteral_19034/*"ef_mapnamechange_"*/, v8, v9);
    byte_4B14511 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v30, 0LL);
  v11 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_19034/*"ef_mapnamechange_"*/,
          v10,
          (System_String_o *)StringLiteral_16696/*"_anim"*/,
          0LL);
  this->fields.baseName = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseName, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  this->fields.changeUiCallback = changeUiCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.changeUiCallback,
    (int64_t)changeUiCallback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.animEndCallback = endCallback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animEndCallback,
    (int64_t)endCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}
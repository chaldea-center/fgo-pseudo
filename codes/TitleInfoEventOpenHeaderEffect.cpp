void __fastcall TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ECC05 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ECC05 = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
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


void __fastcall TitleInfoEventOpenHeaderEffect__setup(
        TitleInfoEventOpenHeaderEffect_o *this,
        int32_t eventId,
        System_Action_o *changeUiCallback,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x0
  struct System_String_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // [xsp+Ch] [xbp-24h] BYREF

  v31 = eventId;
  if ( (byte_42ECC04 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16327/*"_anim"*/, eventId, (_DWORD)changeUiCallback, endCallback);
    sub_B5D5C4(&StringLiteral_18422/*"ef_mapnamechange_"*/, v8, v9, v10);
    byte_42ECC04 = 1;
  }
  v11 = System_Int32__ToString((int32_t)&v31, 0LL);
  v12 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_18422/*"ef_mapnamechange_"*/,
          v11,
          (System_String_o *)StringLiteral_16327/*"_anim"*/,
          0LL);
  this->fields.baseName = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.changeUiCallback = changeUiCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.changeUiCallback,
    (System_Int32_array **)changeUiCallback,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.animEndCallback = endCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.animEndCallback,
    (System_Int32_array **)endCallback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}
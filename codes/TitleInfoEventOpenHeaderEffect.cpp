void __fastcall TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  if ( (byte_4218820 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_4218820 = 1;
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int32_t v29; // [xsp+Ch] [xbp-24h] BYREF

  v29 = eventId;
  if ( (byte_421881F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16182/*"_anim"*/, *(_QWORD *)&eventId);
    sub_B0D8A4(&StringLiteral_18250/*"ef_mapnamechange_"*/, v8);
    byte_421881F = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v29, 0LL);
  v10 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_18250/*"ef_mapnamechange_"*/,
          v9,
          (System_String_o *)StringLiteral_16182/*"_anim"*/,
          0LL);
  this->fields.baseName = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.changeUiCallback = changeUiCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.changeUiCallback,
    (System_Int32_array **)changeUiCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.animEndCallback = endCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.animEndCallback,
    (System_Int32_array **)endCallback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}
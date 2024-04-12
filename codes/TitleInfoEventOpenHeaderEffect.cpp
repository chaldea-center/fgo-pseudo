void __fastcall TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  if ( (byte_42B4437 & 1) == 0 )
  {
    sub_B52984(&CommonEffectComponent_TypeInfo);
    byte_42B4437 = 1;
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
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  v28 = eventId;
  if ( (byte_42B4436 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16242/*"_anim"*/);
    sub_B52984(&StringLiteral_18328/*"ef_mapnamechange_"*/);
    byte_42B4436 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v28, 0LL);
  v9 = System_String__Concat_44570600(
         (System_String_o *)StringLiteral_18328/*"ef_mapnamechange_"*/,
         v8,
         (System_String_o *)StringLiteral_16242/*"_anim"*/,
         0LL);
  this->fields.baseName = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseName,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.changeUiCallback = changeUiCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.changeUiCallback,
    (System_Int32_array **)changeUiCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.animEndCallback = endCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.animEndCallback,
    (System_Int32_array **)endCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}
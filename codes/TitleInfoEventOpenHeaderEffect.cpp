void TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F08C & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_596F08C = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method, v2);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void TitleInfoEventOpenHeaderEffect__animEndFunc(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  System_Action_o *animEndCallback; // x0

  animEndCallback = this->fields.animEndCallback;
  if ( animEndCallback )
    ActionExtensions__Call(animEndCallback, 0);
}


void TitleInfoEventOpenHeaderEffect__changeUIFunc(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  System_Action_o *changeUiCallback; // x0

  changeUiCallback = this->fields.changeUiCallback;
  if ( changeUiCallback )
    ActionExtensions__Call(changeUiCallback, 0);
}


void TitleInfoEventOpenHeaderEffect__setup(
        TitleInfoEventOpenHeaderEffect_o *this,
        int32_t eventId,
        System_Action_o *changeUiCallback,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  struct System_String_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  v28 = eventId;
  if ( (byte_596F08B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17208/*"_anim"*/);
    sub_2213A60(&StringLiteral_19712/*"ef_mapnamechange_"*/);
    byte_596F08B = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v28, 0);
  v9 = System_String__Concat_75694928(
         (System_String_o *)StringLiteral_19712/*"ef_mapnamechange_"*/,
         v8,
         (System_String_o *)StringLiteral_17208/*"_anim"*/,
         0);
  this->fields.baseName = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseName, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  this->fields.changeUiCallback = changeUiCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.changeUiCallback,
    (int32_t)changeUiCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.animEndCallback = endCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animEndCallback,
    (int32_t)endCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}
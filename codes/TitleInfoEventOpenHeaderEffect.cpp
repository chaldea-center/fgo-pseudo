void TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  if ( (byte_4CECF86 & 1) == 0 )
  {
    sub_1C7BAE8(&CommonEffectComponent_TypeInfo);
    byte_4CECF86 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  v28 = eventId;
  if ( (byte_4CECF85 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16597/*"_anim"*/);
    sub_1C7BAE8(&StringLiteral_18969/*"ef_mapnamechange_"*/);
    byte_4CECF85 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v28, 0);
  v9 = System_String__Concat_64215176(
         (System_String_o *)StringLiteral_18969/*"ef_mapnamechange_"*/,
         v8,
         (System_String_o *)StringLiteral_16597/*"_anim"*/,
         0);
  this->fields.baseName = v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseName, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  this->fields.changeUiCallback = changeUiCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.changeUiCallback,
    (int32_t)changeUiCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.animEndCallback = endCallback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.animEndCallback,
    (int32_t)endCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}
void __fastcall TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  if ( (byte_4A6DD23 & 1) == 0 )
  {
    sub_1B90010(&CommonEffectComponent_TypeInfo, method);
    byte_4A6DD23 = 1;
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  v17 = eventId;
  if ( (byte_4A6DD22 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_16552/*"_anim"*/, *(_QWORD *)&eventId);
    sub_1B90010(&StringLiteral_18865/*"ef_mapnamechange_"*/, v8);
    byte_4A6DD22 = 1;
  }
  v9 = System_Int32__ToString((int32_t)&v17, 0LL);
  v10 = System_String__Concat_61798352(
          (System_String_o *)StringLiteral_18865/*"ef_mapnamechange_"*/,
          v9,
          (System_String_o *)StringLiteral_16552/*"_anim"*/,
          0LL);
  this->fields.baseName = v10;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.baseName, (int32_t)v10, v11, v12);
  this->fields.changeUiCallback = changeUiCallback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.changeUiCallback, (int32_t)changeUiCallback, v13, v14);
  this->fields.animEndCallback = endCallback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.animEndCallback, (int32_t)endCallback, v15, v16);
}
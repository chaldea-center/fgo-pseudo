void __fastcall TitleInfoEventOpenHeaderEffect___ctor(TitleInfoEventOpenHeaderEffect_o *this, const MethodInfo *method)
{
  if ( (byte_4A5908D & 1) == 0 )
  {
    sub_1B885B0(&CommonEffectComponent_TypeInfo);
    byte_4A5908D = 1;
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


void __fastcall TitleInfoEventOpenHeaderEffect__setup(
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  v16 = eventId;
  if ( (byte_4A5908C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16527/*"_anim"*/);
    sub_1B885B0(&StringLiteral_18840/*"ef_mapnamechange_"*/);
    byte_4A5908C = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v16, 0LL);
  v9 = System_String__Concat_61718292(
         (System_String_o *)StringLiteral_18840/*"ef_mapnamechange_"*/,
         v8,
         (System_String_o *)StringLiteral_16527/*"_anim"*/,
         0LL);
  this->fields.baseName = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseName, (int32_t)v9, v10, v11);
  this->fields.changeUiCallback = changeUiCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.changeUiCallback, (int32_t)changeUiCallback, v12, v13);
  this->fields.animEndCallback = endCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animEndCallback, (int32_t)endCallback, v14, v15);
}
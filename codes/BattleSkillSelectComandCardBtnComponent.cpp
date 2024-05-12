void __fastcall BattleSkillSelectComandCardBtnComponent___ctor(
        BattleSkillSelectComandCardBtnComponent_o *this,
        const MethodInfo *method)
{
  BattleSkillSelectBtnBaseComponent___ctor((BattleSkillSelectBtnBaseComponent_o *)this, 0LL);
}


void __fastcall BattleSkillSelectComandCardBtnComponent__SetBtnSprite(
        BattleSkillSelectComandCardBtnComponent_o *this,
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *selBtnInfo,
        UISprite_o *btn,
        const MethodInfo *method)
{
  UnityEngine_Object_o *btnAtlas; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_String_o *Name_k__BackingField; // x21
  struct System_String_array *commandBtnSpriteNameList; // x8
  __int64 v12; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_438A88F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Enum_TryParse_BattleSkillSelectComandCardBtnComponent_CommandCardType___);
    sub_B775C4(&System_Enum_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A88F = 1;
  }
  result = 0;
  btnAtlas = (UnityEngine_Object_o *)this->fields.btnAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(btnAtlas, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !btn )
      goto LABEL_16;
    UISprite__set_atlas(btn, this->fields.btnAtlas, 0LL);
    if ( !selBtnInfo )
      goto LABEL_16;
    Name_k__BackingField = selBtnInfo->fields._Name_k__BackingField;
    if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v8 = System_Enum__TryParse_DataVals_TYPE_(
           Name_k__BackingField,
           &result,
           (const MethodInfo_1D1AB0C *)Method_System_Enum_TryParse_BattleSkillSelectComandCardBtnComponent_CommandCardType___);
    commandBtnSpriteNameList = this->fields.commandBtnSpriteNameList;
    if ( !commandBtnSpriteNameList )
LABEL_16:
      sub_B7769C(v8, v9);
    if ( result >= commandBtnSpriteNameList->max_length )
    {
      v12 = sub_B776C8(v8);
      sub_B77668(v12, 0LL);
    }
    UISprite__set_spriteName(btn, commandBtnSpriteNameList->m_Items[result], 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))btn->klass->vtable._33_MakePixelPerfect.method)(
      btn,
      btn->klass->vtable._34_get_minWidth.methodPtr);
  }
}
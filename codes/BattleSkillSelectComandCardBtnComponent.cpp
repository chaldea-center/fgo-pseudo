void __fastcall BattleSkillSelectComandCardBtnComponent___ctor(
        BattleSkillSelectComandCardBtnComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleSkillSelectComandCardBtnComponent__SetBtnSprite(
        BattleSkillSelectComandCardBtnComponent_o *this,
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *selBtnInfo,
        UISprite_o *btn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *btnAtlas; // x22
  _BOOL8 v10; // x0
  System_String_o *Name_k__BackingField; // x21
  __int64 v12; // x1
  struct System_String_array *commandBtnSpriteNameList; // x8
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF453 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Enum_TryParse_BattleSkillSelectComandCardBtnComponent_CommandCardType___, selBtnInfo);
    sub_1B640C8(&System_Enum_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FF453 = 1;
  }
  result = 0;
  btnAtlas = (UnityEngine_Object_o *)this->fields.btnAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Equality(btnAtlas, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !btn )
      goto LABEL_14;
    UISprite__set_atlas(btn, this->fields.btnAtlas, 0LL);
    if ( !selBtnInfo )
      goto LABEL_14;
    Name_k__BackingField = selBtnInfo->fields._Name_k__BackingField;
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    v10 = System_Enum__TryParse_Int32Enum_(
            Name_k__BackingField,
            &result,
            (const MethodInfo_2E42464 *)Method_System_Enum_TryParse_BattleSkillSelectComandCardBtnComponent_CommandCardType___);
    commandBtnSpriteNameList = this->fields.commandBtnSpriteNameList;
    if ( !commandBtnSpriteNameList )
LABEL_14:
      sub_1B64324(v10);
    if ( result >= commandBtnSpriteNameList->max_length )
      sub_1B6432C(v10, v12);
    UISprite__set_spriteName(btn, commandBtnSpriteNameList->m_Items[result], 0LL);
    ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))btn->klass->vtable._33_MakePixelPerfect.method)(
      btn,
      btn->klass->vtable._34_get_minWidth.methodPtr);
  }
}
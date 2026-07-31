void BattleSkillSelectComandCardBtnComponent___ctor(
        BattleSkillSelectComandCardBtnComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleSkillSelectComandCardBtnComponent__SetBtnSprite(
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
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593C14A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Enum_TryParse_BattleSkillSelectComandCardBtnComponent_CommandCardType___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C14A = 1;
  }
  btnAtlas = (UnityEngine_Object_o *)this->fields.btnAtlas;
  result = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, selBtnInfo);
  v8 = UnityEngine_Object__op_Equality(btnAtlas, 0, 0);
  if ( !v8 )
  {
    if ( !btn )
      goto LABEL_14;
    UISprite__set_atlas(btn, this->fields.btnAtlas, 0);
    if ( !selBtnInfo )
      goto LABEL_14;
    Name_k__BackingField = selBtnInfo->fields._Name_k__BackingField;
    if ( !*(_DWORD *)(qword_594C0C0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C0C0, v9);
    v8 = System_Enum__TryParse_Int32Enum_(
           Name_k__BackingField,
           &result,
           (const MethodInfo_382E0BC *)Method_System_Enum_TryParse_BattleSkillSelectComandCardBtnComponent_CommandCardType___);
    commandBtnSpriteNameList = this->fields.commandBtnSpriteNameList;
    if ( !commandBtnSpriteNameList )
LABEL_14:
      sub_21FFECC(v8, v9);
    if ( (unsigned int)result >= LODWORD(commandBtnSpriteNameList->max_length) )
      sub_21FFED4(v8);
    UISprite__set_spriteName(btn, commandBtnSpriteNameList->m_Items[result], 0);
    ((void (__fastcall *)(UISprite_o *, const MethodInfo *))btn->klass->vtable._33_MakePixelPerfect.methodPtr)(
      btn,
      btn->klass->vtable._33_MakePixelPerfect.method);
  }
}
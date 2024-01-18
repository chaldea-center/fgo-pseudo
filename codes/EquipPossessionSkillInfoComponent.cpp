void __fastcall EquipPossessionSkillInfoComponent___ctor(
        EquipPossessionSkillInfoComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EquipPossessionSkillInfoComponent_o *__fastcall EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
        UnityEngine_GameObject_o *baseObj,
        UnityEngine_GameObject_o *parentObj,
        int32_t index,
        float adjustY,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A1BF & 1) == 0 )
  {
    sub_B2C35C(&BattleServantConfConponent_TypeInfo, parentObj);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_418A1BF = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)baseObj,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_31331816(v12, parentObj, 0LL);
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v12, 1, 0LL);
  GameObjectExtensions__ResetTransform(v12, 0LL);
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  v15 = transform;
  if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  }
  if ( !v15 )
    goto LABEL_15;
  v18.fields.z = 0.0;
  v18.fields.y = (float)-(index * BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_OBJ_HEIGHT) + adjustY;
  v18.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition(v15, v18, 0LL);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      EquipPossessionSkillInfoComponent__Initialize((EquipPossessionSkillInfoComponent_o *)Component_srcLineSprite, v14);
      return (EquipPossessionSkillInfoComponent_o *)Component_srcLineSprite;
    }
LABEL_15:
    sub_B2C434(transform, v14);
  }
  return (EquipPossessionSkillInfoComponent_o *)Component_srcLineSprite;
}


void __fastcall EquipPossessionSkillInfoComponent__Initialize(
        EquipPossessionSkillInfoComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *equipSkillSprite; // x20
  UnityEngine_Object_o *equipSkillNameLabel; // x20
  UnityEngine_Object_o *equipSkillConfLabel; // x20
  UnityEngine_Object_o *NoEquipLabel; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v11; // x19

  if ( (byte_418A1C0 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_2418/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/, v4);
    byte_418A1C0 = 1;
  }
  equipSkillSprite = (UnityEngine_Object_o *)this->fields.equipSkillSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(equipSkillSprite, 0LL, 0LL) )
  {
    equipSkillNameLabel = (UnityEngine_Object_o *)this->fields.equipSkillNameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(equipSkillNameLabel, 0LL, 0LL) )
    {
      equipSkillConfLabel = (UnityEngine_Object_o *)this->fields.equipSkillConfLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(equipSkillConfLabel, 0LL, 0LL) )
      {
        NoEquipLabel = (UnityEngine_Object_o *)this->fields.NoEquipLabel;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(NoEquipLabel, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
          if ( !gameObject )
            goto LABEL_33;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
          if ( !gameObject )
            goto LABEL_33;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
          if ( !gameObject )
            goto LABEL_33;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
          if ( !gameObject )
            goto LABEL_33;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v11 = this->fields.NoEquipLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2418/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/, 0LL);
          if ( !v11 )
LABEL_33:
            sub_B2C434(gameObject, v9);
          UILabel__set_text(v11, (System_String_o *)gameObject, 0LL);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
float __fastcall EquipPossessionSkillInfoComponent__SetSkill(
        EquipPossessionSkillInfoComponent_o *this,
        int32_t skillId,
        System_String_o *skillName,
        System_String_o *skillDetail,
        const MethodInfo *method)
{
  UnityEngine_Component_o *NoEquipLabel; // x0
  UIWidget_o *equipSkillConfLabel; // x21
  struct UILabel_o *v11; // x8
  float result; // s0

  if ( (byte_418A1C1 & 1) == 0 )
  {
    sub_B2C35C(&BattleServantConfConponent_TypeInfo, *(_QWORD *)&skillId);
    byte_418A1C1 = 1;
  }
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
  if ( !NoEquipLabel )
    goto LABEL_25;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 0, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_25;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_25;
  SkillIconComponent__Clear((SkillIconComponent_o *)NoEquipLabel, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_25;
  SkillIconComponent__Set((SkillIconComponent_o *)NoEquipLabel, skillId, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
  if ( !NoEquipLabel )
    goto LABEL_25;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
  if ( !NoEquipLabel )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)NoEquipLabel, skillName, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
  if ( !NoEquipLabel )
    goto LABEL_25;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0LL);
  equipSkillConfLabel = (UIWidget_o *)this->fields.equipSkillConfLabel;
  NoEquipLabel = (UnityEngine_Component_o *)BattleServantConfConponent_TypeInfo;
  if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  }
  if ( !equipSkillConfLabel )
    goto LABEL_25;
  UIWidget__set_height(
    equipSkillConfLabel,
    BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT,
    0LL);
  NoEquipLabel = (UnityEngine_Component_o *)WrapControlText__textAdjust(
                                              this->fields.equipSkillConfLabel,
                                              skillDetail,
                                              BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                                              BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                                              BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                                              0LL);
  v11 = this->fields.equipSkillConfLabel;
  if ( !v11 )
    goto LABEL_25;
  result = 0.0;
  if ( v11->fields.mHeight <= BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
    return result;
  if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
    v11 = this->fields.equipSkillConfLabel;
    if ( !v11 )
LABEL_25:
      sub_B2C434(NoEquipLabel, *(_QWORD *)&skillId);
  }
  return (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
               - v11->fields.mHeight);
}
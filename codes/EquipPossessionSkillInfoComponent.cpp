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
  UnityEngine_Transform_o *transform; // x21
  EquipPossessionSkillInfoComponent_o *Component_srcLineSprite; // x19
  const MethodInfo *v15; // x1
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FC4F0 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantConfConponent_TypeInfo, parentObj);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FC4F0 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)baseObj,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_27425860(v12, parentObj, 0LL);
  if ( !v12 )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(v12, 1, 0LL);
  GameObjectExtensions__ResetTransform(v12, 0LL);
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  }
  if ( !transform )
    goto LABEL_15;
  v17.fields.z = 0.0;
  v17.fields.y = (float)-(index * BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_OBJ_HEIGHT) + adjustY;
  v17.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v17, 0LL);
  Component_srcLineSprite = (EquipPossessionSkillInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     v12,
                                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      EquipPossessionSkillInfoComponent__Initialize(Component_srcLineSprite, v15);
      return Component_srcLineSprite;
    }
LABEL_15:
    sub_B170D4();
  }
  return Component_srcLineSprite;
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
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *v17; // x19
  System_String_o *v18; // x0

  if ( (byte_40FC4F1 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2408/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/, v4);
    byte_40FC4F1 = 1;
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
          v9 = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
          if ( !v9 )
            goto LABEL_33;
          gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
          if ( !gameObject )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v11 = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
          if ( !v11 )
            goto LABEL_33;
          v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( !v12 )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive(v12, 0, 0LL);
          v13 = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
          if ( !v13 )
            goto LABEL_33;
          v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
          if ( !v14 )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive(v14, 0, 0LL);
          v15 = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
          if ( !v15 )
            goto LABEL_33;
          v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
          if ( !v16 )
            goto LABEL_33;
          UnityEngine_GameObject__SetActive(v16, 1, 0LL);
          v17 = this->fields.NoEquipLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2408/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/, 0LL);
          if ( !v17 )
LABEL_33:
            sub_B170D4();
          UILabel__set_text(v17, v18, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *equipSkillSprite; // x0
  UnityEngine_GameObject_o *v12; // x0
  SkillIconComponent_o *v13; // x0
  SkillIconComponent_o *v14; // x0
  UnityEngine_Component_o *equipSkillNameLabel; // x0
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *v17; // x0
  UnityEngine_Component_o *equipSkillConfLabel; // x0
  UnityEngine_GameObject_o *v19; // x0
  UIWidget_o *v20; // x21
  struct UILabel_o *v21; // x8
  float result; // s0

  if ( (byte_40FC4F2 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantConfConponent_TypeInfo, *(_QWORD *)&skillId);
    byte_40FC4F2 = 1;
  }
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
  if ( !NoEquipLabel )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  equipSkillSprite = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !equipSkillSprite )
    goto LABEL_25;
  v12 = UnityEngine_Component__get_gameObject(equipSkillSprite, 0LL);
  if ( !v12 )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(v12, 1, 0LL);
  v13 = this->fields.equipSkillSprite;
  if ( !v13 )
    goto LABEL_25;
  SkillIconComponent__Clear(v13, 0LL);
  v14 = this->fields.equipSkillSprite;
  if ( !v14 )
    goto LABEL_25;
  SkillIconComponent__Set(v14, skillId, 0LL);
  equipSkillNameLabel = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
  if ( !equipSkillNameLabel )
    goto LABEL_25;
  v16 = UnityEngine_Component__get_gameObject(equipSkillNameLabel, 0LL);
  if ( !v16 )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(v16, 1, 0LL);
  v17 = this->fields.equipSkillNameLabel;
  if ( !v17 )
    goto LABEL_25;
  UILabel__set_text(v17, skillName, 0LL);
  equipSkillConfLabel = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
  if ( !equipSkillConfLabel )
    goto LABEL_25;
  v19 = UnityEngine_Component__get_gameObject(equipSkillConfLabel, 0LL);
  if ( !v19 )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(v19, 1, 0LL);
  v20 = (UIWidget_o *)this->fields.equipSkillConfLabel;
  if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  }
  if ( !v20 )
    goto LABEL_25;
  UIWidget__set_height(v20, BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT, 0LL);
  WrapControlText__textAdjust(
    this->fields.equipSkillConfLabel,
    skillDetail,
    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
    0LL);
  v21 = this->fields.equipSkillConfLabel;
  if ( !v21 )
    goto LABEL_25;
  result = 0.0;
  if ( v21->fields.mHeight <= BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
    return result;
  if ( (BYTE3(BattleServantConfConponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
    v21 = this->fields.equipSkillConfLabel;
    if ( !v21 )
LABEL_25:
      sub_B170D4();
  }
  return (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
               - v21->fields.mHeight);
}
void EquipPossessionSkillInfoComponent___ctor(EquipPossessionSkillInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EquipPossessionSkillInfoComponent_o *EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
        UnityEngine_GameObject_o *baseObj,
        UnityEngine_GameObject_o *parentObj,
        int32_t index,
        float adjustY,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *v12; // x21
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D34298 & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantConfConponent_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34298 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         (Il2CppObject *)baseObj,
         (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_36750884((UnityEngine_GameObject_o *)v9, parentObj, 0);
  if ( !v9 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v9, 1, 0);
  GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v9, 0);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0);
  v12 = transform;
  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  if ( !v12 )
    goto LABEL_13;
  v15.fields.z = 0.0;
  v15.fields.y = (float)-(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_OBJ_HEIGHT * index) + adjustY;
  v15.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition(v12, v15, 0);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v9,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( Component_object )
    {
      EquipPossessionSkillInfoComponent__Initialize((EquipPossessionSkillInfoComponent_o *)Component_object, v11);
      return (EquipPossessionSkillInfoComponent_o *)Component_object;
    }
LABEL_13:
    sub_1C93D2C(transform, v11);
  }
  return (EquipPossessionSkillInfoComponent_o *)Component_object;
}


void EquipPossessionSkillInfoComponent__Initialize(EquipPossessionSkillInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *equipSkillSprite; // x20
  UnityEngine_Object_o *equipSkillNameLabel; // x20
  UnityEngine_Object_o *equipSkillConfLabel; // x20
  UnityEngine_Object_o *NoEquipLabel; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *v9; // x19

  if ( (byte_4D34299 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_2751/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/);
    byte_4D34299 = 1;
  }
  equipSkillSprite = (UnityEngine_Object_o *)this->fields.equipSkillSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSkillSprite, 0, 0) )
  {
    equipSkillNameLabel = (UnityEngine_Object_o *)this->fields.equipSkillNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(equipSkillNameLabel, 0, 0) )
    {
      equipSkillConfLabel = (UnityEngine_Object_o *)this->fields.equipSkillConfLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(equipSkillConfLabel, 0, 0) )
      {
        NoEquipLabel = (UnityEngine_Object_o *)this->fields.NoEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(NoEquipLabel, 0, 0) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
          v9 = this->fields.NoEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2751/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/, 0);
          if ( !v9 )
LABEL_28:
            sub_1C93D2C(gameObject, v7);
          UILabel__set_text(v9, (System_String_o *)gameObject, 0);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
float EquipPossessionSkillInfoComponent__SetSkill(
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

  if ( (byte_4D3429A & 1) == 0 )
  {
    sub_1C93AD4(&BattleServantConfConponent_TypeInfo);
    byte_4D3429A = 1;
  }
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 0, 0);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_23;
  SkillIconComponent__Clear((SkillIconComponent_o *)NoEquipLabel, 0);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_23;
  SkillIconComponent__Set((SkillIconComponent_o *)NoEquipLabel, skillId, 0);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)NoEquipLabel, skillName, 0);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0);
  NoEquipLabel = (UnityEngine_Component_o *)BattleServantConfConponent_TypeInfo;
  equipSkillConfLabel = (UIWidget_o *)this->fields.equipSkillConfLabel;
  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  if ( !equipSkillConfLabel )
    goto LABEL_23;
  UIWidget__set_height(
    equipSkillConfLabel,
    BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT,
    0);
  NoEquipLabel = (UnityEngine_Component_o *)WrapControlText__textAdjust(
                                              this->fields.equipSkillConfLabel,
                                              skillDetail,
                                              BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                                              BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                                              0);
  v11 = this->fields.equipSkillConfLabel;
  if ( !v11 )
    goto LABEL_23;
  result = 0.0;
  if ( v11->fields.mHeight <= BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
    return result;
  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
    v11 = this->fields.equipSkillConfLabel;
    if ( !v11 )
LABEL_23:
      sub_1C93D2C(NoEquipLabel, *(_QWORD *)&skillId);
  }
  return (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
               - v11->fields.mHeight);
}


int32_t EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
        EquipPossessionSkillInfoComponent_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *equipSkillConfLabel; // x8

  equipSkillConfLabel = this->fields.equipSkillConfLabel;
  if ( !equipSkillConfLabel )
    sub_1C93D2C(this, method);
  return equipSkillConfLabel->fields.mHeight;
}
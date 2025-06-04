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
  Il2CppObject *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *v15; // x21
  Il2CppObject *Component_object; // x19
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B055F1 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantConfConponent_TypeInfo, parentObj);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___, v9);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    byte_4B055F1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object_(
          (Il2CppObject *)baseObj,
          (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  GameObjectExtensions__SetParent_35217636((UnityEngine_GameObject_o *)v12, parentObj, 0LL);
  if ( !v12 )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, 1, 0LL);
  GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v12, 0LL);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
  v15 = transform;
  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  if ( !v15 )
    goto LABEL_13;
  v18.fields.z = 0.0;
  v18.fields.y = (float)-(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_OBJ_HEIGHT * index) + adjustY;
  v18.fields.x = 0.0;
  UnityEngine_Transform__set_localPosition(v15, v18, 0LL);
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v12,
                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_EquipPossessionSkillInfoComponent___);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( Component_object )
    {
      EquipPossessionSkillInfoComponent__Initialize((EquipPossessionSkillInfoComponent_o *)Component_object, v14);
      return (EquipPossessionSkillInfoComponent_o *)Component_object;
    }
LABEL_13:
    sub_1BC3264(transform, v14);
  }
  return (EquipPossessionSkillInfoComponent_o *)Component_object;
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

  if ( (byte_4B055F2 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_2724/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/, v4);
    byte_4B055F2 = 1;
  }
  equipSkillSprite = (UnityEngine_Object_o *)this->fields.equipSkillSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(equipSkillSprite, 0LL, 0LL) )
  {
    equipSkillNameLabel = (UnityEngine_Object_o *)this->fields.equipSkillNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(equipSkillNameLabel, 0LL, 0LL) )
    {
      equipSkillConfLabel = (UnityEngine_Object_o *)this->fields.equipSkillConfLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(equipSkillConfLabel, 0LL, 0LL) )
      {
        NoEquipLabel = (UnityEngine_Object_o *)this->fields.NoEquipLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(NoEquipLabel, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
          if ( !gameObject )
            goto LABEL_28;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_28;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v11 = this->fields.NoEquipLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2724/*"BATTLE_DIALOG_DETAIL_NOEQUIP"*/, 0LL);
          if ( !v11 )
LABEL_28:
            sub_1BC3264(gameObject, v9);
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

  if ( (byte_4B055F3 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantConfConponent_TypeInfo, *(_QWORD *)&skillId);
    byte_4B055F3 = 1;
  }
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.NoEquipLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 0, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_23;
  SkillIconComponent__Clear((SkillIconComponent_o *)NoEquipLabel, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillSprite;
  if ( !NoEquipLabel )
    goto LABEL_23;
  SkillIconComponent__Set((SkillIconComponent_o *)NoEquipLabel, skillId, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillNameLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  UILabel__set_text((UILabel_o *)NoEquipLabel, skillName, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)this->fields.equipSkillConfLabel;
  if ( !NoEquipLabel )
    goto LABEL_23;
  NoEquipLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(NoEquipLabel, 0LL);
  if ( !NoEquipLabel )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NoEquipLabel, 1, 0LL);
  NoEquipLabel = (UnityEngine_Component_o *)BattleServantConfConponent_TypeInfo;
  equipSkillConfLabel = (UIWidget_o *)this->fields.equipSkillConfLabel;
  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
  if ( !equipSkillConfLabel )
    goto LABEL_23;
  UIWidget__set_height(
    equipSkillConfLabel,
    BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT,
    0LL);
  NoEquipLabel = (UnityEngine_Component_o *)WrapControlText__textAdjust(
                                              this->fields.equipSkillConfLabel,
                                              skillDetail,
                                              BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                                              BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                                              0LL);
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
      sub_1BC3264(NoEquipLabel, *(_QWORD *)&skillId);
  }
  return (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
               - v11->fields.mHeight);
}


int32_t __fastcall EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
        EquipPossessionSkillInfoComponent_o *this,
        const MethodInfo *method)
{
  struct UILabel_o *equipSkillConfLabel; // x8

  equipSkillConfLabel = this->fields.equipSkillConfLabel;
  if ( !equipSkillConfLabel )
    sub_1BC3264(this, method);
  return equipSkillConfLabel->fields.mHeight;
}
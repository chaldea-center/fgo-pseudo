void __fastcall SkillListTreasureDeviceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE0D1 & 1) == 0 )
  {
    sub_1B64A00(&SkillListTreasureDeviceComponent_TypeInfo, v1);
    byte_49FE0D1 = 1;
  }
  LODWORD(SkillListTreasureDeviceComponent_TypeInfo->static_fields->ADJUST_X_POS) = (struct SkillListTreasureDeviceComponent_StaticFields)1098907648;
}


void __fastcall SkillListTreasureDeviceComponent___ctor(
        SkillListTreasureDeviceComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.normalRange = 0xA00000044LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SkillListTreasureDeviceComponent__Clear(
        SkillListTreasureDeviceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *skillLevelListLabel; // x0
  UnityEngine_Object_o *treasureDeviceIconLabel; // x20
  UnityEngine_Object_o *skillIconSprite; // x20

  if ( (byte_49FE0CF & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    sub_1B64A00(&StringLiteral_1/*""*/, v3);
    byte_49FE0CF = 1;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_15;
  UILabel__set_text(skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
    if ( !skillLevelListLabel )
      goto LABEL_15;
    UIIconLabel__Clear((UIIconLabel_o *)skillLevelListLabel, method);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( skillLevelListLabel )
    {
      UISprite__set_spriteName((UISprite_o *)skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_15:
    sub_1B64C5C(skillLevelListLabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillListTreasureDeviceComponent__Set(
        SkillListTreasureDeviceComponent_o *this,
        System_String_o *skillLevelListText,
        int32_t tdLv,
        int32_t tdStrengthStatus,
        int32_t treasureDeviceNum,
        bool isHideTreasureDevice,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  UILabel_o *skillLevelListLabel; // x0
  UnityEngine_Object_o *treasureDeviceIconLabel; // x24
  float v19; // s1
  float v20; // s2
  float v21; // s10
  float v22; // s11
  float v23; // s1
  float v24; // s2
  float v25; // s8
  float v26; // s9
  float x; // s0
  UnityEngine_Object_o *skillIconSprite; // x21
  int v29; // w10
  int v30; // w22
  float v31; // s12
  float v32; // s13
  UISprite_o *v33; // x21
  SkillListTreasureDeviceComponent_c *v34; // x0
  float ADJUST_X_POS; // s0
  UnityEngine_Object_o *treasureDeviceObj; // x21
  const MethodInfo *v37; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE0D0 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, skillLevelListText);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v13);
    sub_1B64A00(&SkillListTreasureDeviceComponent_TypeInfo, v14);
    sub_1B64A00(&StringLiteral_20101/*"icon_skill_mini"*/, v15);
    byte_49FE0D0 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    SkillListTreasureDeviceComponent__Clear(this, v16);
    return;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_41;
  UILabel__set_text(skillLevelListLabel, skillLevelListText, 0LL);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)StrengthStatus__GetTreasureDeviceStrengthAdjustData(
                                         tdStrengthStatus,
                                         treasureDeviceNum,
                                         0LL);
    if ( !this->fields.treasureDeviceIconLabel )
      goto LABEL_41;
    UIIconLabel__Set_37925880(
      this->fields.treasureDeviceIconLabel,
      34,
      tdLv,
      (int32_t)skillLevelListLabel,
      0,
      0LL,
      0,
      0,
      0,
      v37);
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_41;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_41;
  *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillLevelListLabel,
                                           0LL);
  skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
  if ( !skillLevelListLabel
    || (v21 = v19,
        v22 = v20,
        (skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)skillLevelListLabel,
                                              0LL)) == 0LL)
    || (skillLevelListLabel = (UILabel_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                             0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v23 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)skillLevelListLabel,
                                                 0LL),
        (skillLevelListLabel = this->fields.skillLevelListLabel) == 0LL) )
  {
LABEL_41:
    sub_1B64C5C(skillLevelListLabel, v16);
  }
  v25 = v23;
  v26 = v24;
  x = UILabel__get_printedSize(skillLevelListLabel, 0LL).fields.x;
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  v29 = (int)x;
  if ( x == INFINITY )
    v29 = 0x80000000;
  v30 = v29 + this->fields.treasureDeviceSpace;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v31 = (float)v30;
  v32 = 0.0;
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_41;
    skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)skillLevelListLabel,
                                         0LL);
    if ( !skillLevelListLabel )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, 1, 0LL);
    v33 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v33, (System_String_o *)StringLiteral_20101/*"icon_skill_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_41;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
    v34 = SkillListTreasureDeviceComponent_TypeInfo;
    if ( !SkillListTreasureDeviceComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillListTreasureDeviceComponent_TypeInfo);
      v34 = SkillListTreasureDeviceComponent_TypeInfo;
    }
    ADJUST_X_POS = v34->static_fields->ADJUST_X_POS;
    v32 = ADJUST_X_POS + 0.0;
    v31 = ADJUST_X_POS + v31;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_41;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_41;
  v38.fields.x = v32;
  v38.fields.y = v21;
  v38.fields.z = v22;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v38, 0LL);
  skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
  if ( !skillLevelListLabel )
    goto LABEL_41;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_41;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Transform__get_parent(
                                       (UnityEngine_Transform_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_41;
  v39.fields.x = v31;
  v39.fields.y = v25;
  v39.fields.z = v26;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v39, 0LL);
  treasureDeviceObj = (UnityEngine_Object_o *)this->fields.treasureDeviceObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceObj, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceObj;
    if ( skillLevelListLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, !isHideTreasureDevice, 0LL);
      return;
    }
    goto LABEL_41;
  }
}
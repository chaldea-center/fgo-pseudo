void __fastcall SkillListTreasureDeviceComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4352924 & 1) == 0 )
  {
    sub_B70694(&SkillListTreasureDeviceComponent_TypeInfo);
    byte_4352924 = 1;
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
  UILabel_o *skillLevelListLabel; // x0
  UnityEngine_Object_o *treasureDeviceIconLabel; // x20
  UnityEngine_Object_o *skillIconSprite; // x20

  if ( (byte_4352922 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352922 = 1;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_17;
  UILabel__set_text(skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
    if ( !skillLevelListLabel )
      goto LABEL_17;
    UIIconLabel__Clear((UIIconLabel_o *)skillLevelListLabel, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( skillLevelListLabel )
    {
      UISprite__set_spriteName((UISprite_o *)skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_17:
    sub_B7076C(skillLevelListLabel, method);
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
  const MethodInfo *v13; // x1
  UILabel_o *skillLevelListLabel; // x0
  UnityEngine_Object_o *treasureDeviceIconLabel; // x24
  float v16; // s1
  float v17; // s2
  float v18; // s10
  float v19; // s11
  float v20; // s1
  float v21; // s2
  float v22; // s8
  float v23; // s9
  float x; // s0
  UnityEngine_Object_o *skillIconSprite; // x21
  double v26; // d0
  int v27; // w22
  float v28; // s12
  float v29; // s13
  UISprite_o *v30; // x21
  SkillListTreasureDeviceComponent_c *v31; // x0
  float ADJUST_X_POS; // s0
  UnityEngine_Object_o *treasureDeviceObj; // x21
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4352923 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SkillListTreasureDeviceComponent_TypeInfo);
    sub_B70694(&StringLiteral_19667/*"icon_skill_mini"*/);
    byte_4352923 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    SkillListTreasureDeviceComponent__Clear(this, v13);
    return;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_47;
  UILabel__set_text(skillLevelListLabel, skillLevelListText, 0LL);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)StrengthStatus__GetTreasureDeviceStrengthAdjustData(
                                         tdStrengthStatus,
                                         treasureDeviceNum,
                                         0LL);
    if ( !this->fields.treasureDeviceIconLabel )
      goto LABEL_47;
    UIIconLabel__Set_41432452(
      this->fields.treasureDeviceIconLabel,
      34,
      tdLv,
      (int32_t)skillLevelListLabel,
      0,
      0LL,
      0,
      0,
      0,
      0LL);
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_47;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_47;
  *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillLevelListLabel,
                                           0LL);
  skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
  if ( !skillLevelListLabel
    || (v18 = v16,
        v19 = v17,
        (skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)skillLevelListLabel,
                                              0LL)) == 0LL)
    || (skillLevelListLabel = (UILabel_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                             0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v20 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)skillLevelListLabel,
                                                 0LL),
        (skillLevelListLabel = this->fields.skillLevelListLabel) == 0LL) )
  {
LABEL_47:
    sub_B7076C(skillLevelListLabel, v13);
  }
  v22 = v20;
  v23 = v21;
  x = UILabel__get_printedSize(skillLevelListLabel, 0LL).fields.x;
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( x == INFINITY )
    v26 = -x;
  else
    v26 = x;
  v27 = this->fields.treasureDeviceSpace + (int)v26;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v28 = (float)v27;
  v29 = 0.0;
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_47;
    skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)skillLevelListLabel,
                                         0LL);
    if ( !skillLevelListLabel )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, 1, 0LL);
    v30 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v30, (System_String_o *)StringLiteral_19667/*"icon_skill_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_47;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
    v31 = SkillListTreasureDeviceComponent_TypeInfo;
    if ( (BYTE3(SkillListTreasureDeviceComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillListTreasureDeviceComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillListTreasureDeviceComponent_TypeInfo);
      v31 = SkillListTreasureDeviceComponent_TypeInfo;
    }
    ADJUST_X_POS = v31->static_fields->ADJUST_X_POS;
    v29 = ADJUST_X_POS + 0.0;
    v28 = ADJUST_X_POS + v28;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_47;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_47;
  v34.fields.x = v29;
  v34.fields.y = v18;
  v34.fields.z = v19;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v34, 0LL);
  skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
  if ( !skillLevelListLabel )
    goto LABEL_47;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_47;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Transform__get_parent(
                                       (UnityEngine_Transform_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_47;
  v35.fields.x = v28;
  v35.fields.y = v22;
  v35.fields.z = v23;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v35, 0LL);
  treasureDeviceObj = (UnityEngine_Object_o *)this->fields.treasureDeviceObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(treasureDeviceObj, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceObj;
    if ( skillLevelListLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, !isHideTreasureDevice, 0LL);
      return;
    }
    goto LABEL_47;
  }
}
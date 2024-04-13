void __fastcall SkillListTreasureDeviceComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E97FA & 1) == 0 )
  {
    sub_B5D5C4(&SkillListTreasureDeviceComponent_TypeInfo, v1, v2, v3);
    byte_42E97FA = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *skillLevelListLabel; // x0
  UnityEngine_Object_o *treasureDeviceIconLabel; // x20
  UnityEngine_Object_o *skillIconSprite; // x20

  if ( (byte_42E97F8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E97F8 = 1;
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
    sub_B5D69C(skillLevelListLabel, method);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  const MethodInfo *v22; // x1
  UILabel_o *skillLevelListLabel; // x0
  UnityEngine_Object_o *treasureDeviceIconLabel; // x24
  float v25; // s1
  float v26; // s2
  float v27; // s10
  float v28; // s11
  float v29; // s1
  float v30; // s2
  float v31; // s8
  float v32; // s9
  float x; // s0
  UnityEngine_Object_o *skillIconSprite; // x21
  double v35; // d0
  int v36; // w22
  float v37; // s12
  float v38; // s13
  UISprite_o *v39; // x21
  SkillListTreasureDeviceComponent_c *v40; // x0
  float ADJUST_X_POS; // s0
  UnityEngine_Object_o *treasureDeviceObj; // x21
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E97F9 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)skillLevelListText, tdLv, *(_QWORD *)&tdStrengthStatus);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&SkillListTreasureDeviceComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_19608/*"icon_skill_mini"*/, v19, v20, v21);
    byte_42E97F9 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    SkillListTreasureDeviceComponent__Clear(this, v22);
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
    UIIconLabel__Set_41886452(
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
  *(UnityEngine_Vector3_o *)(&v25 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillLevelListLabel,
                                           0LL);
  skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
  if ( !skillLevelListLabel
    || (v27 = v25,
        v28 = v26,
        (skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)skillLevelListLabel,
                                              0LL)) == 0LL)
    || (skillLevelListLabel = (UILabel_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                             0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v29 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)skillLevelListLabel,
                                                 0LL),
        (skillLevelListLabel = this->fields.skillLevelListLabel) == 0LL) )
  {
LABEL_47:
    sub_B5D69C(skillLevelListLabel, v22);
  }
  v31 = v29;
  v32 = v30;
  x = UILabel__get_printedSize(skillLevelListLabel, 0LL).fields.x;
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( x == INFINITY )
    v35 = -x;
  else
    v35 = x;
  v36 = this->fields.treasureDeviceSpace + (int)v35;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v37 = (float)v36;
  v38 = 0.0;
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
    v39 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_19608/*"icon_skill_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_47;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
    v40 = SkillListTreasureDeviceComponent_TypeInfo;
    if ( (BYTE3(SkillListTreasureDeviceComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillListTreasureDeviceComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillListTreasureDeviceComponent_TypeInfo);
      v40 = SkillListTreasureDeviceComponent_TypeInfo;
    }
    ADJUST_X_POS = v40->static_fields->ADJUST_X_POS;
    v38 = ADJUST_X_POS + 0.0;
    v37 = ADJUST_X_POS + v37;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_47;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_47;
  v43.fields.x = v38;
  v43.fields.y = v27;
  v43.fields.z = v28;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v43, 0LL);
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
  v44.fields.x = v37;
  v44.fields.y = v31;
  v44.fields.z = v32;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v44, 0LL);
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
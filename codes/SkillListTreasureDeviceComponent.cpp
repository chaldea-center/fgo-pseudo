void __fastcall SkillListTreasureDeviceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B15769 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillListTreasureDeviceComponent_TypeInfo, v1, v2);
    byte_4B15769 = 1;
  }
  LODWORD(SkillListTreasureDeviceComponent_TypeInfo->static_fields->ADJUST_X_POS) = (struct SkillListTreasureDeviceComponent_StaticFields)1098907648;
}


void __fastcall SkillListTreasureDeviceComponent___ctor(
        SkillListTreasureDeviceComponent_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.normalRange = 0xA00000044LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SkillListTreasureDeviceComponent__Clear(
        SkillListTreasureDeviceComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *skillLevelListLabel; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *treasureDeviceIconLabel; // x20
  UnityEngine_Object_o *skillIconSprite; // x20

  if ( (byte_4B15767 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B15767 = 1;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_15;
  UILabel__set_text(skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
    if ( !skillLevelListLabel )
      goto LABEL_15;
    UIIconLabel__Clear((UIIconLabel_o *)skillLevelListLabel, method);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( skillLevelListLabel )
    {
      UISprite__set_spriteName((UISprite_o *)skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(skillLevelListLabel, method);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x1
  UILabel_o *skillLevelListLabel; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *treasureDeviceIconLabel; // x24
  float v23; // s1
  float v24; // s2
  float v25; // s10
  float v26; // s11
  float v27; // s1
  float v28; // s2
  float v29; // s8
  float v30; // s9
  UnityEngine_Vector2_o v31; // x1
  float x; // s0
  UnityEngine_Object_o *skillIconSprite; // x21
  int v34; // w10
  int v35; // w22
  float v36; // s12
  float v37; // s13
  __int64 v38; // x1
  UISprite_o *v39; // x21
  SkillListTreasureDeviceComponent_c *v40; // x0
  float ADJUST_X_POS; // s0
  __int64 v42; // x1
  UnityEngine_Object_o *treasureDeviceObj; // x21
  const MethodInfo *v44; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15768 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, skillLevelListText, *(_QWORD *)&tdLv);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&SkillListTreasureDeviceComponent_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_20392/*"icon_skill_mini"*/, v17, v18);
    byte_4B15768 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    SkillListTreasureDeviceComponent__Clear(this, v19);
    return;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_41;
  UILabel__set_text(skillLevelListLabel, skillLevelListText, 0LL);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)StrengthStatus__GetTreasureDeviceStrengthAdjustData(
                                         tdStrengthStatus,
                                         treasureDeviceNum,
                                         0LL);
    if ( !this->fields.treasureDeviceIconLabel )
      goto LABEL_41;
    UIIconLabel__Set_38947284(
      this->fields.treasureDeviceIconLabel,
      34,
      tdLv,
      (int32_t)skillLevelListLabel,
      0,
      0LL,
      0,
      0,
      0,
      v44);
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_41;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_41;
  *(UnityEngine_Vector3_o *)(&v23 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)skillLevelListLabel,
                                           0LL);
  skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
  if ( !skillLevelListLabel
    || (v25 = v23,
        v26 = v24,
        (skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                              (UnityEngine_Component_o *)skillLevelListLabel,
                                              0LL)) == 0LL)
    || (skillLevelListLabel = (UILabel_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                             0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v27 - 1) = UnityEngine_Transform__get_localPosition(
                                                 (UnityEngine_Transform_o *)skillLevelListLabel,
                                                 0LL),
        (skillLevelListLabel = this->fields.skillLevelListLabel) == 0LL) )
  {
LABEL_41:
    sub_1BCAA3C(skillLevelListLabel, v19);
  }
  v29 = v27;
  v30 = v28;
  x = UILabel__get_printedSize(skillLevelListLabel, 0LL).fields.x;
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  v34 = (int)x;
  if ( x == INFINITY )
    v34 = 0x80000000;
  v35 = v34 + this->fields.treasureDeviceSpace;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(UnityEngine_Object_TypeInfo, v31);
  v36 = (float)v35;
  v37 = 0.0;
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
    v39 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
    AtlasManager__SetEventSprite(v39, (System_String_o *)StringLiteral_20392/*"icon_skill_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_41;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
    v40 = SkillListTreasureDeviceComponent_TypeInfo;
    if ( !SkillListTreasureDeviceComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillListTreasureDeviceComponent_TypeInfo, v19);
      v40 = SkillListTreasureDeviceComponent_TypeInfo;
    }
    ADJUST_X_POS = v40->static_fields->ADJUST_X_POS;
    v37 = ADJUST_X_POS + 0.0;
    v36 = ADJUST_X_POS + v36;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_41;
  skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)skillLevelListLabel,
                                       0LL);
  if ( !skillLevelListLabel )
    goto LABEL_41;
  v45.fields.x = v37;
  v45.fields.y = v25;
  v45.fields.z = v26;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v45, 0LL);
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
  v46.fields.x = v36;
  v46.fields.y = v29;
  v46.fields.z = v30;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v46, 0LL);
  treasureDeviceObj = (UnityEngine_Object_o *)this->fields.treasureDeviceObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
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
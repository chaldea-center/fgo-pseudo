void SkillListTreasureDeviceComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5937BD8 & 1) == 0 )
  {
    sub_21FFC50(&SkillListTreasureDeviceComponent_TypeInfo);
    byte_5937BD8 = 1;
  }
  LODWORD(SkillListTreasureDeviceComponent_TypeInfo->static_fields->ADJUST_X_POS) = (struct SkillListTreasureDeviceComponent_StaticFields)1098907648;
}


void SkillListTreasureDeviceComponent___ctor(SkillListTreasureDeviceComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.normalRange = 0xA00000044LL;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SkillListTreasureDeviceComponent__Clear(SkillListTreasureDeviceComponent_o *this, const MethodInfo *method)
{
  UILabel_o *skillLevelListLabel; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *treasureDeviceIconLabel; // x20
  UnityEngine_Object_o *skillIconSprite; // x20

  if ( (byte_5937BD5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937BD5 = 1;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_15;
  UILabel__set_text(skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0, 0) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceIconLabel;
    if ( !skillLevelListLabel )
      goto LABEL_15;
    UIIconLabel__Clear((UIIconLabel_o *)skillLevelListLabel, method);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( skillLevelListLabel )
    {
      UISprite__set_spriteName((UISprite_o *)skillLevelListLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      return;
    }
LABEL_15:
    sub_21FFECC(skillLevelListLabel, method);
  }
}


void SkillListTreasureDeviceComponent__Set(
        SkillListTreasureDeviceComponent_o *this,
        System_String_o *skillLevelListText,
        int32_t tdLv,
        int32_t tdStrengthStatus,
        int32_t treasureDeviceNum,
        bool isHideTreasureDevice,
        int32_t tempOverwriteTreasureDeviceLv,
        const MethodInfo *method)
{
  __int64 v15; // x1
  UnityEngine_Component_o *skillLevelListLabel; // x0
  float y; // s9
  float z; // s11
  float v19; // s8
  float v20; // s10
  UnityEngine_Vector2_o v21; // x1
  float x; // s0
  UnityEngine_Object_o *skillIconSprite; // x20
  int v24; // w9
  int v25; // w21
  float v26; // s12
  float v27; // s13
  SkillListTreasureDeviceComponent_c *v28; // x0
  float ADJUST_X_POS; // s1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937BD7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SkillListTreasureDeviceComponent_TypeInfo);
    byte_5937BD7 = 1;
  }
  if ( SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
         this,
         skillLevelListText,
         tdLv,
         tdStrengthStatus,
         treasureDeviceNum,
         isHideTreasureDevice,
         tempOverwriteTreasureDeviceLv,
         method) )
  {
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(skillLevelListLabel, 0);
    if ( !skillLevelListLabel )
      goto LABEL_26;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, 0);
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.treasureDeviceIconLabel;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(skillLevelListLabel, 0);
    if ( !skillLevelListLabel )
      goto LABEL_26;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                       (UnityEngine_Transform_o *)skillLevelListLabel,
                                                       0);
    if ( !skillLevelListLabel )
      goto LABEL_26;
    v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, 0);
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    v19 = v31.fields.y;
    v20 = v31.fields.z;
    x = UILabel__get_printedSize((UILabel_o *)skillLevelListLabel, 0).fields.x;
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    if ( x == INFINITY )
      v24 = 0x80000000;
    else
      v24 = (int)x;
    v25 = v24 + this->fields.treasureDeviceSpace;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    v26 = (float)v25;
    v27 = 0.0;
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
    {
      v28 = SkillListTreasureDeviceComponent_TypeInfo;
      if ( !*(&SkillListTreasureDeviceComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SkillListTreasureDeviceComponent_TypeInfo, v15);
        v28 = SkillListTreasureDeviceComponent_TypeInfo;
      }
      ADJUST_X_POS = v28->static_fields->ADJUST_X_POS;
      v27 = ADJUST_X_POS + 0.0;
      v26 = ADJUST_X_POS + v26;
    }
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(skillLevelListLabel, 0);
    if ( !skillLevelListLabel
      || (v32.fields.x = v27,
          v32.fields.y = y,
          v32.fields.z = z,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v32, 0),
          (skillLevelListLabel = (UnityEngine_Component_o *)this->fields.treasureDeviceIconLabel) == 0)
      || (skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(skillLevelListLabel, 0)) == 0
      || (skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                                             0)) == 0 )
    {
LABEL_26:
      sub_21FFECC(skillLevelListLabel, v15);
    }
    v33.fields.y = v19;
    v33.fields.z = v20;
    v33.fields.x = v26;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v33, 0);
  }
}


void SkillListTreasureDeviceComponent__SetBitmapFont(
        SkillListTreasureDeviceComponent_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  UILabel_o *skillLevelListLabel; // x0
  struct UIIconLabel_o *treasureDeviceIconLabel; // x8

  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel
    || (UILabel__set_bitmapFont(skillLevelListLabel, bitmapFont, 0),
        (treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel) == 0)
    || (skillLevelListLabel = treasureDeviceIconLabel->fields.textLabel) == 0 )
  {
    sub_21FFECC(skillLevelListLabel, bitmapFont);
  }
  UILabel__set_bitmapFont(skillLevelListLabel, bitmapFont, 0);
}


void SkillListTreasureDeviceComponent__SetLabelSkillLevelLabelScaleX(
        SkillListTreasureDeviceComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  UnityEngine_Component_o *skillLevelListLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    sub_21FFECC(0, method);
  gameObject = UnityEngine_Component__get_gameObject(skillLevelListLabel, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, scale, 0);
}


void SkillListTreasureDeviceComponent__SetTreasureDeviceIconPosition(
        SkillListTreasureDeviceComponent_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  UnityEngine_Component_o *treasureDeviceIconLabel; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4

  treasureDeviceIconLabel = (UnityEngine_Component_o *)this->fields.treasureDeviceIconLabel;
  if ( !treasureDeviceIconLabel
    || (z = position.fields.z,
        y = position.fields.y,
        x = position.fields.x,
        (treasureDeviceIconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                                treasureDeviceIconLabel,
                                                                0)) == 0)
    || (treasureDeviceIconLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)treasureDeviceIconLabel,
                                                               0)) == 0 )
  {
    sub_21FFECC(treasureDeviceIconLabel, method);
  }
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)treasureDeviceIconLabel, v7, 0);
}


bool SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
        SkillListTreasureDeviceComponent_o *this,
        System_String_o *skillLevelListText,
        int32_t tdLv,
        int32_t tdStrengthStatus,
        int32_t treasureDeviceNum,
        bool isHideTreasureDevice,
        int32_t tempOverwriteTreasureDeviceLv,
        const MethodInfo *method)
{
  const MethodInfo *v15; // x1
  bool IsNullOrEmpty; // w21
  UILabel_o *skillLevelListLabel; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *treasureDeviceIconLabel; // x26
  __int64 v20; // x1
  UnityEngine_Object_o *skillIconSprite; // x22
  __int64 v22; // x1
  UISprite_o *v23; // x22
  UnityEngine_Object_o *treasureDeviceObj; // x22
  const MethodInfo *v26; // [xsp+10h] [xbp-60h]

  if ( (byte_5937BD6 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21166/*"icon_skill_mini"*/);
    byte_5937BD6 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(skillLevelListText, 0);
  if ( IsNullOrEmpty )
  {
    SkillListTreasureDeviceComponent__Clear(this, v15);
    return !IsNullOrEmpty;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
LABEL_26:
    sub_21FFECC(skillLevelListLabel, v15);
  UILabel__set_text(skillLevelListLabel, skillLevelListText, 0);
  treasureDeviceIconLabel = (UnityEngine_Object_o *)this->fields.treasureDeviceIconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceIconLabel, 0, 0) )
  {
    skillLevelListLabel = (UILabel_o *)StrengthStatus__GetTreasureDeviceStrengthAdjustData(
                                         tdStrengthStatus,
                                         treasureDeviceNum,
                                         0);
    if ( !this->fields.treasureDeviceIconLabel )
      goto LABEL_26;
    UIIconLabel__Set_48040364(
      this->fields.treasureDeviceIconLabel,
      34,
      tdLv,
      (int32_t)skillLevelListLabel,
      0,
      0,
      0,
      0,
      tempOverwriteTreasureDeviceLv,
      0,
      v26);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)skillLevelListLabel,
                                         0);
    if ( !skillLevelListLabel )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, 1, 0);
    v23 = this->fields.skillIconSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
    AtlasManager__SetEventSprite(v23, (System_String_o *)StringLiteral_21166/*"icon_skill_mini"*/, 0);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    ((void (__fastcall *)(UILabel_o *, const MethodInfo *))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method);
  }
  treasureDeviceObj = (UnityEngine_Object_o *)this->fields.treasureDeviceObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(treasureDeviceObj, 0, 0) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceObj;
    if ( skillLevelListLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, !isHideTreasureDevice, 0);
      return !IsNullOrEmpty;
    }
    goto LABEL_26;
  }
  return !IsNullOrEmpty;
}
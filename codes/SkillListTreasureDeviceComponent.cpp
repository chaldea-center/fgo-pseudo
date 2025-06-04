void __fastcall SkillListTreasureDeviceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B01544 & 1) == 0 )
  {
    sub_1BC3008(&SkillListTreasureDeviceComponent_TypeInfo, v1);
    byte_4B01544 = 1;
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

  if ( (byte_4B01541 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4B01541 = 1;
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
    sub_1BC3264(skillLevelListLabel, method);
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
  UnityEngine_Component_o *skillLevelListLabel; // x0
  float v16; // s1
  float v17; // s2
  float v18; // s10
  float v19; // s11
  float v20; // s1
  float v21; // s2
  float v22; // s8
  float v23; // s9
  float x; // s0
  UnityEngine_Object_o *skillIconSprite; // x20
  int v26; // w10
  int v27; // w21
  float v28; // s12
  float v29; // s13
  SkillListTreasureDeviceComponent_c *v30; // x0
  float ADJUST_X_POS; // s0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B01543 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, skillLevelListText);
    sub_1BC3008(&SkillListTreasureDeviceComponent_TypeInfo, v13);
    byte_4B01543 = 1;
  }
  if ( SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
         this,
         skillLevelListText,
         tdLv,
         tdStrengthStatus,
         treasureDeviceNum,
         isHideTreasureDevice,
         method) )
  {
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_25;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(skillLevelListLabel, 0LL);
    if ( !skillLevelListLabel )
      goto LABEL_25;
    *(UnityEngine_Vector3_o *)(&v16 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                             0LL);
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.treasureDeviceIconLabel;
    if ( !skillLevelListLabel )
      goto LABEL_25;
    v18 = v16;
    v19 = v17;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(skillLevelListLabel, 0LL);
    if ( !skillLevelListLabel )
      goto LABEL_25;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                       (UnityEngine_Transform_o *)skillLevelListLabel,
                                                       0LL);
    if ( !skillLevelListLabel )
      goto LABEL_25;
    *(UnityEngine_Vector3_o *)(&v20 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                             0LL);
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_25;
    v22 = v20;
    v23 = v21;
    x = UILabel__get_printedSize((UILabel_o *)skillLevelListLabel, 0LL).fields.x;
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    v26 = (int)x;
    if ( x == INFINITY )
      v26 = 0x80000000;
    v27 = v26 + this->fields.treasureDeviceSpace;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v28 = (float)v27;
    v29 = 0.0;
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
    {
      v30 = SkillListTreasureDeviceComponent_TypeInfo;
      if ( !SkillListTreasureDeviceComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SkillListTreasureDeviceComponent_TypeInfo);
        v30 = SkillListTreasureDeviceComponent_TypeInfo;
      }
      ADJUST_X_POS = v30->static_fields->ADJUST_X_POS;
      v29 = ADJUST_X_POS + 0.0;
      v28 = ADJUST_X_POS + v28;
    }
    skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
    if ( !skillLevelListLabel )
      goto LABEL_25;
    skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(skillLevelListLabel, 0LL);
    if ( !skillLevelListLabel
      || (v32.fields.x = v29,
          v32.fields.y = v18,
          v32.fields.z = v19,
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v32, 0LL),
          (skillLevelListLabel = (UnityEngine_Component_o *)this->fields.treasureDeviceIconLabel) == 0LL)
      || (skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                             skillLevelListLabel,
                                                             0LL)) == 0LL
      || (skillLevelListLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                             (UnityEngine_Transform_o *)skillLevelListLabel,
                                                             0LL)) == 0LL )
    {
LABEL_25:
      sub_1BC3264(skillLevelListLabel, v14);
    }
    v33.fields.y = v22;
    v33.fields.z = v23;
    v33.fields.x = v28;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)skillLevelListLabel, v33, 0LL);
  }
}


void __fastcall SkillListTreasureDeviceComponent__SetBitmapFont(
        SkillListTreasureDeviceComponent_o *this,
        UIFont_o *bitmapFont,
        const MethodInfo *method)
{
  UILabel_o *skillLevelListLabel; // x0
  struct UIIconLabel_o *treasureDeviceIconLabel; // x8

  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel
    || (UILabel__set_bitmapFont(skillLevelListLabel, bitmapFont, 0LL),
        (treasureDeviceIconLabel = this->fields.treasureDeviceIconLabel) == 0LL)
    || (skillLevelListLabel = treasureDeviceIconLabel->fields.textLabel) == 0LL )
  {
    sub_1BC3264(skillLevelListLabel, bitmapFont);
  }
  UILabel__set_bitmapFont(skillLevelListLabel, bitmapFont, 0LL);
}


void __fastcall SkillListTreasureDeviceComponent__SetLabelSkillLevelLabelScaleX(
        SkillListTreasureDeviceComponent_o *this,
        float scale,
        const MethodInfo *method)
{
  UnityEngine_Component_o *skillLevelListLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  skillLevelListLabel = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    sub_1BC3264(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(skillLevelListLabel, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, scale, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillListTreasureDeviceComponent__SetTreasureDeviceIconPosition(
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
                                                                0LL)) == 0LL)
    || (treasureDeviceIconLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                               (UnityEngine_Transform_o *)treasureDeviceIconLabel,
                                                               0LL)) == 0LL )
  {
    sub_1BC3264(treasureDeviceIconLabel, method);
  }
  v7.fields.y = y;
  v7.fields.z = z;
  v7.fields.x = x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)treasureDeviceIconLabel, v7, 0LL);
}


bool __fastcall SkillListTreasureDeviceComponent__SetWithoutAdjustPosition(
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
  const MethodInfo *v15; // x1
  UILabel_o *skillLevelListLabel; // x0
  UnityEngine_Object_o *treasureDeviceIconLabel; // x24
  UnityEngine_Object_o *skillIconSprite; // x21
  UISprite_o *v20; // x21
  UnityEngine_Object_o *treasureDeviceObj; // x21
  const MethodInfo *v22; // [xsp+10h] [xbp-50h]

  if ( (byte_4B01542 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, skillLevelListText);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_20036/*"icon_skill_mini"*/, v14);
    byte_4B01542 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    SkillListTreasureDeviceComponent__Clear(this, v15);
    return 0;
  }
  skillLevelListLabel = this->fields.skillLevelListLabel;
  if ( !skillLevelListLabel )
    goto LABEL_26;
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
      goto LABEL_26;
    UIIconLabel__Set_40054380(
      this->fields.treasureDeviceIconLabel,
      34,
      tdLv,
      (int32_t)skillLevelListLabel,
      0,
      0LL,
      0,
      0,
      0,
      0,
      v22);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    skillLevelListLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)skillLevelListLabel,
                                         0LL);
    if ( !skillLevelListLabel )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, 1, 0LL);
    v20 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_20036/*"icon_skill_mini"*/, 0LL);
    skillLevelListLabel = (UILabel_o *)this->fields.skillIconSprite;
    if ( !skillLevelListLabel )
      goto LABEL_26;
    ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer))skillLevelListLabel->klass->vtable._33_MakePixelPerfect.method)(
      skillLevelListLabel,
      skillLevelListLabel->klass->vtable._34_get_minWidth.methodPtr);
  }
  treasureDeviceObj = (UnityEngine_Object_o *)this->fields.treasureDeviceObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(treasureDeviceObj, 0LL, 0LL) )
    return 1;
  skillLevelListLabel = (UILabel_o *)this->fields.treasureDeviceObj;
  if ( !skillLevelListLabel )
LABEL_26:
    sub_1BC3264(skillLevelListLabel, v15);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillLevelListLabel, !isHideTreasureDevice, 0LL);
  return 1;
}
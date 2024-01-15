void __fastcall SkillListTreasureDeviceComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9245 & 1) == 0 )
  {
    sub_B16FFC(&SkillListTreasureDeviceComponent_TypeInfo, v1);
    byte_40F9245 = 1;
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
  UIIconLabel_o *v6; // x0
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v8; // x0

  if ( (byte_40F9243 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40F9243 = 1;
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
    v6 = this->fields.treasureDeviceIconLabel;
    if ( !v6 )
      goto LABEL_17;
    UIIconLabel__Clear(v6, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v8 = this->fields.skillIconSprite;
    if ( v8 )
    {
      UISprite__set_spriteName(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
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
  int32_t TreasureDeviceStrengthAdjustData; // w0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_Transform_o *transform; // x0
  float v22; // s1
  float v23; // s2
  UnityEngine_Component_o *v24; // x0
  float v25; // s10
  float v26; // s11
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *parent; // x0
  float v29; // s1
  float v30; // s2
  UILabel_o *v31; // x0
  float v32; // s8
  float v33; // s9
  float x; // s0
  UnityEngine_Object_o *skillIconSprite; // x21
  double v36; // d0
  int v37; // w22
  float v38; // s12
  float v39; // s13
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v42; // x21
  struct UISprite_o *v43; // x0
  SkillListTreasureDeviceComponent_c *v44; // x0
  float ADJUST_X_POS; // s0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_Transform_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  UnityEngine_Object_o *treasureDeviceObj; // x21
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9244 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, skillLevelListText);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&SkillListTreasureDeviceComponent_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_19290/*"icon_skill_mini"*/, v15);
    byte_40F9244 = 1;
  }
  if ( System_String__IsNullOrEmpty(skillLevelListText, 0LL) )
  {
    SkillListTreasureDeviceComponent__Clear(this, v16);
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
    TreasureDeviceStrengthAdjustData = StrengthStatus__GetTreasureDeviceStrengthAdjustData(
                                         tdStrengthStatus,
                                         treasureDeviceNum,
                                         0LL);
    if ( !this->fields.treasureDeviceIconLabel )
      goto LABEL_47;
    UIIconLabel__Set_40377052(
      this->fields.treasureDeviceIconLabel,
      34,
      tdLv,
      TreasureDeviceStrengthAdjustData,
      0,
      0LL,
      0,
      0,
      0,
      0LL);
  }
  v20 = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
  if ( !v20 )
    goto LABEL_47;
  transform = UnityEngine_Component__get_transform(v20, 0LL);
  if ( !transform )
    goto LABEL_47;
  *(UnityEngine_Vector3_o *)(&v22 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v24 = (UnityEngine_Component_o *)this->fields.treasureDeviceIconLabel;
  if ( !v24
    || (v25 = v22, v26 = v23, (v27 = UnityEngine_Component__get_transform(v24, 0LL)) == 0LL)
    || (parent = UnityEngine_Transform__get_parent(v27, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v29 - 1) = UnityEngine_Transform__get_localPosition(parent, 0LL),
        (v31 = this->fields.skillLevelListLabel) == 0LL) )
  {
LABEL_47:
    sub_B170D4();
  }
  v32 = v29;
  v33 = v30;
  x = UILabel__get_printedSize(v31, 0LL).fields.x;
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( x == INFINITY )
    v36 = -x;
  else
    v36 = x;
  v37 = this->fields.treasureDeviceSpace + (int)v36;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v38 = (float)v37;
  v39 = 0.0;
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v40 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !v40 )
      goto LABEL_47;
    gameObject = UnityEngine_Component__get_gameObject(v40, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v42 = this->fields.skillIconSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v42, (System_String_o *)StringLiteral_19290/*"icon_skill_mini"*/, 0LL);
    v43 = this->fields.skillIconSprite;
    if ( !v43 )
      goto LABEL_47;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v43->klass->vtable._33_MakePixelPerfect.method)(
      v43,
      v43->klass->vtable._34_get_minWidth.methodPtr);
    v44 = SkillListTreasureDeviceComponent_TypeInfo;
    if ( (BYTE3(SkillListTreasureDeviceComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SkillListTreasureDeviceComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SkillListTreasureDeviceComponent_TypeInfo);
      v44 = SkillListTreasureDeviceComponent_TypeInfo;
    }
    ADJUST_X_POS = v44->static_fields->ADJUST_X_POS;
    v39 = ADJUST_X_POS + 0.0;
    v38 = ADJUST_X_POS + v38;
  }
  v46 = (UnityEngine_Component_o *)this->fields.skillLevelListLabel;
  if ( !v46 )
    goto LABEL_47;
  v47 = UnityEngine_Component__get_transform(v46, 0LL);
  if ( !v47 )
    goto LABEL_47;
  v53.fields.x = v39;
  v53.fields.y = v25;
  v53.fields.z = v26;
  UnityEngine_Transform__set_localPosition(v47, v53, 0LL);
  v48 = (UnityEngine_Component_o *)this->fields.treasureDeviceIconLabel;
  if ( !v48 )
    goto LABEL_47;
  v49 = UnityEngine_Component__get_transform(v48, 0LL);
  if ( !v49 )
    goto LABEL_47;
  v50 = UnityEngine_Transform__get_parent(v49, 0LL);
  if ( !v50 )
    goto LABEL_47;
  v54.fields.x = v38;
  v54.fields.y = v32;
  v54.fields.z = v33;
  UnityEngine_Transform__set_localPosition(v50, v54, 0LL);
  treasureDeviceObj = (UnityEngine_Object_o *)this->fields.treasureDeviceObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(treasureDeviceObj, 0LL, 0LL) )
  {
    v52 = this->fields.treasureDeviceObj;
    if ( v52 )
    {
      UnityEngine_GameObject__SetActive(v52, !isHideTreasureDevice, 0LL);
      return;
    }
    goto LABEL_47;
  }
}
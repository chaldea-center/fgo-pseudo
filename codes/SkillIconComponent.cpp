void __fastcall SkillIconComponent___ctor(SkillIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SkillIconComponent__AdjustUI(SkillIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UIWidget_o *v8; // x0
  UIWidget_o *v9; // x0
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v11; // x0
  UIWidget_o *v12; // x0
  UnityEngine_Object_o *skillIconSprite; // x20
  UIWidget_o *v14; // x0
  UIWidget_o *v15; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UIWidget_o *v17; // x0
  UIWidget_o *v18; // x0
  UnityEngine_Object_o *maskSprite; // x20
  UIWidget_o *v20; // x0
  UIWidget_o *v21; // x0

  if ( (byte_40F923A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F923A = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v4 )
      goto LABEL_41;
    gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
    GameObjectExtensions__SetLocalPosition_27419968(gameObject, 21.0, -21.0, 0LL);
    v6 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v6 )
      goto LABEL_41;
    v7 = UnityEngine_Component__get_gameObject(v6, 0LL);
    GameObjectExtensions__SetLocalScale_27422188(v7, 1.0, 1.0, 0LL);
    v8 = (UIWidget_o *)this->fields.strengthStatusSprite;
    if ( !v8 )
      goto LABEL_41;
    UIWidget__set_width(v8, 14, 0LL);
    v9 = (UIWidget_o *)this->fields.strengthStatusSprite;
    if ( !v9 )
      goto LABEL_41;
    UIWidget__set_height(v9, 12, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.baseSprite;
    if ( !v11 )
      goto LABEL_41;
    UIWidget__set_width(v11, 44, 0LL);
    v12 = (UIWidget_o *)this->fields.baseSprite;
    if ( !v12 )
      goto LABEL_41;
    UIWidget__set_height(v12, 44, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v14 = (UIWidget_o *)this->fields.skillIconSprite;
    if ( !v14 )
      goto LABEL_41;
    UIWidget__set_width(v14, 40, 0LL);
    v15 = (UIWidget_o *)this->fields.skillIconSprite;
    if ( !v15 )
      goto LABEL_41;
    UIWidget__set_height(v15, 40, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v17 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v17 )
      goto LABEL_41;
    UIWidget__set_width(v17, 44, 0LL);
    v18 = (UIWidget_o *)this->fields.frameSprite;
    if ( !v18 )
      goto LABEL_41;
    UIWidget__set_height(v18, 44, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v20 = (UIWidget_o *)this->fields.maskSprite;
    if ( v20 )
    {
      UIWidget__set_width(v20, 44, 0LL);
      v21 = (UIWidget_o *)this->fields.maskSprite;
      if ( v21 )
      {
        UIWidget__set_height(v21, 44, 0LL);
        return;
      }
    }
LABEL_41:
    sub_B170D4();
  }
}


void __fastcall SkillIconComponent__Clear(SkillIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UISprite_o *v5; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UIIconLabel_o *v7; // x0
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UISprite_o *v9; // x0
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_40F9233 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9233 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_39;
  UISprite__set_spriteName(skillIconSprite, 0LL, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v5 = this->fields.frameSprite;
    if ( !v5 )
      goto LABEL_39;
    UISprite__set_spriteName(v5, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    v7 = this->fields.iconLabel;
    if ( !v7 )
      goto LABEL_39;
    UIIconLabel__Clear(v7, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v9 = this->fields.strengthStatusSprite;
    if ( !v9 )
      goto LABEL_39;
    UISprite__set_spriteName(v9, 0LL, 0LL);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Component_o *)this->fields.skillStrengthStatus;
    if ( !v11 )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v14 )
    {
      v15 = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( v15 )
      {
        UnityEngine_GameObject__SetActive(v15, 0, 0LL);
        return;
      }
    }
LABEL_39:
    sub_B170D4();
  }
}


void __fastcall SkillIconComponent__Set(SkillIconComponent_o *this, int32_t skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  SkillIconComponent__Set_23612468(this, skillId, 0, 0, 0, v3);
}


void __fastcall SkillIconComponent__SetHide(SkillIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *skillIconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UISprite_o *v6; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UIIconLabel_o *v8; // x0
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UISprite_o *v10; // x0
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0

  if ( (byte_40F9237 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9237 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetHideSkillIcon(skillIconSprite, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v6 = this->fields.frameSprite;
    if ( !v6 )
      goto LABEL_39;
    UISprite__set_spriteName(v6, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    v8 = this->fields.iconLabel;
    if ( !v8 )
      goto LABEL_39;
    UIIconLabel__Clear(v8, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v10 = this->fields.strengthStatusSprite;
    if ( !v10 )
      goto LABEL_39;
    UISprite__set_spriteName(v10, 0LL, 0LL);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.skillStrengthStatus;
    if ( !v12 )
      goto LABEL_39;
    gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v15 )
    {
      v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( v16 )
      {
        UnityEngine_GameObject__SetActive(v16, 0, 0LL);
        return;
      }
    }
LABEL_39:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__SetInvalidColor(
        SkillIconComponent_o *this,
        UnityEngine_Color_o invalidColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *baseSprite; // x20
  UIWidget_o *v9; // x0
  UnityEngine_Object_o *skillIconSprite; // x20
  UIWidget_o *v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = invalidColor.fields.a;
  b = invalidColor.fields.b;
  g = invalidColor.fields.g;
  r = invalidColor.fields.r;
  if ( (byte_40F9239 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9239 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v9 = (UIWidget_o *)this->fields.baseSprite;
    if ( !v9 )
      goto LABEL_16;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UIWidget__set_color(v9, v12, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v11 = (UIWidget_o *)this->fields.skillIconSprite;
    if ( v11 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UIWidget__set_color(v11, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall SkillIconComponent__SetMask(SkillIconComponent_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite || (gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, enabled, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__SetSpecifyIconId(
        SkillIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UISprite_o *skillIconSprite; // x21
  UnityEngine_Object_o *frameSprite; // x20
  UISprite_o *v8; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UIIconLabel_o *v10; // x0
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UISprite_o *v12; // x0
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9238 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F9238 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIconSpecifyIconId(skillIconSprite, iconId, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v8 = this->fields.frameSprite;
    if ( !v8 )
      goto LABEL_32;
    UISprite__set_spriteName(v8, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    v10 = this->fields.iconLabel;
    if ( !v10 )
      goto LABEL_32;
    UIIconLabel__Clear(v10, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v12 = this->fields.strengthStatusSprite;
    if ( !v12 )
      goto LABEL_32;
    UISprite__set_spriteName(v12, 0LL, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v14 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v14 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        return;
      }
    }
LABEL_32:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__SetStrengthStatus(
        SkillIconComponent_o *this,
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *strengthStatusSprite; // x22
  UnityEngine_Component_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o **p_skillStrengthStatus; // x22
  UnityEngine_Object_o *skillStrengthStatus; // x23
  UnityEngine_Object_o *v14; // x23
  ServantSkillStrengthStatus_c *v15; // x0
  System_String_o *PATH; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F9236 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, *(_QWORD *)&strengthStatus);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v8);
    byte_40F9236 = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( v10 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v10, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        p_skillStrengthStatus = (UnityEngine_Component_o **)&this->fields.skillStrengthStatus;
        skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
        {
          if ( !*p_skillStrengthStatus )
            goto LABEL_27;
          v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_skillStrengthStatus, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(v14, 0LL);
        }
        v15 = ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          v15 = ServantSkillStrengthStatus_TypeInfo;
        }
        if ( this->fields.strengthStatusSprite )
        {
          PATH = v15->static_fields->PATH;
          transform = UnityEngine_Component__get_transform(
                        (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                        0LL);
          if ( transform )
          {
            parent = UnityEngine_Transform__get_parent(transform, 0LL);
            Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                                (BaseMonoBehaviour_o *)this,
                                PATH,
                                parent,
                                0LL,
                                0LL);
            if ( Object_19257936 )
            {
              Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 Object_19257936,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
              *p_skillStrengthStatus = (UnityEngine_Component_o *)Component_srcLineSprite;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
                Component_srcLineSprite,
                v21,
                v22,
                v23,
                v24,
                v25,
                v26);
              if ( *p_skillStrengthStatus )
              {
                ServantSkillStrengthStatus__SetVertical(
                  (ServantSkillStrengthStatus_o *)*p_skillStrengthStatus,
                  this->fields.strengthStatusSprite,
                  strengthStatus,
                  skillRecord,
                  0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__Set_23612468(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UISprite_o *skillIconSprite; // x24
  UnityEngine_Object_o *frameSprite; // x23
  UISprite_o *v16; // x0
  UnityEngine_Object_o *iconLabel; // x23
  UIIconLabel_o *v18; // x0
  UnityEngine_Object_o *strengthStatusSprite; // x23
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *v24; // x24
  ServantSkillStrengthStatus_c *v25; // x0
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0

  if ( (byte_40F9234 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v13);
    byte_40F9234 = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v16 = this->fields.frameSprite;
    if ( !v16 )
      goto LABEL_53;
    UISprite__set_spriteName(v16, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    v18 = this->fields.iconLabel;
    if ( !v18 )
      goto LABEL_53;
    if ( skillLv < 1 )
      UIIconLabel__Clear(v18, 0LL);
    else
      UIIconLabel__Set_40377052(v18, 2, skillLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v20 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v20 )
      goto LABEL_53;
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    p_skillStrengthStatus = (UnityEngine_Component_o **)&this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
    {
      if ( !*p_skillStrengthStatus )
        goto LABEL_53;
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_skillStrengthStatus, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v24, 0LL);
    }
    v25 = ServantSkillStrengthStatus_TypeInfo;
    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      v25 = ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite
      || (PATH = v25->static_fields->PATH,
          (transform = UnityEngine_Component__get_transform(
                         (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                         0LL)) == 0LL)
      || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
          (Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                               (BaseMonoBehaviour_o *)this,
                               PATH,
                               parent,
                               0LL,
                               0LL)) == 0LL)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             Object_19257936,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (UnityEngine_Component_o *)Component_srcLineSprite,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
            Component_srcLineSprite,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36),
          !*p_skillStrengthStatus) )
    {
LABEL_53:
      sub_B170D4();
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)*p_skillStrengthStatus,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v38 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v38 )
    {
      v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
      if ( v39 )
      {
        UnityEngine_GameObject__SetActive(v39, skillLv < 0, 0LL);
        return;
      }
    }
    goto LABEL_53;
  }
}


void __fastcall SkillIconComponent__Set_23613360(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  SkillIconComponent__Set_23612468(this, skillId, skillLv, 0, 0, v4);
}


void __fastcall SkillIconComponent__Set_23613372(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  SkillIconComponent__Set_23613388(this, skillId, skillLv, 0, 0, info, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__Set_23613388(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        int32_t strengthStatus,
        int32_t skillRecord,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UISprite_o *skillIconSprite; // x25
  UnityEngine_Object_o *frameSprite; // x24
  UISprite_o *v18; // x0
  UnityEngine_Object_o *iconLabel; // x24
  UIIconLabel_o *v20; // x0
  UnityEngine_Object_o *strengthStatusSprite; // x23
  UnityEngine_Component_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *v26; // x24
  ServantSkillStrengthStatus_c *v27; // x0
  System_String_o *PATH; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0

  if ( (byte_40F9235 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&skillId);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v15);
    byte_40F9235 = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v18 = this->fields.frameSprite;
    if ( !v18 )
      goto LABEL_56;
    UISprite__set_spriteName(v18, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    v20 = this->fields.iconLabel;
    if ( info )
    {
      if ( !v20 )
        goto LABEL_56;
      UIIconLabel__Set(v20, info, 0LL);
    }
    else
    {
      if ( !v20 )
        goto LABEL_56;
      if ( skillLv < 1 )
        UIIconLabel__Clear(v20, 0LL);
      else
        UIIconLabel__Set_40377052(v20, 2, skillLv, 0, 0, 0LL, 0, 0, 0, 0LL);
    }
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v22 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v22 )
      goto LABEL_56;
    gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    p_skillStrengthStatus = (UnityEngine_Component_o **)&this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
    {
      if ( !*p_skillStrengthStatus )
        goto LABEL_56;
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_skillStrengthStatus, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v26, 0LL);
    }
    v27 = ServantSkillStrengthStatus_TypeInfo;
    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      v27 = ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite
      || (PATH = v27->static_fields->PATH,
          (transform = UnityEngine_Component__get_transform(
                         (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                         0LL)) == 0LL)
      || (parent = UnityEngine_Transform__get_parent(transform, 0LL),
          (Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                               (BaseMonoBehaviour_o *)this,
                               PATH,
                               parent,
                               0LL,
                               0LL)) == 0LL)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             Object_19257936,
                                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (UnityEngine_Component_o *)Component_srcLineSprite,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
            Component_srcLineSprite,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38),
          !*p_skillStrengthStatus) )
    {
LABEL_56:
      sub_B170D4();
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)*p_skillStrengthStatus,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v40 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v40 )
    {
      v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
      if ( v41 )
      {
        UnityEngine_GameObject__SetActive(v41, skillLv < 0, 0LL);
        return;
      }
    }
    goto LABEL_56;
  }
}
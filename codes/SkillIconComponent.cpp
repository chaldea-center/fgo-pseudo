void __fastcall SkillIconComponent___ctor(SkillIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SkillIconComponent__AdjustUI(SkillIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *strengthStatusSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Object_o *baseSprite; // x20
  UnityEngine_Object_o *skillIconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_42B0D55 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0D55 = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_41;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    GameObjectExtensions__SetLocalPosition_32085060(gameObject, 21.0, -21.0, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_41;
    v7 = UnityEngine_Component__get_gameObject(v5, 0LL);
    GameObjectExtensions__SetLocalScale_32087280(v7, 1.0, 1.0, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_width((UIWidget_o *)v5, 14, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_height((UIWidget_o *)v5, 12, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_width((UIWidget_o *)v5, 44, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_height((UIWidget_o *)v5, 44, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_width((UIWidget_o *)v5, 40, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_height((UIWidget_o *)v5, 40, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_width((UIWidget_o *)v5, 44, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !v5 )
      goto LABEL_41;
    UIWidget__set_height((UIWidget_o *)v5, 44, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v5 )
    {
      UIWidget__set_width((UIWidget_o *)v5, 44, 0LL);
      v5 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( v5 )
      {
        UIWidget__set_height((UIWidget_o *)v5, 44, 0LL);
        return;
      }
    }
LABEL_41:
    sub_B52A5C(v5, v4);
  }
}


void __fastcall SkillIconComponent__Clear(SkillIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_42B0D4E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0D4E = 1;
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
    skillIconSprite = this->fields.frameSprite;
    if ( !skillIconSprite )
      goto LABEL_39;
    UISprite__set_spriteName(skillIconSprite, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    skillIconSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !skillIconSprite )
      goto LABEL_39;
    UIIconLabel__Clear((UIIconLabel_o *)skillIconSprite, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    skillIconSprite = this->fields.strengthStatusSprite;
    if ( !skillIconSprite )
      goto LABEL_39;
    UISprite__set_spriteName(skillIconSprite, 0LL, 0LL);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillIconSprite = (UISprite_o *)this->fields.skillStrengthStatus;
    if ( !skillIconSprite )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillIconSprite,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    skillIconSprite = this->fields.maskSprite;
    if ( skillIconSprite )
    {
      skillIconSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)skillIconSprite,
                                        0LL);
      if ( skillIconSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconSprite, 0, 0LL);
        return;
      }
    }
LABEL_39:
    sub_B52A5C(skillIconSprite, method);
  }
}


void __fastcall SkillIconComponent__Set(SkillIconComponent_o *this, int32_t skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  SkillIconComponent__Set_26536852(this, skillId, 0, 0, 0, v3);
}


void __fastcall SkillIconComponent__SetHide(SkillIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v5; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_42B0D52 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0D52 = 1;
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
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_39;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_39;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_39;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.skillStrengthStatus;
    if ( !gameObject )
      goto LABEL_39;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        return;
      }
    }
LABEL_39:
    sub_B52A5C(gameObject, v5);
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
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  UnityEngine_Object_o *skillIconSprite; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = invalidColor.fields.a;
  b = invalidColor.fields.b;
  g = invalidColor.fields.g;
  r = invalidColor.fields.r;
  if ( (byte_42B0D54 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0D54 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.baseSprite;
    if ( !v10 )
      goto LABEL_16;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UIWidget__set_color(v10, v12, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.skillIconSprite;
    if ( v10 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UIWidget__set_color(v10, v13, 0LL);
      return;
    }
LABEL_16:
    sub_B52A5C(v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__SetMask(SkillIconComponent_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
  {
    sub_B52A5C(maskSprite, enabled);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, enabled, 0LL);
}


void __fastcall SkillIconComponent__SetSpecifyIconId(
        SkillIconComponent_o *this,
        int32_t iconId,
        const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x21
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v7; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_42B0D53 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0D53 = 1;
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
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_32;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_32;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_32;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        return;
      }
    }
LABEL_32:
    sub_B52A5C(gameObject, v7);
  }
}


void __fastcall SkillIconComponent__SetStrengthStatus(
        SkillIconComponent_o *this,
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  UnityEngine_Object_o *strengthStatusSprite; // x22
  __int64 v8; // x1
  void *gameObject; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x22
  UnityEngine_Object_o *skillStrengthStatus; // x23
  UnityEngine_Object_o *v12; // x23
  System_String_o *v13; // x23
  UnityEngine_Transform_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B0D51 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    byte_42B0D51 = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        p_skillStrengthStatus = &this->fields.skillStrengthStatus;
        skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
        {
          gameObject = *p_skillStrengthStatus;
          if ( !*p_skillStrengthStatus )
            goto LABEL_27;
          v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35616956(v12, 0LL);
        }
        gameObject = ServantSkillStrengthStatus_TypeInfo;
        if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          gameObject = ServantSkillStrengthStatus_TypeInfo;
        }
        if ( this->fields.strengthStatusSprite )
        {
          v13 = (System_String_o *)**((_QWORD **)gameObject + 23);
          gameObject = UnityEngine_Component__get_transform(
                         (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                         0LL);
          if ( gameObject )
          {
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
            gameObject = BaseMonoBehaviour__createObject_19346208((BaseMonoBehaviour_o *)this, v13, parent, 0LL, 0LL);
            if ( gameObject )
            {
              Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 (UnityEngine_GameObject_o *)gameObject,
                                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
              *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_srcLineSprite;
              sub_B52920(
                (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
                Component_srcLineSprite,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
              gameObject = *p_skillStrengthStatus;
              if ( *p_skillStrengthStatus )
              {
                ServantSkillStrengthStatus__SetVertical(
                  (ServantSkillStrengthStatus_o *)gameObject,
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
    sub_B52A5C(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__Set_26536852(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x24
  UnityEngine_Object_o *frameSprite; // x23
  __int64 v13; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x23
  UnityEngine_Object_o *strengthStatusSprite; // x23
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *v19; // x24
  System_String_o *klass; // x24
  UnityEngine_Transform_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *maskSprite; // x21

  if ( (byte_42B0D4F & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    byte_42B0D4F = 1;
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
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_53;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_53;
    if ( skillLv < 1 )
      UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
    else
      UIIconLabel__Set_41786400((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0LL, 0, 0, 0, 0LL);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_53;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_53;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_53;
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v19, 0LL);
    }
    gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite )
      goto LABEL_53;
    klass = (System_String_o *)gameObject->fields.onPostFill->klass;
    gameObject = (UISprite_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                                 0LL);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_19346208(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0LL,
                                        0LL)) == 0LL)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)gameObject,
                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_srcLineSprite,
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
            Component_srcLineSprite,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0LL) )
    {
LABEL_53:
      sub_B52A5C(gameObject, v13);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
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
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, skillLv < 0, 0LL);
        return;
      }
    }
    goto LABEL_53;
  }
}


void __fastcall SkillIconComponent__Set_26537744(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  SkillIconComponent__Set_26536852(this, skillId, skillLv, 0, 0, v4);
}


void __fastcall SkillIconComponent__Set_26537756(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  SkillIconComponent__Set_26537772(this, skillId, skillLv, 0, 0, info, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__Set_26537772(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        int32_t strengthStatus,
        int32_t skillRecord,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x25
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v15; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x24
  UnityEngine_Object_o *strengthStatusSprite; // x23
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *v21; // x24
  System_String_o *klass; // x24
  UnityEngine_Transform_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Object_o *maskSprite; // x21

  if ( (byte_42B0D50 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    byte_42B0D50 = 1;
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
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_56;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( info )
    {
      if ( !gameObject )
        goto LABEL_56;
      UIIconLabel__Set((UIIconLabel_o *)gameObject, info, 0LL);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_56;
      if ( skillLv < 1 )
        UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0LL);
      else
        UIIconLabel__Set_41786400((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0LL, 0, 0, 0, 0LL);
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
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_56;
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v21, 0LL);
    }
    gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite )
      goto LABEL_56;
    klass = (System_String_o *)gameObject->fields.onPostFill->klass;
    gameObject = (UISprite_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                                 0LL);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_19346208(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0LL,
                                        0LL)) == 0LL)
      || (Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)gameObject,
                                                             (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_srcLineSprite,
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.skillStrengthStatus,
            Component_srcLineSprite,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0LL) )
    {
LABEL_56:
      sub_B52A5C(gameObject, v15);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
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
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, skillLv < 0, 0LL);
        return;
      }
    }
    goto LABEL_56;
  }
}
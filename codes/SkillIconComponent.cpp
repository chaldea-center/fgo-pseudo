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

  if ( (byte_49FE0CE & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FE0CE = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    GameObjectExtensions__SetLocalPosition_33376848(gameObject, 21.0, -21.0, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    v7 = UnityEngine_Component__get_gameObject(v5, 0LL);
    GameObjectExtensions__SetLocalScale_33378916(v7, 1.0, 1.0, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 14, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 12, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 44, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 44, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 40, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 40, 0LL);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 44, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 44, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_36:
    sub_1B64C5C(v5, v4);
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

  if ( (byte_49FE0C7 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FE0C7 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_33;
  UISprite__set_spriteName(skillIconSprite, 0LL, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    skillIconSprite = this->fields.frameSprite;
    if ( !skillIconSprite )
      goto LABEL_33;
    UISprite__set_spriteName(skillIconSprite, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    skillIconSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !skillIconSprite )
      goto LABEL_33;
    UIIconLabel__Clear((UIIconLabel_o *)skillIconSprite, method);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    skillIconSprite = this->fields.strengthStatusSprite;
    if ( !skillIconSprite )
      goto LABEL_33;
    UISprite__set_spriteName(skillIconSprite, 0LL, 0LL);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    skillIconSprite = (UISprite_o *)this->fields.skillStrengthStatus;
    if ( !skillIconSprite )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillIconSprite,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_33:
    sub_1B64C5C(skillIconSprite, method);
  }
}


void __fastcall SkillIconComponent__Set(SkillIconComponent_o *this, int32_t skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  SkillIconComponent__Set_37925068(this, skillId, 0, 0, 0, v3);
}


void __fastcall SkillIconComponent__SetHide(SkillIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UISprite_o *skillIconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  const MethodInfo *v6; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_49FE0CB & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE0CB = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetHideSkillIcon(skillIconSprite, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_33;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_33;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, v6);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_33;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.skillStrengthStatus;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_33:
    sub_1B64C5C(gameObject, v6);
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
  if ( (byte_49FE0CD & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_49FE0CD = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v10 = (UIWidget_o *)this->fields.baseSprite;
    if ( !v10 )
      goto LABEL_14;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UIWidget__set_color(v10, v12, 0LL);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
    sub_1B64C5C(v10, v9);
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
    sub_1B64C5C(maskSprite, enabled);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, enabled, 0LL);
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
  const MethodInfo *v8; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_49FE0CC & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&iconId);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v5);
    byte_49FE0CC = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIconSpecifyIconId(skillIconSprite, iconId, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_27;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_27;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, v8);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_27;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_27:
    sub_1B64C5C(gameObject, v8);
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
  __int64 v10; // x1
  void *gameObject; // x0
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x22
  UnityEngine_Object_o *skillStrengthStatus; // x23
  UnityEngine_Object_o *v14; // x23
  System_String_o *v15; // x23
  UnityEngine_Transform_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FE0CA & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, *(_QWORD *)&strengthStatus);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&ServantSkillStrengthStatus_TypeInfo, v8);
    byte_49FE0CA = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
        {
          gameObject = *p_skillStrengthStatus;
          if ( !*p_skillStrengthStatus )
            goto LABEL_23;
          v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)gameObject,
                                          0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69137476(v14, 0LL);
        }
        gameObject = ServantSkillStrengthStatus_TypeInfo;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          gameObject = ServantSkillStrengthStatus_TypeInfo;
        }
        if ( this->fields.strengthStatusSprite )
        {
          v15 = (System_String_o *)**((_QWORD **)gameObject + 23);
          gameObject = UnityEngine_Component__get_transform(
                         (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                         0LL);
          if ( gameObject )
          {
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
            gameObject = BaseMonoBehaviour__createObject_37999632((BaseMonoBehaviour_o *)this, v15, parent, 0LL, 0LL);
            if ( gameObject )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)gameObject,
                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
              *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
              sub_1B649A4(
                (ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus,
                (int32_t)Component_object,
                v18,
                v19);
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
LABEL_23:
    sub_1B64C5C(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__Set_37925068(
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
  const MethodInfo *v16; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x23
  UnityEngine_Object_o *strengthStatusSprite; // x23
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *v22; // x24
  System_String_o *klass; // x24
  UnityEngine_Transform_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v29; // [xsp+8h] [xbp-48h]

  if ( (byte_49FE0C8 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&skillId);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v11);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v12);
    sub_1B64A00(&ServantSkillStrengthStatus_TypeInfo, v13);
    byte_49FE0C8 = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_45;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_45;
    if ( skillLv < 1 )
      UIIconLabel__Clear((UIIconLabel_o *)gameObject, v16);
    else
      UIIconLabel__Set_37925880((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0LL, 0, 0, 0, v29);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_45;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_45;
      v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476(v22, 0LL);
    }
    gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite )
      goto LABEL_45;
    klass = (System_String_o *)gameObject->fields.onChange->klass;
    gameObject = (UISprite_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                                 0LL);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_37999632(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0LL,
                                        0LL)) == 0LL)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object,
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus,
            (int32_t)Component_object,
            v26,
            v27),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0LL) )
    {
LABEL_45:
      sub_1B64C5C(gameObject, v16);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    goto LABEL_45;
  }
}


void __fastcall SkillIconComponent__Set_37925868(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  SkillIconComponent__Set_37925068(this, skillId, skillLv, 0, 0, v4);
}


void __fastcall SkillIconComponent__Set_37931204(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  SkillIconComponent__Set_37931220(this, skillId, skillLv, 0, 0, info, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillIconComponent__Set_37931220(
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
  const MethodInfo *v18; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x24
  const MethodInfo *v21; // x2
  UnityEngine_Object_o *strengthStatusSprite; // x23
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  UnityEngine_Object_o *v25; // x24
  System_String_o *klass; // x24
  UnityEngine_Transform_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v32; // [xsp+8h] [xbp-58h]

  if ( (byte_49FE0C9 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&skillId);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, v13);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v14);
    sub_1B64A00(&ServantSkillStrengthStatus_TypeInfo, v15);
    byte_49FE0C9 = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_48;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0LL, 0LL) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( info )
    {
      if ( !gameObject )
        goto LABEL_48;
      UIIconLabel__Set((UIIconLabel_o *)gameObject, info, v21);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_48;
      if ( skillLv < 1 )
        UIIconLabel__Clear((UIIconLabel_o *)gameObject, v18);
      else
        UIIconLabel__Set_37925880((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0LL, 0, 0, 0, v32);
    }
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_48;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0LL, 0LL) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_48;
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476(v25, 0LL);
    }
    gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
      gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite )
      goto LABEL_48;
    klass = (System_String_o *)gameObject->fields.onChange->klass;
    gameObject = (UISprite_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                                 0LL);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_37999632(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0LL,
                                        0LL)) == 0LL)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object,
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&this->fields.skillStrengthStatus,
            (int32_t)Component_object,
            v29,
            v30),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0LL) )
    {
LABEL_48:
      sub_1B64C5C(gameObject, v18);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0LL);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    goto LABEL_48;
  }
}
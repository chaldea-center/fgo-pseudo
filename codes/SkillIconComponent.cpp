void SkillIconComponent___ctor(SkillIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SkillIconComponent__AdjustUI(SkillIconComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4C267CF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C267CF = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0);
    GameObjectExtensions__SetLocalPosition_35918496(gameObject, 21.0, -21.0, 0);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    v7 = UnityEngine_Component__get_gameObject(v5, 0);
    GameObjectExtensions__SetLocalScale_35920564(v7, 1.0, 1.0, 0);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 14, 0);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 12, 0);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 44, 0);
    v5 = (UnityEngine_Component_o *)this->fields.baseSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 44, 0);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 40, 0);
    v5 = (UnityEngine_Component_o *)this->fields.skillIconSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 40, 0);
  }
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_width((UIWidget_o *)v5, 44, 0);
    v5 = (UnityEngine_Component_o *)this->fields.frameSprite;
    if ( !v5 )
      goto LABEL_36;
    UIWidget__set_height((UIWidget_o *)v5, 44, 0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( v5 )
    {
      UIWidget__set_width((UIWidget_o *)v5, 44, 0);
      v5 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( v5 )
      {
        UIWidget__set_height((UIWidget_o *)v5, 44, 0);
        return;
      }
    }
LABEL_36:
    sub_1C2D6EC(v5, v4);
  }
}


void SkillIconComponent__Clear(SkillIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x0
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_4C267C8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C267C8 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_33;
  UISprite__set_spriteName(skillIconSprite, 0, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    skillIconSprite = this->fields.frameSprite;
    if ( !skillIconSprite )
      goto LABEL_33;
    UISprite__set_spriteName(skillIconSprite, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    skillIconSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !skillIconSprite )
      goto LABEL_33;
    UIIconLabel__Clear((UIIconLabel_o *)skillIconSprite, 0);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    skillIconSprite = this->fields.strengthStatusSprite;
    if ( !skillIconSprite )
      goto LABEL_33;
    UISprite__set_spriteName(skillIconSprite, 0, 0);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
  {
    skillIconSprite = (UISprite_o *)this->fields.skillStrengthStatus;
    if ( !skillIconSprite )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillIconSprite,
                                           0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    skillIconSprite = this->fields.maskSprite;
    if ( skillIconSprite )
    {
      skillIconSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)skillIconSprite,
                                        0);
      if ( skillIconSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skillIconSprite, 0, 0);
        return;
      }
    }
LABEL_33:
    sub_1C2D6EC(skillIconSprite, method);
  }
}


void SkillIconComponent__Set(SkillIconComponent_o *this, int32_t skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  SkillIconComponent__Set_40800888(this, skillId, 0, 0, 0, v3);
}


void SkillIconComponent__SetHide(SkillIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x20
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v5; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_4C267CC & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C267CC = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetHideSkillIcon(skillIconSprite, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_33;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_33;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_33;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.skillStrengthStatus;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
    }
LABEL_33:
    sub_1C2D6EC(gameObject, v5);
  }
}


void SkillIconComponent__SetInvalidColor(
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
  if ( (byte_4C267CE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C267CE = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.baseSprite;
    if ( !v10 )
      goto LABEL_14;
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    UIWidget__set_color(v10, v12, 0);
  }
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0, 0) )
  {
    v10 = (UIWidget_o *)this->fields.skillIconSprite;
    if ( v10 )
    {
      v13.fields.b = b;
      v13.fields.a = a;
      v13.fields.r = r;
      v13.fields.g = g;
      UIWidget__set_color(v10, v13, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void SkillIconComponent__SetMask(SkillIconComponent_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite
    || (maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0)) == 0 )
  {
    sub_1C2D6EC(maskSprite, enabled);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, enabled, 0);
}


void SkillIconComponent__SetSpecifyIconId(SkillIconComponent_o *this, int32_t iconId, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x21
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v7; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_4C267CD & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C267CD = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIconSpecifyIconId(skillIconSprite, iconId, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_27;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_27;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_27;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        return;
      }
    }
LABEL_27:
    sub_1C2D6EC(gameObject, v7);
  }
}


void SkillIconComponent__SetStrengthStatus(
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
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C267CB & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantSkillStrengthStatus_TypeInfo);
    byte_4C267CB = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        p_skillStrengthStatus = &this->fields.skillStrengthStatus;
        skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
        {
          gameObject = *p_skillStrengthStatus;
          if ( !*p_skillStrengthStatus )
            goto LABEL_23;
          v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71163704(v12, 0);
        }
        gameObject = ServantSkillStrengthStatus_TypeInfo;
        if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          gameObject = ServantSkillStrengthStatus_TypeInfo;
        }
        if ( this->fields.strengthStatusSprite )
        {
          v13 = (System_String_o *)**((_QWORD **)gameObject + 23);
          gameObject = UnityEngine_Component__get_transform(
                         (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                         0);
          if ( gameObject )
          {
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = BaseMonoBehaviour__createObject_40963840((BaseMonoBehaviour_o *)this, v13, parent, 0, 0);
            if ( gameObject )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)gameObject,
                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
              *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
              sub_1C2D434(
                (CGThumbnailListItem_o *)&this->fields.skillStrengthStatus,
                (int32_t)Component_object,
                v16,
                v17);
              gameObject = *p_skillStrengthStatus;
              if ( *p_skillStrengthStatus )
              {
                ServantSkillStrengthStatus__SetVertical(
                  (ServantSkillStrengthStatus_o *)gameObject,
                  this->fields.strengthStatusSprite,
                  strengthStatus,
                  skillRecord,
                  0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_23:
    sub_1C2D6EC(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void SkillIconComponent__Set_40800888(
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
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *maskSprite; // x21

  if ( (byte_4C267C9 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantSkillStrengthStatus_TypeInfo);
    byte_4C267C9 = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_45;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_45;
    if ( skillLv < 1 )
      UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
    else
      UIIconLabel__Set_40889008((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_45;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_45;
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v19, 0);
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
                                 0);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_40963840(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0,
                                        0)) == 0)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillStrengthStatus, (int32_t)Component_object, v23, v24),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0) )
    {
LABEL_45:
      sub_1C2D6EC(gameObject, v13);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, skillLv < 0, 0);
        return;
      }
    }
    goto LABEL_45;
  }
}


void SkillIconComponent__Set_40801700(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  SkillIconComponent__Set_40800888(this, skillId, skillLv, 0, 0, v4);
}


void SkillIconComponent__Set_40801712(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  SkillIconComponent__Set_40801728(this, skillId, skillLv, 0, 0, info, v5);
}


// local variable allocation has failed, the output may be wrong!
void SkillIconComponent__Set_40801728(
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
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *maskSprite; // x21

  if ( (byte_4C267CA & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantSkillStrengthStatus_TypeInfo);
    byte_4C267CA = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_48;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( info )
    {
      if ( !gameObject )
        goto LABEL_48;
      UIIconLabel__Set((UIIconLabel_o *)gameObject, info, 0);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_48;
      if ( skillLv < 1 )
        UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
      else
        UIIconLabel__Set_40889008((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0, 0, 0, 0, 0, 0);
    }
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_48;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_48;
      v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v21, 0);
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
                                 0);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_40963840(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0,
                                        0)) == 0)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object,
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillStrengthStatus, (int32_t)Component_object, v25, v26),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0) )
    {
LABEL_48:
      sub_1C2D6EC(gameObject, v15);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    gameObject = this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, skillLv < 0, 0);
        return;
      }
    }
    goto LABEL_48;
  }
}
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

  if ( (byte_596FD29 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD29 = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0);
    GameObjectExtensions__SetLocalPosition_42891516(gameObject, 21.0, -21.0, 0);
    v5 = (UnityEngine_Component_o *)this->fields.strengthStatusSprite;
    if ( !v5 )
      goto LABEL_36;
    v7 = UnityEngine_Component__get_gameObject(v5, 0);
    GameObjectExtensions__SetLocalScale_42893584(v7, 1.0, 1.0, 0);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    sub_2213CDC(v5, v4);
  }
}


void SkillIconComponent__Clear(SkillIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *frameSprite; // x20
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *skillStrengthStatus; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_596FD22 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD22 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !skillIconSprite )
    goto LABEL_33;
  UISprite__set_spriteName(skillIconSprite, 0, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    skillIconSprite = this->fields.frameSprite;
    if ( !skillIconSprite )
      goto LABEL_33;
    UISprite__set_spriteName(skillIconSprite, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    skillIconSprite = (UISprite_o *)this->fields.iconLabel;
    if ( !skillIconSprite )
      goto LABEL_33;
    UIIconLabel__Clear((UIIconLabel_o *)skillIconSprite, 0);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    skillIconSprite = this->fields.strengthStatusSprite;
    if ( !skillIconSprite )
      goto LABEL_33;
    UISprite__set_spriteName(skillIconSprite, 0, 0);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
  {
    skillIconSprite = (UISprite_o *)this->fields.skillStrengthStatus;
    if ( !skillIconSprite )
      goto LABEL_33;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)skillIconSprite,
                                           0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(skillIconSprite, method);
  }
}


void SkillIconComponent__Set(SkillIconComponent_o *this, int32_t skillId, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  SkillIconComponent__Set_48066780(this, skillId, 0, 0, 0, v3);
}


void SkillIconComponent__SetHide(SkillIconComponent_o *this, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v6; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *skillStrengthStatus; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_596FD26 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD26 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
  AtlasManager__SetHideSkillIcon(skillIconSprite, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_33;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_33;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_33;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_2213CDC(gameObject, v6);
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
  if ( (byte_596FD28 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD28 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
    sub_2213CDC(v10, v9);
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
    sub_2213CDC(maskSprite, enabled);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, enabled, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillIconComponent__SetSpecifyIconId(SkillIconComponent_o *this, int32_t iconId, const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *frameSprite; // x20
  __int64 v8; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x20
  UnityEngine_Object_o *strengthStatusSprite; // x20
  UnityEngine_Object_o *maskSprite; // x20

  if ( (byte_596FD27 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FD27 = 1;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&iconId);
  AtlasManager__SetSkillIconSpecifyIconId(skillIconSprite, iconId, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_27;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( !gameObject )
      goto LABEL_27;
    UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_27;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_2213CDC(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void SkillIconComponent__SetStrengthStatus(
        SkillIconComponent_o *this,
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  UnityEngine_Object_o *strengthStatusSprite; // x22
  __int64 v8; // x1
  void *gameObject; // x0
  __int64 v10; // x1
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x22
  UnityEngine_Object_o *skillStrengthStatus; // x23
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x23
  System_String_o *v15; // x23
  UnityEngine_Transform_o *parent; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596FD25 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    byte_596FD25 = 1;
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&strengthStatus);
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
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
        {
          gameObject = *p_skillStrengthStatus;
          if ( !*p_skillStrengthStatus )
            goto LABEL_23;
          v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
          UnityEngine_Object__Destroy_83459800(v14, 0);
        }
        gameObject = ServantSkillStrengthStatus_TypeInfo;
        if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v8);
          gameObject = ServantSkillStrengthStatus_TypeInfo;
        }
        if ( this->fields.strengthStatusSprite )
        {
          v15 = (System_String_o *)**((_QWORD **)gameObject + 23);
          gameObject = UnityEngine_Component__get_transform(
                         (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                         0);
          if ( gameObject )
          {
            parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0);
            gameObject = BaseMonoBehaviour__createObject_48153028((BaseMonoBehaviour_o *)this, v15, parent, 0, 0);
            if ( gameObject )
            {
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)gameObject,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
              *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.skillStrengthStatus,
                (int32_t)Component_object,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
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
    sub_2213CDC(gameObject, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void SkillIconComponent__Set_48066780(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        int32_t strengthStatus,
        int32_t skillRecord,
        const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x24
  __int64 v12; // x1
  UnityEngine_Object_o *frameSprite; // x23
  __int64 v14; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x23
  UnityEngine_Object_o *strengthStatusSprite; // x23
  __int64 v18; // x1
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x24
  System_String_o *klass; // x24
  UnityEngine_Transform_o *parent; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  UnityEngine_Object_o *maskSprite; // x21

  if ( (byte_596FD23 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    byte_596FD23 = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&skillId);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_46;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    gameObject = (UISprite_o *)this->fields.iconLabel;
    if ( skillLv < 1 )
    {
      if ( !gameObject )
        goto LABEL_46;
      UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
    }
    else
    {
      if ( !gameObject )
        goto LABEL_46;
      UIIconLabel__Set_48071660((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0, 0, 0, 0, 0, 0);
    }
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_46;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_46;
      v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      UnityEngine_Object__Destroy_83459800(v22, 0);
    }
    gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v14);
      gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite )
      goto LABEL_46;
    klass = (System_String_o *)gameObject->fields.onChange->klass;
    gameObject = (UISprite_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                                 0);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_48153028(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0,
                                        0)) == 0)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.skillStrengthStatus,
            (int32_t)Component_object,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0) )
    {
LABEL_46:
      sub_2213CDC(gameObject, v14);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
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
    goto LABEL_46;
  }
}


void SkillIconComponent__Set_48067596(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  SkillIconComponent__Set_48066780(this, skillId, skillLv, 0, 0, v4);
}


void SkillIconComponent__Set_48067608(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  SkillIconComponent__Set_48067624(this, skillId, skillLv, 0, 0, info, v5);
}


// local variable allocation has failed, the output may be wrong!
void SkillIconComponent__Set_48067624(
        SkillIconComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        int32_t strengthStatus,
        int32_t skillRecord,
        IconLabelInfo_o *info,
        const MethodInfo *method)
{
  UISprite_o *skillIconSprite; // x25
  __int64 v14; // x1
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v16; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *iconLabel; // x24
  UnityEngine_Object_o *strengthStatusSprite; // x23
  __int64 v20; // x1
  struct ServantSkillStrengthStatus_o **p_skillStrengthStatus; // x23
  UnityEngine_Object_o *skillStrengthStatus; // x24
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x24
  System_String_o *klass; // x24
  UnityEngine_Transform_o *parent; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  UnityEngine_Object_o *maskSprite; // x21

  if ( (byte_596FD24 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    byte_596FD24 = 1;
  }
  if ( skillId <= 0 )
  {
    SkillIconComponent__Clear(this, *(const MethodInfo **)&skillId);
    return;
  }
  skillIconSprite = this->fields.skillIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&skillId);
  AtlasManager__SetSkillIcon(skillIconSprite, skillId, 0);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(frameSprite, 0, 0) )
  {
    gameObject = this->fields.frameSprite;
    if ( !gameObject )
      goto LABEL_49;
    UISprite__set_spriteName(gameObject, 0, 0);
  }
  iconLabel = (UnityEngine_Object_o *)this->fields.iconLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(iconLabel, 0, 0) )
  {
    if ( info )
    {
      gameObject = (UISprite_o *)this->fields.iconLabel;
      if ( !gameObject )
        goto LABEL_49;
      UIIconLabel__Set((UIIconLabel_o *)gameObject, info, 0);
    }
    else
    {
      gameObject = (UISprite_o *)this->fields.iconLabel;
      if ( skillLv < 1 )
      {
        if ( !gameObject )
          goto LABEL_49;
        UIIconLabel__Clear((UIIconLabel_o *)gameObject, 0);
      }
      else
      {
        if ( !gameObject )
          goto LABEL_49;
        UIIconLabel__Set_48071660((UIIconLabel_o *)gameObject, 2, skillLv, 0, 0, 0, 0, 0, 0, 0, 0);
      }
    }
  }
  strengthStatusSprite = (UnityEngine_Object_o *)this->fields.strengthStatusSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(strengthStatusSprite, 0, 0) )
  {
    gameObject = this->fields.strengthStatusSprite;
    if ( !gameObject )
      goto LABEL_49;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_49;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    p_skillStrengthStatus = &this->fields.skillStrengthStatus;
    skillStrengthStatus = (UnityEngine_Object_o *)this->fields.skillStrengthStatus;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatus, 0, 0) )
    {
      gameObject = (UISprite_o *)*p_skillStrengthStatus;
      if ( !*p_skillStrengthStatus )
        goto LABEL_49;
      v24 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      UnityEngine_Object__Destroy_83459800(v24, 0);
    }
    gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v16);
      gameObject = (UISprite_o *)ServantSkillStrengthStatus_TypeInfo;
    }
    if ( !this->fields.strengthStatusSprite )
      goto LABEL_49;
    klass = (System_String_o *)gameObject->fields.onChange->klass;
    gameObject = (UISprite_o *)UnityEngine_Component__get_transform(
                                 (UnityEngine_Component_o *)this->fields.strengthStatusSprite,
                                 0);
    if ( !gameObject
      || (parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0),
          (gameObject = (UISprite_o *)BaseMonoBehaviour__createObject_48153028(
                                        (BaseMonoBehaviour_o *)this,
                                        klass,
                                        parent,
                                        0,
                                        0)) == 0)
      || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___),
          *p_skillStrengthStatus = (struct ServantSkillStrengthStatus_o *)Component_object,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.skillStrengthStatus,
            (int32_t)Component_object,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33),
          (gameObject = (UISprite_o *)*p_skillStrengthStatus) == 0) )
    {
LABEL_49:
      sub_2213CDC(gameObject, v16);
    }
    ServantSkillStrengthStatus__SetVertical(
      (ServantSkillStrengthStatus_o *)gameObject,
      this->fields.strengthStatusSprite,
      strengthStatus,
      skillRecord,
      0);
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
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
    goto LABEL_49;
  }
}
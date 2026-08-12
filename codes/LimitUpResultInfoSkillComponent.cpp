void LimitUpResultInfoSkillComponent___ctor(LimitUpResultInfoSkillComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void LimitUpResultInfoSkillComponent__Awake(LimitUpResultInfoSkillComponent_o *this, const MethodInfo *method)
{
  ;
}


void LimitUpResultInfoSkillComponent__SetBattleName(
        LimitUpResultInfoSkillComponent_o *this,
        System_String_o *battleName,
        const MethodInfo *method)
{
  UILabel_o *battleNameLabel; // x0

  battleNameLabel = this->fields.battleNameLabel;
  if ( !battleNameLabel )
    sub_2213CDC(0, battleName);
  UILabel__set_text(battleNameLabel, battleName, 0);
}


// local variable allocation has failed, the output may be wrong!
void LimitUpResultInfoSkillComponent__SetTitleDisp(
        LimitUpResultInfoSkillComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, isDisp, 0),
        (titleLabel = (UnityEngine_Component_o *)this->fields.lineSprite) == 0)
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleLabel, 0)) == 0 )
  {
    sub_2213CDC(titleLabel, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, isDisp, 0);
}


void LimitUpResultInfoSkillComponent__SetTransformLabelSpriteColor(
        LimitUpResultInfoSkillComponent_o *this,
        UnityEngine_Color_o labelColor,
        UnityEngine_Color_o spriteColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  float v8; // s12
  float v9; // s13
  float v11; // s14
  float v12; // s15
  UIWidget_o *battleNameLabel; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *Child; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Component_object; // x19
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = spriteColor.fields.a;
  b = spriteColor.fields.b;
  g = spriteColor.fields.g;
  r = spriteColor.fields.r;
  v8 = labelColor.fields.a;
  v9 = labelColor.fields.b;
  v11 = labelColor.fields.g;
  v12 = labelColor.fields.r;
  if ( (byte_596A177 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A177 = 1;
  }
  battleNameLabel = (UIWidget_o *)this->fields.battleNameLabel;
  if ( !battleNameLabel )
    goto LABEL_19;
  v20.fields.r = v12;
  v20.fields.g = v11;
  v20.fields.b = v9;
  v20.fields.a = v8;
  UIWidget__set_color(battleNameLabel, v20, 0);
  battleNameLabel = (UIWidget_o *)this->fields.battleNameLabel;
  if ( !battleNameLabel )
    goto LABEL_19;
  battleNameLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)battleNameLabel, 0);
  if ( !battleNameLabel )
    goto LABEL_19;
  if ( !UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)battleNameLabel, 0) )
    return;
  battleNameLabel = (UIWidget_o *)this->fields.battleNameLabel;
  if ( !battleNameLabel )
    goto LABEL_19;
  battleNameLabel = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)battleNameLabel, 0);
  if ( !battleNameLabel )
    goto LABEL_19;
  Child = (UnityEngine_Object_o *)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)battleNameLabel, 0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  battleNameLabel = (UIWidget_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
  if ( ((unsigned __int8)battleNameLabel & 1) == 0 )
  {
    if ( Child )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Child,
                           (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      battleNameLabel = (UIWidget_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)battleNameLabel & 1) != 0 )
        return;
      if ( Component_object )
      {
        v21.fields.r = r;
        v21.fields.g = g;
        v21.fields.b = b;
        v21.fields.a = a;
        UIWidget__set_color((UIWidget_o *)Component_object, v21, 0);
        return;
      }
    }
LABEL_19:
    sub_2213CDC(battleNameLabel, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void LimitUpResultInfoSkillComponent__Setup(
        LimitUpResultInfoSkillComponent_o *this,
        int32_t skillId,
        System_String_o *name,
        ServantSkillEntity_o *svtSkillEntity,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  SkillIconComponent_o *iconLimitUp; // x0
  __int64 v14; // x2
  System_String_o *PATH; // x23
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  UILabel_o *nameLimitUpLabel; // x23
  ServantSkillStrengthStatus_o *v19; // x24
  const MethodInfo *v20; // x3

  if ( (byte_596A176 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_2213A60(&ServantSkillStrengthStatus_TypeInfo);
    byte_596A176 = 1;
  }
  iconLimitUp = this->fields.iconLimitUp;
  if ( !iconLimitUp )
    goto LABEL_15;
  SkillIconComponent__Set(iconLimitUp, skillId, 0);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)iconLimitUp, name, 0);
  if ( !svtSkillEntity )
  {
    iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
    if ( iconLimitUp )
    {
      UILabel__SetCondensedScale((UILabel_o *)iconLimitUp, 340, 0, 0);
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(iconLimitUp, *(_QWORD *)&skillId);
  }
  if ( !*(&ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, *(_QWORD *)&skillId, v14);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_15;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLimitUp, 0);
  iconLimitUp = (SkillIconComponent_o *)BaseMonoBehaviour__createObject_48153028(
                                          (BaseMonoBehaviour_o *)this,
                                          PATH,
                                          transform,
                                          0,
                                          0);
  if ( !iconLimitUp )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)iconLimitUp,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  nameLimitUpLabel = this->fields.nameLimitUpLabel;
  v19 = (ServantSkillStrengthStatus_o *)Component_object;
  iconLimitUp = (SkillIconComponent_o *)ServantSkillEntity__GetStrengthStatus(svtSkillEntity, -1, 0);
  if ( !v19 )
    goto LABEL_15;
  ServantSkillStrengthStatus__Set(
    v19,
    nameLimitUpLabel,
    (int32_t)iconLimitUp,
    svtSkillEntity->fields.skillNum,
    20,
    -9,
    (UnityEngine_Vector2Int_o)0x1200000014LL,
    340,
    0,
    0);
LABEL_14:
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v20);
}
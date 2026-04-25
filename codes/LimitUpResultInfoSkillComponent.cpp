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
    sub_1CE6958(0, battleName);
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
    sub_1CE6958(titleLabel, isDisp);
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
  float v10; // s14
  float v11; // s15
  UIWidget_o *battleNameLabel; // x0
  UnityEngine_Object_o *Child; // x19
  Il2CppObject *Component_object; // x19
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = spriteColor.fields.a;
  b = spriteColor.fields.b;
  g = spriteColor.fields.g;
  r = spriteColor.fields.r;
  v8 = labelColor.fields.a;
  v9 = labelColor.fields.b;
  v10 = labelColor.fields.g;
  v11 = labelColor.fields.r;
  if ( (byte_4E08C65 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E08C65 = 1;
  }
  battleNameLabel = (UIWidget_o *)this->fields.battleNameLabel;
  if ( !battleNameLabel )
    goto LABEL_19;
  v16.fields.r = v11;
  v16.fields.g = v10;
  v16.fields.b = v9;
  v16.fields.a = v8;
  UIWidget__set_color(battleNameLabel, v16, 0);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  battleNameLabel = (UIWidget_o *)UnityEngine_Object__op_Equality(Child, 0, 0);
  if ( ((unsigned __int8)battleNameLabel & 1) == 0 )
  {
    if ( Child )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)Child,
                           (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      battleNameLabel = (UIWidget_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)battleNameLabel & 1) != 0 )
        return;
      if ( Component_object )
      {
        v17.fields.r = r;
        v17.fields.g = g;
        v17.fields.b = b;
        v17.fields.a = a;
        UIWidget__set_color((UIWidget_o *)Component_object, v17, 0);
        return;
      }
    }
LABEL_19:
    sub_1CE6958(battleNameLabel, method);
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
  System_String_o *PATH; // x23
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  UILabel_o *nameLimitUpLabel; // x23
  ServantSkillStrengthStatus_o *v18; // x24
  UnityEngine_Vector2Int_o v19; // x6
  const MethodInfo *v20; // x3

  if ( (byte_4E08C64 & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1CE6700(&ServantSkillStrengthStatus_TypeInfo);
    byte_4E08C64 = 1;
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
    sub_1CE6958(iconLimitUp, *(_QWORD *)&skillId);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_15;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLimitUp, 0);
  iconLimitUp = (SkillIconComponent_o *)BaseMonoBehaviour__createObject_42334072(
                                          (BaseMonoBehaviour_o *)this,
                                          PATH,
                                          transform,
                                          0,
                                          0);
  if ( !iconLimitUp )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)iconLimitUp,
                       (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  nameLimitUpLabel = this->fields.nameLimitUpLabel;
  v18 = (ServantSkillStrengthStatus_o *)Component_object;
  iconLimitUp = (SkillIconComponent_o *)ServantSkillEntity__GetStrengthStatus(svtSkillEntity, -1, 0);
  if ( !v18 )
    goto LABEL_15;
  v19 = (UnityEngine_Vector2Int_o)0x1200000014LL;
  ServantSkillStrengthStatus__Set(
    v18,
    nameLimitUpLabel,
    (int32_t)iconLimitUp,
    svtSkillEntity->fields.skillNum,
    20,
    -9,
    v19,
    340,
    0,
    0);
LABEL_14:
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v20);
}
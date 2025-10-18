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
    sub_1C372B4(0);
  UILabel__set_text(battleNameLabel, battleName, 0);
}


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
    sub_1C372B4(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, isDisp, 0);
}


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

  if ( (byte_4C47065 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_1C37058(&ServantSkillStrengthStatus_TypeInfo);
    byte_4C47065 = 1;
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
    sub_1C372B4(iconLimitUp);
  }
  if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_15;
  PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLimitUp, 0);
  iconLimitUp = (SkillIconComponent_o *)BaseMonoBehaviour__createObject_41185212(
                                          (BaseMonoBehaviour_o *)this,
                                          PATH,
                                          transform,
                                          0,
                                          0);
  if ( !iconLimitUp )
    goto LABEL_15;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)iconLimitUp,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
  nameLimitUpLabel = this->fields.nameLimitUpLabel;
  v18 = (ServantSkillStrengthStatus_o *)Component_object;
  iconLimitUp = (SkillIconComponent_o *)ServantSkillEntity__GetStrengthStatus(svtSkillEntity, 0);
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
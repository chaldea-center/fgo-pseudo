void __fastcall LimitUpResultInfoSkillComponent___ctor(
        LimitUpResultInfoSkillComponent_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitUpResultInfoSkillComponent__Awake(
        LimitUpResultInfoSkillComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall LimitUpResultInfoSkillComponent__SetBattleName(
        LimitUpResultInfoSkillComponent_o *this,
        System_String_o *battleName,
        const MethodInfo *method)
{
  UILabel_o *battleNameLabel; // x0

  battleNameLabel = this->fields.battleNameLabel;
  if ( !battleNameLabel )
    sub_1B64C5C(0LL, battleName);
  UILabel__set_text(battleNameLabel, battleName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultInfoSkillComponent__SetTitleDisp(
        LimitUpResultInfoSkillComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Component_o *titleLabel; // x0

  titleLabel = (UnityEngine_Component_o *)this->fields.titleLabel;
  if ( !titleLabel
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, isDisp, 0LL),
        (titleLabel = (UnityEngine_Component_o *)this->fields.lineSprite) == 0LL)
    || (titleLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(titleLabel, 0LL)) == 0LL )
  {
    sub_1B64C5C(titleLabel, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitUpResultInfoSkillComponent__Setup(
        LimitUpResultInfoSkillComponent_o *this,
        int32_t skillId,
        System_String_o *name,
        ServantSkillEntity_o *svtSkillEntity,
        System_String_o *title,
        System_String_o *detail,
        const MethodInfo *method)
{
  __int64 v13; // x1
  SkillIconComponent_o *iconLimitUp; // x0
  const MethodInfo *v15; // x3
  System_String_o *PATH; // x23
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  UILabel_o *nameLimitUpLabel; // x23
  ServantSkillStrengthStatus_o *v20; // x24
  UnityEngine_Vector2Int_o v21; // 0:x6.8

  if ( (byte_4A023B6 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, *(_QWORD *)&skillId);
    sub_1B64A00(&ServantSkillStrengthStatus_TypeInfo, v13);
    byte_4A023B6 = 1;
  }
  iconLimitUp = this->fields.iconLimitUp;
  if ( !iconLimitUp )
    goto LABEL_14;
  SkillIconComponent__Set(iconLimitUp, skillId, 0LL);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)iconLimitUp, name, 0LL);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_14;
  UILabel__SetCondensedScale((UILabel_o *)iconLimitUp, 340, 0LL);
  if ( svtSkillEntity )
  {
    if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
    if ( iconLimitUp )
    {
      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLimitUp, 0LL);
      iconLimitUp = (SkillIconComponent_o *)BaseMonoBehaviour__createObject_37999632(
                                              (BaseMonoBehaviour_o *)this,
                                              PATH,
                                              transform,
                                              0LL,
                                              0LL);
      if ( iconLimitUp )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)iconLimitUp,
                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        nameLimitUpLabel = this->fields.nameLimitUpLabel;
        v20 = (ServantSkillStrengthStatus_o *)Component_object;
        iconLimitUp = (SkillIconComponent_o *)ServantSkillEntity__GetStrengthStatus(svtSkillEntity, 0LL);
        if ( v20 )
        {
          v21 = (UnityEngine_Vector2Int_o)0x1200000014LL;
          ServantSkillStrengthStatus__Set(
            v20,
            nameLimitUpLabel,
            (int32_t)iconLimitUp,
            svtSkillEntity->fields.skillNum,
            20,
            -9,
            v21,
            0LL);
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    sub_1B64C5C(iconLimitUp, *(_QWORD *)&skillId);
  }
LABEL_13:
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v15);
}
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
  SkillIconComponent_o *iconLimitUp; // x0
  const MethodInfo *v14; // x3
  System_String_o *PATH; // x23
  UnityEngine_Transform_o *transform; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *nameLimitUpLabel; // x23
  ServantSkillStrengthStatus_o *v19; // x24
  UnityEngine_Vector2Int_o v20; // 0:x6.8

  if ( (byte_42AF1E8 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    byte_42AF1E8 = 1;
  }
  iconLimitUp = this->fields.iconLimitUp;
  if ( !iconLimitUp )
    goto LABEL_15;
  SkillIconComponent__Set(iconLimitUp, skillId, 0LL);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)iconLimitUp, name, 0LL);
  iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
  if ( !iconLimitUp )
    goto LABEL_15;
  UILabel__SetCondensedScale((UILabel_o *)iconLimitUp, 340, 0LL);
  if ( svtSkillEntity )
  {
    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    }
    iconLimitUp = (SkillIconComponent_o *)this->fields.nameLimitUpLabel;
    if ( iconLimitUp )
    {
      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)iconLimitUp, 0LL);
      iconLimitUp = (SkillIconComponent_o *)BaseMonoBehaviour__createObject_19346208(
                                              (BaseMonoBehaviour_o *)this,
                                              PATH,
                                              transform,
                                              0LL,
                                              0LL);
      if ( iconLimitUp )
      {
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)iconLimitUp,
                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        nameLimitUpLabel = this->fields.nameLimitUpLabel;
        v19 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
        iconLimitUp = (SkillIconComponent_o *)ServantSkillEntity__GetStrengthStatus(svtSkillEntity, 0LL);
        if ( v19 )
        {
          v20 = (UnityEngine_Vector2Int_o)0x1200000014LL;
          ServantSkillStrengthStatus__Set(
            v19,
            nameLimitUpLabel,
            (int32_t)iconLimitUp,
            svtSkillEntity->fields.skillNum,
            20,
            -9,
            v20,
            0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_B52A5C(iconLimitUp, *(_QWORD *)&skillId);
  }
LABEL_14:
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v14);
}
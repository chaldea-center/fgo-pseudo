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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  SkillIconComponent_o *iconLimitUp; // x0
  const MethodInfo *v17; // x3
  System_String_o *PATH; // x23
  UnityEngine_Transform_o *transform; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *nameLimitUpLabel; // x23
  ServantSkillStrengthStatus_o *v22; // x24
  UnityEngine_Vector2Int_o v23; // 0:x6.8

  if ( (byte_42E7D6F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___,
      skillId,
      (_DWORD)name,
      svtSkillEntity);
    sub_B5D5C4(&ServantSkillStrengthStatus_TypeInfo, v13, v14, v15);
    byte_42E7D6F = 1;
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
      iconLimitUp = (SkillIconComponent_o *)BaseMonoBehaviour__createObject_21082944(
                                              (BaseMonoBehaviour_o *)this,
                                              PATH,
                                              transform,
                                              0LL,
                                              0LL);
      if ( iconLimitUp )
      {
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    (UnityEngine_GameObject_o *)iconLimitUp,
                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        nameLimitUpLabel = this->fields.nameLimitUpLabel;
        v22 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
        iconLimitUp = (SkillIconComponent_o *)ServantSkillEntity__GetStrengthStatus(svtSkillEntity, 0LL);
        if ( v22 )
        {
          v23 = (UnityEngine_Vector2Int_o)0x1200000014LL;
          ServantSkillStrengthStatus__Set(
            v22,
            nameLimitUpLabel,
            (int32_t)iconLimitUp,
            svtSkillEntity->fields.skillNum,
            20,
            -9,
            v23,
            0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_B5D69C(iconLimitUp, *(_QWORD *)&skillId);
  }
LABEL_14:
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v17);
}
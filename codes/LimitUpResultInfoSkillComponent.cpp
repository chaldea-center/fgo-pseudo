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
  __int64 v13; // x1
  SkillIconComponent_o *iconLimitUp; // x0
  UILabel_o *nameLimitUpLabel; // x0
  UILabel_o *v16; // x0
  const MethodInfo *v17; // x3
  UnityEngine_Component_o *v18; // x0
  System_String_o *PATH; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object_19257936; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UILabel_o *v23; // x23
  ServantSkillStrengthStatus_o *v24; // x24
  int32_t StrengthStatus; // w0
  UnityEngine_Vector2Int_o v26; // 0:x6.8

  if ( (byte_40FCC39 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___, *(_QWORD *)&skillId);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v13);
    byte_40FCC39 = 1;
  }
  iconLimitUp = this->fields.iconLimitUp;
  if ( !iconLimitUp )
    goto LABEL_15;
  SkillIconComponent__Set(iconLimitUp, skillId, 0LL);
  nameLimitUpLabel = this->fields.nameLimitUpLabel;
  if ( !nameLimitUpLabel )
    goto LABEL_15;
  UILabel__set_text(nameLimitUpLabel, name, 0LL);
  v16 = this->fields.nameLimitUpLabel;
  if ( !v16 )
    goto LABEL_15;
  UILabel__SetCondensedScale(v16, 340, 0LL);
  if ( svtSkillEntity )
  {
    if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
    }
    v18 = (UnityEngine_Component_o *)this->fields.nameLimitUpLabel;
    if ( v18 )
    {
      PATH = ServantSkillStrengthStatus_TypeInfo->static_fields->PATH;
      transform = UnityEngine_Component__get_transform(v18, 0LL);
      Object_19257936 = BaseMonoBehaviour__createObject_19257936((BaseMonoBehaviour_o *)this, PATH, transform, 0LL, 0LL);
      if ( Object_19257936 )
      {
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    Object_19257936,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ServantSkillStrengthStatus___);
        v23 = this->fields.nameLimitUpLabel;
        v24 = (ServantSkillStrengthStatus_o *)Component_srcLineSprite;
        StrengthStatus = ServantSkillEntity__GetStrengthStatus(svtSkillEntity, 0LL);
        if ( v24 )
        {
          v26 = (UnityEngine_Vector2Int_o)0x1200000014LL;
          ServantSkillStrengthStatus__Set(v24, v23, StrengthStatus, svtSkillEntity->fields.skillNum, 20, -9, v26, 0LL);
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_14:
  LimitUpResultInfoComponent__Setup((LimitUpResultInfoComponent_o *)this, title, detail, v17);
}
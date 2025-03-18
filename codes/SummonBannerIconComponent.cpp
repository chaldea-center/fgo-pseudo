void __fastcall SummonBannerIconComponent___ctor(SummonBannerIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonBannerIconComponent__Awake(SummonBannerIconComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonBannerIconComponent__OnClickIcon(SummonBannerIconComponent_o *this, const MethodInfo *method)
{
  struct System_Action_int__o *onClickAction; // x8

  onClickAction = this->fields.onClickAction;
  if ( onClickAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickAction->fields.m_target)(
      onClickAction->fields.original_method_info,
      (unsigned int)this->fields.moveIndex,
      *(_QWORD *)&onClickAction->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonBannerIconComponent__SetInfo(
        SummonBannerIconComponent_o *this,
        int32_t moveIndex,
        System_String_o *spriteName,
        bool isSummoned,
        UnityEngine_GameObject_o *bannerIconAtlas,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UIAtlas_o *Component_object; // x0
  __int64 v18; // x1
  UILabel_o *summonedLabel; // x22
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4C1E56F & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, *(_QWORD *)&moveIndex);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_1/*""*/, v15);
    sub_1C3B764(&StringLiteral_12634/*"Spanish (United States)"*/, v16);
    byte_4C1E56F = 1;
  }
  this->fields.moveIndex = moveIndex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bannerIconAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !bannerIconAtlas )
      goto LABEL_21;
    Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                      bannerIconAtlas,
                                      (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !this->fields.bannerSprite )
      goto LABEL_21;
    UISprite__set_atlas(this->fields.bannerSprite, Component_object, 0LL);
    Component_object = (UIAtlas_o *)this->fields.bannerSprite;
    if ( !Component_object )
      goto LABEL_21;
    UISprite__set_spriteName((UISprite_o *)Component_object, spriteName, 0LL);
  }
  Component_object = (UIAtlas_o *)this->fields.summonedLabel;
  if ( !Component_object )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( isSummoned )
  {
    summonedLabel = this->fields.summonedLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Component_object = (UIAtlas_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12634/*"Spanish (United States)"*/, 0LL);
    if ( summonedLabel )
    {
      UILabel__set_text(summonedLabel, (System_String_o *)Component_object, 0LL);
      goto LABEL_16;
    }
LABEL_21:
    sub_1C3B9C0(Component_object, v18);
  }
LABEL_16:
  Component_object = (UIAtlas_o *)this->fields.summonedLabel;
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)Component_object,
                                    0LL);
  if ( !Component_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isSummoned, 0LL);
  Component_object = (UIAtlas_o *)this->fields.summonedSprite;
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UIAtlas_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)Component_object,
                                    0LL);
  if ( !Component_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isSummoned, 0LL);
  this->fields.onClickAction = onClickAction;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.onClickAction,
    (int64_t)onClickAction,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}
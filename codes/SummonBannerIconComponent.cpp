void SummonBannerIconComponent___ctor(SummonBannerIconComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SummonBannerIconComponent__Awake(SummonBannerIconComponent_o *this, const MethodInfo *method)
{
  ;
}


void SummonBannerIconComponent__OnClickIcon(SummonBannerIconComponent_o *this, const MethodInfo *method)
{
  struct System_Action_int__o *onClickAction; // x8

  onClickAction = this->fields.onClickAction;
  if ( onClickAction )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickAction->fields.invoke_impl)(
      onClickAction->fields.method_code,
      (unsigned int)this->fields.moveIndex,
      onClickAction->fields.method);
}


void SummonBannerIconComponent__SetInfo(
        SummonBannerIconComponent_o *this,
        int32_t moveIndex,
        System_String_o *spriteName,
        bool isSummoned,
        UnityEngine_GameObject_o *bannerIconAtlas,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  UIAtlas_o *Component_object; // x0
  __int64 v14; // x1
  UILabel_o *summonedLabel; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CEA9F8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_12511/*"SUMMON_LIST_DIALOG_SUMMONED_TEXT"*/);
    byte_4CEA9F8 = 1;
  }
  this->fields.moveIndex = moveIndex;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bannerIconAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !bannerIconAtlas )
      goto LABEL_21;
    Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                      bannerIconAtlas,
                                      (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !this->fields.bannerSprite )
      goto LABEL_21;
    UISprite__set_atlas(this->fields.bannerSprite, Component_object, 0);
    Component_object = (UIAtlas_o *)this->fields.bannerSprite;
    if ( !Component_object )
      goto LABEL_21;
    UISprite__set_spriteName((UISprite_o *)Component_object, spriteName, 0);
  }
  Component_object = (UIAtlas_o *)this->fields.summonedLabel;
  if ( !Component_object )
    goto LABEL_21;
  UILabel__set_text((UILabel_o *)Component_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( isSummoned )
  {
    summonedLabel = this->fields.summonedLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Component_object = (UIAtlas_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12511/*"SUMMON_LIST_DIALOG_SUMMONED_TEXT"*/, 0);
    if ( summonedLabel )
    {
      UILabel__set_text(summonedLabel, (System_String_o *)Component_object, 0);
      goto LABEL_16;
    }
LABEL_21:
    sub_1C7BD40(Component_object, v14);
  }
LABEL_16:
  Component_object = (UIAtlas_o *)this->fields.summonedLabel;
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UIAtlas_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isSummoned, 0);
  Component_object = (UIAtlas_o *)this->fields.summonedSprite;
  if ( !Component_object )
    goto LABEL_21;
  Component_object = (UIAtlas_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
  if ( !Component_object )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isSummoned, 0);
  this->fields.onClickAction = onClickAction;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClickAction,
    (int32_t)onClickAction,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}
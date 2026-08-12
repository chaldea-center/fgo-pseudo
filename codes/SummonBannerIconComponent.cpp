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


// local variable allocation has failed, the output may be wrong!
void SummonBannerIconComponent__SetInfo(
        SummonBannerIconComponent_o *this,
        int32_t moveIndex,
        System_String_o *spriteName,
        bool isSummoned,
        UnityEngine_GameObject_o *bannerIconAtlas,
        System_Action_int__o *onClickAction,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v13; // x0
  UIAtlas_o *Component_object; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *summonedLabel; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596C9F4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_12980/*"SUMMON_LIST_DIALOG_SUMMONED_TEXT"*/);
    byte_596C9F4 = 1;
  }
  v13 = UnityEngine_Object_TypeInfo;
  this->fields.moveIndex = moveIndex;
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, *(_QWORD *)&moveIndex, spriteName);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bannerIconAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !bannerIconAtlas )
      goto LABEL_21;
    Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                      bannerIconAtlas,
                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    Component_object = (UIAtlas_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12980/*"SUMMON_LIST_DIALOG_SUMMONED_TEXT"*/, 0);
    if ( summonedLabel )
    {
      UILabel__set_text(summonedLabel, (System_String_o *)Component_object, 0);
      goto LABEL_16;
    }
LABEL_21:
    sub_2213CDC(Component_object, v15);
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickAction,
    (int32_t)onClickAction,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}
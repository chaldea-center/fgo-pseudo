void RecommendSupportMessageSelectListViewItemDraw___ctor(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void RecommendSupportMessageSelectListViewItemDraw__Awake(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportMessageSelectListViewItemDraw__ClearItem(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  RecommendSupportMessageSelectListViewItemDraw__SetButtonState(this, 0, 0, v2);
}


void RecommendSupportMessageSelectListViewItemDraw__Init(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  UICommonButton_o *button; // x0
  UISprite_o *frameSprite; // x19

  if ( (byte_4C3389D & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_20407/*"img_frameselect"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3389D = 1;
  }
  RecommendSupportMessageSelectListViewItemDraw__SetButtonState(this, 0, 0, v2);
  button = this->fields.button;
  if ( !button || (UICommonButton__SetEnable(button, 1, 0), (button = (UICommonButton_o *)this->fields.wordLabel) == 0) )
    sub_1C32E7C(button);
  UILabel__set_text((UILabel_o *)button, (System_String_o *)StringLiteral_1/*""*/, 0);
  frameSprite = this->fields.frameSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(frameSprite, (System_String_o *)StringLiteral_20407/*"img_frameselect"*/, 0);
}


void RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        bool isUse,
        bool isSelectLimit,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0
  const MethodInfo *v6; // x2
  bool v7; // w1
  RecommendSupportMessageSelectListViewItemDraw_o *v8; // x0
  const MethodInfo *v9; // x2
  bool v10; // w1

  button = this->fields.button;
  if ( !button )
    goto LABEL_11;
  if ( isUse )
  {
    UICommonButton__SetEnable(button, 1, 0);
    v7 = 1;
    v8 = this;
    goto LABEL_8;
  }
  if ( !isSelectLimit )
  {
    UICommonButton__SetEnable(button, 1, 0);
    v8 = this;
    v7 = 0;
LABEL_8:
    RecommendSupportMessageSelectListViewItemDraw__SetHighlight(v8, v7, v6);
    button = (UICommonButton_o *)this->fields.mask;
    if ( button )
    {
      v10 = 0;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C32E7C(button);
  }
  UICommonButton__SetEnable(button, 0, 0);
  RecommendSupportMessageSelectListViewItemDraw__SetHighlight(this, 0, v9);
  button = (UICommonButton_o *)this->fields.mask;
  if ( !button )
    goto LABEL_11;
  v10 = 1;
LABEL_10:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, v10, 0);
}


void RecommendSupportMessageSelectListViewItemDraw__SetHighlight(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *frameSprite; // x0

  frameSprite = (UnityEngine_Component_o *)this->fields.frameSprite;
  if ( !frameSprite
    || (frameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(frameSprite, 0)) == 0 )
  {
    sub_1C32E7C(frameSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, isActive, 0);
}


void RecommendSupportMessageSelectListViewItemDraw__SetInput(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        RecommendSupportMessageSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  _BOOL4 IsUse_k__BackingField; // w21
  UILabel_o *wordLabel; // x0
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( item )
  {
    IsUse_k__BackingField = item->fields._IsUse_k__BackingField;
    if ( !byte_4C3395B )
    {
      sub_1C32C20(&RecommendSupportMessageSelectDialog_TypeInfo);
      byte_4C3395B = 1;
    }
    RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
      this,
      IsUse_k__BackingField,
      RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField,
      method);
    RecommendAdviceMessageEntity_k__BackingField = item->fields._RecommendAdviceMessageEntity_k__BackingField;
    if ( !RecommendAdviceMessageEntity_k__BackingField || (wordLabel = this->fields.wordLabel) == 0 )
      sub_1C32E7C(wordLabel);
    UILabel__set_text(wordLabel, RecommendAdviceMessageEntity_k__BackingField->fields.message, 0);
  }
}


void RecommendSupportMessageSelectListViewItemDraw__SetItem(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        RecommendSupportMessageSelectListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL4 IsUse_k__BackingField; // w21
  UILabel_o *wordLabel; // x0
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( item )
  {
    IsUse_k__BackingField = item->fields._IsUse_k__BackingField;
    if ( !byte_4C3395B )
    {
      sub_1C32C20(&RecommendSupportMessageSelectDialog_TypeInfo);
      byte_4C3395B = 1;
    }
    RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
      this,
      IsUse_k__BackingField,
      RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField,
      v3);
    RecommendAdviceMessageEntity_k__BackingField = item->fields._RecommendAdviceMessageEntity_k__BackingField;
    if ( !RecommendAdviceMessageEntity_k__BackingField || (wordLabel = this->fields.wordLabel) == 0 )
      sub_1C32E7C(wordLabel);
    UILabel__set_text(wordLabel, RecommendAdviceMessageEntity_k__BackingField->fields.message, 0);
  }
}


void RecommendSupportMessageSelectListViewItemDraw__SetMask(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mask; // x0

  mask = this->fields.mask;
  if ( !mask )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(mask, isActive, 0);
}
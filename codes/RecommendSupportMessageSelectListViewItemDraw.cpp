void __fastcall RecommendSupportMessageSelectListViewItemDraw___ctor(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewItemDraw__Awake(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportMessageSelectListViewItemDraw__ClearItem(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  RecommendSupportMessageSelectListViewItemDraw__SetButtonState(this, 0, 0, v2);
}


void __fastcall RecommendSupportMessageSelectListViewItemDraw__Init(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UICommonButton_o *button; // x0
  UISprite_o *frameSprite; // x19

  if ( (byte_4BB081A & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_20653/*"img_form_menu08"*/, v4);
    sub_1C13D24(&StringLiteral_1/*""*/, v5);
    byte_4BB081A = 1;
  }
  RecommendSupportMessageSelectListViewItemDraw__SetButtonState(this, 0, 0, v2);
  button = this->fields.button;
  if ( !button
    || (UICommonButton__SetEnable(button, 1, 0LL), (button = (UICommonButton_o *)this->fields.wordLabel) == 0LL) )
  {
    sub_1C13F80(button, v6);
  }
  UILabel__set_text((UILabel_o *)button, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  frameSprite = this->fields.frameSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(frameSprite, (System_String_o *)StringLiteral_20653/*"img_form_menu08"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
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
    UICommonButton__SetEnable(button, 1, 0LL);
    v7 = 1;
    v8 = this;
    goto LABEL_8;
  }
  if ( !isSelectLimit )
  {
    UICommonButton__SetEnable(button, 1, 0LL);
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
    sub_1C13F80(button, isUse);
  }
  UICommonButton__SetEnable(button, 0, 0LL);
  RecommendSupportMessageSelectListViewItemDraw__SetHighlight(this, 0, v9);
  button = (UICommonButton_o *)this->fields.mask;
  if ( !button )
    goto LABEL_11;
  v10 = 1;
LABEL_10:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewItemDraw__SetHighlight(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *frameSprite; // x0

  frameSprite = (UnityEngine_Component_o *)this->fields.frameSprite;
  if ( !frameSprite
    || (frameSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(frameSprite, 0LL)) == 0LL )
  {
    sub_1C13F80(frameSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frameSprite, isActive, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewItemDraw__SetInput(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        RecommendSupportMessageSelectListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  _BOOL4 IsUse_k__BackingField; // w21
  UILabel_o *wordLabel; // x0
  __int64 v8; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( item )
  {
    IsUse_k__BackingField = item->fields._IsUse_k__BackingField;
    if ( !byte_4BB0889 )
    {
      sub_1C13D24(&RecommendSupportMessageSelectDialog_TypeInfo, item);
      byte_4BB0889 = 1;
    }
    RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
      this,
      IsUse_k__BackingField,
      RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField,
      method);
    RecommendAdviceMessageEntity_k__BackingField = item->fields._RecommendAdviceMessageEntity_k__BackingField;
    if ( !RecommendAdviceMessageEntity_k__BackingField || (wordLabel = this->fields.wordLabel) == 0LL )
      sub_1C13F80(wordLabel, v8);
    UILabel__set_text(wordLabel, RecommendAdviceMessageEntity_k__BackingField->fields.message, 0LL);
  }
}


void __fastcall RecommendSupportMessageSelectListViewItemDraw__SetItem(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        RecommendSupportMessageSelectListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _BOOL4 IsUse_k__BackingField; // w21
  UILabel_o *wordLabel; // x0
  __int64 v8; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( item )
  {
    IsUse_k__BackingField = item->fields._IsUse_k__BackingField;
    if ( !byte_4BB0889 )
    {
      sub_1C13D24(&RecommendSupportMessageSelectDialog_TypeInfo, item);
      byte_4BB0889 = 1;
    }
    RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
      this,
      IsUse_k__BackingField,
      RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField,
      v3);
    RecommendAdviceMessageEntity_k__BackingField = item->fields._RecommendAdviceMessageEntity_k__BackingField;
    if ( !RecommendAdviceMessageEntity_k__BackingField || (wordLabel = this->fields.wordLabel) == 0LL )
      sub_1C13F80(wordLabel, v8);
    UILabel__set_text(wordLabel, RecommendAdviceMessageEntity_k__BackingField->fields.message, 0LL);
  }
}


void __fastcall RecommendSupportMessageSelectListViewItemDraw__SetMask(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mask; // x0

  mask = this->fields.mask;
  if ( !mask )
    sub_1C13F80(0LL, isActive);
  UnityEngine_GameObject__SetActive(mask, isActive, 0LL);
}
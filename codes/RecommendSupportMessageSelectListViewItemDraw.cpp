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
  __int64 v4; // x1
  UICommonButton_o *button; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *frameSprite; // x19

  if ( (byte_596C493 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_21392/*"img_frameselect"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C493 = 1;
  }
  RecommendSupportMessageSelectListViewItemDraw__SetButtonState(this, 0, 0, v2);
  button = this->fields.button;
  if ( !button || (UICommonButton__SetEnable(button, 1, 0), (button = (UICommonButton_o *)this->fields.wordLabel) == 0) )
    sub_2213CDC(button, v4);
  UILabel__set_text((UILabel_o *)button, (System_String_o *)StringLiteral_1/*""*/, 0);
  frameSprite = this->fields.frameSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetPartyOrganizationImage(frameSprite, (System_String_o *)StringLiteral_21392/*"img_frameselect"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        bool isUse,
        bool isSelectLimit,
        const MethodInfo *method)
{
  UICommonButton_o *button; // x0
  const MethodInfo *v6; // x2
  RecommendSupportMessageSelectListViewItemDraw_o *v7; // x0
  bool v8; // w1
  const MethodInfo *v9; // x2
  bool v10; // w1

  button = this->fields.button;
  if ( isUse )
  {
    if ( !button )
      goto LABEL_13;
    UICommonButton__SetEnable(button, 1, 0);
    v7 = this;
    v8 = 1;
LABEL_10:
    RecommendSupportMessageSelectListViewItemDraw__SetHighlight(v7, v8, v6);
    button = (UICommonButton_o *)this->fields.mask;
    if ( button )
    {
      v10 = 0;
      goto LABEL_12;
    }
LABEL_13:
    sub_2213CDC(button, isUse);
  }
  if ( !isSelectLimit )
  {
    if ( !button )
      goto LABEL_13;
    UICommonButton__SetEnable(button, 1, 0);
    v7 = this;
    v8 = 0;
    goto LABEL_10;
  }
  if ( !button )
    goto LABEL_13;
  UICommonButton__SetEnable(button, 0, 0);
  RecommendSupportMessageSelectListViewItemDraw__SetHighlight(this, 0, v9);
  button = (UICommonButton_o *)this->fields.mask;
  if ( !button )
    goto LABEL_13;
  v10 = 1;
LABEL_12:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)button, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_2213CDC(frameSprite, isActive);
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
  __int64 v8; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( item )
  {
    IsUse_k__BackingField = item->fields._IsUse_k__BackingField;
    if ( !byte_596C543 )
    {
      sub_2213A60(&RecommendSupportMessageSelectDialog_TypeInfo);
      byte_596C543 = 1;
    }
    RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
      this,
      IsUse_k__BackingField,
      RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField,
      method);
    RecommendAdviceMessageEntity_k__BackingField = item->fields._RecommendAdviceMessageEntity_k__BackingField;
    if ( !RecommendAdviceMessageEntity_k__BackingField || (wordLabel = this->fields.wordLabel) == 0 )
      sub_2213CDC(wordLabel, v8);
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
  __int64 v8; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( item )
  {
    IsUse_k__BackingField = item->fields._IsUse_k__BackingField;
    if ( !byte_596C543 )
    {
      sub_2213A60(&RecommendSupportMessageSelectDialog_TypeInfo);
      byte_596C543 = 1;
    }
    RecommendSupportMessageSelectListViewItemDraw__SetButtonState(
      this,
      IsUse_k__BackingField,
      RecommendSupportMessageSelectDialog_TypeInfo->static_fields->_IsSelectLimit_k__BackingField,
      v3);
    RecommendAdviceMessageEntity_k__BackingField = item->fields._RecommendAdviceMessageEntity_k__BackingField;
    if ( !RecommendAdviceMessageEntity_k__BackingField || (wordLabel = this->fields.wordLabel) == 0 )
      sub_2213CDC(wordLabel, v8);
    UILabel__set_text(wordLabel, RecommendAdviceMessageEntity_k__BackingField->fields.message, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectListViewItemDraw__SetMask(
        RecommendSupportMessageSelectListViewItemDraw_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *mask; // x0

  mask = this->fields.mask;
  if ( !mask )
    sub_2213CDC(0, isActive);
  UnityEngine_GameObject__SetActive(mask, isActive, 0);
}
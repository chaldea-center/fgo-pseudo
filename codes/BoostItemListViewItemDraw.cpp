void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB146 & 1) == 0 )
  {
    sub_B16FFC(&BoostItemListViewItemDraw_TypeInfo, v1);
    byte_40FB146 = 1;
  }
  BoostItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
}


void __fastcall BoostItemListViewItemDraw___ctor(BoostItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostItemListViewItemDraw__SetItem(
        BoostItemListViewItemDraw_o *this,
        BoostItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ItemEntity_o *itemEntity; // x8
  int32_t magnification; // w23
  _BOOL4 isCanNotSelect; // w22
  ItemIconComponent_o *itemIconInfo; // x0
  UILabel_o *infoLabel; // x21
  System_String_o *v16; // x0
  UILabel_o *numLabel; // x21
  const MethodInfo *v18; // x1
  System_String_o *NumText; // x0
  __int64 v20; // x1
  UILabel_o *nameLabel; // x21
  struct ItemEntity_o *v22; // x8
  System_String_o **p_name; // x8
  UILabel_o *detailLabel; // x21
  const MethodInfo *v25; // x1
  System_String_o *SkillText; // x20
  BoostItemListViewItemDraw_c *v27; // x8
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *magnificationSprite; // x20
  System_String_o *v31; // x1
  System_String_o *v32; // x0
  UIWidget_o *v33; // x20
  BalanceConfig_c *v34; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  int32_t v42; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FB145 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&BoostItemListViewItemDraw_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_3440, v9);
    sub_B16FFC(&StringLiteral_19280, v10);
    byte_40FB145 = 1;
  }
  v42 = 0;
  if ( mode )
  {
    if ( !item )
      goto LABEL_37;
    itemEntity = item->fields.itemEntity;
    magnification = item->fields.magnification;
    isCanNotSelect = item->fields.isCanNotSelect;
    v42 = magnification;
    if ( !itemEntity )
      goto LABEL_37;
    itemIconInfo = this->fields.itemIconInfo;
    if ( !itemIconInfo )
      goto LABEL_37;
    ItemIconComponent__SetItemImage_28925112(
      itemIconInfo,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      itemEntity->fields.type,
      0,
      0LL);
    infoLabel = this->fields.infoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3440, 0LL);
    if ( !infoLabel )
      goto LABEL_37;
    UILabel__set_text(infoLabel, v16, 0LL);
    numLabel = this->fields.numLabel;
    NumText = BoostItemListViewItem__get_NumText(item, v18);
    if ( !numLabel )
      goto LABEL_37;
    UILabel__set_text(numLabel, NumText, 0LL);
    nameLabel = this->fields.nameLabel;
    if ( (byte_40FB141 & 1) == 0 )
    {
      sub_B16FFC(&StringLiteral_18326, v20);
      byte_40FB141 = 1;
    }
    if ( !nameLabel )
      goto LABEL_37;
    v22 = item->fields.itemEntity;
    if ( v22 )
      p_name = &v22->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18326;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = this->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(item, v25);
    v27 = BoostItemListViewItemDraw_TypeInfo;
    if ( (BYTE3(BoostItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v27 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, SkillText, v27->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, isCanNotSelect, 0LL);
    magnificationSprite = this->fields.magnificationSprite;
    v31 = 0LL;
    if ( magnification >= 2 )
    {
      v32 = System_Int32__ToString((int32_t)&v42, 0LL);
      v31 = System_String__Concat_43743732((System_String_o *)StringLiteral_19280, v32, 0LL);
    }
    if ( !magnificationSprite )
LABEL_37:
      sub_B170D4();
    UISprite__set_spriteName(magnificationSprite, v31, 0LL);
    v33 = (UIWidget_o *)this->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      v34 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v34 = BalanceConfig_TypeInfo;
      }
      static_fields = v34->static_fields;
      r = static_fields->MaskColor.fields.r;
      g = static_fields->MaskColor.fields.g;
      b = static_fields->MaskColor.fields.b;
      a = static_fields->MaskColor.fields.a;
      if ( !v33 )
        goto LABEL_37;
    }
    else
    {
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !v33 )
        goto LABEL_37;
    }
    UIWidget__set_color(v33, *(UnityEngine_Color_o *)&r, 0LL);
    v40 = (UnityEngine_Component_o *)this->fields.magnificationSprite;
    if ( !v40 )
      goto LABEL_37;
    v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
    if ( !v41 )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(v41, v42 > 1, 0LL);
  }
}
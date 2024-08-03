void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F81DF & 1) == 0 )
  {
    sub_1B640C8(&BoostItemListViewItemDraw_TypeInfo, v1);
    byte_49F81DF = 1;
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
  BoostItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct ItemEntity_o *itemEntity; // x8
  int32_t magnification; // w23
  _BOOL4 isCanNotSelect; // w22
  UILabel_o *infoLabel; // x21
  UILabel_o *numLabel; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x1
  UILabel_o *nameLabel; // x21
  struct ItemEntity_o *v19; // x8
  System_String_o **p_name; // x8
  UILabel_o *detailLabel; // x21
  const MethodInfo *v22; // x1
  System_String_o *SkillText; // x0
  BoostItemListViewItemDraw_c *v24; // x8
  System_String_o *v25; // x20
  UISprite_o *magnificationSprite; // x20
  BoostItemListViewItemDraw_o *v27; // x1
  System_String_o *v28; // x0
  UIWidget_o *v29; // x20
  struct UILabel_o *v30; // x8
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s3
  int32_t v35; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_49F81DE & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, item);
    sub_1B640C8(&BoostItemListViewItemDraw_TypeInfo, v7);
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_3926/*"CURRENT_NUM_TXT"*/, v9);
    this = (BoostItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_20087/*"icon_race_"*/, v10);
    byte_49F81DE = 1;
  }
  if ( mode )
  {
    if ( !item )
      goto LABEL_34;
    itemEntity = item->fields.itemEntity;
    magnification = item->fields.magnification;
    isCanNotSelect = item->fields.isCanNotSelect;
    v35 = magnification;
    if ( !itemEntity )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_34;
    ItemIconComponent__SetItemImage_37826976(
      (ItemIconComponent_o *)this,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      itemEntity->fields.type,
      0,
      0LL);
    infoLabel = v6->fields.infoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3926/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(item, v16);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_49F81DA & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_1B640C8(&StringLiteral_18979/*"error"*/, v17);
      byte_49F81DA = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v19 = item->fields.itemEntity;
    if ( v19 )
      p_name = &v19->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18979/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(item, v22);
    v24 = BoostItemListViewItemDraw_TypeInfo;
    v25 = SkillText;
    if ( !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v24 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, v25, v24->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isCanNotSelect, 0LL);
    magnificationSprite = v6->fields.magnificationSprite;
    v27 = 0LL;
    if ( magnification >= 2 )
    {
      v28 = System_Int32__ToString((int32_t)&v35, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_61375396(
                                              (System_String_o *)StringLiteral_20087/*"icon_race_"*/,
                                              v28,
                                              0LL);
      v27 = this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_1B64324(this);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)v27, 0LL);
    v29 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v30 = this[1].fields.infoLabel;
      v31 = *(float *)&v30->fields.mShouldBeProcessed;
      v32 = *(float *)&v30->fields.mProcessedText;
      v33 = *((float *)&v30->fields.mProcessedText + 1);
      v34 = *(float *)&v30->fields.mPremultiply;
      if ( !v29 )
        goto LABEL_34;
    }
    else
    {
      v34 = 1.0;
      v33 = 1.0;
      v32 = 1.0;
      v31 = 1.0;
      if ( !v29 )
        goto LABEL_34;
    }
    UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v31, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v35 > 1, 0LL);
  }
}
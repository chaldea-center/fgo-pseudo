void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FA8EF & 1) == 0 )
  {
    sub_1B64A00(&BoostItemListViewItemDraw_TypeInfo, v1);
    byte_49FA8EF = 1;
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
  BoostItemListViewItem_o *v5; // x20
  BoostItemListViewItemDraw_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t *itemEntity; // x8
  int magnification; // w23
  _BOOL4 isCanNotSelect; // w22
  UILabel_o *infoLabel; // x21
  UILabel_o *numLabel; // x21
  const MethodInfo *v16; // x1
  UILabel_o *nameLabel; // x21
  struct ItemEntity_o *v18; // x8
  System_String_o **p_name; // x8
  UILabel_o *detailLabel; // x21
  const MethodInfo *v21; // x1
  System_String_o *SkillText; // x0
  BoostItemListViewItemDraw_c *v23; // x8
  System_String_o *v24; // x20
  UISprite_o *magnificationSprite; // x20
  System_String_o *v26; // x0
  UIWidget_o *v27; // x20
  struct UILabel_o *v28; // x8
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s3
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  v6 = this;
  if ( (byte_49FA8EE & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, item);
    sub_1B64A00(&BoostItemListViewItemDraw_TypeInfo, v7);
    sub_1B64A00(&LocalizationManager_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_3927/*"CURRENT_NUM_TXT"*/, v9);
    this = (BoostItemListViewItemDraw_o *)sub_1B64A00(&StringLiteral_20090/*"icon_race_"*/, v10);
    byte_49FA8EE = 1;
  }
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_34;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v33 = magnification;
    if ( !itemEntity )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_34;
    ItemIconComponent__SetItemImage_37831708(
      (ItemIconComponent_o *)this,
      itemEntity[10],
      itemEntity[11],
      itemEntity[12],
      0,
      0LL);
    infoLabel = v6->fields.infoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3927/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v16);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_49FA8EA & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_1B64A00(&StringLiteral_18982/*"error"*/, item);
      byte_49FA8EA = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v18 = v5->fields.itemEntity;
    if ( v18 )
      p_name = &v18->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18982/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v21);
    v23 = BoostItemListViewItemDraw_TypeInfo;
    v24 = SkillText;
    if ( !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v23 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, v24, v23->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isCanNotSelect, 0LL);
    magnificationSprite = v6->fields.magnificationSprite;
    item = 0LL;
    if ( magnification >= 2 )
    {
      v26 = System_Int32__ToString((int32_t)&v33, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_61385136(
                                              (System_String_o *)StringLiteral_20090/*"icon_race_"*/,
                                              v26,
                                              0LL);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_1B64C5C(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0LL);
    v27 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v28 = this[1].fields.infoLabel;
      v29 = *(float *)&v28->fields.mShouldBeProcessed;
      v30 = *(float *)&v28->fields.mProcessedText;
      v31 = *((float *)&v28->fields.mProcessedText + 1);
      v32 = *(float *)&v28->fields.mPremultiply;
      if ( !v27 )
        goto LABEL_34;
    }
    else
    {
      v32 = 1.0;
      v31 = 1.0;
      v30 = 1.0;
      v29 = 1.0;
      if ( !v27 )
        goto LABEL_34;
    }
    UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v29, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v33 > 1, 0LL);
  }
}
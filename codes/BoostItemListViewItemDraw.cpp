void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4BD7FEB & 1) == 0 )
  {
    sub_1C21E38(&BoostItemListViewItemDraw_TypeInfo);
    byte_4BD7FEB = 1;
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
  int32_t *itemEntity; // x8
  int magnification; // w23
  _BOOL4 isCanNotSelect; // w22
  UILabel_o *infoLabel; // x21
  UILabel_o *numLabel; // x21
  const MethodInfo *v12; // x1
  UILabel_o *nameLabel; // x21
  struct ItemEntity_o *v14; // x8
  System_String_o **p_name; // x8
  UILabel_o *detailLabel; // x21
  const MethodInfo *v17; // x1
  System_String_o *SkillText; // x0
  BoostItemListViewItemDraw_c *v19; // x8
  System_String_o *v20; // x20
  UISprite_o *magnificationSprite; // x20
  System_String_o *v22; // x0
  UIWidget_o *v23; // x20
  struct UILabel_o *v24; // x8
  float x; // s0
  float y; // s1
  float mScale; // s2
  float v28; // s3
  int v29; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  v6 = this;
  if ( (byte_4BD7FEA & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&BoostItemListViewItemDraw_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_4041/*"CURRENT_NUM_TXT"*/);
    this = (BoostItemListViewItemDraw_o *)sub_1C21E38(&StringLiteral_20521/*"icon_race_"*/);
    byte_4BD7FEA = 1;
  }
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_34;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v29 = magnification;
    if ( !itemEntity )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_34;
    ItemIconComponent__SetItemImage_39384288(
      (ItemIconComponent_o *)this,
      itemEntity[10],
      itemEntity[11],
      itemEntity[12],
      0,
      1,
      0LL);
    infoLabel = v6->fields.infoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4041/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v12);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_4BD7FE6 & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_1C21E38(&StringLiteral_19380/*"error"*/);
      byte_4BD7FE6 = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v14 = v5->fields.itemEntity;
    if ( v14 )
      p_name = &v14->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19380/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v17);
    v19 = BoostItemListViewItemDraw_TypeInfo;
    v20 = SkillText;
    if ( !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v19 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, v20, v19->static_fields->DETAIL_FONT_SIZE, 0, 0LL);
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
      v22 = System_Int32__ToString((int32_t)&v29, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_63115476(
                                              (System_String_o *)StringLiteral_20521/*"icon_race_"*/,
                                              v22,
                                              0LL);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_1C22094(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0LL);
    v23 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v24 = this[1].fields.infoLabel;
      x = v24->fields.mCalculatedSize.fields.x;
      y = v24->fields.mCalculatedSize.fields.y;
      mScale = v24->fields.mScale;
      v28 = *(float *)&v24->fields.mPrintedSize;
      if ( !v23 )
        goto LABEL_34;
    }
    else
    {
      v28 = 1.0;
      mScale = 1.0;
      y = 1.0;
      x = 1.0;
      if ( !v23 )
        goto LABEL_34;
    }
    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&x, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29 > 1, 0LL);
  }
}
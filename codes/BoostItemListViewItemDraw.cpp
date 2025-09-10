void BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C22B0A & 1) == 0 )
  {
    sub_1C2D490(&BoostItemListViewItemDraw_TypeInfo);
    byte_4C22B0A = 1;
  }
  BoostItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
}


void BoostItemListViewItemDraw___ctor(BoostItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoostItemListViewItemDraw__SetItem(
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
  float v25; // s0 OVERLAPPED
  float v26; // s1
  float v27; // s2
  float v28; // s3
  int v29; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  v6 = this;
  if ( (byte_4C22B09 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&BoostItemListViewItemDraw_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3929/*"CURRENT_NUM_TXT"*/);
    this = (BoostItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_20203/*"icon_race_"*/);
    byte_4C22B09 = 1;
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
    ItemIconComponent__SetItemImage_40697980(
      (ItemIconComponent_o *)this,
      itemEntity[10],
      itemEntity[11],
      itemEntity[12],
      0,
      1,
      0);
    infoLabel = v6->fields.infoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3929/*"CURRENT_NUM_TXT"*/, 0);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v12);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_4C22B05 & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_1C2D490(&StringLiteral_19056/*"error"*/);
      byte_4C22B05 = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v14 = v5->fields.itemEntity;
    if ( v14 )
      p_name = &v14->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19056/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v17);
    v19 = BoostItemListViewItemDraw_TypeInfo;
    v20 = SkillText;
    if ( !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v19 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, v20, v19->static_fields->DETAIL_FONT_SIZE, 0, 0);
    this = (BoostItemListViewItemDraw_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isCanNotSelect, 0);
    magnificationSprite = v6->fields.magnificationSprite;
    item = 0;
    if ( magnification >= 2 )
    {
      v22 = System_Int32__ToString((int32_t)&v29, 0);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_63457864(
                                              (System_String_o *)StringLiteral_20203/*"icon_race_"*/,
                                              v22,
                                              0);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_1C2D6EC(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0);
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
      v25 = *((float *)&v24->fields.mLastHeight + 1);
      v26 = *(float *)&v24[1].klass;
      v27 = *((float *)&v24[1].klass + 1);
      v28 = *(float *)&v24[1].monitor;
      if ( !v23 )
        goto LABEL_34;
    }
    else
    {
      v28 = 1.0;
      v27 = 1.0;
      v26 = 1.0;
      v25 = 1.0;
      if ( !v23 )
        goto LABEL_34;
    }
    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v25, 0);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v29 > 1, 0);
  }
}
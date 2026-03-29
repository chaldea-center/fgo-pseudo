void BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4D2C06A & 1) == 0 )
  {
    sub_1C93AD4(&BoostItemListViewItemDraw_TypeInfo);
    byte_4D2C06A = 1;
  }
  BoostItemListViewItemDraw_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
}


void BoostItemListViewItemDraw___ctor(BoostItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


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
  float *v24; // x8
  int v28; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = item;
  v6 = this;
  if ( (byte_4D2C069 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BoostItemListViewItemDraw_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3958/*"CURRENT_NUM_TXT"*/);
    this = (BoostItemListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_20443/*"icon_race_"*/);
    byte_4D2C069 = 1;
  }
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_34;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v28 = magnification;
    if ( !itemEntity )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_34;
    ItemIconComponent__SetItemImage_41638520(
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
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3958/*"CURRENT_NUM_TXT"*/, 0);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v12);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_4D2C066 & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_19260/*"error"*/);
      byte_4D2C066 = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v14 = v5->fields.itemEntity;
    if ( v14 )
      p_name = &v14->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19260/*"error"*/;
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
      v22 = System_Int32__ToString((int32_t)&v28, 0);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_64425724(
                                              (System_String_o *)StringLiteral_20443/*"icon_race_"*/,
                                              v22,
                                              0);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_1C93D2C(this, item);
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
      v24 = (float *)*((_QWORD *)this + 23);
      v29.fields.r = v24[169];
      v29.fields.g = v24[170];
      v29.fields.b = v24[171];
      v29.fields.a = v24[172];
      if ( !v23 )
        goto LABEL_34;
    }
    else
    {
      v29.fields.a = 1.0;
      v29.fields.b = 1.0;
      v29.fields.g = 1.0;
      v29.fields.r = 1.0;
      if ( !v23 )
        goto LABEL_34;
    }
    UIWidget__set_color(v23, v29, 0);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28 > 1, 0);
  }
}
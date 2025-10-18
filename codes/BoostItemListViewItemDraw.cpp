void BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C3E7C3 & 1) == 0 )
  {
    sub_1C37058(&BoostItemListViewItemDraw_TypeInfo);
    byte_4C3E7C3 = 1;
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
  BoostItemListViewItemDraw_o *v6; // x19
  struct ItemEntity_o *itemEntity; // x8
  int32_t magnification; // w23
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
  BoostItemListViewItemDraw_o *v22; // x1
  System_String_o *v23; // x0
  UIWidget_o *v24; // x20
  struct UILabel_o *v25; // x8
  float v26; // s0 OVERLAPPED
  float v27; // s1
  float v28; // s2
  float v29; // s3
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4C3E7C2 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&BoostItemListViewItemDraw_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3936/*"CURRENT_NUM_TXT"*/);
    this = (BoostItemListViewItemDraw_o *)sub_1C37058(&StringLiteral_20218/*"icon_race_"*/);
    byte_4C3E7C2 = 1;
  }
  if ( mode )
  {
    if ( !item )
      goto LABEL_34;
    itemEntity = item->fields.itemEntity;
    magnification = item->fields.magnification;
    isCanNotSelect = item->fields.isCanNotSelect;
    v30 = magnification;
    if ( !itemEntity )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_34;
    ItemIconComponent__SetItemImage_40919564(
      (ItemIconComponent_o *)this,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      itemEntity->fields.type,
      0,
      1,
      0);
    infoLabel = v6->fields.infoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3936/*"CURRENT_NUM_TXT"*/, 0);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(item, v12);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_4C3E7BE & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_1C37058(&StringLiteral_19069/*"error"*/);
      byte_4C3E7BE = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v14 = item->fields.itemEntity;
    if ( v14 )
      p_name = &v14->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19069/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(item, v17);
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
    v22 = 0;
    if ( magnification >= 2 )
    {
      v23 = System_Int32__ToString((int32_t)&v30, 0);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_63561656(
                                              (System_String_o *)StringLiteral_20218/*"icon_race_"*/,
                                              v23,
                                              0);
      v22 = this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_1C372B4(this);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)v22, 0);
    v24 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v25 = this[1].fields.infoLabel;
      v26 = *((float *)&v25->fields.mLastHeight + 1);
      v27 = *(float *)&v25[1].klass;
      v28 = *((float *)&v25[1].klass + 1);
      v29 = *(float *)&v25[1].monitor;
      if ( !v24 )
        goto LABEL_34;
    }
    else
    {
      v29 = 1.0;
      v28 = 1.0;
      v27 = 1.0;
      v26 = 1.0;
      if ( !v24 )
        goto LABEL_34;
    }
    UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v26, 0);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v30 > 1, 0);
  }
}
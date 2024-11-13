void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11D83 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostItemListViewItemDraw_TypeInfo, v1, v2);
    byte_4B11D83 = 1;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t *itemEntity; // x8
  int magnification; // w23
  _BOOL4 isCanNotSelect; // w22
  __int64 v18; // x1
  UILabel_o *infoLabel; // x21
  UILabel_o *numLabel; // x21
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  UILabel_o *nameLabel; // x21
  struct ItemEntity_o *v24; // x8
  System_String_o **p_name; // x8
  UILabel_o *detailLabel; // x21
  const MethodInfo *v27; // x1
  System_String_o *SkillText; // x0
  __int64 v29; // x1
  BoostItemListViewItemDraw_c *v30; // x8
  System_String_o *v31; // x20
  UISprite_o *magnificationSprite; // x20
  System_String_o *v33; // x0
  UIWidget_o *v34; // x20
  struct UILabel_o *v35; // x8
  float v36; // s0
  float v37; // s1
  float x; // s2
  float y; // s3
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  v6 = this;
  if ( (byte_4B11D82 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&BoostItemListViewItemDraw_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_4015/*"CURRENT_NUM_TXT"*/, v11, v12);
    this = (BoostItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_20380/*"icon_race_"*/, v13, v14);
    byte_4B11D82 = 1;
  }
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_34;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v40 = magnification;
    if ( !itemEntity )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_34;
    ItemIconComponent__SetItemImage_38852864(
      (ItemIconComponent_o *)this,
      itemEntity[10],
      itemEntity[11],
      itemEntity[12],
      0,
      0LL);
    infoLabel = v6->fields.infoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4015/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v21);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_4B11D7E & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_19249/*"error"*/, item, v22);
      byte_4B11D7E = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v24 = v5->fields.itemEntity;
    if ( v24 )
      p_name = &v24->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19249/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v27);
    v30 = BoostItemListViewItemDraw_TypeInfo;
    v31 = SkillText;
    if ( !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo, v29);
      v30 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, v31, v30->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
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
      v33 = System_Int32__ToString((int32_t)&v40, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_62401220(
                                              (System_String_o *)StringLiteral_20380/*"icon_race_"*/,
                                              v33,
                                              0LL);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_1BCAA3C(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0LL);
    v34 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v35 = this[1].fields.infoLabel;
      v36 = *((float *)&v35->fields.mProcessedText + 1);
      v37 = *(float *)&v35->fields.mPremultiply;
      x = v35->fields.mCalculatedSize.fields.x;
      y = v35->fields.mCalculatedSize.fields.y;
      if ( !v34 )
        goto LABEL_34;
    }
    else
    {
      y = 1.0;
      x = 1.0;
      v37 = 1.0;
      v36 = 1.0;
      if ( !v34 )
        goto LABEL_34;
    }
    UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v36, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v40 > 1, 0LL);
  }
}
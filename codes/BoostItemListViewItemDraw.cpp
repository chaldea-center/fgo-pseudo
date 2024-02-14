void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214C35 & 1) == 0 )
  {
    sub_B0D8A4(&BoostItemListViewItemDraw_TypeInfo, v1);
    byte_4214C35 = 1;
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
  System_String_o *SkillText; // x20
  BoostItemListViewItemDraw_c *v24; // x8
  UISprite_o *magnificationSprite; // x20
  System_String_o *v26; // x1
  System_String_o *v27; // x0
  UIWidget_o *v28; // x20
  struct UISprite_o *v29; // x8
  int mRoot_high; // s0
  int mParent; // s1
  int mParent_high; // s2
  int v33; // s3
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4214C34 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, item);
    sub_B0D8A4(&BoostItemListViewItemDraw_TypeInfo, v7);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_3466/*"CURRENT_NUM_TXT"*/, v9);
    this = (BoostItemListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_19415/*"icon_race_"*/, v10);
    byte_4214C34 = 1;
  }
  v34 = 0;
  if ( mode )
  {
    if ( !item )
      goto LABEL_37;
    itemEntity = item->fields.itemEntity;
    magnification = item->fields.magnification;
    isCanNotSelect = item->fields.isCanNotSelect;
    v34 = magnification;
    if ( !itemEntity )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_37;
    ItemIconComponent__SetItemImage_26855044(
      (ItemIconComponent_o *)this,
      itemEntity->fields.imageId,
      itemEntity->fields.bgImageId,
      itemEntity->fields.type,
      0,
      0LL);
    infoLabel = v6->fields.infoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3466/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_37;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(item, v16);
    if ( !numLabel )
      goto LABEL_37;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_4214C30 & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_B0D8A4(&StringLiteral_18452/*"error"*/, v17);
      byte_4214C30 = 1;
    }
    if ( !nameLabel )
      goto LABEL_37;
    v19 = item->fields.itemEntity;
    if ( v19 )
      p_name = &v19->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18452/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(item, v22);
    v24 = BoostItemListViewItemDraw_TypeInfo;
    if ( (BYTE3(BoostItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v24 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, SkillText, v24->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isCanNotSelect, 0LL);
    magnificationSprite = v6->fields.magnificationSprite;
    v26 = 0LL;
    if ( magnification >= 2 )
    {
      v27 = System_Int32__ToString((int32_t)&v34, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_43849904(
                                              (System_String_o *)StringLiteral_19415/*"icon_race_"*/,
                                              v27,
                                              0LL);
      v26 = (System_String_o *)this;
    }
    if ( !magnificationSprite )
LABEL_37:
      sub_B0D97C(this);
    UISprite__set_spriteName(magnificationSprite, v26, 0LL);
    v28 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v29 = this[1].fields.magnificationSprite;
      mRoot_high = HIDWORD(v29[1].fields.mRoot);
      mParent = (int)v29[1].fields.mParent;
      mParent_high = HIDWORD(v29[1].fields.mParent);
      v33 = *(_DWORD *)&v29[1].fields.mRootSet;
      if ( !v28 )
        goto LABEL_37;
    }
    else
    {
      *(UnityEngine_Color_o *)&mRoot_high = UnityEngine_Color__get_white(0LL);
      if ( !v28 )
        goto LABEL_37;
    }
    UIWidget__set_color(v28, *(UnityEngine_Color_o *)&mRoot_high, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v34 > 1, 0LL);
  }
}
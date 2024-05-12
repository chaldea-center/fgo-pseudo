void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_438AE71 & 1) == 0 )
  {
    sub_B775C4(&BoostItemListViewItemDraw_TypeInfo);
    byte_438AE71 = 1;
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
  System_String_o *SkillText; // x20
  BoostItemListViewItemDraw_c *v19; // x8
  UISprite_o *magnificationSprite; // x20
  System_String_o *v21; // x0
  UIWidget_o *v22; // x20
  struct UISprite_o *v23; // x8
  int mRoot_high; // s0
  int mParent; // s1
  int mParent_high; // s2
  int v27; // s3
  int v28; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  v6 = this;
  if ( (byte_438AE70 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&BoostItemListViewItemDraw_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3579/*"CURRENT_NUM_TXT"*/);
    this = (BoostItemListViewItemDraw_o *)sub_B775C4(&StringLiteral_19746/*"icon_race_"*/);
    byte_438AE70 = 1;
  }
  v28 = 0;
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_37;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v28 = magnification;
    if ( !itemEntity )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_37;
    ItemIconComponent__SetItemImage_28175904(
      (ItemIconComponent_o *)this,
      itemEntity[10],
      itemEntity[11],
      itemEntity[12],
      0,
      0LL);
    infoLabel = v6->fields.infoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3579/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_37;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v12);
    if ( !numLabel )
      goto LABEL_37;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_438AE6C & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_B775C4(&StringLiteral_18762/*"error"*/);
      byte_438AE6C = 1;
    }
    if ( !nameLabel )
      goto LABEL_37;
    v14 = v5->fields.itemEntity;
    if ( v14 )
      p_name = &v14->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18762/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v17);
    v19 = BoostItemListViewItemDraw_TypeInfo;
    if ( (BYTE3(BoostItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v19 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, SkillText, v19->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isCanNotSelect, 0LL);
    magnificationSprite = v6->fields.magnificationSprite;
    item = 0LL;
    if ( magnification >= 2 )
    {
      v21 = System_Int32__ToString((int32_t)&v28, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_44901936(
                                              (System_String_o *)StringLiteral_19746/*"icon_race_"*/,
                                              v21,
                                              0LL);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_37:
      sub_B7769C(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0LL);
    v22 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v23 = this[1].fields.magnificationSprite;
      mRoot_high = HIDWORD(v23[1].fields.mRoot);
      mParent = (int)v23[1].fields.mParent;
      mParent_high = HIDWORD(v23[1].fields.mParent);
      v27 = *(_DWORD *)&v23[1].fields.mRootSet;
      if ( !v22 )
        goto LABEL_37;
    }
    else
    {
      *(UnityEngine_Color_o *)&mRoot_high = UnityEngine_Color__get_white(0LL);
      if ( !v22 )
        goto LABEL_37;
    }
    UIWidget__set_color(v22, *(UnityEngine_Color_o *)&mRoot_high, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28 > 1, 0LL);
  }
}
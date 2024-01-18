void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4187E17 & 1) == 0 )
  {
    sub_B2C35C(&BoostItemListViewItemDraw_TypeInfo, v1);
    byte_4187E17 = 1;
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
  System_String_o *SkillText; // x20
  BoostItemListViewItemDraw_c *v23; // x8
  UISprite_o *magnificationSprite; // x20
  System_String_o *v25; // x0
  UIWidget_o *v26; // x20
  struct UISprite_o *v27; // x8
  int mRoot_high; // s0
  int mParent; // s1
  int mParent_high; // s2
  int v31; // s3
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  v6 = this;
  if ( (byte_4187E16 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&BoostItemListViewItemDraw_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_3453/*"CURRENT_NUM_TXT"*/, v9);
    this = (BoostItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_19354/*"icon_race_"*/, v10);
    byte_4187E16 = 1;
  }
  v32 = 0;
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_37;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v32 = magnification;
    if ( !itemEntity )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_37;
    ItemIconComponent__SetItemImage_27393796(
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
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3453/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_37;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v16);
    if ( !numLabel )
      goto LABEL_37;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_4187E12 & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_B2C35C(&StringLiteral_18395/*"error"*/, item);
      byte_4187E12 = 1;
    }
    if ( !nameLabel )
      goto LABEL_37;
    v18 = v5->fields.itemEntity;
    if ( v18 )
      p_name = &v18->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18395/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v21);
    v23 = BoostItemListViewItemDraw_TypeInfo;
    if ( (BYTE3(BoostItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v23 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, SkillText, v23->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
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
      v25 = System_Int32__ToString((int32_t)&v32, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_44305532(
                                              (System_String_o *)StringLiteral_19354/*"icon_race_"*/,
                                              v25,
                                              0LL);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_37:
      sub_B2C434(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0LL);
    v26 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v27 = this[1].fields.magnificationSprite;
      mRoot_high = HIDWORD(v27[1].fields.mRoot);
      mParent = (int)v27[1].fields.mParent;
      mParent_high = HIDWORD(v27[1].fields.mParent);
      v31 = *(_DWORD *)&v27[1].fields.mRootSet;
      if ( !v26 )
        goto LABEL_37;
    }
    else
    {
      *(UnityEngine_Color_o *)&mRoot_high = UnityEngine_Color__get_white(0LL);
      if ( !v26 )
        goto LABEL_37;
    }
    UIWidget__set_color(v26, *(UnityEngine_Color_o *)&mRoot_high, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32 > 1, 0LL);
  }
}
void __fastcall BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E86B1 & 1) == 0 )
  {
    sub_B5D5C4(&BoostItemListViewItemDraw_TypeInfo, v1, v2, v3);
    byte_42E86B1 = 1;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t *itemEntity; // x8
  int magnification; // w23
  _BOOL4 isCanNotSelect; // w22
  UILabel_o *infoLabel; // x21
  UILabel_o *numLabel; // x21
  const MethodInfo *v24; // x1
  int v25; // w2
  __int64 v26; // x3
  UILabel_o *nameLabel; // x21
  struct ItemEntity_o *v28; // x8
  System_String_o **p_name; // x8
  UILabel_o *detailLabel; // x21
  const MethodInfo *v31; // x1
  System_String_o *SkillText; // x20
  BoostItemListViewItemDraw_c *v33; // x8
  UISprite_o *magnificationSprite; // x20
  System_String_o *v35; // x0
  UIWidget_o *v36; // x20
  struct UISprite_o *v37; // x8
  int mRoot_high; // s0
  int mParent; // s1
  int mParent_high; // s2
  int v41; // s3
  int v42; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  v6 = this;
  if ( (byte_42E86B0 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&BoostItemListViewItemDraw_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_3519/*"CURRENT_NUM_TXT"*/, v13, v14, v15);
    this = (BoostItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_19598/*"icon_race_"*/, v16, v17, v18);
    byte_42E86B0 = 1;
  }
  v42 = 0;
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_37;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v42 = magnification;
    if ( !itemEntity )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_37;
    ItemIconComponent__SetItemImage_28497040(
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
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3519/*"CURRENT_NUM_TXT"*/, 0LL);
    if ( !infoLabel )
      goto LABEL_37;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0LL);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v24);
    if ( !numLabel )
      goto LABEL_37;
    UILabel__set_text(numLabel, (System_String_o *)this, 0LL);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_42E86AC & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_18624/*"error"*/, (_DWORD)item, v25, v26);
      byte_42E86AC = 1;
    }
    if ( !nameLabel )
      goto LABEL_37;
    v28 = v5->fields.itemEntity;
    if ( v28 )
      p_name = &v28->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_18624/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0LL);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v31);
    v33 = BoostItemListViewItemDraw_TypeInfo;
    if ( (BYTE3(BoostItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo);
      v33 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, SkillText, v33->static_fields->DETAIL_FONT_SIZE, 0, 0, 0LL);
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
      v35 = System_Int32__ToString((int32_t)&v42, 0LL);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_44577788(
                                              (System_String_o *)StringLiteral_19598/*"icon_race_"*/,
                                              v35,
                                              0LL);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_37:
      sub_B5D69C(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0LL);
    v36 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v37 = this[1].fields.magnificationSprite;
      mRoot_high = HIDWORD(v37[1].fields.mRoot);
      mParent = (int)v37[1].fields.mParent;
      mParent_high = HIDWORD(v37[1].fields.mParent);
      v41 = *(_DWORD *)&v37[1].fields.mRootSet;
      if ( !v36 )
        goto LABEL_37;
    }
    else
    {
      *(UnityEngine_Color_o *)&mRoot_high = UnityEngine_Color__get_white(0LL);
      if ( !v36 )
        goto LABEL_37;
    }
    UIWidget__set_color(v36, *(UnityEngine_Color_o *)&mRoot_high, 0LL);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_37;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v42 > 1, 0LL);
  }
}
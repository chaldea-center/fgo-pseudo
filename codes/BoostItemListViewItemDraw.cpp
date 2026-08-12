void BoostItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_596BDE3 & 1) == 0 )
  {
    sub_2213A60(&BoostItemListViewItemDraw_TypeInfo);
    byte_596BDE3 = 1;
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
  __int64 v10; // x1
  __int64 v11; // x2
  UILabel_o *infoLabel; // x21
  UILabel_o *numLabel; // x21
  const MethodInfo *v14; // x1
  UILabel_o *nameLabel; // x21
  struct ItemEntity_o *v16; // x8
  System_String_o **p_name; // x8
  UILabel_o *detailLabel; // x21
  const MethodInfo *v19; // x1
  System_String_o *SkillText; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  BoostItemListViewItemDraw_c *v23; // x8
  System_String_o *v24; // x20
  UISprite_o *magnificationSprite; // x20
  System_String_o *v26; // x0
  __int64 v27; // x2
  UIWidget_o *v28; // x20
  int v32; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = item;
  v6 = this;
  if ( (byte_596BDE2 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&BoostItemListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_4080/*"CURRENT_NUM_TXT"*/);
    this = (BoostItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_21194/*"icon_race_"*/);
    byte_596BDE2 = 1;
  }
  v32 = 0;
  if ( mode )
  {
    if ( !v5 )
      goto LABEL_34;
    itemEntity = (int32_t *)v5->fields.itemEntity;
    magnification = v5->fields.magnification;
    isCanNotSelect = v5->fields.isCanNotSelect;
    v32 = magnification;
    if ( !itemEntity )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)v6->fields.itemIconInfo;
    if ( !this )
      goto LABEL_34;
    ItemIconComponent__SetItemImage_47882600(
      (ItemIconComponent_o *)this,
      itemEntity[10],
      itemEntity[11],
      itemEntity[12],
      0,
      1,
      0);
    infoLabel = v6->fields.infoLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v11);
    this = (BoostItemListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4080/*"CURRENT_NUM_TXT"*/, 0);
    if ( !infoLabel )
      goto LABEL_34;
    UILabel__set_text(infoLabel, (System_String_o *)this, 0);
    numLabel = v6->fields.numLabel;
    this = (BoostItemListViewItemDraw_o *)BoostItemListViewItem__get_NumText(v5, v14);
    if ( !numLabel )
      goto LABEL_34;
    UILabel__set_text(numLabel, (System_String_o *)this, 0);
    nameLabel = v6->fields.nameLabel;
    if ( (byte_596BDDF & 1) == 0 )
    {
      this = (BoostItemListViewItemDraw_o *)sub_2213A60(&StringLiteral_19957/*"error"*/);
      byte_596BDDF = 1;
    }
    if ( !nameLabel )
      goto LABEL_34;
    v16 = v5->fields.itemEntity;
    if ( v16 )
      p_name = &v16->fields.name;
    else
      p_name = (System_String_o **)&StringLiteral_19957/*"error"*/;
    UILabel__set_text(nameLabel, *p_name, 0);
    detailLabel = v6->fields.detailLabel;
    SkillText = BoostItemListViewItem__get_SkillText(v5, v19);
    v23 = BoostItemListViewItemDraw_TypeInfo;
    v24 = SkillText;
    if ( !*(&BoostItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BoostItemListViewItemDraw_TypeInfo, v21, v22);
      v23 = BoostItemListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(detailLabel, v24, v23->static_fields->DETAIL_FONT_SIZE, 0, 0);
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
      v26 = System_Int32__ToString((int32_t)&v32, 0);
      this = (BoostItemListViewItemDraw_o *)System_String__Concat_75651716(
                                              (System_String_o *)StringLiteral_21194/*"icon_race_"*/,
                                              v26,
                                              0);
      item = (BoostItemListViewItem_o *)this;
    }
    if ( !magnificationSprite )
LABEL_34:
      sub_2213CDC(this, item);
    UISprite__set_spriteName(magnificationSprite, (System_String_o *)item, 0);
    v28 = (UIWidget_o *)v6->fields.magnificationSprite;
    if ( isCanNotSelect )
    {
      this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, item, v27);
        this = (BoostItemListViewItemDraw_o *)BalanceConfig_TypeInfo;
      }
      v33 = *(UnityEngine_Color_o *)(*((_QWORD *)this + 23) + 668LL);
      if ( !v28 )
        goto LABEL_34;
    }
    else
    {
      v33.fields.a = 1.0;
      v33.fields.b = 1.0;
      v33.fields.g = 1.0;
      v33.fields.r = 1.0;
      if ( !v28 )
        goto LABEL_34;
    }
    UIWidget__set_color(v28, v33, 0);
    this = (BoostItemListViewItemDraw_o *)v6->fields.magnificationSprite;
    if ( !this )
      goto LABEL_34;
    this = (BoostItemListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32 > 1, 0);
  }
}
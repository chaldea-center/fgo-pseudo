void __fastcall CharaGraphListViewItemDrawPatternGrandEquip___ctor(
        CharaGraphListViewItemDrawPatternGrandEquip_o *this,
        const MethodInfo *method)
{
  CharaGraphListViewItemDrawPatternDefault___ctor((CharaGraphListViewItemDrawPatternDefault_o *)this, 0LL);
}


void __fastcall CharaGraphListViewItemDrawPatternGrandEquip__SetupUseSprite(
        CharaGraphListViewItemDrawPatternGrandEquip_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  if ( !itemDraw )
    sub_1BCB254(this, 0LL);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    (CharaGraphListViewItemDrawPatternDefault_o *)this,
    (UnityEngine_Component_o *)itemDraw->fields.useSprite,
    0,
    0LL);
}


void __fastcall CharaGraphListViewItemDrawPatternGrandEquip__SetupWarningAndMask(
        CharaGraphListViewItemDrawPatternGrandEquip_o *this,
        CharaGraphListViewItemDraw_o *itemDraw,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListViewItemDraw_o *v5; // x21
  CharaGraphListViewItemDrawPatternDefault_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *warningLabel; // x22
  char v10; // w23

  v5 = itemDraw;
  v6 = (CharaGraphListViewItemDrawPatternDefault_o *)this;
  if ( (byte_4B173B0 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, itemDraw);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v7);
    this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)sub_1BCAFF8(&StringLiteral_5447/*"EQUIP_GRAPH_USE"*/, v8);
    byte_4B173B0 = 1;
  }
  if ( !item )
LABEL_15:
    sub_1BCB254(this, itemDraw);
  if ( !item->fields._IsUse_k__BackingField )
  {
    if ( !v5 )
      goto LABEL_15;
    warningLabel = v5->fields.warningLabel;
    goto LABEL_12;
  }
  if ( !v5 )
    goto LABEL_15;
  warningLabel = v5->fields.warningLabel;
  if ( item->fields._IsBase_k__BackingField )
  {
LABEL_12:
    v10 = 0;
    itemDraw = (CharaGraphListViewItemDraw_o *)StringLiteral_1/*""*/;
    goto LABEL_13;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (CharaGraphListViewItemDrawPatternGrandEquip_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_5447/*"EQUIP_GRAPH_USE"*/,
                                                            0LL);
  itemDraw = (CharaGraphListViewItemDraw_o *)this;
  v10 = 1;
LABEL_13:
  if ( !warningLabel )
    goto LABEL_15;
  UILabel__set_text(warningLabel, (System_String_o *)itemDraw, 0LL);
  CharaGraphListViewItemDrawPatternDefault__SetActive(
    v6,
    (UnityEngine_Component_o *)v5->fields.maskSprite,
    v10 & item->fields._IsUse_k__BackingField,
    0LL);
}
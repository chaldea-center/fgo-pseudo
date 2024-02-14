void __fastcall CombineCommandCodeListViewItemDraw___ctor(
        CombineCommandCodeListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineCommandCodeListViewItemDraw__SetInput(
        CombineCommandCodeListViewItemDraw_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectImgObj; // x0

  if ( (byte_42143F9 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, item);
    byte_42143F9 = 1;
  }
  if ( item )
  {
    selectImgObj = this->fields.selectImgObj;
    if ( !selectImgObj )
      goto LABEL_10;
    if ( item->fields.isSelect )
    {
      UnityEngine_GameObject__SetActive(selectImgObj, 1, 0LL);
      selectImgObj = (UnityEngine_GameObject_o *)this->fields.selectNumLabel;
      if ( selectImgObj )
      {
        UILabel__set_text((UILabel_o *)selectImgObj, (System_String_o *)StringLiteral_1013/*"1"*/, 0LL);
        return;
      }
LABEL_10:
      sub_B0D97C(selectImgObj);
    }
    UnityEngine_GameObject__SetActive(selectImgObj, 0, 0LL);
  }
}


void __fastcall CombineCommandCodeListViewItemDraw__SetItem(
        CombineCommandCodeListViewItemDraw_o *this,
        CombineCommandCodeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantFaceIconComponent_o *icon; // x0
  UILabel_o *maskLabel; // x21

  if ( (byte_42143F8 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&StringLiteral_9371/*"NOT_SELECT_MAX_EQUIP"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    sub_B0D8A4(&StringLiteral_1013/*"1"*/, v9);
    byte_42143F8 = 1;
  }
  if ( item && mode )
  {
    icon = this->fields.icon;
    if ( !icon )
      goto LABEL_33;
    ServantFaceIconComponent__Set_29632480(
      icon,
      item->fields.userCommandCode,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !icon )
      goto LABEL_33;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
    if ( !icon )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)icon,
      item->fields.isSwapLock != item->fields.isLock,
      0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !icon )
      goto LABEL_33;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
    if ( !icon )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)icon,
      item->fields.isSwapChoice != item->fields.isChoice,
      0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !icon )
      goto LABEL_33;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
    if ( !icon )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.selectImgObj;
    if ( !icon )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.maskLabel;
    if ( !icon )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)icon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.equippedInfo;
    if ( !icon )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0LL);
    if ( item->fields.isMaxEquiped || item->fields.isReplaceSource )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
      if ( !icon )
        goto LABEL_33;
      icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
      if ( !icon )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0LL);
      if ( item->fields.isMaxEquiped )
      {
        maskLabel = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        icon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9371/*"NOT_SELECT_MAX_EQUIP"*/, 0LL);
        if ( !maskLabel )
          goto LABEL_33;
        UILabel__set_text(maskLabel, (System_String_o *)icon, 0LL);
      }
    }
    if ( item->fields.isEquiped )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.equippedInfo;
      if ( !icon )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0LL);
      CombineUtility__SetCommandCodeEquippedInfoLabel(
        this->fields.equippedLabel,
        this->fields.nameLabel,
        item->fields._EquipedSvtId_k__BackingField,
        item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
        0LL);
    }
    if ( item->fields.isSelect )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.selectImgObj;
      if ( icon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0LL);
        icon = (ServantFaceIconComponent_o *)this->fields.selectNumLabel;
        if ( icon )
        {
          UILabel__set_text((UILabel_o *)icon, (System_String_o *)StringLiteral_1013/*"1"*/, 0LL);
          return;
        }
      }
LABEL_33:
      sub_B0D97C(icon);
    }
  }
}
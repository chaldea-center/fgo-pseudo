void CombineCommandCodeListViewItemDraw___ctor(CombineCommandCodeListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineCommandCodeListViewItemDraw__SetInput(
        CombineCommandCodeListViewItemDraw_o *this,
        CombineCommandCodeListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *selectImgObj; // x0

  if ( (byte_4D30836 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1165/*"1"*/);
    byte_4D30836 = 1;
  }
  if ( item )
  {
    selectImgObj = this->fields.selectImgObj;
    if ( !selectImgObj )
      goto LABEL_10;
    if ( item->fields.isSelect )
    {
      UnityEngine_GameObject__SetActive(selectImgObj, 1, 0);
      selectImgObj = (UnityEngine_GameObject_o *)this->fields.selectNumLabel;
      if ( selectImgObj )
      {
        UILabel__set_text((UILabel_o *)selectImgObj, (System_String_o *)StringLiteral_1165/*"1"*/, 0);
        return;
      }
LABEL_10:
      sub_1C942F0(selectImgObj, item);
    }
    UnityEngine_GameObject__SetActive(selectImgObj, 0, 0);
  }
}


void CombineCommandCodeListViewItemDraw__SetItem(
        CombineCommandCodeListViewItemDraw_o *this,
        CombineCommandCodeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantFaceIconComponent_o *icon; // x0
  bool v8; // w1
  bool v9; // w1
  UILabel_o *maskLabel; // x21
  const MethodInfo *v11; // x4

  if ( (byte_4D30835 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_9340/*"NOT_SELECT_MAX_EQUIP"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_1165/*"1"*/);
    byte_4D30835 = 1;
  }
  if ( item && mode )
  {
    icon = this->fields.icon;
    if ( !icon )
      goto LABEL_38;
    ServantFaceIconComponent__Set_41852436(
      icon,
      item->fields.userCommandCode,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0);
    icon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !icon )
      goto LABEL_38;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0);
    if ( !icon )
      goto LABEL_38;
    v8 = item->fields.isSwapLock ? !item->fields.isLock : item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, v8, 0);
    icon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !icon )
      goto LABEL_38;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0);
    if ( !icon )
      goto LABEL_38;
    v9 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, v9, 0);
    icon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !icon )
      goto LABEL_38;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0);
    if ( !icon )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0);
    icon = (ServantFaceIconComponent_o *)this->fields.selectImgObj;
    if ( !icon )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0);
    icon = (ServantFaceIconComponent_o *)this->fields.maskLabel;
    if ( !icon )
      goto LABEL_38;
    UILabel__set_text((UILabel_o *)icon, (System_String_o *)StringLiteral_1/*""*/, 0);
    icon = (ServantFaceIconComponent_o *)this->fields.equippedInfo;
    if ( !icon )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0);
    if ( item->fields.isMaxEquiped || item->fields.isReplaceSource )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
      if ( !icon )
        goto LABEL_38;
      icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0);
      if ( !icon )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0);
      if ( item->fields.isMaxEquiped )
      {
        maskLabel = this->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        icon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9340/*"NOT_SELECT_MAX_EQUIP"*/, 0);
        if ( !maskLabel )
          goto LABEL_38;
        UILabel__set_text(maskLabel, (System_String_o *)icon, 0);
      }
    }
    if ( item->fields.isEquiped )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.equippedInfo;
      if ( !icon )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0);
      CombineUtility__SetCommandCodeEquippedInfoLabel(
        this->fields.equippedLabel,
        this->fields.nameLabel,
        item->fields._EquipedSvtId_k__BackingField,
        item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
        v11);
    }
    if ( item->fields.isSelect )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.selectImgObj;
      if ( icon )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0);
        icon = (ServantFaceIconComponent_o *)this->fields.selectNumLabel;
        if ( icon )
        {
          UILabel__set_text((UILabel_o *)icon, (System_String_o *)StringLiteral_1165/*"1"*/, 0);
          return;
        }
      }
LABEL_38:
      sub_1C942F0(icon, item);
    }
  }
}
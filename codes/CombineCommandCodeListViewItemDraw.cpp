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

  if ( (byte_4B199E2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, item, method);
    byte_4B199E2 = 1;
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
        UILabel__set_text((UILabel_o *)selectImgObj, (System_String_o *)StringLiteral_1262/*"1"*/, 0LL);
        return;
      }
LABEL_10:
      sub_1BCAA3C(selectImgObj, item);
    }
    UnityEngine_GameObject__SetActive(selectImgObj, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineCommandCodeListViewItemDraw__SetItem(
        CombineCommandCodeListViewItemDraw_o *this,
        CombineCommandCodeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ServantFaceIconComponent_o *icon; // x0
  bool v14; // w1
  bool v15; // w1
  UILabel_o *maskLabel; // x21
  const MethodInfo *v17; // x4

  if ( (byte_4B199E1 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&StringLiteral_9424/*"NOT_SELECT_MAX_EQUIP"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v11, v12);
    byte_4B199E1 = 1;
  }
  if ( item && mode )
  {
    icon = this->fields.icon;
    if ( !icon )
      goto LABEL_38;
    ServantFaceIconComponent__Set_38937964(
      icon,
      item->fields.userCommandCode,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !icon )
      goto LABEL_38;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
    if ( !icon )
      goto LABEL_38;
    v14 = item->fields.isSwapLock ? !item->fields.isLock : item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, v14, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !icon )
      goto LABEL_38;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
    if ( !icon )
      goto LABEL_38;
    v15 = item->fields.isSwapChoice ? !item->fields.isChoice : item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, v15, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !icon )
      goto LABEL_38;
    icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
    if ( !icon )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.selectImgObj;
    if ( !icon )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.maskLabel;
    if ( !icon )
      goto LABEL_38;
    UILabel__set_text((UILabel_o *)icon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    icon = (ServantFaceIconComponent_o *)this->fields.equippedInfo;
    if ( !icon )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 0, 0LL);
    if ( item->fields.isMaxEquiped || item->fields.isReplaceSource )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
      if ( !icon )
        goto LABEL_38;
      icon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
      if ( !icon )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0LL);
      if ( item->fields.isMaxEquiped )
      {
        maskLabel = this->fields.maskLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
        icon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9424/*"NOT_SELECT_MAX_EQUIP"*/, 0LL);
        if ( !maskLabel )
          goto LABEL_38;
        UILabel__set_text(maskLabel, (System_String_o *)icon, 0LL);
      }
    }
    if ( item->fields.isEquiped )
    {
      icon = (ServantFaceIconComponent_o *)this->fields.equippedInfo;
      if ( !icon )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)icon, 1, 0LL);
      CombineUtility__SetCommandCodeEquippedInfoLabel(
        this->fields.equippedLabel,
        this->fields.nameLabel,
        item->fields._EquipedSvtId_k__BackingField,
        item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
        v17);
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
          UILabel__set_text((UILabel_o *)icon, (System_String_o *)StringLiteral_1262/*"1"*/, 0LL);
          return;
        }
      }
LABEL_38:
      sub_1BCAA3C(icon, item);
    }
  }
}
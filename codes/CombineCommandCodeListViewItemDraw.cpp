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
  UILabel_o *selectNumLabel; // x0

  if ( (byte_40F9AB8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1004/*"1"*/, item);
    byte_40F9AB8 = 1;
  }
  if ( item )
  {
    selectImgObj = this->fields.selectImgObj;
    if ( !selectImgObj )
      goto LABEL_10;
    if ( item->fields.isSelect )
    {
      UnityEngine_GameObject__SetActive(selectImgObj, 1, 0LL);
      selectNumLabel = this->fields.selectNumLabel;
      if ( selectNumLabel )
      {
        UILabel__set_text(selectNumLabel, (System_String_o *)StringLiteral_1004/*"1"*/, 0LL);
        return;
      }
LABEL_10:
      sub_B170D4();
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
  UnityEngine_Component_o *lockSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *choiceSprite; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *selectImgObj; // x0
  UILabel_o *maskLabel; // x0
  UnityEngine_GameObject_o *equippedInfo; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  UILabel_o *v22; // x21
  System_String_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UILabel_o *selectNumLabel; // x0

  if ( (byte_40F9AB7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_9318/*"NOT_SELECT_MAX_EQUIP"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    sub_B16FFC(&StringLiteral_1004/*"1"*/, v9);
    byte_40F9AB7 = 1;
  }
  if ( item && mode )
  {
    icon = this->fields.icon;
    if ( !icon )
      goto LABEL_33;
    ServantFaceIconComponent__Set_30711528(
      icon,
      item->fields.userCommandCode,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    lockSprite = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !lockSprite )
      goto LABEL_33;
    gameObject = UnityEngine_Component__get_gameObject(lockSprite, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
    choiceSprite = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !choiceSprite )
      goto LABEL_33;
    v14 = UnityEngine_Component__get_gameObject(choiceSprite, 0LL);
    if ( !v14 )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(v14, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_33;
    v16 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !v16 )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(v16, 0, 0LL);
    selectImgObj = this->fields.selectImgObj;
    if ( !selectImgObj )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(selectImgObj, 0, 0LL);
    maskLabel = this->fields.maskLabel;
    if ( !maskLabel )
      goto LABEL_33;
    UILabel__set_text(maskLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    equippedInfo = this->fields.equippedInfo;
    if ( !equippedInfo )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive(equippedInfo, 0, 0LL);
    if ( item->fields.isMaxEquiped || item->fields.isReplaceSource )
    {
      v20 = (UnityEngine_Component_o *)this->fields.maskSprite;
      if ( !v20 )
        goto LABEL_33;
      v21 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !v21 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v21, 1, 0LL);
      if ( item->fields.isMaxEquiped )
      {
        v22 = this->fields.maskLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_9318/*"NOT_SELECT_MAX_EQUIP"*/, 0LL);
        if ( !v22 )
          goto LABEL_33;
        UILabel__set_text(v22, v23, 0LL);
      }
    }
    if ( item->fields.isEquiped )
    {
      v24 = this->fields.equippedInfo;
      if ( !v24 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v24, 1, 0LL);
      CombineUtility__SetCommandCodeEquippedInfoLabel(
        this->fields.equippedLabel,
        this->fields.nameLabel,
        item->fields._EquipedSvtId_k__BackingField,
        item->fields._EquipedSvtId_k__BackingField != item->fields._BaseSvtId_k__BackingField,
        0LL);
    }
    if ( item->fields.isSelect )
    {
      v25 = this->fields.selectImgObj;
      if ( v25 )
      {
        UnityEngine_GameObject__SetActive(v25, 1, 0LL);
        selectNumLabel = this->fields.selectNumLabel;
        if ( selectNumLabel )
        {
          UILabel__set_text(selectNumLabel, (System_String_o *)StringLiteral_1004/*"1"*/, 0LL);
          return;
        }
      }
LABEL_33:
      sub_B170D4();
    }
  }
}
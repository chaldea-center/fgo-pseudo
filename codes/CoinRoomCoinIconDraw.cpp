void CoinRoomCoinIconDraw___ctor(CoinRoomCoinIconDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CoinRoomCoinIconDraw__ResetItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *infoObject; // x0
  const MethodInfo *v9; // x3
  _BOOL4 isHeroine_k__BackingField; // w8
  char v11; // w1
  bool v12; // w2

  if ( (byte_4D30603 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D30603 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, const char *))infoObject->klass[1]._1.name)(
      infoObject,
      1,
      infoObject->klass[1]._1.namespaze);
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))infoObject->klass[1]._1.nestedTypes)(
      infoObject,
      0,
      1,
      infoObject->klass[1]._1.implementedInterfaces);
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(infoObject, 0, 0);
  infoObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
  if ( !infoObject )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)infoObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  infoObject = (UnityEngine_GameObject_o *)this->fields.selectedNumLabel;
  if ( !infoObject )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)infoObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !iconItem )
    goto LABEL_25;
  if ( iconItem->fields._isCanStrength_k__BackingField )
  {
    infoObject = this->fields.infoObject;
    if ( !infoObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(infoObject, 0, 0);
    infoObject = this->fields.canStrengthObject;
    if ( !infoObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(infoObject, 1, 0);
  }
  if ( !iconItem->fields._isHeroine_k__BackingField )
  {
    v12 = 0;
    v11 = !iconItem->fields._isTouchEnabled_k__BackingField;
    goto LABEL_22;
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject
    || (UnityEngine_GameObject__SetActive(infoObject, 1, 0), (infoObject = this->fields.canStrengthObject) == 0) )
  {
LABEL_25:
    sub_1C942F0(infoObject, v7);
  }
  UnityEngine_GameObject__SetActive(infoObject, 0, 0);
  isHeroine_k__BackingField = iconItem->fields._isHeroine_k__BackingField;
  v11 = 1;
  iconItem->fields._isTouchEnabled_k__BackingField = 0;
  v12 = isHeroine_k__BackingField;
LABEL_22:
  CoinRoomCoinIconDraw__SetEnabledMask(this, v11, v12, v9);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_25;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)infoObject, -1, 0);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_25;
  DragSelectComponent__Set((DragSelectComponent_o *)infoObject, -1, -1, 0);
}


// local variable allocation has failed, the output may be wrong!
void CoinRoomCoinIconDraw__SetEnabledMask(
        CoinRoomCoinIconDraw_o *this,
        bool enabled,
        bool isHeroine,
        const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *infoLabel; // x20
  __int64 *v9; // x8

  if ( (byte_4D30604 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3544/*"COIN_ROOM_CAN_NOT_SELECTED"*/);
    sub_1C94098(&StringLiteral_3547/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/);
    byte_4D30604 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_20;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
  if ( !maskSprite )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, enabled, 0);
  if ( enabled )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.infoObject;
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.infoLabel;
    if ( !maskSprite )
      goto LABEL_20;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.selectedNumLabel;
    if ( !maskSprite )
      goto LABEL_20;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0);
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
    maskSprite = (UnityEngine_Component_o *)this->fields.canStrengthObject;
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
    infoLabel = this->fields.infoLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isHeroine )
      {
LABEL_14:
        v9 = &StringLiteral_3544/*"COIN_ROOM_CAN_NOT_SELECTED"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isHeroine )
        goto LABEL_14;
    }
    v9 = &StringLiteral_3547/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/;
LABEL_18:
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v9, 0);
    if ( infoLabel )
    {
      UILabel__set_text(infoLabel, (System_String_o *)maskSprite, 0);
      return;
    }
LABEL_20:
    sub_1C942F0(maskSprite, enabled);
  }
}


void CoinRoomCoinIconDraw__SetItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        int32_t mode,
        bool isSelectDialog,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0
  UILabel_o *possessionNum; // x22
  Il2CppObject *v11; // x0
  const MethodInfo *v12; // x4
  UILabel_o *infoLabel; // x21
  const MethodInfo *v14; // x3
  int32_t num_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D30601 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    sub_1C94098(&StringLiteral_3544/*"COIN_ROOM_CAN_NOT_SELECTED"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D30601 = 1;
  }
  if ( iconItem && mode )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      ItemIconComponent__SetItem(itemIcon, iconItem->fields._itemId_k__BackingField, -1, 1, 0);
      itemIcon = (ItemIconComponent_o *)this->fields.iconInfoLabel;
      if ( itemIcon )
      {
        UIIconLabel__Set((UIIconLabel_o *)itemIcon, iconItem->fields.iconLabelInfo, 0);
        possessionNum = this->fields.possessionNum;
        num_k__BackingField = iconItem->fields._num_k__BackingField;
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num_k__BackingField);
        itemIcon = (ItemIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v11, 0);
        if ( possessionNum )
        {
          UILabel__set_text(possessionNum, (System_String_o *)itemIcon, 0);
          if ( !isSelectDialog )
          {
            itemIcon = (ItemIconComponent_o *)this->fields.iconInfoLabel;
            if ( !itemIcon )
              goto LABEL_29;
            itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)itemIcon,
                                                0);
            if ( !itemIcon )
              goto LABEL_29;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)itemIcon,
              iconItem->fields._isDisplayNumber_k__BackingField,
              0);
          }
          itemIcon = (ItemIconComponent_o *)this->fields.infoLabel;
          if ( itemIcon )
          {
            UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
            itemIcon = (ItemIconComponent_o *)this->fields.dragSelect;
            if ( itemIcon )
            {
              DragSelectComponent__Set((DragSelectComponent_o *)itemIcon, -1, -1, 0);
              itemIcon = (ItemIconComponent_o *)this->fields.infoObject;
              if ( itemIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0);
                itemIcon = (ItemIconComponent_o *)this->fields.canStrengthObject;
                if ( itemIcon )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0);
                  if ( iconItem->fields._isCanStrength_k__BackingField && !isSelectDialog )
                  {
                    itemIcon = (ItemIconComponent_o *)this->fields.infoObject;
                    if ( !itemIcon )
                      goto LABEL_29;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0);
                    itemIcon = (ItemIconComponent_o *)this->fields.canStrengthObject;
                    if ( !itemIcon )
                      goto LABEL_29;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0);
                  }
                  if ( !iconItem->fields._isHeroine_k__BackingField )
                  {
LABEL_27:
                    CoinRoomCoinIconDraw__UpdateItem(
                      this,
                      iconItem,
                      iconItem->fields._selectedNum_k__BackingField,
                      0,
                      v12);
                    CoinRoomCoinIconDraw__SetEnabledMask(
                      this,
                      !iconItem->fields._isTouchEnabled_k__BackingField,
                      iconItem->fields._isHeroine_k__BackingField,
                      v14);
                    return;
                  }
                  itemIcon = (ItemIconComponent_o *)this->fields.infoObject;
                  if ( itemIcon )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0);
                    iconItem->fields._isTouchEnabled_k__BackingField = 0;
                    infoLabel = this->fields.infoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    itemIcon = (ItemIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3544/*"COIN_ROOM_CAN_NOT_SELECTED"*/, 0);
                    if ( infoLabel )
                    {
                      UILabel__set_text(infoLabel, (System_String_o *)itemIcon, 0);
                      goto LABEL_27;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    sub_1C942F0(itemIcon, iconItem);
  }
}


void CoinRoomCoinIconDraw__UpdateItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        int32_t num,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_GameObject_o *infoObject; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  UILabel_o *selectedNumLabel; // x22
  Il2CppObject *v13; // x0
  int32_t selectedNum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D30602 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_3546/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/);
    byte_4D30602 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  infoObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( ((unsigned __int8)infoObject & 1) != 0 )
  {
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, const char *))infoObject->klass[1]._1.name)(
      infoObject,
      1,
      infoObject->klass[1]._1.namespaze);
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_24;
    infoObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))infoObject->klass[1]._1.nestedTypes)(
                                               infoObject,
                                               0,
                                               1,
                                               infoObject->klass[1]._1.implementedInterfaces);
  }
  if ( !num )
    return;
  if ( !iconItem )
LABEL_24:
    sub_1C942F0(infoObject, v10);
  if ( iconItem->fields._selectedNum_k__BackingField >= 1 )
  {
    infoObject = this->fields.infoObject;
    if ( infoObject )
    {
      UnityEngine_GameObject__SetActive(infoObject, 1, 0);
      infoObject = this->fields.canStrengthObject;
      if ( infoObject )
      {
        UnityEngine_GameObject__SetActive(infoObject, 0, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        infoObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3546/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, 0);
        if ( this->fields.selectedNumLabel )
        {
          v11 = (System_String_o *)infoObject;
          infoObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.selectedNumLabel,
                         0);
          if ( infoObject )
          {
            UnityEngine_GameObject__SetActive(infoObject, 1, 0);
            selectedNumLabel = this->fields.selectedNumLabel;
            selectedNum_k__BackingField = iconItem->fields._selectedNum_k__BackingField;
            v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectedNum_k__BackingField);
            infoObject = (UnityEngine_GameObject_o *)System_String__Format(v11, v13, 0);
            if ( selectedNumLabel )
            {
              UILabel__set_text(selectedNumLabel, (System_String_o *)infoObject, 0);
              goto LABEL_20;
            }
          }
        }
      }
    }
    goto LABEL_24;
  }
LABEL_20:
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_24;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)infoObject, -1, 0);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_24;
  DragSelectComponent__Set((DragSelectComponent_o *)infoObject, iconItem->fields.selectNum, -1, 0);
}
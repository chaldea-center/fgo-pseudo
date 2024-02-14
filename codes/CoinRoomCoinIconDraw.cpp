void __fastcall CoinRoomCoinIconDraw___ctor(CoinRoomCoinIconDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CoinRoomCoinIconDraw__ResetItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_GameObject_o *infoObject; // x0
  const MethodInfo *v9; // x3
  _BOOL4 isHeroine_k__BackingField; // w8
  char v11; // w1
  bool v12; // w2

  if ( (byte_4214742 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, iconItem);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4214742 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))infoObject->klass[1]._1.namespaze)(
      infoObject,
      1LL,
      infoObject->klass[1]._1.byval_arg.data);
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))infoObject->klass[1]._1.implementedInterfaces)(
      infoObject,
      0LL,
      1LL,
      infoObject->klass[1]._1.interfaceOffsets);
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
  if ( !infoObject )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)infoObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.selectedNumLabel;
  if ( !infoObject )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)infoObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !iconItem )
    goto LABEL_26;
  if ( iconItem->fields._isCanStrength_k__BackingField )
  {
    infoObject = this->fields.infoObject;
    if ( !infoObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
    infoObject = this->fields.canStrengthObject;
    if ( !infoObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
  }
  if ( !iconItem->fields._isHeroine_k__BackingField )
  {
    v12 = 0;
    v11 = !iconItem->fields._isTouchEnabled_k__BackingField;
    goto LABEL_23;
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject
    || (UnityEngine_GameObject__SetActive(infoObject, 1, 0LL), (infoObject = this->fields.canStrengthObject) == 0LL) )
  {
LABEL_26:
    sub_B0D97C(infoObject);
  }
  UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
  isHeroine_k__BackingField = iconItem->fields._isHeroine_k__BackingField;
  v11 = 1;
  iconItem->fields._isTouchEnabled_k__BackingField = 0;
  v12 = isHeroine_k__BackingField;
LABEL_23:
  CoinRoomCoinIconDraw__SetEnabledMask(this, v11, v12, v9);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_26;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)infoObject, -1, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_26;
  DragSelectComponent__Set((DragSelectComponent_o *)infoObject, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconDraw__SetEnabledMask(
        CoinRoomCoinIconDraw_o *this,
        bool enabled,
        bool isHeroine,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *infoLabel; // x20
  __int64 *v11; // x8

  if ( (byte_4214743 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, enabled);
    sub_B0D8A4(&StringLiteral_3138/*"COIN_ROOM_CAN_NOT_SELECTED"*/, v7);
    sub_B0D8A4(&StringLiteral_3141/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/, v8);
    byte_4214743 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_24;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, enabled, 0LL);
  if ( enabled )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.infoObject;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      maskSprite = (UnityEngine_Component_o *)this->fields.infoLabel;
      if ( maskSprite )
      {
        maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
        if ( maskSprite )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
          maskSprite = (UnityEngine_Component_o *)this->fields.selectedNumLabel;
          if ( maskSprite )
          {
            maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
            if ( maskSprite )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
              maskSprite = (UnityEngine_Component_o *)this->fields.canStrengthObject;
              if ( maskSprite )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
                infoLabel = this->fields.infoLabel;
                if ( isHeroine )
                {
                  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v11 = &StringLiteral_3138/*"COIN_ROOM_CAN_NOT_SELECTED"*/;
                }
                else
                {
                  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v11 = &StringLiteral_3141/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/;
                }
                maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v11, 0LL);
                if ( infoLabel )
                {
                  UILabel__set_text(infoLabel, (System_String_o *)maskSprite, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_B0D97C(maskSprite);
  }
}


void __fastcall CoinRoomCoinIconDraw__SetItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        int32_t mode,
        bool isSelectDialog,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ItemIconComponent_o *itemIcon; // x0
  UILabel_o *possessionNum; // x22
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x4
  UILabel_o *infoLabel; // x21
  const MethodInfo *v18; // x3
  int32_t num_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4214740 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, iconItem);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v10);
    sub_B0D8A4(&StringLiteral_3138/*"COIN_ROOM_CAN_NOT_SELECTED"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_4214740 = 1;
  }
  if ( iconItem && mode )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      ItemIconComponent__SetItem(itemIcon, iconItem->fields._itemId_k__BackingField, -1, 0LL);
      itemIcon = (ItemIconComponent_o *)this->fields.iconInfoLabel;
      if ( itemIcon )
      {
        UIIconLabel__Set((UIIconLabel_o *)itemIcon, iconItem->fields.iconLabelInfo, 0LL);
        possessionNum = this->fields.possessionNum;
        num_k__BackingField = iconItem->fields._num_k__BackingField;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num_k__BackingField);
        itemIcon = (ItemIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v15, 0LL);
        if ( possessionNum )
        {
          UILabel__set_text(possessionNum, (System_String_o *)itemIcon, 0LL);
          if ( !isSelectDialog )
          {
            itemIcon = (ItemIconComponent_o *)this->fields.iconInfoLabel;
            if ( !itemIcon )
              goto LABEL_30;
            itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)itemIcon,
                                                0LL);
            if ( !itemIcon )
              goto LABEL_30;
            UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)itemIcon,
              iconItem->fields._isDisplayNumber_k__BackingField,
              0LL);
          }
          itemIcon = (ItemIconComponent_o *)this->fields.infoLabel;
          if ( itemIcon )
          {
            UILabel__set_text((UILabel_o *)itemIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            itemIcon = (ItemIconComponent_o *)this->fields.dragSelect;
            if ( itemIcon )
            {
              DragSelectComponent__Set((DragSelectComponent_o *)itemIcon, -1, -1, 0LL);
              itemIcon = (ItemIconComponent_o *)this->fields.infoObject;
              if ( itemIcon )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
                itemIcon = (ItemIconComponent_o *)this->fields.canStrengthObject;
                if ( itemIcon )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
                  if ( iconItem->fields._isCanStrength_k__BackingField && !isSelectDialog )
                  {
                    itemIcon = (ItemIconComponent_o *)this->fields.infoObject;
                    if ( !itemIcon )
                      goto LABEL_30;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
                    itemIcon = (ItemIconComponent_o *)this->fields.canStrengthObject;
                    if ( !itemIcon )
                      goto LABEL_30;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
                  }
                  if ( !iconItem->fields._isHeroine_k__BackingField )
                  {
LABEL_28:
                    CoinRoomCoinIconDraw__UpdateItem(
                      this,
                      iconItem,
                      iconItem->fields._selectedNum_k__BackingField,
                      0,
                      v16);
                    CoinRoomCoinIconDraw__SetEnabledMask(
                      this,
                      !iconItem->fields._isTouchEnabled_k__BackingField,
                      iconItem->fields._isHeroine_k__BackingField,
                      v18);
                    return;
                  }
                  itemIcon = (ItemIconComponent_o *)this->fields.infoObject;
                  if ( itemIcon )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
                    iconItem->fields._isTouchEnabled_k__BackingField = 0;
                    infoLabel = this->fields.infoLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    itemIcon = (ItemIconComponent_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3138/*"COIN_ROOM_CAN_NOT_SELECTED"*/,
                                                        0LL);
                    if ( infoLabel )
                    {
                      UILabel__set_text(infoLabel, (System_String_o *)itemIcon, 0LL);
                      goto LABEL_28;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_30:
    sub_B0D97C(itemIcon);
  }
}


void __fastcall CoinRoomCoinIconDraw__UpdateItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        int32_t num,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_GameObject_o *infoObject; // x0
  System_String_o *v14; // x21
  UILabel_o *selectedNumLabel; // x22
  Il2CppObject *v16; // x0
  int32_t selectedNum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4214741 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, iconItem);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_3140/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, v11);
    byte_4214741 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  infoObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)infoObject & 1) != 0 )
  {
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_26;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))infoObject->klass[1]._1.namespaze)(
      infoObject,
      1LL,
      infoObject->klass[1]._1.byval_arg.data);
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_26;
    infoObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))infoObject->klass[1]._1.implementedInterfaces)(
                                               infoObject,
                                               0LL,
                                               1LL,
                                               infoObject->klass[1]._1.interfaceOffsets);
  }
  if ( !num )
    return;
  if ( !iconItem )
LABEL_26:
    sub_B0D97C(infoObject);
  if ( iconItem->fields._selectedNum_k__BackingField >= 1 )
  {
    infoObject = this->fields.infoObject;
    if ( infoObject )
    {
      UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
      infoObject = this->fields.canStrengthObject;
      if ( infoObject )
      {
        UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        infoObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3140/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, 0LL);
        if ( this->fields.selectedNumLabel )
        {
          v14 = (System_String_o *)infoObject;
          infoObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.selectedNumLabel,
                         0LL);
          if ( infoObject )
          {
            UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
            selectedNumLabel = this->fields.selectedNumLabel;
            selectedNum_k__BackingField = iconItem->fields._selectedNum_k__BackingField;
            v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectedNum_k__BackingField);
            infoObject = (UnityEngine_GameObject_o *)System_String__Format(v14, v16, 0LL);
            if ( selectedNumLabel )
            {
              UILabel__set_text(selectedNumLabel, (System_String_o *)infoObject, 0LL);
              goto LABEL_22;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
LABEL_22:
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_26;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)infoObject, -1, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_26;
  DragSelectComponent__Set((DragSelectComponent_o *)infoObject, iconItem->fields.selectNum, -1, 0LL);
}
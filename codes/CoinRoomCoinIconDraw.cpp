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
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *baseButton; // x21
  __int64 v10; // x1
  UnityEngine_GameObject_o *infoObject; // x0
  const MethodInfo *v12; // x3
  _BOOL4 isHeroine_k__BackingField; // w8
  char v14; // w1
  bool v15; // w2

  if ( (byte_42EA930 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)iconItem, isInput, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EA930 = 1;
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
    v15 = 0;
    v14 = !iconItem->fields._isTouchEnabled_k__BackingField;
    goto LABEL_23;
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject
    || (UnityEngine_GameObject__SetActive(infoObject, 1, 0LL), (infoObject = this->fields.canStrengthObject) == 0LL) )
  {
LABEL_26:
    sub_B5D69C(infoObject, v10);
  }
  UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
  isHeroine_k__BackingField = iconItem->fields._isHeroine_k__BackingField;
  v14 = 1;
  iconItem->fields._isTouchEnabled_k__BackingField = 0;
  v15 = isHeroine_k__BackingField;
LABEL_23:
  CoinRoomCoinIconDraw__SetEnabledMask(this, v14, v15, v12);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *maskSprite; // x0
  UILabel_o *infoLabel; // x20
  __int64 *v15; // x8

  if ( (byte_42EA931 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, enabled, isHeroine, method);
    sub_B5D5C4(&StringLiteral_3191/*"COIN_ROOM_CAN_NOT_SELECTED"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_3194/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/, v10, v11, v12);
    byte_42EA931 = 1;
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
                  v15 = &StringLiteral_3191/*"COIN_ROOM_CAN_NOT_SELECTED"*/;
                }
                else
                {
                  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v15 = &StringLiteral_3194/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/;
                }
                maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v15, 0LL);
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
    sub_B5D69C(maskSprite, enabled);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconDraw__SetItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        int32_t mode,
        bool isSelectDialog,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ItemIconComponent_o *itemIcon; // x0
  UILabel_o *possessionNum; // x22
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x4
  UILabel_o *infoLabel; // x21
  const MethodInfo *v26; // x3
  int32_t num_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA92E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)iconItem, mode, isSelectDialog);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3191/*"COIN_ROOM_CAN_NOT_SELECTED"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42EA92E = 1;
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
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num_k__BackingField);
        itemIcon = (ItemIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v23, 0LL);
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
                      v24);
                    CoinRoomCoinIconDraw__SetEnabledMask(
                      this,
                      !iconItem->fields._isTouchEnabled_k__BackingField,
                      iconItem->fields._isHeroine_k__BackingField,
                      v26);
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
                                                        (System_String_o *)StringLiteral_3191/*"COIN_ROOM_CAN_NOT_SELECTED"*/,
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
    sub_B5D69C(itemIcon, iconItem);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconDraw__UpdateItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        int32_t num,
        bool isInput,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_GameObject_o *infoObject; // x0
  __int64 v22; // x1
  System_String_o *v23; // x21
  UILabel_o *selectedNumLabel; // x22
  Il2CppObject *v25; // x0
  int32_t selectedNum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA92F & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)iconItem, num, isInput);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_3193/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, v17, v18, v19);
    byte_42EA92F = 1;
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
    sub_B5D69C(infoObject, v22);
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
        infoObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3193/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, 0LL);
        if ( this->fields.selectedNumLabel )
        {
          v23 = (System_String_o *)infoObject;
          infoObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.selectedNumLabel,
                         0LL);
          if ( infoObject )
          {
            UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
            selectedNumLabel = this->fields.selectedNumLabel;
            selectedNum_k__BackingField = iconItem->fields._selectedNum_k__BackingField;
            v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectedNum_k__BackingField);
            infoObject = (UnityEngine_GameObject_o *)System_String__Format(v23, v25, 0LL);
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
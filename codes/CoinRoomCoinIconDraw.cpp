void __fastcall CoinRoomCoinIconDraw___ctor(CoinRoomCoinIconDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinRoomCoinIconDraw__ResetItem(
        CoinRoomCoinIconDraw_o *this,
        CoinRoomCoinIconItem_o *iconItem,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *baseButton; // x21
  __int64 v9; // x1
  UnityEngine_GameObject_o *infoObject; // x0
  const MethodInfo *v11; // x3
  _BOOL4 isHeroine_k__BackingField; // w8
  char v13; // w1
  bool v14; // w2

  if ( (byte_4B197B4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, iconItem, isInput);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B197B4 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconItem);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))infoObject->klass[1]._1.namespaze)(
      infoObject,
      1LL,
      infoObject->klass[1]._1.byval_arg.data);
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))infoObject->klass[1]._1.implementedInterfaces)(
      infoObject,
      0LL,
      1LL,
      infoObject->klass[1]._1.interfaceOffsets);
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.infoLabel;
  if ( !infoObject )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)infoObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.selectedNumLabel;
  if ( !infoObject )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)infoObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !iconItem )
    goto LABEL_25;
  if ( iconItem->fields._isCanStrength_k__BackingField )
  {
    infoObject = this->fields.infoObject;
    if ( !infoObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
    infoObject = this->fields.canStrengthObject;
    if ( !infoObject )
      goto LABEL_25;
    UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
  }
  if ( !iconItem->fields._isHeroine_k__BackingField )
  {
    v14 = 0;
    v13 = !iconItem->fields._isTouchEnabled_k__BackingField;
    goto LABEL_22;
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject
    || (UnityEngine_GameObject__SetActive(infoObject, 1, 0LL), (infoObject = this->fields.canStrengthObject) == 0LL) )
  {
LABEL_25:
    sub_1BCAA3C(infoObject, v9);
  }
  UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
  isHeroine_k__BackingField = iconItem->fields._isHeroine_k__BackingField;
  v13 = 1;
  iconItem->fields._isTouchEnabled_k__BackingField = 0;
  v14 = isHeroine_k__BackingField;
LABEL_22:
  CoinRoomCoinIconDraw__SetEnabledMask(this, v13, v14, v11);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_25;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)infoObject, -1, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_25;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v12; // x1
  UILabel_o *infoLabel; // x20
  __int64 *v14; // x8

  if ( (byte_4B197B5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, enabled, isHeroine);
    sub_1BCA7E0(&StringLiteral_3649/*"COIN_ROOM_CAN_NOT_SELECTED"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_3652/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/, v9, v10);
    byte_4B197B5 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_20;
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !maskSprite )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, enabled, 0LL);
  if ( enabled )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.infoObject;
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.infoLabel;
    if ( !maskSprite )
      goto LABEL_20;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.selectedNumLabel;
    if ( !maskSprite )
      goto LABEL_20;
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.canStrengthObject;
    if ( !maskSprite )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
    infoLabel = this->fields.infoLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( isHeroine )
      {
LABEL_14:
        v14 = &StringLiteral_3649/*"COIN_ROOM_CAN_NOT_SELECTED"*/;
        goto LABEL_18;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      if ( isHeroine )
        goto LABEL_14;
    }
    v14 = &StringLiteral_3652/*"COIN_ROOM_COIN_ICON_NOT_SELECT"*/;
LABEL_18:
    maskSprite = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v14, 0LL);
    if ( infoLabel )
    {
      UILabel__set_text(infoLabel, (System_String_o *)maskSprite, 0LL);
      return;
    }
LABEL_20:
    sub_1BCAA3C(maskSprite, enabled);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ItemIconComponent_o *itemIcon; // x0
  UILabel_o *possessionNum; // x22
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x4
  __int64 v21; // x1
  UILabel_o *infoLabel; // x21
  const MethodInfo *v23; // x3
  int32_t num_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B197B2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, iconItem, *(_QWORD *)&mode);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3649/*"COIN_ROOM_CAN_NOT_SELECTED"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B197B2 = 1;
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
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num_k__BackingField);
        itemIcon = (ItemIconComponent_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v19, 0LL);
        if ( possessionNum )
        {
          UILabel__set_text(possessionNum, (System_String_o *)itemIcon, 0LL);
          if ( !isSelectDialog )
          {
            itemIcon = (ItemIconComponent_o *)this->fields.iconInfoLabel;
            if ( !itemIcon )
              goto LABEL_29;
            itemIcon = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)itemIcon,
                                                0LL);
            if ( !itemIcon )
              goto LABEL_29;
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
                      goto LABEL_29;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 0, 0LL);
                    itemIcon = (ItemIconComponent_o *)this->fields.canStrengthObject;
                    if ( !itemIcon )
                      goto LABEL_29;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
                  }
                  if ( !iconItem->fields._isHeroine_k__BackingField )
                  {
LABEL_27:
                    CoinRoomCoinIconDraw__UpdateItem(
                      this,
                      iconItem,
                      iconItem->fields._selectedNum_k__BackingField,
                      0,
                      v20);
                    CoinRoomCoinIconDraw__SetEnabledMask(
                      this,
                      !iconItem->fields._isTouchEnabled_k__BackingField,
                      iconItem->fields._isHeroine_k__BackingField,
                      v23);
                    return;
                  }
                  itemIcon = (ItemIconComponent_o *)this->fields.infoObject;
                  if ( itemIcon )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0LL);
                    iconItem->fields._isTouchEnabled_k__BackingField = 0;
                    infoLabel = this->fields.infoLabel;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
                    itemIcon = (ItemIconComponent_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3649/*"COIN_ROOM_CAN_NOT_SELECTED"*/,
                                                        0LL);
                    if ( infoLabel )
                    {
                      UILabel__set_text(infoLabel, (System_String_o *)itemIcon, 0LL);
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
    sub_1BCAA3C(itemIcon, iconItem);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_GameObject_o *infoObject; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o *v20; // x21
  UILabel_o *selectedNumLabel; // x22
  Il2CppObject *v22; // x0
  int32_t selectedNum_k__BackingField; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B197B3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, iconItem, *(_QWORD *)&num);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_3651/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, v14, v15);
    byte_4B197B3 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, iconItem);
  infoObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)infoObject & 1) != 0 )
  {
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, void *))infoObject->klass[1]._1.namespaze)(
      infoObject,
      1LL,
      infoObject->klass[1]._1.byval_arg.data);
    infoObject = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( !infoObject )
      goto LABEL_24;
    infoObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))infoObject->klass[1]._1.implementedInterfaces)(
                                               infoObject,
                                               0LL,
                                               1LL,
                                               infoObject->klass[1]._1.interfaceOffsets);
  }
  if ( !num )
    return;
  if ( !iconItem )
LABEL_24:
    sub_1BCAA3C(infoObject, v18);
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
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
        infoObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3651/*"COIN_ROOM_COIN_ICON_CONFIRM_NUM"*/, 0LL);
        if ( this->fields.selectedNumLabel )
        {
          v20 = (System_String_o *)infoObject;
          infoObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.selectedNumLabel,
                         0LL);
          if ( infoObject )
          {
            UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
            selectedNumLabel = this->fields.selectedNumLabel;
            selectedNum_k__BackingField = iconItem->fields._selectedNum_k__BackingField;
            v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectedNum_k__BackingField);
            infoObject = (UnityEngine_GameObject_o *)System_String__Format(v20, v22, 0LL);
            if ( selectedNumLabel )
            {
              UILabel__set_text(selectedNumLabel, (System_String_o *)infoObject, 0LL);
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
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)infoObject, -1, 0LL);
  infoObject = (UnityEngine_GameObject_o *)this->fields.dragSelect;
  if ( !infoObject )
    goto LABEL_24;
  DragSelectComponent__Set((DragSelectComponent_o *)infoObject, iconItem->fields.selectNum, -1, 0LL);
}
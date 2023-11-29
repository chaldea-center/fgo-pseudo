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
  struct UICommonButton_o *v8; // x0
  struct UICommonButton_o *v9; // x0
  UnityEngine_GameObject_o *infoObject; // x0
  UILabel_o *infoLabel; // x0
  UILabel_o *selectedNumLabel; // x0
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *canStrengthObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  _BOOL4 isHeroine_k__BackingField; // w8
  char v19; // w1
  bool v20; // w2
  DragSelectComponent_o *dragSelect; // x0
  DragSelectComponent_o *v22; // x0

  if ( (byte_40F9A14 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, iconItem);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F9A14 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v8 = this->fields.baseButton;
    if ( !v8 )
      goto LABEL_26;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._5_set_isEnabled.method)(
      v8,
      1LL,
      v8->klass->vtable._6_OnInit.methodPtr);
    v9 = this->fields.baseButton;
    if ( !v9 )
      goto LABEL_26;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
      v9,
      0LL,
      1LL,
      v9->klass->vtable._15_OnPress.methodPtr);
  }
  infoObject = this->fields.infoObject;
  if ( !infoObject )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
  infoLabel = this->fields.infoLabel;
  if ( !infoLabel )
    goto LABEL_26;
  UILabel__set_text(infoLabel, (System_String_o *)StringLiteral_1, 0LL);
  selectedNumLabel = this->fields.selectedNumLabel;
  if ( !selectedNumLabel )
    goto LABEL_26;
  UILabel__set_text(selectedNumLabel, (System_String_o *)StringLiteral_1, 0LL);
  if ( !iconItem )
    goto LABEL_26;
  if ( iconItem->fields._isCanStrength_k__BackingField )
  {
    v14 = this->fields.infoObject;
    if ( !v14 )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(v14, 0, 0LL);
    canStrengthObject = this->fields.canStrengthObject;
    if ( !canStrengthObject )
      goto LABEL_26;
    UnityEngine_GameObject__SetActive(canStrengthObject, 1, 0LL);
  }
  if ( !iconItem->fields._isHeroine_k__BackingField )
  {
    v20 = 0;
    v19 = !iconItem->fields._isTouchEnabled_k__BackingField;
    goto LABEL_23;
  }
  v16 = this->fields.infoObject;
  if ( !v16 || (UnityEngine_GameObject__SetActive(v16, 1, 0LL), (v17 = this->fields.canStrengthObject) == 0LL) )
LABEL_26:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v17, 0, 0LL);
  isHeroine_k__BackingField = iconItem->fields._isHeroine_k__BackingField;
  v19 = 1;
  iconItem->fields._isTouchEnabled_k__BackingField = 0;
  v20 = isHeroine_k__BackingField;
LABEL_23:
  CoinRoomCoinIconDraw__SetEnabledMask(this, v19, v20, v13);
  dragSelect = this->fields.dragSelect;
  if ( !dragSelect )
    goto LABEL_26;
  DragSelectComponent__setOverHundredNumCondensedScale(dragSelect, -1, 0LL);
  v22 = this->fields.dragSelect;
  if ( !v22 )
    goto LABEL_26;
  DragSelectComponent__Set(v22, -1, -1, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *infoObject; // x0
  UnityEngine_Component_o *infoLabel; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *selectedNumLabel; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *canStrengthObject; // x0
  UILabel_o *v17; // x20
  __int64 *v18; // x8
  System_String_o *v19; // x0

  if ( (byte_40F9A15 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, enabled);
    sub_B16FFC(&StringLiteral_3117, v7);
    sub_B16FFC(&StringLiteral_3120, v8);
    byte_40F9A15 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, enabled, 0LL);
  if ( enabled )
  {
    infoObject = this->fields.infoObject;
    if ( infoObject )
    {
      UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
      infoLabel = (UnityEngine_Component_o *)this->fields.infoLabel;
      if ( infoLabel )
      {
        v13 = UnityEngine_Component__get_gameObject(infoLabel, 0LL);
        if ( v13 )
        {
          UnityEngine_GameObject__SetActive(v13, 1, 0LL);
          selectedNumLabel = (UnityEngine_Component_o *)this->fields.selectedNumLabel;
          if ( selectedNumLabel )
          {
            v15 = UnityEngine_Component__get_gameObject(selectedNumLabel, 0LL);
            if ( v15 )
            {
              UnityEngine_GameObject__SetActive(v15, 0, 0LL);
              canStrengthObject = this->fields.canStrengthObject;
              if ( canStrengthObject )
              {
                UnityEngine_GameObject__SetActive(canStrengthObject, 0, 0LL);
                v17 = this->fields.infoLabel;
                if ( isHeroine )
                {
                  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v18 = &StringLiteral_3117;
                }
                else
                {
                  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  }
                  v18 = &StringLiteral_3120;
                }
                v19 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
                if ( v17 )
                {
                  UILabel__set_text(v17, v19, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_24:
    sub_B170D4();
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
  UIIconLabel_o *iconInfoLabel; // x0
  UILabel_o *possessionNum; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *infoLabel; // x0
  DragSelectComponent_o *dragSelect; // x0
  UnityEngine_GameObject_o *infoObject; // x0
  UnityEngine_GameObject_o *canStrengthObject; // x0
  const MethodInfo *v24; // x4
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UILabel_o *v28; // x21
  System_String_o *v29; // x0
  const MethodInfo *v30; // x3
  int32_t num_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9A12 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, iconItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_23395, v10);
    sub_B16FFC(&StringLiteral_3117, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F9A12 = 1;
  }
  if ( iconItem && mode )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      ItemIconComponent__SetItem(itemIcon, iconItem->fields._itemId_k__BackingField, -1, 0LL);
      iconInfoLabel = this->fields.iconInfoLabel;
      if ( iconInfoLabel )
      {
        UIIconLabel__Set(iconInfoLabel, iconItem->fields.iconLabelInfo, 0LL);
        possessionNum = this->fields.possessionNum;
        num_k__BackingField = iconItem->fields._num_k__BackingField;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num_k__BackingField);
        v17 = System_String__Format((System_String_o *)StringLiteral_23395, v16, 0LL);
        if ( possessionNum )
        {
          UILabel__set_text(possessionNum, v17, 0LL);
          if ( !isSelectDialog )
          {
            v18 = (UnityEngine_Component_o *)this->fields.iconInfoLabel;
            if ( !v18 )
              goto LABEL_30;
            gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
            if ( !gameObject )
              goto LABEL_30;
            UnityEngine_GameObject__SetActive(gameObject, iconItem->fields._isDisplayNumber_k__BackingField, 0LL);
          }
          infoLabel = this->fields.infoLabel;
          if ( infoLabel )
          {
            UILabel__set_text(infoLabel, (System_String_o *)StringLiteral_1, 0LL);
            dragSelect = this->fields.dragSelect;
            if ( dragSelect )
            {
              DragSelectComponent__Set(dragSelect, -1, -1, 0LL);
              infoObject = this->fields.infoObject;
              if ( infoObject )
              {
                UnityEngine_GameObject__SetActive(infoObject, 0, 0LL);
                canStrengthObject = this->fields.canStrengthObject;
                if ( canStrengthObject )
                {
                  UnityEngine_GameObject__SetActive(canStrengthObject, 0, 0LL);
                  if ( iconItem->fields._isCanStrength_k__BackingField && !isSelectDialog )
                  {
                    v25 = this->fields.infoObject;
                    if ( !v25 )
                      goto LABEL_30;
                    UnityEngine_GameObject__SetActive(v25, 0, 0LL);
                    v26 = this->fields.canStrengthObject;
                    if ( !v26 )
                      goto LABEL_30;
                    UnityEngine_GameObject__SetActive(v26, 1, 0LL);
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
                      v30);
                    return;
                  }
                  v27 = this->fields.infoObject;
                  if ( v27 )
                  {
                    UnityEngine_GameObject__SetActive(v27, 1, 0LL);
                    iconItem->fields._isTouchEnabled_k__BackingField = 0;
                    v28 = this->fields.infoLabel;
                    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !LocalizationManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    }
                    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3117, 0LL);
                    if ( v28 )
                    {
                      UILabel__set_text(v28, v29, 0LL);
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
    sub_B170D4();
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
  struct UICommonButton_o *v13; // x0
  struct UICommonButton_o *v14; // x0
  UnityEngine_GameObject_o *infoObject; // x0
  UnityEngine_GameObject_o *canStrengthObject; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *selectedNumLabel; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  DragSelectComponent_o *dragSelect; // x0
  DragSelectComponent_o *v24; // x0
  int32_t selectedNum_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9A13 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, iconItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1, v10);
    sub_B16FFC(&StringLiteral_3119, v11);
    byte_40F9A13 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v13 = this->fields.baseButton;
    if ( !v13 )
      goto LABEL_26;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._5_set_isEnabled.method)(
      v13,
      1LL,
      v13->klass->vtable._6_OnInit.methodPtr);
    v14 = this->fields.baseButton;
    if ( !v14 )
      goto LABEL_26;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v14->klass->vtable._14_SetState.method)(
      v14,
      0LL,
      1LL,
      v14->klass->vtable._15_OnPress.methodPtr);
  }
  if ( !num )
    return;
  if ( !iconItem )
LABEL_26:
    sub_B170D4();
  if ( iconItem->fields._selectedNum_k__BackingField >= 1 )
  {
    infoObject = this->fields.infoObject;
    if ( infoObject )
    {
      UnityEngine_GameObject__SetActive(infoObject, 1, 0LL);
      canStrengthObject = this->fields.canStrengthObject;
      if ( canStrengthObject )
      {
        UnityEngine_GameObject__SetActive(canStrengthObject, 0, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3119, 0LL);
        if ( this->fields.selectedNumLabel )
        {
          v18 = v17;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.selectedNumLabel,
                         0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            selectedNumLabel = this->fields.selectedNumLabel;
            selectedNum_k__BackingField = iconItem->fields._selectedNum_k__BackingField;
            v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectedNum_k__BackingField);
            v22 = System_String__Format(v18, v21, 0LL);
            if ( selectedNumLabel )
            {
              UILabel__set_text(selectedNumLabel, v22, 0LL);
              goto LABEL_22;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
LABEL_22:
  dragSelect = this->fields.dragSelect;
  if ( !dragSelect )
    goto LABEL_26;
  DragSelectComponent__setOverHundredNumCondensedScale(dragSelect, -1, 0LL);
  v24 = this->fields.dragSelect;
  if ( !v24 )
    goto LABEL_26;
  DragSelectComponent__Set(v24, iconItem->fields.selectNum, -1, 0LL);
}
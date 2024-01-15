void __fastcall ServantCostumeListViewItemDraw___ctor(ServantCostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantCostumeListViewItemDraw__SetButtonState(
        ServantCostumeListViewItemDraw_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  struct UICommonButton_o *v6; // x0
  _BOOL4 v7; // w20
  UITouchPress_o *touchPress; // x0
  struct UICommonButton_o *v9; // x0

  if ( (byte_40FCFE5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isEnabled);
    byte_40FCFE5 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    v6 = this->fields.baseButton;
    if ( !v6
      || (v7 = isEnabled,
          ((void (__fastcall *)(struct UICommonButton_o *, _BOOL4, Il2CppMethodPointer))v6->klass->vtable._5_set_isEnabled.method)(
            v6,
            v7,
            v6->klass->vtable._6_OnInit.methodPtr),
          (touchPress = this->fields.touchPress) == 0LL)
      || (UITouchPress__set_IsEnabled(touchPress, v7, 0LL), (v9 = this->fields.baseButton) == 0LL) )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v9->klass->vtable._14_SetState.method)(
      v9,
      0LL,
      1LL,
      v9->klass->vtable._15_OnPress.methodPtr);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetInput(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( item )
  {
    ServantCostumeListViewItemDraw__SetButtonState(this, 1, method);
    ServantCostumeListViewItemDraw__SetMaskLabelText(this, item, v5);
    ServantCostumeListViewItemDraw__SetStatusLabel(this, item, v6);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetItem(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UserServantEntity_o *UserSvtEntity; // x0
  ServantFaceIconComponent_o *servantFaceIcon; // x21
  UserServantEntity_o *v9; // x0
  const MethodInfo *v10; // x4
  ServantLeaderInfo_o *NotHaveSvtData; // x0
  const MethodInfo *v12; // x6
  UIIconLabel_o *info2IconLabel; // x0
  const MethodInfo *v14; // x2
  ServantCostumeListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  ServantCostumeListViewItemDraw_o *v17; // x0
  const MethodInfo *v18; // x3
  UISprite_o *maskSprite; // x21
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2

  if ( item )
  {
    ServantCostumeListViewItemDraw__SetSpriteActive(this, this->fields.removeImg, item->fields.isBaseSvt, method);
    if ( mode )
    {
      UserSvtEntity = ServantCostumeListViewItem__get_UserSvtEntity(item, 0LL);
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( UserSvtEntity )
      {
        v9 = ServantCostumeListViewItem__get_UserSvtEntity(item, 0LL);
        if ( !servantFaceIcon )
          goto LABEL_11;
        ServantFaceIconComponent__Set_30631556(
          servantFaceIcon,
          v9,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          v10);
      }
      else
      {
        NotHaveSvtData = ServantCostumeListViewItem__get_NotHaveSvtData(item, 0LL);
        if ( !servantFaceIcon )
          goto LABEL_11;
        ServantFaceIconComponent__Set_30632248(
          servantFaceIcon,
          NotHaveSvtData,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0,
          0,
          v12);
      }
      info2IconLabel = this->fields.info2IconLabel;
      if ( info2IconLabel )
      {
        UIIconLabel__Set(info2IconLabel, item->fields.iconLabelInfo2, 0LL);
        ServantCostumeListViewItemDraw__SetButtonState(this, 1, v14);
        ServantCostumeListViewItemDraw__SetSpriteActive(v15, this->fields.lockImg, item->fields.isLock, v16);
        ServantCostumeListViewItemDraw__SetSpriteActive(v17, this->fields.choiceImg, item->fields.isChoice, v18);
        maskSprite = this->fields.maskSprite;
        CanNotSelect = ServantCostumeListViewItem__get_IsCanNotSelect(item, 0LL);
        ServantCostumeListViewItemDraw__SetSpriteActive(
          (ServantCostumeListViewItemDraw_o *)CanNotSelect,
          maskSprite,
          CanNotSelect,
          v21);
        ServantCostumeListViewItemDraw__SetPartyIcon(this, item->fields.isParty, v22);
        ServantCostumeListViewItemDraw__SetMaskLabelText(this, item, v23);
        ServantCostumeListViewItemDraw__SetStatusLabel(this, item, v24);
        ServantCostumeListViewItemDraw__SetNonColorStatusLabel(this, item, v25);
        return;
      }
LABEL_11:
      sub_B170D4();
    }
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetMaskLabelText(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *maskLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  bool CanNotSelect; // w0
  struct UILabel_o *v13; // x19
  __int64 *v14; // x8
  UILabel_o *v15; // x0
  System_String_o *v16; // x1
  System_String_o *v17; // x0

  if ( (byte_40FCFE7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_9317/*"NOT_SELECT_LET_GO"*/, v5);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    sub_B16FFC(&StringLiteral_8629/*"MATERIAL_FIND_SERVANT"*/, v8);
    sub_B16FFC(&StringLiteral_9315/*"NOT_SELECT_COSTUME"*/, v9);
    byte_40FCFE7 = 1;
  }
  if ( !item )
    return;
  maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject(maskLabel, 0LL);
  CanNotSelect = ServantCostumeListViewItem__get_IsCanNotSelect(item, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive(gameObject, CanNotSelect, 0LL);
  if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, 0LL) )
  {
    v15 = this->fields.maskLabel;
    if ( v15 )
    {
      v16 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_32:
      UILabel__set_text(v15, v16, 0LL);
      return;
    }
LABEL_33:
    sub_B170D4();
  }
  if ( !ServantCostumeListViewItem__get_UserSvtEntity(item, 0LL) )
  {
    v13 = this->fields.maskLabel;
    if ( item->fields.isLetgo )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_9317/*"NOT_SELECT_LET_GO"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_8629/*"MATERIAL_FIND_SERVANT"*/;
    }
LABEL_30:
    v17 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
    if ( v13 )
    {
      v16 = v17;
      v15 = v13;
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( ServantCostumeListViewItem__get_IsHeroineLeave(item, 0LL) )
  {
    v13 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
    goto LABEL_30;
  }
  if ( !item->fields.isReleaseItemHaving )
  {
    v13 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = &StringLiteral_9315/*"NOT_SELECT_COSTUME"*/;
    goto LABEL_30;
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetNonColorStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *nonColorStatusLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  bool v9; // w1
  UILabel_o *v10; // x0
  System_String_o *v11; // x1
  struct UILabel_o *v12; // x19
  System_String_o *v13; // x0

  if ( (byte_40FCFE9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_9313/*"NOT_RELEASE_COSTUME"*/, v5);
    sub_B16FFC(&StringLiteral_1/*""*/, v6);
    byte_40FCFE9 = 1;
  }
  if ( item )
  {
    nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
    if ( !nonColorStatusLabel )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject(nonColorStatusLabel, 0LL);
    if ( !item->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(item, 0LL)
      || item->fields.isClearAllCond )
    {
      v9 = 0;
      if ( !gameObject )
        goto LABEL_25;
    }
    else
    {
      v9 = !item->fields.isHavingAllReleasedCostume;
      if ( !gameObject )
        goto LABEL_25;
    }
    UnityEngine_GameObject__SetActive(gameObject, v9, 0LL);
    if ( !item->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(item, 0LL)
      || item->fields.isClearAllCond
      || item->fields.isHavingAllReleasedCostume
      || item->fields.isOpenEventCostume )
    {
      v10 = this->fields.nonColorStatusLabel;
      if ( v10 )
      {
        v11 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_16:
        UILabel__set_text(v10, v11, 0LL);
        return;
      }
    }
    else
    {
      v12 = this->fields.nonColorStatusLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_9313/*"NOT_RELEASE_COSTUME"*/, 0LL);
      if ( v12 )
      {
        v11 = v13;
        v10 = v12;
        goto LABEL_16;
      }
    }
LABEL_25:
    sub_B170D4();
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetPartyIcon(
        ServantCostumeListViewItemDraw_o *this,
        bool isShow,
        const MethodInfo *method)
{
  FlashingIconComponent_o *partyIcon; // x0

  partyIcon = this->fields.partyIcon;
  if ( !partyIcon )
    sub_B170D4();
  if ( isShow )
    FlashingIconComponent__Set(partyIcon, 0LL);
  else
    FlashingIconComponent__Clear(partyIcon, 0LL);
}


void __fastcall ServantCostumeListViewItemDraw__SetSpriteActive(
        ServantCostumeListViewItemDraw_o *this,
        UISprite_o *sprite,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FCFE6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, sprite);
    byte_40FCFE6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL) )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *statusTxtLabel; // x0
  UILabel_o *v14; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  __int64 *v18; // x8
  UILabel_o *v19; // x20
  System_String_o *v20; // x0
  UILabel_o *v21; // x0
  UILabel_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x19
  bool IsNullOrEmpty; // w0
  UnityEngine_Color_o v28; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_40FCFE8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_364/*"#FFFFFF"*/, v5);
    sub_B16FFC(&StringLiteral_361/*"#FEEF99"*/, v6);
    sub_B16FFC(&StringLiteral_363/*"#FFFF00"*/, v7);
    sub_B16FFC(&StringLiteral_5568/*"EVENT_COMBINE_COSTUME_LF"*/, v8);
    sub_B16FFC(&StringLiteral_3380/*"COSTUME_CAN_RELEASE"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    sub_B16FFC(&StringLiteral_357/*"#E1A545"*/, v11);
    sub_B16FFC(&StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, v12);
    byte_40FCFE8 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v28.fields.r = 0LL;
  *(_QWORD *)&v28.fields.b = 0LL;
  if ( item )
  {
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( !statusTxtLabel )
      goto LABEL_26;
    UILabel__set_text(statusTxtLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, 0LL) )
    {
      if ( item->fields.isOpenEventCostume )
      {
        v14 = this->fields.statusTxtLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5568/*"EVENT_COMBINE_COSTUME_LF"*/, 0LL);
        v16 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5560/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
        v17 = System_String__Format(v15, v16, 0LL);
        if ( !v14 )
          goto LABEL_26;
        UILabel__set_text(v14, v17, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_357/*"#E1A545"*/, &v28, 0LL);
        v18 = &StringLiteral_361/*"#FEEF99"*/;
LABEL_18:
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)*v18, &color, 0LL);
        v21 = this->fields.statusTxtLabel;
        if ( !v21 )
          goto LABEL_26;
        UILabel__set_gradientBottom(v21, v28, 0LL);
        v22 = this->fields.statusTxtLabel;
        if ( !v22 )
          goto LABEL_26;
        UILabel__set_gradientTop(v22, color, 0LL);
        goto LABEL_21;
      }
      if ( item->fields.isClearAllCond )
      {
        v19 = this->fields.statusTxtLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"COSTUME_CAN_RELEASE"*/, 0LL);
        if ( !v19 )
          goto LABEL_26;
        UILabel__set_text(v19, v20, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_364/*"#FFFFFF"*/, &v28, 0LL);
        v18 = &StringLiteral_363/*"#FFFF00"*/;
        goto LABEL_18;
      }
    }
LABEL_21:
    v23 = (UnityEngine_Component_o *)this->fields.statusTxtLabel;
    if ( v23 )
    {
      gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
      v25 = this->fields.statusTxtLabel;
      if ( v25 )
      {
        v26 = gameObject;
        IsNullOrEmpty = System_String__IsNullOrEmpty(v25->fields.mText, 0LL);
        if ( v26 )
        {
          UnityEngine_GameObject__SetActive(v26, !IsNullOrEmpty, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_B170D4();
  }
}
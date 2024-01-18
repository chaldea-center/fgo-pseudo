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
  __int64 v6; // x1
  UITouchPress_o *touchPress; // x0
  _BOOL4 v8; // w20

  if ( (byte_418AAA7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isEnabled);
    byte_418AAA7 = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
  {
    touchPress = (UITouchPress_o *)this->fields.baseButton;
    if ( !touchPress
      || (v8 = isEnabled,
          ((void (__fastcall *)(UITouchPress_o *, _BOOL4, void *))touchPress->klass[1]._1.namespaze)(
            touchPress,
            v8,
            touchPress->klass[1]._1.byval_arg.data),
          (touchPress = this->fields.touchPress) == 0LL)
      || (UITouchPress__set_IsEnabled(touchPress, v8, 0LL),
          (touchPress = (UITouchPress_o *)this->fields.baseButton) == 0LL) )
    {
      sub_B2C434(touchPress, v6);
    }
    ((void (__fastcall *)(UITouchPress_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))touchPress->klass[1]._1.implementedInterfaces)(
      touchPress,
      0LL,
      1LL,
      touchPress->klass[1]._1.interfaceOffsets);
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
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UserServantEntity_o *userServantEntity; // x1
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x6
  struct ServantCostumeItemInfo_o *servantData; // x8
  const MethodInfo *v12; // x2
  ServantCostumeListViewItemDraw_o *v13; // x0
  const MethodInfo *v14; // x3
  ServantCostumeListViewItemDraw_o *v15; // x0
  const MethodInfo *v16; // x3
  UISprite_o *maskSprite; // x21
  const MethodInfo *v18; // x1
  _BOOL8 CanNotSelect; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2

  if ( item )
  {
    ServantCostumeListViewItemDraw__SetSpriteActive(this, this->fields.removeImg, item->fields.isBaseSvt, method);
    if ( mode )
    {
      servantData = item->fields.servantData;
      if ( !servantData )
        goto LABEL_12;
      userServantEntity = servantData->fields.userServantEntity;
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( userServantEntity )
      {
        if ( !servantFaceIcon )
          goto LABEL_12;
        ServantFaceIconComponent__Set_30719352(
          servantFaceIcon,
          userServantEntity,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          v9);
      }
      else
      {
        if ( !servantFaceIcon )
          goto LABEL_12;
        ServantFaceIconComponent__Set_30720044(
          servantFaceIcon,
          servantData->fields.notHaveServantEntity,
          item->fields.iconLabelInfo1,
          item->fields.iconLabelInfo2,
          0,
          0,
          v10);
      }
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.info2IconLabel;
      if ( servantFaceIcon )
      {
        UIIconLabel__Set((UIIconLabel_o *)servantFaceIcon, item->fields.iconLabelInfo2, 0LL);
        ServantCostumeListViewItemDraw__SetButtonState(this, 1, v12);
        ServantCostumeListViewItemDraw__SetSpriteActive(v13, this->fields.lockImg, item->fields.isLock, v14);
        ServantCostumeListViewItemDraw__SetSpriteActive(v15, this->fields.choiceImg, item->fields.isChoice, v16);
        maskSprite = this->fields.maskSprite;
        CanNotSelect = ServantCostumeListViewItem__get_IsCanNotSelect(item, v18);
        ServantCostumeListViewItemDraw__SetSpriteActive(
          (ServantCostumeListViewItemDraw_o *)CanNotSelect,
          maskSprite,
          CanNotSelect,
          v20);
        ServantCostumeListViewItemDraw__SetPartyIcon(this, item->fields.isParty, v21);
        ServantCostumeListViewItemDraw__SetMaskLabelText(this, item, v22);
        ServantCostumeListViewItemDraw__SetStatusLabel(this, item, v23);
        ServantCostumeListViewItemDraw__SetNonColorStatusLabel(this, item, v24);
        return;
      }
LABEL_12:
      sub_B2C434(servantFaceIcon, userServantEntity);
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
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UILabel_o *v15; // x19
  __int64 *v16; // x8
  System_String_o *v17; // x1

  if ( (byte_418AAA9 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_9347/*"NOT_SELECT_LET_GO"*/, v5);
    sub_B2C35C(&StringLiteral_11620/*"SELECT_CANNOT"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    sub_B2C35C(&StringLiteral_8658/*"MATERIAL_FIND_SERVANT"*/, v8);
    sub_B2C35C(&StringLiteral_9345/*"NOT_SELECT_COSTUME"*/, v9);
    byte_418AAA9 = 1;
  }
  if ( !item )
    return;
  maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_34;
  gameObject = UnityEngine_Component__get_gameObject(maskLabel, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v12);
  if ( !gameObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLabel & 1, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v13);
  if ( ((unsigned __int8)maskLabel & 1) == 0 )
  {
    maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
    if ( maskLabel )
    {
      v17 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_33:
      UILabel__set_text((UILabel_o *)maskLabel, v17, 0LL);
      return;
    }
LABEL_34:
    sub_B2C434(maskLabel, item);
  }
  servantData = item->fields.servantData;
  if ( !servantData )
    goto LABEL_34;
  if ( !servantData->fields.userServantEntity )
  {
    v15 = this->fields.maskLabel;
    if ( item->fields.isLetgo )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_9347/*"NOT_SELECT_LET_GO"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_8658/*"MATERIAL_FIND_SERVANT"*/;
    }
LABEL_31:
    maskLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v16, 0LL);
    if ( v15 )
    {
      v17 = (System_String_o *)maskLabel;
      maskLabel = (UnityEngine_Component_o *)v15;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  if ( ServantCostumeListViewItem__get_IsHeroineLeave(item, (const MethodInfo *)item) )
  {
    v15 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
    goto LABEL_31;
  }
  if ( !item->fields.isReleaseItemHaving )
  {
    v15 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_9345/*"NOT_SELECT_COSTUME"*/;
    goto LABEL_31;
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetNonColorStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  ServantCostumeListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *nonColorStatusLabel; // x0
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *v9; // x21
  System_String_o *v10; // x1
  struct UILabel_o *v11; // x19

  v3 = item;
  if ( (byte_418AAAB & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_9343/*"NOT_RELEASE_COSTUME"*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_418AAAB = 1;
  }
  if ( v3 )
  {
    nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
    if ( !nonColorStatusLabel )
      goto LABEL_25;
    nonColorStatusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nonColorStatusLabel, 0LL);
    v9 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    if ( !v3->fields.isReleaseItemHaving
      || (nonColorStatusLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(v3, v8),
          ((unsigned __int8)nonColorStatusLabel & 1) != 0)
      || v3->fields.isClearAllCond )
    {
      item = 0LL;
      if ( !v9 )
        goto LABEL_25;
    }
    else
    {
      item = (ServantCostumeListViewItem_o *)!v3->fields.isHavingAllReleasedCostume;
      if ( !v9 )
        goto LABEL_25;
    }
    UnityEngine_GameObject__SetActive(v9, (bool)item, 0LL);
    if ( !v3->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(v3, (const MethodInfo *)item)
      || v3->fields.isClearAllCond
      || v3->fields.isHavingAllReleasedCostume
      || v3->fields.isOpenEventCostume )
    {
      nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
      if ( nonColorStatusLabel )
      {
        v10 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_16:
        UILabel__set_text((UILabel_o *)nonColorStatusLabel, v10, 0LL);
        return;
      }
    }
    else
    {
      v11 = this->fields.nonColorStatusLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      nonColorStatusLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9343/*"NOT_RELEASE_COSTUME"*/,
                                                         0LL);
      if ( v11 )
      {
        v10 = (System_String_o *)nonColorStatusLabel;
        nonColorStatusLabel = (UnityEngine_Component_o *)v11;
        goto LABEL_16;
      }
    }
LABEL_25:
    sub_B2C434(nonColorStatusLabel, item);
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
    sub_B2C434(0LL, isShow);
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
  __int64 v7; // x1

  if ( (byte_418AAA8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, sprite);
    byte_418AAA8 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !sprite || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sprite, 0LL)) == 0LL )
      sub_B2C434(gameObject, v7);
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
  const MethodInfo *v14; // x1
  UILabel_o *v15; // x20
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  __int64 *v18; // x8
  UILabel_o *v19; // x20
  struct UILabel_o *v20; // x8
  UnityEngine_GameObject_o *v21; // x19
  UnityEngine_Color_o v22; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_418AAAA & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_365/*"#FFFFFF"*/, v5);
    sub_B2C35C(&StringLiteral_362/*"#FEEF99"*/, v6);
    sub_B2C35C(&StringLiteral_364/*"#FFFF00"*/, v7);
    sub_B2C35C(&StringLiteral_5583/*"EVENT_COMBINE_COSTUME_LF"*/, v8);
    sub_B2C35C(&StringLiteral_3394/*"COSTUME_CAN_RELEASE"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_358/*"#E1A545"*/, v11);
    sub_B2C35C(&StringLiteral_5575/*"EVENT_COMBINE_COSTUME_ITEM"*/, v12);
    byte_418AAAA = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v22.fields.r = 0LL;
  *(_QWORD *)&v22.fields.b = 0LL;
  if ( item )
  {
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( !statusTxtLabel )
      goto LABEL_26;
    UILabel__set_text(statusTxtLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, v14) )
    {
      if ( item->fields.isOpenEventCostume )
      {
        v15 = this->fields.statusTxtLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5583/*"EVENT_COMBINE_COSTUME_LF"*/, 0LL);
        v17 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5575/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
        statusTxtLabel = (UILabel_o *)System_String__Format(v16, v17, 0LL);
        if ( !v15 )
          goto LABEL_26;
        UILabel__set_text(v15, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_358/*"#E1A545"*/, &v22, 0LL);
        v18 = &StringLiteral_362/*"#FEEF99"*/;
LABEL_18:
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)*v18, &color, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_26;
        UILabel__set_gradientBottom(statusTxtLabel, v22, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_26;
        UILabel__set_gradientTop(statusTxtLabel, color, 0LL);
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
        statusTxtLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3394/*"COSTUME_CAN_RELEASE"*/, 0LL);
        if ( !v19 )
          goto LABEL_26;
        UILabel__set_text(v19, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_365/*"#FFFFFF"*/, &v22, 0LL);
        v18 = &StringLiteral_364/*"#FFFF00"*/;
        goto LABEL_18;
      }
    }
LABEL_21:
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( statusTxtLabel )
    {
      statusTxtLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)statusTxtLabel,
                                      0LL);
      v20 = this->fields.statusTxtLabel;
      if ( v20 )
      {
        v21 = (UnityEngine_GameObject_o *)statusTxtLabel;
        statusTxtLabel = (UILabel_o *)System_String__IsNullOrEmpty(v20->fields.mText, 0LL);
        if ( v21 )
        {
          UnityEngine_GameObject__SetActive(v21, ((unsigned __int8)statusTxtLabel & 1) == 0, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_B2C434(statusTxtLabel, item);
  }
}
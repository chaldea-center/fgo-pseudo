void __fastcall ServantCostumeListViewItemDraw___ctor(ServantCostumeListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantCostumeListViewItemDraw__SetButtonState(
        ServantCostumeListViewItemDraw_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *baseButton; // x21
  __int64 v7; // x1
  UITouchPress_o *touchPress; // x0
  _BOOL4 v9; // w20

  if ( (byte_42EB8EE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnabled, (_DWORD)method, v3);
    byte_42EB8EE = 1;
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
      || (v9 = isEnabled,
          ((void (__fastcall *)(UITouchPress_o *, _BOOL4, void *))touchPress->klass[1]._1.namespaze)(
            touchPress,
            v9,
            touchPress->klass[1]._1.byval_arg.data),
          (touchPress = this->fields.touchPress) == 0LL)
      || (UITouchPress__set_IsEnabled(touchPress, v9, 0LL),
          (touchPress = (UITouchPress_o *)this->fields.baseButton) == 0LL) )
    {
      sub_B5D69C(touchPress, v7);
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
        ServantFaceIconComponent__Set_30775392(
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
        ServantFaceIconComponent__Set_30776084(
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
      sub_B5D69C(servantFaceIcon, userServantEntity);
    }
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetMaskLabelText(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  UnityEngine_Component_o *maskLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1
  struct ServantCostumeItemInfo_o *servantData; // x8
  struct UILabel_o *v26; // x19
  __int64 *v27; // x8
  System_String_o *v28; // x1

  if ( (byte_42EB8F0 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_9443/*"NOT_SELECT_LET_GO"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8748/*"MATERIAL_FIND_SERVANT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9441/*"NOT_SELECT_COSTUME"*/, v18, v19, v20);
    byte_42EB8F0 = 1;
  }
  if ( !item )
    return;
  maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
  if ( !maskLabel )
    goto LABEL_34;
  gameObject = UnityEngine_Component__get_gameObject(maskLabel, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v23);
  if ( !gameObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)maskLabel & 1, 0LL);
  maskLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(item, v24);
  if ( ((unsigned __int8)maskLabel & 1) == 0 )
  {
    maskLabel = (UnityEngine_Component_o *)this->fields.maskLabel;
    if ( maskLabel )
    {
      v28 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_33:
      UILabel__set_text((UILabel_o *)maskLabel, v28, 0LL);
      return;
    }
LABEL_34:
    sub_B5D69C(maskLabel, item);
  }
  servantData = item->fields.servantData;
  if ( !servantData )
    goto LABEL_34;
  if ( !servantData->fields.userServantEntity )
  {
    v26 = this->fields.maskLabel;
    if ( item->fields.isLetgo )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = &StringLiteral_9443/*"NOT_SELECT_LET_GO"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v27 = &StringLiteral_8748/*"MATERIAL_FIND_SERVANT"*/;
    }
LABEL_31:
    maskLabel = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v27, 0LL);
    if ( v26 )
    {
      v28 = (System_String_o *)maskLabel;
      maskLabel = (UnityEngine_Component_o *)v26;
      goto LABEL_33;
    }
    goto LABEL_34;
  }
  if ( ServantCostumeListViewItem__get_IsHeroineLeave(item, (const MethodInfo *)item) )
  {
    v26 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    goto LABEL_31;
  }
  if ( !item->fields.isReleaseItemHaving )
  {
    v26 = this->fields.maskLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v27 = &StringLiteral_9441/*"NOT_SELECT_COSTUME"*/;
    goto LABEL_31;
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetNonColorStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantCostumeListViewItem_o *v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Component_o *nonColorStatusLabel; // x0
  const MethodInfo *v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  System_String_o *v15; // x1
  struct UILabel_o *v16; // x19

  v4 = item;
  if ( (byte_42EB8F2 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_9439/*"NOT_RELEASE_COSTUME"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EB8F2 = 1;
  }
  if ( v4 )
  {
    nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
    if ( !nonColorStatusLabel )
      goto LABEL_25;
    nonColorStatusLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(nonColorStatusLabel, 0LL);
    v14 = (UnityEngine_GameObject_o *)nonColorStatusLabel;
    if ( !v4->fields.isReleaseItemHaving
      || (nonColorStatusLabel = (UnityEngine_Component_o *)ServantCostumeListViewItem__get_IsCanNotSelect(v4, v13),
          ((unsigned __int8)nonColorStatusLabel & 1) != 0)
      || v4->fields.isClearAllCond )
    {
      item = 0LL;
      if ( !v14 )
        goto LABEL_25;
    }
    else
    {
      item = (ServantCostumeListViewItem_o *)!v4->fields.isHavingAllReleasedCostume;
      if ( !v14 )
        goto LABEL_25;
    }
    UnityEngine_GameObject__SetActive(v14, (bool)item, 0LL);
    if ( !v4->fields.isReleaseItemHaving
      || ServantCostumeListViewItem__get_IsCanNotSelect(v4, (const MethodInfo *)item)
      || v4->fields.isClearAllCond
      || v4->fields.isHavingAllReleasedCostume
      || v4->fields.isOpenEventCostume )
    {
      nonColorStatusLabel = (UnityEngine_Component_o *)this->fields.nonColorStatusLabel;
      if ( nonColorStatusLabel )
      {
        v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_16:
        UILabel__set_text((UILabel_o *)nonColorStatusLabel, v15, 0LL);
        return;
      }
    }
    else
    {
      v16 = this->fields.nonColorStatusLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      nonColorStatusLabel = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_9439/*"NOT_RELEASE_COSTUME"*/,
                                                         0LL);
      if ( v16 )
      {
        v15 = (System_String_o *)nonColorStatusLabel;
        nonColorStatusLabel = (UnityEngine_Component_o *)v16;
        goto LABEL_16;
      }
    }
LABEL_25:
    sub_B5D69C(nonColorStatusLabel, item);
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
    sub_B5D69C(0LL, isShow);
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

  if ( (byte_42EB8EF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)sprite, isActive, method);
    byte_42EB8EF = 1;
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
      sub_B5D69C(gameObject, v7);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


void __fastcall ServantCostumeListViewItemDraw__SetStatusLabel(
        ServantCostumeListViewItemDraw_o *this,
        ServantCostumeListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UILabel_o *statusTxtLabel; // x0
  const MethodInfo *v31; // x1
  UILabel_o *v32; // x20
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  __int64 *v35; // x8
  UILabel_o *v36; // x20
  struct UILabel_o *v37; // x8
  UnityEngine_GameObject_o *v38; // x19
  UnityEngine_Color_o v39; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_42EB8F1 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_371/*"#FFFFFF"*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_368/*"#FEEF99"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_370/*"#FFFF00"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5660/*"EVENT_COMBINE_COSTUME_LF"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3460/*"COSTUME_CAN_RELEASE"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_364/*"#E1A545"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, v27, v28, v29);
    byte_42EB8F1 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  *(_QWORD *)&v39.fields.r = 0LL;
  *(_QWORD *)&v39.fields.b = 0LL;
  if ( item )
  {
    statusTxtLabel = this->fields.statusTxtLabel;
    if ( !statusTxtLabel )
      goto LABEL_26;
    UILabel__set_text(statusTxtLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !ServantCostumeListViewItem__get_IsCanNotSelect(item, v31) )
    {
      if ( item->fields.isOpenEventCostume )
      {
        v32 = this->fields.statusTxtLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_COMBINE_COSTUME_LF"*/, 0LL);
        v34 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_5652/*"EVENT_COMBINE_COSTUME_ITEM"*/, 0LL);
        statusTxtLabel = (UILabel_o *)System_String__Format(v33, v34, 0LL);
        if ( !v32 )
          goto LABEL_26;
        UILabel__set_text(v32, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_364/*"#E1A545"*/, &v39, 0LL);
        v35 = &StringLiteral_368/*"#FEEF99"*/;
LABEL_18:
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)*v35, &color, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_26;
        UILabel__set_gradientBottom(statusTxtLabel, v39, 0LL);
        statusTxtLabel = this->fields.statusTxtLabel;
        if ( !statusTxtLabel )
          goto LABEL_26;
        UILabel__set_gradientTop(statusTxtLabel, color, 0LL);
        goto LABEL_21;
      }
      if ( item->fields.isClearAllCond )
      {
        v36 = this->fields.statusTxtLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        statusTxtLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3460/*"COSTUME_CAN_RELEASE"*/, 0LL);
        if ( !v36 )
          goto LABEL_26;
        UILabel__set_text(v36, (System_String_o *)statusTxtLabel, 0LL);
        UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_371/*"#FFFFFF"*/, &v39, 0LL);
        v35 = &StringLiteral_370/*"#FFFF00"*/;
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
      v37 = this->fields.statusTxtLabel;
      if ( v37 )
      {
        v38 = (UnityEngine_GameObject_o *)statusTxtLabel;
        statusTxtLabel = (UILabel_o *)System_String__IsNullOrEmpty(v37->fields.mText, 0LL);
        if ( v38 )
        {
          UnityEngine_GameObject__SetActive(v38, ((unsigned __int8)statusTxtLabel & 1) == 0, 0LL);
          return;
        }
      }
    }
LABEL_26:
    sub_B5D69C(statusTxtLabel, item);
  }
}
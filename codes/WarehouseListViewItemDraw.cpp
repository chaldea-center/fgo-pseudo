void __fastcall WarehouseListViewItemDraw___ctor(WarehouseListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItemDraw__SetDisp(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  _BOOL4 v4; // w21
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL4 IsSelect; // w0
  UnityEngine_Object_o *lockSprite; // x23
  _BOOL4 v11; // w22
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *choiceSprite; // x23
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *friendShipSprite; // x23
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Object_o *chocolateSprite; // x23
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *pushSprite; // x23
  UnityEngine_Component_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *materialTdSprite; // x23
  UnityEngine_Component_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UISprite_o *v30; // x23
  ServantFaceIconComponent_o *v31; // x0
  struct UILabel_o *warningLabel; // x8
  bool IsNullOrEmpty; // w0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  bool v36; // w1
  DragSelectComponent_o *dragSelect; // x0
  DragSelectComponent_o *v38; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v4 = isSelectEnable;
  if ( (byte_40FA99E & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, v8);
    byte_40FA99E = 1;
  }
  WarehouseListViewItemDraw__SetWarning(this, item, (const MethodInfo *)isSelectEnable);
  if ( !item )
    goto LABEL_66;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  v11 = IsSelect;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !v12 )
      goto LABEL_66;
    gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(gameObject, item->fields.isSwapLock != item->fields.isLock, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !v15 )
      goto LABEL_66;
    v16 = UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !v16 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v16, item->fields.isSwapChoice != item->fields.isChoice, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    v18 = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !v18 )
      goto LABEL_66;
    v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !v19 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v19, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    v21 = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !v21 )
      goto LABEL_66;
    v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !v22 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v22, item->fields.isChocolateSvtEquip, 0LL);
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    v24 = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !v24 )
      goto LABEL_66;
    v25 = UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !v25 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v25, item->fields.isPush, 0LL);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_66;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v28 = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !v28 )
      goto LABEL_66;
    v29 = UnityEngine_Component__get_gameObject(v28, 0LL);
    if ( !v29 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v29, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v30 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v30, (System_String_o *)StringLiteral_21736/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        v31 = this->fields.servantFaceIcon;
        if ( !v31 )
          goto LABEL_66;
        v40.fields.x = 0.65;
        v40.fields.y = 1.0;
        v40.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale(v31, v40, 0LL);
      }
    }
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_66;
  IsNullOrEmpty = System_String__IsNullOrEmpty(warningLabel->fields.mText, 0LL);
  if ( (v11 || v4) && IsNullOrEmpty && !item->fields.isFortification )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( maskSprite )
    {
      v35 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
      if ( v35 )
      {
        v36 = 0;
        goto LABEL_60;
      }
    }
LABEL_66:
    sub_B170D4();
  }
  v34 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v34 )
    goto LABEL_66;
  v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
  if ( !v35 )
    goto LABEL_66;
  v36 = 1;
LABEL_60:
  UnityEngine_GameObject__SetActive(v35, v36, 0LL);
  dragSelect = this->fields.dragSelect;
  if ( !dragSelect )
    goto LABEL_66;
  DragSelectComponent__setOverHundredNumCondensedScale(dragSelect, -1, 0LL);
  v38 = this->fields.dragSelect;
  if ( !v38 )
    goto LABEL_66;
  DragSelectComponent__Set(v38, item->fields.selectNum, item->fields.dragSelectNum, 0LL);
}


void __fastcall WarehouseListViewItemDraw__SetInput(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v8; // x3
  struct UICommonButton_o *v9; // x0
  struct UICommonButton_o *v10; // x0

  if ( (byte_40FA99D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40FA99D = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v9 = this->fields.baseButton;
    if ( !v9
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v9->klass->vtable._5_set_isEnabled.method)(
            v9,
            1LL,
            v9->klass->vtable._6_OnInit.methodPtr),
          (v10 = this->fields.baseButton) == 0LL) )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v10->klass->vtable._14_SetState.method)(
      v10,
      0LL,
      1LL,
      v10->klass->vtable._15_OnPress.methodPtr);
  }
  if ( item )
    WarehouseListViewItemDraw__SetDisp(this, item, isSelectEnable, v8);
}


void __fastcall WarehouseListViewItemDraw__SetItem(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        const MethodInfo *method)
{
  __int64 v9; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x22
  FlashingIconComponent_o *v12; // x0
  bool v13; // w1
  UnityEngine_Object_o *useSprite; // x22
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseButton; // x22
  struct UICommonButton_o *v18; // x0
  struct UICommonButton_o *v19; // x0
  UnityEngine_GameObject_o *fortificationRootObj; // x0
  UILabel_o *fortificationNameLabel; // x0
  UILabel_o *fortificationDetailNameLabel; // x0
  UILabel_o *fortificationAppointmentLabel; // x0
  const MethodInfo *v24; // x3

  if ( (byte_40FA99B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40FA99B = 1;
  }
  if ( item && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_35;
    ServantFaceIconComponent__Set_30631556(
      servantFaceIcon,
      item->fields.userServantEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
    partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
    {
      v12 = this->fields.partyIcon;
      if ( item->fields.isUse )
      {
        v13 = 0;
        if ( !v12 )
          goto LABEL_35;
      }
      else
      {
        v13 = item->fields.partyIndex >= 0;
        if ( !v12 )
          goto LABEL_35;
      }
      FlashingIconComponent__Set_23222596(v12, v13, 0LL);
    }
    useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(useSprite, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Component_o *)this->fields.useSprite;
      if ( !v15 )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
      if ( !gameObject )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive(gameObject, item->fields.isUse, 0LL);
    }
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v18 = this->fields.baseButton;
      if ( !v18 )
        goto LABEL_35;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v18->klass->vtable._5_set_isEnabled.method)(
        v18,
        1LL,
        v18->klass->vtable._6_OnInit.methodPtr);
      v19 = this->fields.baseButton;
      if ( !v19 )
        goto LABEL_35;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v19->klass->vtable._14_SetState.method)(
        v19,
        0LL,
        1LL,
        v19->klass->vtable._15_OnPress.methodPtr);
    }
    fortificationRootObj = this->fields.fortificationRootObj;
    if ( fortificationRootObj )
    {
      UnityEngine_GameObject__SetActive(fortificationRootObj, 0, 0LL);
      fortificationNameLabel = this->fields.fortificationNameLabel;
      if ( fortificationNameLabel )
      {
        UILabel__set_text(fortificationNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        fortificationDetailNameLabel = this->fields.fortificationDetailNameLabel;
        if ( fortificationDetailNameLabel )
        {
          UILabel__set_text(fortificationDetailNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
          if ( fortificationAppointmentLabel )
          {
            UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            WarehouseListViewItemDraw__SetDisp(this, item, isSelectEnable, v24);
            return;
          }
        }
      }
    }
LABEL_35:
    sub_B170D4();
  }
}


void __fastcall WarehouseListViewItemDraw__SetWarning(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_String_o *v19; // x20
  __int64 *v20; // x8
  LocalizationManager_c *v21; // x0
  int32_t attribute; // w8
  UnityEngine_Object_o *warningLabel; // x21
  UILabel_o *v24; // x0
  UnityEngine_GameObject_o *fortificationRootObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *fortificationNameLabel; // x0
  UILabel_o *fortificationDetailNameLabel; // x0
  UILabel_o *fortificationAppointmentLabel; // x21
  System_String_o *v30; // x0
  UILabel_o *v31; // x0
  UILabel_o *v32; // x0
  UserServantEntity_o *userServantEntity; // x0
  ServantEntity_o *servantEntity; // x0

  if ( (byte_40FA99C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, v6);
    sub_B16FFC(&StringLiteral_11589/*"SELECT_FAVORITE"*/, v7);
    sub_B16FFC(&StringLiteral_12446/*"SUPPORT_MEMBER"*/, v8);
    sub_B16FFC(&StringLiteral_3266/*"COMMON_FATIGURE_RECOVERY"*/, v9);
    sub_B16FFC(&StringLiteral_11606/*"SELECT_PUSH"*/, v10);
    sub_B16FFC(&StringLiteral_11584/*"SELECT_CANNOT"*/, v11);
    sub_B16FFC(&StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/, v12);
    sub_B16FFC(&StringLiteral_11603/*"SELECT_PARTY"*/, v13);
    sub_B16FFC(&StringLiteral_11604/*"SELECT_PARTY_EQUIP"*/, v14);
    sub_B16FFC(&StringLiteral_12431/*"SUPPORT_EQUIP"*/, v15);
    sub_B16FFC(&StringLiteral_3265/*"COMMON_EQUIP_USED"*/, v16);
    sub_B16FFC(&StringLiteral_1/*""*/, v17);
    sub_B16FFC(&StringLiteral_11605/*"SELECT_PROTECTED_EVENT_SVT"*/, v18);
    byte_40FA99C = 1;
  }
  if ( !item )
    goto LABEL_94;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( item->fields.isPushMode )
  {
    if ( item->fields.isEnabled )
    {
      if ( !item->fields.isFatigueRecovery )
        goto LABEL_37;
LABEL_7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_3266/*"COMMON_FATIGURE_RECOVERY"*/;
      goto LABEL_36;
    }
    v21 = LocalizationManager_TypeInfo;
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_24;
      goto LABEL_22;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      goto LABEL_35;
LABEL_33:
    if ( v21->_2.cctor_finished )
      goto LABEL_35;
LABEL_34:
    j_il2cpp_runtime_class_init_0(v21);
    goto LABEL_35;
  }
  if ( item->fields.isPush )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_11606/*"SELECT_PUSH"*/;
    goto LABEL_36;
  }
  attribute = item->fields.attribute;
  if ( attribute )
  {
    if ( attribute == 2 )
    {
      v21 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_24:
        v20 = &StringLiteral_11607/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_36:
        v19 = LocalizationManager__Get((System_String_o *)*v20, 0LL);
        goto LABEL_37;
      }
LABEL_22:
      if ( !v21->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v21);
      goto LABEL_24;
    }
    v21 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_35:
      v20 = &StringLiteral_11584/*"SELECT_CANNOT"*/;
      goto LABEL_36;
    }
    goto LABEL_33;
  }
  if ( item->fields.isFavorite )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_11589/*"SELECT_FAVORITE"*/;
    goto LABEL_36;
  }
  if ( item->fields.isPartyEquip )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_11604/*"SELECT_PARTY_EQUIP"*/;
    goto LABEL_36;
  }
  if ( (item->fields.partyIndex & 0x80000000) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_11603/*"SELECT_PARTY"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUseSupport )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_12446/*"SUPPORT_MEMBER"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUseSupportEquip )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_12431/*"SUPPORT_EQUIP"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUse )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = &StringLiteral_3265/*"COMMON_EQUIP_USED"*/;
    goto LABEL_36;
  }
  if ( item->fields.isFatigueRecovery )
    goto LABEL_7;
  if ( item->fields.isFortification )
  {
    fortificationRootObj = this->fields.fortificationRootObj;
    if ( !fortificationRootObj )
      goto LABEL_94;
    gameObject = UnityEngine_GameObject__get_gameObject(fortificationRootObj, 0LL);
    if ( !gameObject )
      goto LABEL_94;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    fortificationNameLabel = this->fields.fortificationNameLabel;
    if ( !fortificationNameLabel )
      goto LABEL_94;
    UILabel__set_text(fortificationNameLabel, item->fields.fortificationName, 0LL);
    fortificationDetailNameLabel = this->fields.fortificationDetailNameLabel;
    if ( !fortificationDetailNameLabel )
      goto LABEL_94;
    UILabel__set_text(fortificationDetailNameLabel, item->fields.fortificationDetailName, 0LL);
    fortificationAppointmentLabel = this->fields.fortificationAppointmentLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6395/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
    if ( !fortificationAppointmentLabel )
      goto LABEL_94;
    UILabel__set_text(fortificationAppointmentLabel, v30, 0LL);
    v31 = this->fields.fortificationNameLabel;
    if ( !v31 )
      goto LABEL_94;
    UILabel__UpdateCondensedScaleComponent(v31, 0LL);
    v32 = this->fields.fortificationDetailNameLabel;
    if ( !v32 )
      goto LABEL_94;
    UILabel__UpdateCondensedScaleComponent(v32, 0LL);
  }
  else
  {
    userServantEntity = item->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL) )
      {
        servantEntity = item->fields.servantEntity;
        if ( !servantEntity )
          goto LABEL_94;
        if ( !ServantEntity__get_IsServantMaterialTd(servantEntity, 0LL) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v20 = &StringLiteral_11605/*"SELECT_PROTECTED_EVENT_SVT"*/;
          goto LABEL_36;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_35;
        }
        v21 = LocalizationManager_TypeInfo;
        goto LABEL_34;
      }
      v19 = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
LABEL_37:
  warningLabel = (UnityEngine_Object_o *)this->fields.warningLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warningLabel, 0LL, 0LL) )
  {
    v24 = this->fields.warningLabel;
    if ( v24 )
    {
      UILabel__set_text(v24, v19, 0LL);
      return;
    }
LABEL_94:
    sub_B170D4();
  }
}
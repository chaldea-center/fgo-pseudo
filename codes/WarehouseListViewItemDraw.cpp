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
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x1
  _BOOL4 IsSelect; // w0
  UnityEngine_Object_o *lockSprite; // x23
  _BOOL4 v11; // w22
  UnityEngine_Object_o *choiceSprite; // x23
  UnityEngine_Object_o *friendShipSprite; // x23
  UnityEngine_Object_o *chocolateSprite; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v17; // x23
  struct UILabel_o *warningLabel; // x8
  bool IsNullOrEmpty; // w0
  bool v20; // w1
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  v4 = isSelectEnable;
  if ( (byte_435270C & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_22192/*"ribbon_noblephantasmup_01"*/);
    byte_435270C = 1;
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
    gameObject = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields.isSwapLock != item->fields.isLock,
      0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)gameObject,
      item->fields.isSwapChoice != item->fields.isChoice,
      0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isChocolateSvtEquip, 0LL);
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isPush, 0LL);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !gameObject )
    goto LABEL_66;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)gameObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject )
      goto LABEL_66;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v17 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                v17,
                                                (System_String_o *)StringLiteral_22192/*"ribbon_noblephantasmup_01"*/,
                                                0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_66;
        v21.fields.x = 0.65;
        v21.fields.y = 1.0;
        v21.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v21, 0LL);
      }
    }
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_66;
  IsNullOrEmpty = System_String__IsNullOrEmpty(warningLabel->fields.mText, 0LL);
  if ( (v11 || v4) && IsNullOrEmpty && !item->fields.isFortification )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        v20 = 0;
        goto LABEL_60;
      }
    }
LABEL_66:
    sub_B7076C(gameObject, v8);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_66;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_66;
  v20 = 1;
LABEL_60:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v20, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_66;
  DragSelectComponent__setOverHundredNumCondensedScale((DragSelectComponent_o *)gameObject, -1, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.dragSelect;
  if ( !gameObject )
    goto LABEL_66;
  DragSelectComponent__Set((DragSelectComponent_o *)gameObject, item->fields.selectNum, item->fields.dragSelectNum, 0LL);
}


void __fastcall WarehouseListViewItemDraw__SetInput(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        bool isSelectEnable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct UICommonButton_o *v10; // x0

  if ( (byte_435270B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435270B = 1;
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v10 = this->fields.baseButton;
    if ( !v10
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._5_set_isEnabled.method)(
            v10,
            1LL,
            v10->klass->vtable._6_OnInit.methodPtr),
          (v10 = this->fields.baseButton) == 0LL) )
    {
      sub_B7076C(v10, v8);
    }
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v10->klass->vtable._14_SetState.method)(
      v10,
      0LL,
      1LL,
      v10->klass->vtable._15_OnPress.methodPtr);
  }
  if ( item )
    WarehouseListViewItemDraw__SetDisp(this, item, isSelectEnable, v9);
}


void __fastcall WarehouseListViewItemDraw__SetItem(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        const MethodInfo *method)
{
  WarehouseListViewItem_o *v7; // x19
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x22
  UnityEngine_Object_o *useSprite; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v13; // x3

  v7 = item;
  if ( (byte_4352709 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352709 = 1;
  }
  if ( v7 && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_35;
    ServantFaceIconComponent__Set_31406992(
      servantFaceIcon,
      v7->fields.userServantEntity,
      v7->fields.iconLabelInfo1,
      v7->fields.iconLabelInfo2,
      0LL);
    partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.partyIcon;
      if ( v7->fields.isUse )
      {
        item = 0LL;
        if ( !servantFaceIcon )
          goto LABEL_35;
      }
      else
      {
        item = (WarehouseListViewItem_o *)(v7->fields.partyIndex >= 0);
        if ( !servantFaceIcon )
          goto LABEL_35;
      }
      FlashingIconComponent__Set_21993868((FlashingIconComponent_o *)servantFaceIcon, (bool)item, 0LL);
    }
    useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(useSprite, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( !servantFaceIcon )
        goto LABEL_35;
      servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)servantFaceIcon,
                                                        0LL);
      if ( !servantFaceIcon )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isUse, 0LL);
    }
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
      if ( !servantFaceIcon )
        goto LABEL_35;
      ((void (__fastcall *)(ServantFaceIconComponent_o *, __int64, void *))servantFaceIcon->klass->vtable._5_UpdateAlpha.method)(
        servantFaceIcon,
        1LL,
        servantFaceIcon->klass[1]._1.image);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.baseButton;
      if ( !servantFaceIcon )
        goto LABEL_35;
      ((void (__fastcall *)(ServantFaceIconComponent_o *, _QWORD, __int64, void *))servantFaceIcon->klass[1]._1.events)(
        servantFaceIcon,
        0LL,
        1LL,
        servantFaceIcon->klass[1]._1.properties);
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationRootObj;
    if ( servantFaceIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationNameLabel;
      if ( servantFaceIcon )
      {
        UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationDetailNameLabel;
        if ( servantFaceIcon )
        {
          UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.fortificationAppointmentLabel;
          if ( servantFaceIcon )
          {
            UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
            WarehouseListViewItemDraw__SetDisp(this, v7, isSelectEnable, v13);
            return;
          }
        }
      }
    }
LABEL_35:
    sub_B7076C(servantFaceIcon, item);
  }
}


void __fastcall WarehouseListViewItemDraw__SetWarning(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  WarehouseListViewItemDraw_o *v4; // x19
  System_String_o *v5; // x20
  __int64 *v6; // x8
  LocalizationManager_c *v7; // x0
  int32_t attribute; // w8
  UnityEngine_Object_o *warningLabel; // x21
  UILabel_o *fortificationAppointmentLabel; // x21
  UserServantEntity_o *userServantEntity; // x0

  v4 = this;
  if ( (byte_435270A & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_6505/*"FORTIFICATION_APPOINTMENT"*/);
    sub_B70694(&StringLiteral_11779/*"SELECT_FAVORITE"*/);
    sub_B70694(&StringLiteral_12671/*"SUPPORT_MEMBER"*/);
    sub_B70694(&StringLiteral_3350/*"COMMON_FATIGURE_RECOVERY"*/);
    sub_B70694(&StringLiteral_11796/*"SELECT_PUSH"*/);
    sub_B70694(&StringLiteral_11774/*"SELECT_CANNOT"*/);
    sub_B70694(&StringLiteral_11797/*"SELECT_SERVANT_EVENT_JOIN"*/);
    sub_B70694(&StringLiteral_11793/*"SELECT_PARTY"*/);
    sub_B70694(&StringLiteral_11794/*"SELECT_PARTY_EQUIP"*/);
    sub_B70694(&StringLiteral_12656/*"SUPPORT_EQUIP"*/);
    sub_B70694(&StringLiteral_3349/*"COMMON_EQUIP_USED"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    this = (WarehouseListViewItemDraw_o *)sub_B70694(&StringLiteral_11795/*"SELECT_PROTECTED_EVENT_SVT"*/);
    byte_435270A = 1;
  }
  if ( !item )
    goto LABEL_94;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
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
      v6 = &StringLiteral_3350/*"COMMON_FATIGURE_RECOVERY"*/;
      goto LABEL_36;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_24;
      goto LABEL_22;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      goto LABEL_35;
LABEL_33:
    if ( v7->_2.cctor_finished )
      goto LABEL_35;
LABEL_34:
    j_il2cpp_runtime_class_init_0(v7);
    goto LABEL_35;
  }
  if ( item->fields.isPush )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11796/*"SELECT_PUSH"*/;
    goto LABEL_36;
  }
  attribute = item->fields.attribute;
  if ( attribute )
  {
    if ( attribute == 2 )
    {
      v7 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_24:
        v6 = &StringLiteral_11797/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_36:
        v5 = LocalizationManager__Get((System_String_o *)*v6, 0LL);
        goto LABEL_37;
      }
LABEL_22:
      if ( !v7->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v7);
      goto LABEL_24;
    }
    v7 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_35:
      v6 = &StringLiteral_11774/*"SELECT_CANNOT"*/;
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
    v6 = &StringLiteral_11779/*"SELECT_FAVORITE"*/;
    goto LABEL_36;
  }
  if ( item->fields.isPartyEquip )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11794/*"SELECT_PARTY_EQUIP"*/;
    goto LABEL_36;
  }
  if ( (item->fields.partyIndex & 0x80000000) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_11793/*"SELECT_PARTY"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUseSupport )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12671/*"SUPPORT_MEMBER"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUseSupportEquip )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_12656/*"SUPPORT_EQUIP"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUse )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = &StringLiteral_3349/*"COMMON_EQUIP_USED"*/;
    goto LABEL_36;
  }
  if ( item->fields.isFatigueRecovery )
    goto LABEL_7;
  if ( item->fields.isFortification )
  {
    this = (WarehouseListViewItemDraw_o *)v4->fields.fortificationRootObj;
    if ( !this )
      goto LABEL_94;
    this = (WarehouseListViewItemDraw_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_94;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (WarehouseListViewItemDraw_o *)v4->fields.fortificationNameLabel;
    if ( !this )
      goto LABEL_94;
    UILabel__set_text((UILabel_o *)this, item->fields.fortificationName, 0LL);
    this = (WarehouseListViewItemDraw_o *)v4->fields.fortificationDetailNameLabel;
    if ( !this )
      goto LABEL_94;
    UILabel__set_text((UILabel_o *)this, item->fields.fortificationDetailName, 0LL);
    fortificationAppointmentLabel = v4->fields.fortificationAppointmentLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (WarehouseListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6505/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
    if ( !fortificationAppointmentLabel )
      goto LABEL_94;
    UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)this, 0LL);
    this = (WarehouseListViewItemDraw_o *)v4->fields.fortificationNameLabel;
    if ( !this )
      goto LABEL_94;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)this, 0LL);
    this = (WarehouseListViewItemDraw_o *)v4->fields.fortificationDetailNameLabel;
    if ( !this )
      goto LABEL_94;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)this, 0LL);
  }
  else
  {
    userServantEntity = item->fields.userServantEntity;
    if ( userServantEntity )
    {
      if ( UserServantEntity__IsProtectedEventServant(userServantEntity, 0LL) )
      {
        this = (WarehouseListViewItemDraw_o *)item->fields.servantEntity;
        if ( !this )
          goto LABEL_94;
        if ( !ServantEntity__get_IsServantMaterialTd((ServantEntity_o *)this, 0LL) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v6 = &StringLiteral_11795/*"SELECT_PROTECTED_EVENT_SVT"*/;
          goto LABEL_36;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_35;
        }
        v7 = LocalizationManager_TypeInfo;
        goto LABEL_34;
      }
      v5 = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
LABEL_37:
  warningLabel = (UnityEngine_Object_o *)v4->fields.warningLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warningLabel, 0LL, 0LL) )
  {
    this = (WarehouseListViewItemDraw_o *)v4->fields.warningLabel;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v5, 0LL);
      return;
    }
LABEL_94:
    sub_B7076C(this, item);
  }
}
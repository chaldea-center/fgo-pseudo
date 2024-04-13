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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *gameObject; // x0
  __int64 v14; // x1
  _BOOL4 IsSelect; // w0
  UnityEngine_Object_o *lockSprite; // x23
  _BOOL4 v17; // w22
  UnityEngine_Object_o *choiceSprite; // x23
  UnityEngine_Object_o *friendShipSprite; // x23
  UnityEngine_Object_o *chocolateSprite; // x23
  UnityEngine_Object_o *pushSprite; // x23
  UnityEngine_Object_o *materialTdSprite; // x23
  UISprite_o *v23; // x23
  struct UILabel_o *warningLabel; // x8
  bool IsNullOrEmpty; // w0
  bool v26; // w1
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  v4 = isSelectEnable;
  if ( (byte_42E93E5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, isSelectEnable, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v10, v11, v12);
    byte_42E93E5 = 1;
  }
  WarehouseListViewItemDraw__SetWarning(this, item, (const MethodInfo *)isSelectEnable);
  if ( !item )
    goto LABEL_66;
  IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  v17 = IsSelect;
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
      v23 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)AtlasManager__SetEventSprite(
                                                v23,
                                                (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/,
                                                0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( !gameObject )
          goto LABEL_66;
        v27.fields.x = 0.65;
        v27.fields.y = 1.0;
        v27.fields.z = 1.0;
        ServantFaceIconComponent__AdjustIconLabelScale((ServantFaceIconComponent_o *)gameObject, v27, 0LL);
      }
    }
  }
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_66;
  IsNullOrEmpty = System_String__IsNullOrEmpty(warningLabel->fields.mText, 0LL);
  if ( (v17 || v4) && IsNullOrEmpty && !item->fields.isFortification )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        v26 = 0;
        goto LABEL_60;
      }
    }
LABEL_66:
    sub_B5D69C(gameObject, v14);
  }
  gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !gameObject )
    goto LABEL_66;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_66;
  v26 = 1;
LABEL_60:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v26, 0LL);
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

  if ( (byte_42E93E4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, isSelectEnable, method);
    byte_42E93E4 = 1;
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
      sub_B5D69C(v10, v8);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseListViewItemDraw__SetItem(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        int32_t mode,
        bool isSelectEnable,
        const MethodInfo *method)
{
  WarehouseListViewItem_o *v7; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x22
  UnityEngine_Object_o *useSprite; // x22
  UnityEngine_Object_o *baseButton; // x22
  const MethodInfo *v16; // x3

  v7 = item;
  if ( (byte_42E93E2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, mode, isSelectEnable);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E93E2 = 1;
  }
  if ( v7 && mode )
  {
    servantFaceIcon = this->fields.servantFaceIcon;
    if ( !servantFaceIcon )
      goto LABEL_35;
    ServantFaceIconComponent__Set_30775392(
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
      FlashingIconComponent__Set_21625204((FlashingIconComponent_o *)servantFaceIcon, (bool)item, 0LL);
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
            WarehouseListViewItemDraw__SetDisp(this, v7, isSelectEnable, v16);
            return;
          }
        }
      }
    }
LABEL_35:
    sub_B5D69C(servantFaceIcon, item);
  }
}


void __fastcall WarehouseListViewItemDraw__SetWarning(
        WarehouseListViewItemDraw_o *this,
        WarehouseListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarehouseListViewItemDraw_o *v5; // x19
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
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_String_o *v48; // x20
  __int64 *v49; // x8
  LocalizationManager_c *v50; // x0
  int32_t attribute; // w8
  UnityEngine_Object_o *warningLabel; // x21
  UILabel_o *fortificationAppointmentLabel; // x21
  UserServantEntity_o *userServantEntity; // x0

  v5 = this;
  if ( (byte_42E93E3 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_11758/*"SELECT_FAVORITE"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12650/*"SUPPORT_MEMBER"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3341/*"COMMON_FATIGURE_RECOVERY"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11775/*"SELECT_PUSH"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_11772/*"SELECT_PARTY"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_11773/*"SELECT_PARTY_EQUIP"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12635/*"SUPPORT_EQUIP"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_3340/*"COMMON_EQUIP_USED"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    this = (WarehouseListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_11774/*"SELECT_PROTECTED_EVENT_SVT"*/, v45, v46, v47);
    byte_42E93E3 = 1;
  }
  if ( !item )
    goto LABEL_94;
  v48 = (System_String_o *)StringLiteral_1/*""*/;
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
      v49 = &StringLiteral_3341/*"COMMON_FATIGURE_RECOVERY"*/;
      goto LABEL_36;
    }
    v50 = LocalizationManager_TypeInfo;
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
        goto LABEL_24;
      goto LABEL_22;
    }
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
      goto LABEL_35;
LABEL_33:
    if ( v50->_2.cctor_finished )
      goto LABEL_35;
LABEL_34:
    j_il2cpp_runtime_class_init_0(v50);
    goto LABEL_35;
  }
  if ( item->fields.isPush )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = &StringLiteral_11775/*"SELECT_PUSH"*/;
    goto LABEL_36;
  }
  attribute = item->fields.attribute;
  if ( attribute )
  {
    if ( attribute == 2 )
    {
      v50 = LocalizationManager_TypeInfo;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
      {
LABEL_24:
        v49 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
LABEL_36:
        v48 = LocalizationManager__Get((System_String_o *)*v49, 0LL);
        goto LABEL_37;
      }
LABEL_22:
      if ( !v50->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v50);
      goto LABEL_24;
    }
    v50 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
    {
LABEL_35:
      v49 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
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
    v49 = &StringLiteral_11758/*"SELECT_FAVORITE"*/;
    goto LABEL_36;
  }
  if ( item->fields.isPartyEquip )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = &StringLiteral_11773/*"SELECT_PARTY_EQUIP"*/;
    goto LABEL_36;
  }
  if ( (item->fields.partyIndex & 0x80000000) == 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = &StringLiteral_11772/*"SELECT_PARTY"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUseSupport )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = &StringLiteral_12650/*"SUPPORT_MEMBER"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUseSupportEquip )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = &StringLiteral_12635/*"SUPPORT_EQUIP"*/;
    goto LABEL_36;
  }
  if ( item->fields.isUse )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = &StringLiteral_3340/*"COMMON_EQUIP_USED"*/;
    goto LABEL_36;
  }
  if ( item->fields.isFatigueRecovery )
    goto LABEL_7;
  if ( item->fields.isFortification )
  {
    this = (WarehouseListViewItemDraw_o *)v5->fields.fortificationRootObj;
    if ( !this )
      goto LABEL_94;
    this = (WarehouseListViewItemDraw_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_94;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (WarehouseListViewItemDraw_o *)v5->fields.fortificationNameLabel;
    if ( !this )
      goto LABEL_94;
    UILabel__set_text((UILabel_o *)this, item->fields.fortificationName, 0LL);
    this = (WarehouseListViewItemDraw_o *)v5->fields.fortificationDetailNameLabel;
    if ( !this )
      goto LABEL_94;
    UILabel__set_text((UILabel_o *)this, item->fields.fortificationDetailName, 0LL);
    fortificationAppointmentLabel = v5->fields.fortificationAppointmentLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (WarehouseListViewItemDraw_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FORTIFICATION_APPOINTMENT"*/, 0LL);
    if ( !fortificationAppointmentLabel )
      goto LABEL_94;
    UILabel__set_text(fortificationAppointmentLabel, (System_String_o *)this, 0LL);
    this = (WarehouseListViewItemDraw_o *)v5->fields.fortificationNameLabel;
    if ( !this )
      goto LABEL_94;
    UILabel__UpdateCondensedScaleComponent((UILabel_o *)this, 0LL);
    this = (WarehouseListViewItemDraw_o *)v5->fields.fortificationDetailNameLabel;
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
          v49 = &StringLiteral_11774/*"SELECT_PROTECTED_EVENT_SVT"*/;
          goto LABEL_36;
        }
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0
          || LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          goto LABEL_35;
        }
        v50 = LocalizationManager_TypeInfo;
        goto LABEL_34;
      }
      v48 = (System_String_o *)StringLiteral_1/*""*/;
    }
  }
LABEL_37:
  warningLabel = (UnityEngine_Object_o *)v5->fields.warningLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(warningLabel, 0LL, 0LL) )
  {
    this = (WarehouseListViewItemDraw_o *)v5->fields.warningLabel;
    if ( this )
    {
      UILabel__set_text((UILabel_o *)this, v48, 0LL);
      return;
    }
LABEL_94:
    sub_B5D69C(this, item);
  }
}
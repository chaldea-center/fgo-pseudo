void __fastcall ServantListViewItemDraw___ctor(ServantListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantListViewItemDraw__SetInput(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v17; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  bool IsDispLock; // w0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x21
  bool IsDispChoice; // w0
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Object_o *chocolateSprite; // x21
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UILabel_o *v34; // x0
  struct UILabel_o *v35; // x21
  __int64 *v36; // x8
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v38; // x0
  UILabel_o *warningLabel; // x0
  System_String_o *v40; // x1
  System_String_o *v41; // x0
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Component_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *materialTdSprite; // x21
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UISprite_o *v49; // x21
  ServantFaceIconComponent_o *v50; // x0
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD6A5 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_21736, v10);
    sub_B16FFC(&StringLiteral_11584, v11);
    sub_B16FFC(&StringLiteral_11607, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    byte_40FD6A5 = 1;
  }
  if ( !item )
    return;
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !v15 )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v15,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_WebViewObject )
      goto LABEL_84;
    UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
    v17 = this->fields.baseButton;
    if ( !v17 )
      goto LABEL_84;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v17->klass->vtable._14_SetState.method)(
      v17,
      0LL,
      1LL,
      v17->klass->vtable._15_OnPress.methodPtr);
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    v19 = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !v19 )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject(v19, 0LL);
    IsDispLock = ServantListViewItem__get_IsDispLock(item, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(gameObject, IsDispLock, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    v23 = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !v23 )
      goto LABEL_84;
    v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
    IsDispChoice = ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v24 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v24, IsDispChoice, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    v27 = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !v27 )
      goto LABEL_84;
    v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( !v28 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v28, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    v30 = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !v30 )
      goto LABEL_84;
    v31 = UnityEngine_Component__get_gameObject(v30, 0LL);
    if ( !v31 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v31, item->fields.isChocolateSvtEquip, 0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_84;
    v38 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !v38 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v38, 0, 0LL);
    warningLabel = this->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_84;
    v40 = (System_String_o *)StringLiteral_1;
LABEL_61:
    UILabel__set_text(warningLabel, v40, 0LL);
    goto LABEL_62;
  }
  v32 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v32 )
    goto LABEL_84;
  v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
  if ( !v33 )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive(v33, 1, 0LL);
  v34 = this->fields.warningLabel;
  if ( !v34 )
    goto LABEL_84;
  UILabel__set_text(v34, (System_String_o *)StringLiteral_1, 0LL);
  if ( !item->fields.isEnabled )
  {
    v35 = this->fields.warningLabel;
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_11607;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = &StringLiteral_11584;
    }
    v41 = LocalizationManager__Get((System_String_o *)*v36, 0LL);
    if ( !v35 )
      goto LABEL_84;
    v40 = v41;
    warningLabel = v35;
    goto LABEL_61;
  }
LABEL_62:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    v43 = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !v43 )
      goto LABEL_84;
    v44 = UnityEngine_Component__get_gameObject(v43, 0LL);
    if ( !v44 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v44, item->fields.isPush, 0LL);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_84;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    v47 = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !v47 )
      goto LABEL_84;
    v48 = UnityEngine_Component__get_gameObject(v47, 0LL);
    if ( !v48 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v48, item->fields.isMaterialTdSvt, 0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v49 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v49, (System_String_o *)StringLiteral_21736, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        v50 = this->fields.servantFaceIcon;
        if ( v50 )
        {
          v51.fields.x = 0.65;
          v51.fields.y = 1.0;
          v51.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale(v50, v51, 0LL);
          return;
        }
LABEL_84:
        sub_B170D4();
      }
    }
  }
}


void __fastcall ServantListViewItemDraw__SetItem(
        ServantListViewItemDraw_o *this,
        ServantListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UserCommandCodeEntity_o *userCommandCodeEntity; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v18; // x21
  bool IsParty; // w1
  UnityEngine_Object_o *useSprite; // x21
  UnityEngine_Component_o *v21; // x0
  _BOOL4 isUse; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *v24; // x0
  __int64 *v25; // x8
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x21
  bool IsDispLock; // w0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x21
  bool IsDispChoice; // w0
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Object_o *chocolateSprite; // x21
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UILabel_o *v42; // x0
  struct UILabel_o *v43; // x21
  __int64 *v44; // x8
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v46; // x0
  UILabel_o *warningLabel; // x0
  System_String_o *v48; // x1
  System_String_o *v49; // x0
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  ServantFaceIconComponent_o *v53; // x0
  UnityEngine_Object_o *materialTdSprite; // x21
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UISprite_o *v57; // x21
  ServantFaceIconComponent_o *v58; // x0
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FD6A4 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_21736, v9);
    sub_B16FFC(&StringLiteral_11584, v10);
    sub_B16FFC(&StringLiteral_11607, v11);
    sub_B16FFC(&StringLiteral_19256, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_19257, v14);
    byte_40FD6A4 = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_104;
    ServantFaceIconComponent__Set_30711528(
      servantFaceIcon,
      userCommandCodeEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
  else
  {
    if ( !servantFaceIcon )
      goto LABEL_104;
    ServantFaceIconComponent__Set_30631556(
      servantFaceIcon,
      item->fields.userSvtEntity,
      item->fields.iconLabelInfo1,
      item->fields.iconLabelInfo2,
      0LL);
  }
  partyIcon = (UnityEngine_Object_o *)this->fields.partyIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL) )
  {
    v18 = this->fields.partyIcon;
    if ( item->fields.isUse )
    {
      IsParty = 0;
      if ( !v18 )
        goto LABEL_104;
    }
    else
    {
      IsParty = ServantListViewItem__get_IsParty(item, 0LL);
      if ( !v18 )
        goto LABEL_104;
    }
    FlashingIconComponent__Set_23222596(v18, IsParty, 0LL);
  }
  useSprite = (UnityEngine_Object_o *)this->fields.useSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(useSprite, 0LL, 0LL) )
  {
    v21 = (UnityEngine_Component_o *)this->fields.useSprite;
    if ( !v21 )
      goto LABEL_104;
    isUse = item->fields.isUse;
    gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
    if ( !gameObject )
      goto LABEL_104;
    if ( isUse )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      v24 = this->fields.useSprite;
      if ( !v24 )
        goto LABEL_104;
      if ( item->fields.userCommandCodeEntity )
        v25 = &StringLiteral_19257;
      else
        v25 = &StringLiteral_19256;
      UISprite__set_spriteName(v24, (System_String_o *)*v25, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    v27 = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !v27 )
      goto LABEL_104;
    v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
    IsDispLock = ServantListViewItem__get_IsDispLock(item, 0LL);
    if ( !v28 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v28, IsDispLock, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    v31 = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !v31 )
      goto LABEL_104;
    v32 = UnityEngine_Component__get_gameObject(v31, 0LL);
    IsDispChoice = ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v32 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v32, IsDispChoice, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    v35 = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !v35 )
      goto LABEL_104;
    v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
    if ( !v36 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v36, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    v38 = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !v38 )
      goto LABEL_104;
    v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
    if ( !v39 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v39, item->fields.isChocolateSvtEquip, 0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_104;
    v46 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !v46 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v46, 0, 0LL);
    warningLabel = this->fields.warningLabel;
    if ( !warningLabel )
      goto LABEL_104;
    v48 = (System_String_o *)StringLiteral_1;
LABEL_81:
    UILabel__set_text(warningLabel, v48, 0LL);
    goto LABEL_82;
  }
  v40 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v40 )
    goto LABEL_104;
  v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
  if ( !v41 )
    goto LABEL_104;
  UnityEngine_GameObject__SetActive(v41, 1, 0LL);
  v42 = this->fields.warningLabel;
  if ( !v42 )
    goto LABEL_104;
  UILabel__set_text(v42, (System_String_o *)StringLiteral_1, 0LL);
  if ( !item->fields.isEnabled )
  {
    v43 = this->fields.warningLabel;
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = &StringLiteral_11607;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = &StringLiteral_11584;
    }
    v49 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
    if ( !v43 )
      goto LABEL_104;
    v48 = v49;
    warningLabel = v43;
    goto LABEL_81;
  }
LABEL_82:
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    v51 = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !v51 )
      goto LABEL_104;
    v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
    if ( !v52 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v52, item->fields.isPush, 0LL);
  }
  v53 = this->fields.servantFaceIcon;
  if ( !v53 )
    goto LABEL_104;
  ServantFaceIconComponent__ResetIconLabelScale(v53, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
    return;
  v55 = (UnityEngine_Component_o *)this->fields.materialTdSprite;
  if ( !v55 || (v56 = UnityEngine_Component__get_gameObject(v55, 0LL)) == 0LL )
LABEL_104:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v56, item->fields.isMaterialTdSvt, 0LL);
  if ( item->fields.isMaterialTdSvt )
  {
    v57 = this->fields.materialTdSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v57, (System_String_o *)StringLiteral_21736, 0LL);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      v58 = this->fields.servantFaceIcon;
      if ( !v58 )
        goto LABEL_104;
      v59.fields.x = 0.65;
      v59.fields.y = 1.0;
      v59.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(v58, v59, 0LL);
    }
  }
}
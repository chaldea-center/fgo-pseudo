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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  UnityEngine_Object_o *baseButton; // x22
  __int64 v29; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v34; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  struct UILabel_o *warningLabel; // x21
  __int64 *v38; // x8
  System_String_o *v39; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v42; // x21
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC6B6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, isInput, method);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42EC6B6 = 1;
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
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                           Component_WebViewObject,
                                                           (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !Component_WebViewObject )
      goto LABEL_84;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
      Component_WebViewObject,
      0LL,
      1LL,
      Component_WebViewObject->klass[1]._1.interfaceOffsets);
  }
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject(Component_WebViewObject, 0LL);
    Component_WebViewObject = (UnityEngine_Component_o *)ServantListViewItem__get_IsDispLock(item, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)Component_WebViewObject & 1, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    v34 = UnityEngine_Component__get_gameObject(Component_WebViewObject, 0LL);
    Component_WebViewObject = (UnityEngine_Component_o *)ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v34 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v34, (unsigned __int8)Component_WebViewObject & 1, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           Component_WebViewObject,
                                                           0LL);
    if ( !Component_WebViewObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Component_WebViewObject,
      item->fields.isFriendShipSvtEq,
      0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           Component_WebViewObject,
                                                           0LL);
    if ( !Component_WebViewObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Component_WebViewObject,
      item->fields.isChocolateSvtEquip,
      0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           Component_WebViewObject,
                                                           0LL);
    if ( !Component_WebViewObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 0, 0LL);
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.warningLabel;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    v39 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
    UILabel__set_text((UILabel_o *)Component_WebViewObject, v39, 0LL);
    goto LABEL_62;
  }
  Component_WebViewObject = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !Component_WebViewObject )
    goto LABEL_84;
  Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                         Component_WebViewObject,
                                                         0LL);
  if ( !Component_WebViewObject )
    goto LABEL_84;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, 1, 0LL);
  Component_WebViewObject = (UnityEngine_Component_o *)this->fields.warningLabel;
  if ( !Component_WebViewObject )
    goto LABEL_84;
  UILabel__set_text((UILabel_o *)Component_WebViewObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item->fields.isEnabled )
  {
    warningLabel = this->fields.warningLabel;
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    }
    Component_WebViewObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v38, 0LL);
    if ( !warningLabel )
      goto LABEL_84;
    v39 = (System_String_o *)Component_WebViewObject;
    Component_WebViewObject = (UnityEngine_Component_o *)warningLabel;
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
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.pushSprite;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           Component_WebViewObject,
                                                           0LL);
    if ( !Component_WebViewObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isPush, 0LL);
  }
  Component_WebViewObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
  if ( !Component_WebViewObject )
    goto LABEL_84;
  ServantFaceIconComponent__ResetIconLabelScale((ServantFaceIconComponent_o *)Component_WebViewObject, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    Component_WebViewObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !Component_WebViewObject )
      goto LABEL_84;
    Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           Component_WebViewObject,
                                                           0LL);
    if ( !Component_WebViewObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)Component_WebViewObject,
      item->fields.isMaterialTdSvt,
      0LL);
    if ( item->fields.isMaterialTdSvt )
    {
      v42 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v42, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        Component_WebViewObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( Component_WebViewObject )
        {
          v43.fields.x = 0.65;
          v43.fields.y = 1.0;
          v43.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale(
            (ServantFaceIconComponent_o *)Component_WebViewObject,
            v43,
            0LL);
          return;
        }
LABEL_84:
        sub_B5D69C(Component_WebViewObject, v29);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UserCommandCodeEntity_o *userCommandCodeEntity; // x1
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *partyIcon; // x21
  FlashingIconComponent_o *v34; // x21
  UnityEngine_Object_o *useSprite; // x21
  _BOOL4 isUse; // w21
  __int64 *v37; // x8
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v41; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  struct UILabel_o *warningLabel; // x21
  __int64 *v45; // x8
  System_String_o *v46; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v49; // x21
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42EC6B5 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_11753/*"SELECT_CANNOT"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_19574/*"icon_equip"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_19575/*"icon_equip_cc"*/, v28, v29, v30);
    byte_42EC6B5 = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_104;
    ServantFaceIconComponent__Set_30855448(
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
    ServantFaceIconComponent__Set_30775392(
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
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Object__op_Inequality(partyIcon, 0LL, 0LL);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    v34 = this->fields.partyIcon;
    if ( item->fields.isUse )
    {
      userCommandCodeEntity = 0LL;
      if ( !v34 )
        goto LABEL_104;
    }
    else
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsParty(item, 0LL);
      userCommandCodeEntity = (UserCommandCodeEntity_o *)((unsigned __int8)servantFaceIcon & 1);
      if ( !v34 )
        goto LABEL_104;
    }
    FlashingIconComponent__Set_21625204(v34, (bool)userCommandCodeEntity, 0LL);
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
      goto LABEL_104;
    isUse = item->fields.isUse;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_104;
    if ( isUse )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
      servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.useSprite;
      if ( !servantFaceIcon )
        goto LABEL_104;
      if ( item->fields.userCommandCodeEntity )
        v37 = &StringLiteral_19575/*"icon_equip_cc"*/;
      else
        v37 = &StringLiteral_19574/*"icon_equip"*/;
      UISprite__set_spriteName((UISprite_o *)servantFaceIcon, (System_String_o *)*v37, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
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
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_104;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsDispLock(item, 0LL);
    if ( !gameObject )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)servantFaceIcon & 1, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_104;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v41 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v41, (unsigned __int8)servantFaceIcon & 1, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_104;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.chocolateSprite;
    if ( !servantFaceIcon )
      goto LABEL_104;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      item->fields.isChocolateSvtEquip,
      0LL);
  }
  if ( !item->fields.isLeave && item->fields.isEnabled )
  {
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_104;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_104;
    v46 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_81:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v46, 0LL);
    goto LABEL_82;
  }
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_104;
  servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)servantFaceIcon,
                                                    0LL);
  if ( !servantFaceIcon )
    goto LABEL_104;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_104;
  UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !item->fields.isEnabled )
  {
    warningLabel = this->fields.warningLabel;
    if ( item->fields.isEventJoin )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = &StringLiteral_11776/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v45 = &StringLiteral_11753/*"SELECT_CANNOT"*/;
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v45, 0LL);
    if ( !warningLabel )
      goto LABEL_104;
    v46 = (System_String_o *)servantFaceIcon;
    servantFaceIcon = (ServantFaceIconComponent_o *)warningLabel;
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
    servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.pushSprite;
    if ( !servantFaceIcon )
      goto LABEL_104;
    servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)servantFaceIcon,
                                                      0LL);
    if ( !servantFaceIcon )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isPush, 0LL);
  }
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_104;
  ServantFaceIconComponent__ResetIconLabelScale(servantFaceIcon, 0LL);
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
    return;
  servantFaceIcon = (ServantFaceIconComponent_o *)this->fields.materialTdSprite;
  if ( !servantFaceIcon
    || (servantFaceIcon = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)servantFaceIcon,
                                                          0LL)) == 0LL )
  {
LABEL_104:
    sub_B5D69C(servantFaceIcon, userCommandCodeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isMaterialTdSvt, 0LL);
  if ( item->fields.isMaterialTdSvt )
  {
    v49 = this->fields.materialTdSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v49, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_104;
      v50.fields.x = 0.65;
      v50.fields.y = 1.0;
      v50.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(servantFaceIcon, v50, 0LL);
    }
  }
}
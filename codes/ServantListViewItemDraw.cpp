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
  __int64 v15; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v20; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  struct UILabel_o *warningLabel; // x21
  __int64 *v24; // x8
  System_String_o *v25; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v28; // x21
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B21C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, v10);
    sub_B2C35C(&StringLiteral_11620/*"SELECT_CANNOT"*/, v11);
    sub_B2C35C(&StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    byte_418B21C = 1;
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
                                                           (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
    v20 = UnityEngine_Component__get_gameObject(Component_WebViewObject, 0LL);
    Component_WebViewObject = (UnityEngine_Component_o *)ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v20 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v20, (unsigned __int8)Component_WebViewObject & 1, 0LL);
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
    v25 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_61:
    UILabel__set_text((UILabel_o *)Component_WebViewObject, v25, 0LL);
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
      v24 = &StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
    }
    Component_WebViewObject = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)*v24, 0LL);
    if ( !warningLabel )
      goto LABEL_84;
    v25 = (System_String_o *)Component_WebViewObject;
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
      v28 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v28, (System_String_o *)StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, 0LL);
      if ( item->fields.isNeedAdjustIconLabelScale )
      {
        Component_WebViewObject = (UnityEngine_Component_o *)this->fields.servantFaceIcon;
        if ( Component_WebViewObject )
        {
          v29.fields.x = 0.65;
          v29.fields.y = 1.0;
          v29.fields.z = 1.0;
          ServantFaceIconComponent__AdjustIconLabelScale(
            (ServantFaceIconComponent_o *)Component_WebViewObject,
            v29,
            0LL);
          return;
        }
LABEL_84:
        sub_B2C434(Component_WebViewObject, v15);
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
  UnityEngine_Object_o *useSprite; // x21
  _BOOL4 isUse; // w21
  __int64 *v21; // x8
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v25; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  struct UILabel_o *warningLabel; // x21
  __int64 *v29; // x8
  System_String_o *v30; // x1
  UnityEngine_Object_o *pushSprite; // x21
  UnityEngine_Object_o *materialTdSprite; // x21
  UISprite_o *v33; // x21
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B21B & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, v9);
    sub_B2C35C(&StringLiteral_11620/*"SELECT_CANNOT"*/, v10);
    sub_B2C35C(&StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/, v11);
    sub_B2C35C(&StringLiteral_19330/*"icon_equip"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_19331/*"icon_equip_cc"*/, v14);
    byte_418B21B = 1;
  }
  if ( !item || !mode )
    return;
  userCommandCodeEntity = item->fields.userCommandCodeEntity;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( userCommandCodeEntity )
  {
    if ( !servantFaceIcon )
      goto LABEL_104;
    ServantFaceIconComponent__Set_30799200(
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
    ServantFaceIconComponent__Set_30719352(
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
    v18 = this->fields.partyIcon;
    if ( item->fields.isUse )
    {
      userCommandCodeEntity = 0LL;
      if ( !v18 )
        goto LABEL_104;
    }
    else
    {
      servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsParty(item, 0LL);
      userCommandCodeEntity = (UserCommandCodeEntity_o *)((unsigned __int8)servantFaceIcon & 1);
      if ( !v18 )
        goto LABEL_104;
    }
    FlashingIconComponent__Set_23093612(v18, (bool)userCommandCodeEntity, 0LL);
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
        v21 = &StringLiteral_19331/*"icon_equip_cc"*/;
      else
        v21 = &StringLiteral_19330/*"icon_equip"*/;
      UISprite__set_spriteName((UISprite_o *)servantFaceIcon, (System_String_o *)*v21, 0LL);
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
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (ServantFaceIconComponent_o *)ServantListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v25 )
      goto LABEL_104;
    UnityEngine_GameObject__SetActive(v25, (unsigned __int8)servantFaceIcon & 1, 0LL);
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
    v30 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_81:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v30, 0LL);
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
      v29 = &StringLiteral_11643/*"SELECT_SERVANT_EVENT_JOIN"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = &StringLiteral_11620/*"SELECT_CANNOT"*/;
    }
    servantFaceIcon = (ServantFaceIconComponent_o *)LocalizationManager__Get((System_String_o *)*v29, 0LL);
    if ( !warningLabel )
      goto LABEL_104;
    v30 = (System_String_o *)servantFaceIcon;
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
    sub_B2C434(servantFaceIcon, userCommandCodeEntity);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isMaterialTdSvt, 0LL);
  if ( item->fields.isMaterialTdSvt )
  {
    v33 = this->fields.materialTdSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventSprite(v33, (System_String_o *)StringLiteral_21828/*"ribbon_noblephantasmup_01"*/, 0LL);
    if ( item->fields.isNeedAdjustIconLabelScale )
    {
      servantFaceIcon = this->fields.servantFaceIcon;
      if ( !servantFaceIcon )
        goto LABEL_104;
      v34.fields.x = 0.65;
      v34.fields.y = 1.0;
      v34.fields.z = 1.0;
      ServantFaceIconComponent__AdjustIconLabelScale(servantFaceIcon, v34, 0LL);
    }
  }
}
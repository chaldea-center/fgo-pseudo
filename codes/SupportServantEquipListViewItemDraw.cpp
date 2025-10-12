void SupportServantEquipListViewItemDraw___ctor(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportServantEquipListViewItemDraw__Awake(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C34121 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4C34121 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5);
}


void SupportServantEquipListViewItemDraw__SetInput(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  _BOOL4 isChoice; // w8
  bool v14; // zf
  bool v15; // w8
  char v16; // w10
  bool v17; // w1

  if ( (byte_4C34123 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34123 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_38;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_38;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_38;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_object )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_38;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
      if ( !Component_object )
        goto LABEL_38;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0);
        if ( Component_object )
        {
          isChoice = item->fields.isChoice;
          v14 = !isChoice;
          v15 = isChoice;
          v16 = v14;
          if ( item->fields.isSwapChoice )
            v17 = v16;
          else
            v17 = v15;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v17, 0);
          return;
        }
      }
LABEL_38:
      sub_1C32E7C(Component_object);
    }
  }
}


void SupportServantEquipListViewItemDraw__SetItem(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  void *servantFaceIcon; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v14; // w9
  UILabel_o *skillInvalidLabel; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x1
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8
  System_String_o *v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int v26; // w8
  Il2CppObject *v27; // x1
  __int64 v28; // x8
  _QWORD *v29; // x9
  UILabel_o *warningLabel; // x21
  struct UILabel_o *v31; // x21
  System_String_o *v32; // x0
  System_String_o *ServantShortName; // x0
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  UILabel_o *warningLabel2; // x21
  struct UILabel_o *v39; // x8
  int32_t mWidth; // w21
  struct UILabel_o *v41; // x8
  UILabel_o *warningLabel3; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  Il2CppObject *v45; // x1
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8

  if ( (byte_4C34122 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&StringLiteral_43/*"\n"*/);
    sub_1C32C20(&StringLiteral_5492/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/);
    sub_1C32C20(&StringLiteral_11519/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_5491/*"EQUIP_GRAPH_USE"*/);
    byte_4C34122 = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_121;
  ServantFaceIconComponent__Set_40905852(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    item->fields.userSvtEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0, 0) )
  {
    servantFaceIcon = this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_121;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_121;
    if ( item->fields.isSwapLock )
      isLock = !item->fields.isLock;
    else
      isLock = item->fields.isLock;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isLock, 0);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  servantFaceIcon = (void *)UnityEngine_Object__op_Inequality(choiceSprite, 0, 0);
  if ( ((unsigned __int8)servantFaceIcon & 1) != 0 )
  {
    servantFaceIcon = this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_121;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_121;
    if ( item->fields.isSwapChoice )
      isChoice = !item->fields.isChoice;
    else
      isChoice = item->fields.isChoice;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, isChoice, 0);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_121;
  size = messageLabelList->fields._size;
  v14 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v14;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0);
  servantFaceIcon = this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_121;
  (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_121;
  (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.warningLabel2;
  if ( !servantFaceIcon )
    goto LABEL_121;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = this->fields.warningLabel3;
  if ( !servantFaceIcon )
    goto LABEL_121;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_121;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  servantFaceIcon = this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_121;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11519/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_121;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_121;
    v18 = (Il2CppObject *)this->fields.skillInvalidLabel;
    v19 = *((_QWORD *)servantFaceIcon + 2);
    v20 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*((_DWORD *)servantFaceIcon + 7);
    if ( !v19 )
      goto LABEL_121;
    v21 = *((int *)servantFaceIcon + 6);
    if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        v18,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = v19 + 8 * v21;
      *((_DWORD *)servantFaceIcon + 6) = v21 + 1;
      *(_QWORD *)(v22 + 32) = v18;
      sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v18, v16, v17);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_121;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( item->fields.isBase )
  {
    servantFaceIcon = this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_121;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_121;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_121;
    v23 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v23, 0);
    goto LABEL_54;
  }
  warningLabel = this->fields.warningLabel;
  if ( !item->fields.isUse )
  {
    if ( !warningLabel )
      goto LABEL_121;
    UILabel__set_text(this->fields.warningLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_121;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0);
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_121;
    v23 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_53;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5491/*"EQUIP_GRAPH_USE"*/, 0);
  if ( !warningLabel )
    goto LABEL_121;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0);
  servantFaceIcon = this->fields.maskSprite2;
  if ( !servantFaceIcon )
    goto LABEL_121;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
  if ( !servantFaceIcon )
    goto LABEL_121;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  v31 = this->fields.warningLabel;
  if ( !v31 )
    goto LABEL_121;
  v32 = System_String__Concat_63518544(v31->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v31, v32, 0);
  if ( item->fields.useServantId <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantShortName = LocalizationManager__Get((System_String_o *)StringLiteral_5492/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/, 0);
  }
  else
  {
    servantFaceIcon = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_121;
    ServantShortName = PartyOrganizationUtility__GetServantShortName(
                         (PartyOrganizationUtility_o *)servantFaceIcon,
                         item->fields.useServantId,
                         0);
  }
  warningLabel2 = this->fields.warningLabel2;
  servantFaceIcon = System_String__Concat_63518544((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0);
  if ( !warningLabel2 )
    goto LABEL_121;
  UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
  v39 = this->fields.warningLabel2;
  if ( !v39 )
    goto LABEL_121;
  mWidth = v39->fields.mWidth;
  servantFaceIcon = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    servantFaceIcon = BalanceConfig_TypeInfo;
  }
  if ( mWidth <= *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1292LL) )
  {
    servantFaceIcon = this->fields.warningLabel2;
    if ( !servantFaceIcon )
      goto LABEL_121;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_121;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
  }
  else
  {
    v41 = this->fields.warningLabel2;
    if ( !v41 )
      goto LABEL_121;
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_121;
    UILabel__set_text((UILabel_o *)servantFaceIcon, v41->fields.mText, 0);
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_121;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_121;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0);
    servantFaceIcon = BalanceConfig_TypeInfo;
    warningLabel3 = this->fields.warningLabel3;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !warningLabel3 )
      goto LABEL_121;
    UILabel__SetCondensedScale(
      warningLabel3,
      BalanceConfig_TypeInfo->static_fields->UseEquipServantNameTextMaxWidth,
      0,
      0);
  }
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_121;
  v45 = (Il2CppObject *)this->fields.warningLabel;
  v46 = *((_QWORD *)servantFaceIcon + 2);
  v47 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*((_DWORD *)servantFaceIcon + 7);
  if ( !v46 )
    goto LABEL_121;
  v48 = *((int *)servantFaceIcon + 6);
  if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      v45,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * v48;
    *((_DWORD *)servantFaceIcon + 6) = v48 + 1;
    *(_QWORD *)(v49 + 32) = v45;
    sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 32), (int32_t)v45, v43, v44);
  }
LABEL_54:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_121;
  v26 = *((_DWORD *)servantFaceIcon + 6);
  if ( v26 >= 1 )
  {
    if ( v26 == 1 && item->fields.isInvalidRarity )
    {
      v27 = (Il2CppObject *)this->fields.skillInvalidLabel;
      v28 = *((_QWORD *)servantFaceIcon + 2);
      v29 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*((_DWORD *)servantFaceIcon + 7);
      if ( !v28 )
        goto LABEL_121;
      if ( *(_DWORD *)(v28 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          v27,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)servantFaceIcon + 6) = 2;
        *(_QWORD *)(v28 + 40) = v27;
        sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 40), (int32_t)v27, v24, v25);
      }
    }
    servantFaceIcon = this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = System_Collections_Generic_List_object___ToArray(
                          (System_Collections_Generic_List_object__o *)servantFaceIcon,
                          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
        goto LABEL_75;
      }
    }
LABEL_121:
    sub_1C32E7C(servantFaceIcon);
  }
LABEL_75:
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0, 0) )
  {
    servantFaceIcon = this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_121;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isBase, 0);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0, 0) )
  {
    servantFaceIcon = this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_121;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
    if ( !servantFaceIcon )
      goto LABEL_121;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0, 0) )
  {
    servantFaceIcon = this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)servantFaceIcon,
          item->fields.isChocolateSvtEquip,
          0);
        return;
      }
    }
    goto LABEL_121;
  }
}
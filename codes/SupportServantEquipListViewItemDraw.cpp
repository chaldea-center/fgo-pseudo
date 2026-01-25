void SupportServantEquipListViewItemDraw___ctor(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportServantEquipListViewItemDraw__Awake(SupportServantEquipListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEACA2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4CEACA2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void SupportServantEquipListViewItemDraw__SetInput(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  _BOOL4 isChoice; // w8
  bool v15; // zf
  bool v16; // w8
  char v17; // w10
  bool v18; // w1

  if ( (byte_4CEACA4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEACA4 = 1;
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
                                                      (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
          v15 = !isChoice;
          v16 = isChoice;
          v17 = v15;
          if ( item->fields.isSwapChoice )
            v18 = v17;
          else
            v18 = v16;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, v18, 0);
          return;
        }
      }
LABEL_38:
      sub_1C7BD40(Component_object, v8);
    }
  }
}


void SupportServantEquipListViewItemDraw__SetItem(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  SupportServantEquipListViewItem_o *v5; // x19
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  System_String_o *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int v33; // w8
  __int64 v34; // x8
  _QWORD *v35; // x9
  UILabel_o *warningLabel; // x21
  struct UILabel_o *v37; // x21
  System_String_o *v38; // x0
  System_String_o *ServantShortName; // x0
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  UILabel_o *warningLabel2; // x21
  struct UILabel_o *v45; // x8
  int32_t mWidth; // w21
  struct UILabel_o *v47; // x8
  UILabel_o *warningLabel3; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8

  v5 = item;
  if ( (byte_4CEACA3 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C7BAE8(&StringLiteral_43/*"\n"*/);
    sub_1C7BAE8(&StringLiteral_5500/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/);
    sub_1C7BAE8(&StringLiteral_11570/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_5499/*"EQUIP_GRAPH_USE"*/);
    byte_4CEACA3 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_121;
  ServantFaceIconComponent__Set_41658632(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v5->fields.userSvtEntity,
    v5->fields.iconLabelInfo1,
    v5->fields.iconLabelInfo2,
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
    if ( v5->fields.isSwapLock )
      isLock = !v5->fields.isLock;
    else
      isLock = v5->fields.isLock;
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
    if ( v5->fields.isSwapChoice )
      isChoice = !v5->fields.isChoice;
    else
      isChoice = v5->fields.isChoice;
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
  if ( v5->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11570/*"SELECT_BONUS_SKILL_INVALID"*/, 0);
    if ( !skillInvalidLabel )
      goto LABEL_121;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_121;
    item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
    v22 = *((_QWORD *)servantFaceIcon + 2);
    v23 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*((_DWORD *)servantFaceIcon + 7);
    if ( !v22 )
      goto LABEL_121;
    v24 = *((int *)servantFaceIcon + 6);
    if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v25 = v22 + 8 * v24;
      *((_DWORD *)servantFaceIcon + 6) = v24 + 1;
      *(_QWORD *)(v25 + 32) = item;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)item, v16, v17, v18, v19, v20, v21);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_121;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  if ( v5->fields.isBase )
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
    v26 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_53:
    UILabel__set_text((UILabel_o *)servantFaceIcon, v26, 0);
    goto LABEL_54;
  }
  warningLabel = this->fields.warningLabel;
  if ( !v5->fields.isUse )
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
    v26 = (System_String_o *)StringLiteral_1/*""*/;
    goto LABEL_53;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5499/*"EQUIP_GRAPH_USE"*/, 0);
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
  v37 = this->fields.warningLabel;
  if ( !v37 )
    goto LABEL_121;
  v38 = System_String__Concat_64176912(v37->fields.mText, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(v37, v38, 0);
  if ( v5->fields.useServantId <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ServantShortName = LocalizationManager__Get((System_String_o *)StringLiteral_5500/*"EQUIP_GRAPH_USE_SUPPORT_NO_SERVANT_NAME"*/, 0);
  }
  else
  {
    servantFaceIcon = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !servantFaceIcon )
      goto LABEL_121;
    ServantShortName = PartyOrganizationUtility__GetServantShortName(
                         (PartyOrganizationUtility_o *)servantFaceIcon,
                         v5->fields.useServantId,
                         0);
  }
  warningLabel2 = this->fields.warningLabel2;
  servantFaceIcon = System_String__Concat_64176912((System_String_o *)StringLiteral_43/*"\n"*/, ServantShortName, 0);
  if ( !warningLabel2 )
    goto LABEL_121;
  UILabel__set_text(warningLabel2, (System_String_o *)servantFaceIcon, 0);
  v45 = this->fields.warningLabel2;
  if ( !v45 )
    goto LABEL_121;
  mWidth = v45->fields.mWidth;
  servantFaceIcon = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    servantFaceIcon = BalanceConfig_TypeInfo;
  }
  if ( mWidth <= *(_DWORD *)(*((_QWORD *)servantFaceIcon + 23) + 1308LL) )
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
    v47 = this->fields.warningLabel2;
    if ( !v47 )
      goto LABEL_121;
    servantFaceIcon = this->fields.warningLabel3;
    if ( !servantFaceIcon )
      goto LABEL_121;
    UILabel__set_text((UILabel_o *)servantFaceIcon, v47->fields.mText, 0);
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
  item = (SupportServantEquipListViewItem_o *)this->fields.warningLabel;
  v55 = *((_QWORD *)servantFaceIcon + 2);
  v56 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*((_DWORD *)servantFaceIcon + 7);
  if ( !v55 )
    goto LABEL_121;
  v57 = *((int *)servantFaceIcon + 6);
  if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = v55 + 8 * v57;
    *((_DWORD *)servantFaceIcon + 6) = v57 + 1;
    *(_QWORD *)(v58 + 32) = item;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v58 + 32), (int32_t)item, v49, v50, v51, v52, v53, v54);
  }
LABEL_54:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_121;
  v33 = *((_DWORD *)servantFaceIcon + 6);
  if ( v33 >= 1 )
  {
    if ( v33 == 1 && v5->fields.isInvalidRarity )
    {
      item = (SupportServantEquipListViewItem_o *)this->fields.skillInvalidLabel;
      v34 = *((_QWORD *)servantFaceIcon + 2);
      v35 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*((_DWORD *)servantFaceIcon + 7);
      if ( !v34 )
        goto LABEL_121;
      if ( *(_DWORD *)(v34 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        *((_DWORD *)servantFaceIcon + 6) = 2;
        *(_QWORD *)(v34 + 40) = item;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 40), (int32_t)item, v27, v28, v29, v30, v31, v32);
      }
    }
    servantFaceIcon = this->fields.messageLabelList;
    if ( servantFaceIcon )
    {
      messageLabel = this->fields.messageLabel;
      servantFaceIcon = System_Collections_Generic_List_object___ToArray(
                          (System_Collections_Generic_List_object__o *)servantFaceIcon,
                          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( messageLabel )
      {
        SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0);
        goto LABEL_75;
      }
    }
LABEL_121:
    sub_1C7BD40(servantFaceIcon, item);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isFriendShipSvtEq, 0);
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
          v5->fields.isChocolateSvtEquip,
          0);
        return;
      }
    }
    goto LABEL_121;
  }
}
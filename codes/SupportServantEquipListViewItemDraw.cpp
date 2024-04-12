void __fastcall SupportServantEquipListViewItemDraw___ctor(
        SupportServantEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportServantEquipListViewItemDraw__Awake(
        SupportServantEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B38BD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_42B38BD = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall SupportServantEquipListViewItemDraw__SetInput(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21

  if ( (byte_42B38BF & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B38BF = 1;
  }
  if ( item )
  {
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
        goto LABEL_33;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                             Component_WebViewObject,
                                                             (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_33;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_WebViewObject, isInput, 0LL);
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_WebViewObject )
        goto LABEL_33;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_WebViewObject->klass[1]._1.implementedInterfaces)(
        Component_WebViewObject,
        0LL,
        1LL,
        Component_WebViewObject->klass[1]._1.interfaceOffsets);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( !Component_WebViewObject )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isBase, 0LL);
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
        goto LABEL_33;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_WebViewObject,
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
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( Component_WebViewObject )
      {
        Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               Component_WebViewObject,
                                                               0LL);
        if ( Component_WebViewObject )
        {
          UnityEngine_GameObject__SetActive(
            (UnityEngine_GameObject_o *)Component_WebViewObject,
            item->fields.isSwapChoice != item->fields.isChoice,
            0LL);
          return;
        }
      }
LABEL_33:
      sub_B52A5C(Component_WebViewObject, v8);
    }
  }
}


void __fastcall SupportServantEquipListViewItemDraw__SetItem(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  void *servantFaceIcon; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UILabel_o *skillInvalidLabel; // x21
  _BOOL4 isUse; // w21
  UILabel_o *warningLabel; // x21
  int v13; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21

  if ( (byte_42B38BE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_11706/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_5570/*"EQUIP_GRAPH_USE"*/);
    byte_42B38BE = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_74;
  ServantFaceIconComponent__Set_30396076(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    item->fields.userSvtEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0LL);
  lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
  {
    servantFaceIcon = this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
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
    servantFaceIcon = this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)servantFaceIcon,
      item->fields.isSwapChoice != item->fields.isChoice,
      0LL);
  }
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_74;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  servantFaceIcon = this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_74;
  (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_74;
  servantFaceIcon = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
                              servantFaceIcon,
                              *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
                              0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11706/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_74;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_74;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( item->fields.isBase )
  {
    servantFaceIcon = this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_74;
LABEL_35:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_74;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    goto LABEL_46;
  }
  servantFaceIcon = this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_74;
  isUse = item->fields.isUse;
  servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
  if ( !servantFaceIcon )
    goto LABEL_74;
  if ( !isUse )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
  warningLabel = this->fields.warningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EQUIP_GRAPH_USE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_74;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_74;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningLabel,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_46:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_74;
  v13 = *((_DWORD *)servantFaceIcon + 6);
  if ( v13 >= 1 )
  {
    if ( v13 == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      servantFaceIcon = this->fields.messageLabelList;
      if ( !servantFaceIcon )
        goto LABEL_74;
    }
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_74;
    SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    servantFaceIcon = this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isBase, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    servantFaceIcon = this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_74;
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
    servantFaceIcon = this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)servantFaceIcon,
          item->fields.isChocolateSvtEquip,
          0LL);
        return;
      }
    }
LABEL_74:
    sub_B52A5C(servantFaceIcon, item);
  }
}
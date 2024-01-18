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
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418B2DB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_418B2DB = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SupportServantEquipListViewItemDraw__SetInput(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v15; // x20

  if ( (byte_418B2DD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418B2DD = 1;
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
                                                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      gameObject = UnityEngine_Component__get_gameObject(Component_WebViewObject, 0LL);
      Component_WebViewObject = (UnityEngine_Component_o *)SupportServantEquipListViewItem__get_IsDispLock(item, 0LL);
      if ( !gameObject )
        goto LABEL_33;
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
      if ( Component_WebViewObject )
      {
        v15 = UnityEngine_Component__get_gameObject(Component_WebViewObject, 0LL);
        Component_WebViewObject = (UnityEngine_Component_o *)SupportServantEquipListViewItem__get_IsDispChoice(
                                                               item,
                                                               0LL);
        if ( v15 )
        {
          UnityEngine_GameObject__SetActive(v15, (unsigned __int8)Component_WebViewObject & 1, 0LL);
          return;
        }
      }
LABEL_33:
      sub_B2C434(Component_WebViewObject, v9);
    }
  }
}


void __fastcall SupportServantEquipListViewItemDraw__SetItem(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
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
  __int64 servantFaceIcon; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_GameObject_o *v19; // x21
  UILabel_o *skillInvalidLabel; // x21
  _BOOL4 isUse; // w21
  UILabel_o *warningLabel; // x21
  int v23; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21

  if ( (byte_418B2DC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_11619/*"SELECT_BONUS_SKILL_INVALID"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_5528/*"EQUIP_GRAPH_USE"*/, v14);
    byte_418B2DC = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = (__int64)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_74;
  ServantFaceIconComponent__Set_30719352(
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
    servantFaceIcon = (__int64)this->fields.lockSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    servantFaceIcon = SupportServantEquipListViewItem__get_IsDispLock(item, 0LL);
    if ( !gameObject )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(gameObject, servantFaceIcon & 1, 0LL);
  }
  choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (__int64)this->fields.choiceSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    servantFaceIcon = SupportServantEquipListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v19 )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(v19, servantFaceIcon & 1, 0LL);
  }
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_74;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  servantFaceIcon = (__int64)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_74;
  (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (__int64)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_74;
  servantFaceIcon = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
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
    servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11619/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_74;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (__int64)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_74;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( item->fields.isBase )
  {
    servantFaceIcon = (__int64)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_74;
LABEL_35:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (__int64)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_74;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    goto LABEL_46;
  }
  servantFaceIcon = (__int64)this->fields.maskSprite;
  if ( !servantFaceIcon )
    goto LABEL_74;
  isUse = item->fields.isUse;
  servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
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
  servantFaceIcon = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_5528/*"EQUIP_GRAPH_USE"*/, 0LL);
  if ( !warningLabel )
    goto LABEL_74;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_74;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningLabel,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_46:
  servantFaceIcon = (__int64)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_74;
  v23 = *(_DWORD *)(servantFaceIcon + 24);
  if ( v23 >= 1 )
  {
    if ( v23 == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      servantFaceIcon = (__int64)this->fields.messageLabelList;
      if ( !servantFaceIcon )
        goto LABEL_74;
    }
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    servantFaceIcon = (__int64)this->fields.selectObject;
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
    servantFaceIcon = (__int64)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_74;
    servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
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
    servantFaceIcon = (__int64)this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
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
    sub_B2C434(servantFaceIcon, item);
  }
}
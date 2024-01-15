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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FD9BE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v6);
    byte_40FD9BE = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall SupportServantEquipListViewItemDraw__SetInput(
        SupportServantEquipListViewItemDraw_o *this,
        SupportServantEquipListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  struct UICommonButton_o *v11; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  bool IsDispLock; // w0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x20
  bool IsDispChoice; // w0

  if ( (byte_40FD9C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FD9C0 = 1;
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
      v9 = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !v9 )
        goto LABEL_33;
      Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v9,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_WebViewObject )
        goto LABEL_33;
      UnityEngine_Collider__set_enabled(Component_WebViewObject, isInput, 0LL);
      v11 = this->fields.baseButton;
      if ( !v11 )
        goto LABEL_33;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v11->klass->vtable._14_SetState.method)(
        v11,
        0LL,
        1LL,
        v11->klass->vtable._15_OnPress.methodPtr);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      v13 = this->fields.selectObject;
      if ( !v13 )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(v13, item->fields.isBase, 0LL);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      v15 = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !v15 )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
      IsDispLock = SupportServantEquipListViewItem__get_IsDispLock(item, 0LL);
      if ( !gameObject )
        goto LABEL_33;
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
      v19 = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( v19 )
      {
        v20 = UnityEngine_Component__get_gameObject(v19, 0LL);
        IsDispChoice = SupportServantEquipListViewItem__get_IsDispChoice(item, 0LL);
        if ( v20 )
        {
          UnityEngine_GameObject__SetActive(v20, IsDispChoice, 0LL);
          return;
        }
      }
LABEL_33:
      sub_B170D4();
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
  ServantFaceIconComponent_o *servantFaceIcon; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  bool IsDispLock; // w0
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x21
  bool IsDispChoice; // w0
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x0
  struct UILabel_o *warningLabel; // x0
  struct UILabel_o *skillInvalidLabel; // x0
  UILabel_o *v27; // x21
  System_String_o *v28; // x0
  struct System_Collections_Generic_List_UIWidget__o *v29; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v31; // x0
  UILabel_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  _BOOL4 isUse; // w21
  UILabel_o *v35; // x21
  System_String_o *v36; // x0
  struct System_Collections_Generic_List_UIWidget__o *v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x0
  int size; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UIWidget_array *v41; // x0
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Component_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Object_o *chocolateSprite; // x21
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0

  if ( (byte_40FD9BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Add__, item);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__Clear__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_11583/*"SELECT_BONUS_SKILL_INVALID"*/, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    sub_B16FFC(&StringLiteral_5513/*"EQUIP_GRAPH_USE"*/, v14);
    byte_40FD9BF = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_74;
  ServantFaceIconComponent__Set_30631556(
    servantFaceIcon,
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
    v17 = (UnityEngine_Component_o *)this->fields.lockSprite;
    if ( !v17 )
      goto LABEL_74;
    gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
    IsDispLock = SupportServantEquipListViewItem__get_IsDispLock(item, 0LL);
    if ( !gameObject )
      goto LABEL_74;
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
    v21 = (UnityEngine_Component_o *)this->fields.choiceSprite;
    if ( !v21 )
      goto LABEL_74;
    v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
    IsDispChoice = SupportServantEquipListViewItem__get_IsDispChoice(item, 0LL);
    if ( !v22 )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(v22, IsDispChoice, 0LL);
  }
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_74;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)messageLabelList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  warningLabel = this->fields.warningLabel;
  if ( !warningLabel )
    goto LABEL_74;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))warningLabel->klass->vtable._8_set_alpha.method)(
    warningLabel,
    warningLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( !skillInvalidLabel )
    goto LABEL_74;
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, float))skillInvalidLabel->klass->vtable._8_set_alpha.method)(
    skillInvalidLabel,
    skillInvalidLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
  v27 = this->fields.skillInvalidLabel;
  if ( item->fields.isInvalidRarity )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_11583/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !v27 )
      goto LABEL_74;
    UILabel__set_text(v27, v28, 0LL);
    v29 = this->fields.messageLabelList;
    if ( !v29 )
      goto LABEL_74;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !v27 )
      goto LABEL_74;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( item->fields.isBase )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_74;
    v31 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !v31 )
      goto LABEL_74;
LABEL_35:
    UnityEngine_GameObject__SetActive(v31, 0, 0LL);
    v32 = this->fields.warningLabel;
    if ( !v32 )
      goto LABEL_74;
    UILabel__set_text(v32, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    goto LABEL_46;
  }
  v33 = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !v33 )
    goto LABEL_74;
  isUse = item->fields.isUse;
  v31 = UnityEngine_Component__get_gameObject(v33, 0LL);
  if ( !v31 )
    goto LABEL_74;
  if ( !isUse )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(v31, 1, 0LL);
  v35 = this->fields.warningLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5513/*"EQUIP_GRAPH_USE"*/, 0LL);
  if ( !v35 )
    goto LABEL_74;
  UILabel__set_text(v35, v36, 0LL);
  v37 = this->fields.messageLabelList;
  if ( !v37 )
    goto LABEL_74;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningLabel,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_46:
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.messageLabelList;
  if ( !v38 )
    goto LABEL_74;
  size = v38->fields._size;
  if ( size >= 1 )
  {
    if ( size == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v38,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.messageLabelList;
      if ( !v38 )
        goto LABEL_74;
    }
    messageLabel = this->fields.messageLabel;
    v41 = (UIWidget_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_74;
    SwitchUIWidgetComponent__Set(messageLabel, v41, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    v43 = this->fields.selectObject;
    if ( !v43 )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(v43, item->fields.isBase, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    v45 = (UnityEngine_Component_o *)this->fields.friendShipSprite;
    if ( !v45 )
      goto LABEL_74;
    v46 = UnityEngine_Component__get_gameObject(v45, 0LL);
    if ( !v46 )
      goto LABEL_74;
    UnityEngine_GameObject__SetActive(v46, item->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    v48 = (UnityEngine_Component_o *)this->fields.chocolateSprite;
    if ( v48 )
    {
      v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
      if ( v49 )
      {
        UnityEngine_GameObject__SetActive(v49, item->fields.isChocolateSvtEquip, 0LL);
        return;
      }
    }
LABEL_74:
    sub_B170D4();
  }
}
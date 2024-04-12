void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B25E4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B52984(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_42B25E4 = 1;
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


void __fastcall EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_42B25E6 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B25E6 = 1;
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
      if ( !Component_WebViewObject )
        goto LABEL_33;
      Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                             Component_WebViewObject,
                                                             0LL);
      if ( !Component_WebViewObject )
        goto LABEL_33;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)Component_WebViewObject,
        item->fields.isSwapChoice != item->fields.isChoice,
        0LL);
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
      if ( Component_WebViewObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, item->fields.isBase, 0LL);
        return;
      }
LABEL_33:
      sub_B52A5C(Component_WebViewObject, v8);
    }
  }
}


void __fastcall EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  void *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  UILabel_o *skillInvalidLabel; // x21
  int v11; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  System_String_o *v17; // x22
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x1
  const MethodInfo_2FF1604 *v21; // x2
  System_String_o *v22; // x22
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  UILabel_o *warningLabel; // x22
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42B25E5 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_11706/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_B52984(&StringLiteral_15456/*"WAVE_BATTLE_EQUIP_UNIQUE"*/);
    sub_B52984(&StringLiteral_15457/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_5570/*"EQUIP_GRAPH_USE"*/);
    byte_42B25E5 = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_87;
  ServantFaceIconComponent__Set_30396076(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    item->fields.userSvtEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0LL);
  servantEntity = item->fields.servantEntity;
  servantFaceIcon = this->fields.costIconLabel;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !servantFaceIcon )
      goto LABEL_87;
  }
  else
  {
    cost = 0;
    if ( !servantFaceIcon )
      goto LABEL_87;
  }
  UIIconLabel__Set_41786400((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_87;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  servantFaceIcon = this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_87;
  (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_87;
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
      goto LABEL_87;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_87;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_87;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( item->fields.isBase || item->fields.isOldBase )
    goto LABEL_24;
  if ( (item->fields.wearerMember & 0x80000000) != 0 )
  {
    if ( !item->fields._IsUnique_k__BackingField )
    {
LABEL_24:
      servantFaceIcon = this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_87;
      servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      if ( !servantFaceIcon )
        goto LABEL_87;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
      servantFaceIcon = this->fields.warningLabel;
      if ( !servantFaceIcon )
        goto LABEL_87;
      UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      goto LABEL_28;
    }
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_87;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( item->fields._UniqueOrganizedWave_k__BackingField >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_15457/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
      UniqueOrganizedWave_k__BackingField = item->fields._UniqueOrganizedWave_k__BackingField;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
      servantFaceIcon = System_String__Format_44563852(v22, v23, v24, 0LL);
      if ( !v16 )
        goto LABEL_87;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_15456/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
    if ( !v16 )
      goto LABEL_87;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EQUIP_GRAPH_USE"*/, 0LL);
    v21 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__;
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)v25;
  }
  else
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_87;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( item->fields._OrganizedWave_k__BackingField >= 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15457/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
      UniqueOrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
      servantFaceIcon = System_String__Format_44563852(v17, v18, v19, 0LL);
      if ( !v16 )
        goto LABEL_87;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EQUIP_GRAPH_USE"*/, 0LL);
    if ( !v16 )
      goto LABEL_87;
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon;
    v21 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v16, v20, v21);
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = System_String__Join_44623760(
                      (System_String_o *)StringLiteral_1/*""*/,
                      (System_Collections_Generic_IEnumerable_string__o *)v16,
                      0LL);
  if ( !warningLabel )
    goto LABEL_87;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_87;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningLabel,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_28:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_87;
  v11 = *((_DWORD *)servantFaceIcon + 6);
  if ( v11 >= 1 )
  {
    if ( v11 == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      servantFaceIcon = this->fields.messageLabelList;
      if ( !servantFaceIcon )
        goto LABEL_87;
    }
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_87;
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
      goto LABEL_87;
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
      goto LABEL_87;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_87;
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
LABEL_87:
    sub_B52A5C(servantFaceIcon, item);
  }
}
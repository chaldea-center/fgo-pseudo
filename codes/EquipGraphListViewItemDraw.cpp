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

  if ( (byte_438E78A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_438E78A = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_B77560(
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

  if ( (byte_438E78C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E78C = 1;
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
                                                             (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_B7769C(Component_WebViewObject, v8);
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
  __int64 v18; // x2
  Il2CppObject *v19; // x23
  __int64 v20; // x2
  Il2CppObject *v21; // x0
  __int64 *v22; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x1
  const MethodInfo_3053298 *v24; // x2
  UILabel_o *warningLabel; // x22
  System_String_o *v26; // x22
  __int64 v27; // x2
  Il2CppObject *v28; // x23
  __int64 v29; // x2
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438E78B & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_15601/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_B775C4(&StringLiteral_11836/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_B775C4(&StringLiteral_15621/*"WAVE_BATTLE_EQUIP_UNIQUE"*/);
    sub_B775C4(&StringLiteral_15622/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_5671/*"EQUIP_GRAPH_USE"*/);
    byte_438E78B = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_94;
  ServantFaceIconComponent__Set_31684224(
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
      goto LABEL_94;
  }
  else
  {
    cost = 0;
    if ( !servantFaceIcon )
      goto LABEL_94;
  }
  UIIconLabel__Set_41716724((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_94;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
  servantFaceIcon = this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_94;
  (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_94;
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
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11836/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_94;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_94;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_94;
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
        goto LABEL_94;
      servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      if ( !servantFaceIcon )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
      servantFaceIcon = this->fields.warningLabel;
      if ( !servantFaceIcon )
        goto LABEL_94;
      UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      goto LABEL_28;
    }
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
    servantFaceIcon = this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_94;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_94;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !item->fields._IsClearedWave_k__BackingField )
    {
      if ( item->fields._UniqueOrganizedWave_k__BackingField >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_15622/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = item->fields._UniqueOrganizedWave_k__BackingField;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v27);
        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v29);
        servantFaceIcon = System_String__Format_44897472(v26, v28, v30, 0LL);
        if ( !v16 )
          goto LABEL_94;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_15621/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v16 )
        goto LABEL_94;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      v31 = LocalizationManager__Get((System_String_o *)StringLiteral_5671/*"EQUIP_GRAPH_USE"*/, 0LL);
      v24 = (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__;
      v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v31;
      goto LABEL_80;
    }
  }
  else
  {
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
    servantFaceIcon = this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_94;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_94;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !item->fields._IsClearedWave_k__BackingField )
    {
      if ( item->fields._OrganizedWave_k__BackingField >= 1 )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15622/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v18);
        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v20);
        servantFaceIcon = System_String__Format_44897472(v17, v19, v21, 0LL);
        if ( !v16 )
          goto LABEL_94;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = &StringLiteral_5671/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_78;
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = &StringLiteral_15601/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_78:
  servantFaceIcon = LocalizationManager__Get((System_String_o *)*v22, 0LL);
  if ( !v16 )
    goto LABEL_94;
  v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon;
  v24 = (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__;
LABEL_80:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v16, v23, v24);
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = System_String__Join_44957380(
                      (System_String_o *)StringLiteral_1/*""*/,
                      (System_Collections_Generic_IEnumerable_string__o *)v16,
                      0LL);
  if ( !warningLabel )
    goto LABEL_94;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_94;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.warningLabel,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_28:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_94;
  v11 = *((_DWORD *)servantFaceIcon + 6);
  if ( v11 >= 1 )
  {
    if ( v11 == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      servantFaceIcon = this->fields.messageLabelList;
      if ( !servantFaceIcon )
        goto LABEL_94;
    }
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_94;
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
      goto LABEL_94;
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
      goto LABEL_94;
    servantFaceIcon = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_94;
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
LABEL_94:
    sub_B7769C(servantFaceIcon, item);
  }
}
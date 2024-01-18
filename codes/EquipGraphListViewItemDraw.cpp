void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A176 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_418A176 = 1;
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


void __fastcall EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  __int64 v9; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_418A178 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418A178 = 1;
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
      sub_B2C434(Component_WebViewObject, v9);
    }
  }
}


void __fastcall EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  void *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  UILabel_o *skillInvalidLabel; // x21
  int v26; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  System_String_o *v32; // x22
  Il2CppObject *v33; // x23
  Il2CppObject *v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x1
  const MethodInfo_2EF4460 *v36; // x2
  System_String_o *v37; // x22
  Il2CppObject *v38; // x23
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  UILabel_o *warningLabel; // x22
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_418A177 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v16);
    sub_B2C35C(&StringLiteral_11619/*"SELECT_BONUS_SKILL_INVALID"*/, v17);
    sub_B2C35C(&StringLiteral_15351/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, v18);
    sub_B2C35C(&StringLiteral_15352/*"WAVE_BATTLE_EQUIP_WAVE"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    sub_B2C35C(&StringLiteral_5528/*"EQUIP_GRAPH_USE"*/, v21);
    byte_418A177 = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_87;
  ServantFaceIconComponent__Set_30719352(
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
  UIIconLabel__Set_41609428((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_87;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11619/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_87;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_87;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
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
      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_15352/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
      UniqueOrganizedWave_k__BackingField = item->fields._UniqueOrganizedWave_k__BackingField;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
      servantFaceIcon = System_String__Format_44301068(v37, v38, v39, 0LL);
      if ( !v31 )
        goto LABEL_87;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_15351/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
    if ( !v31 )
      goto LABEL_87;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v31,
      (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_5528/*"EQUIP_GRAPH_USE"*/, 0LL);
    v36 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__;
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)v40;
  }
  else
  {
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
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
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15352/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
      UniqueOrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
      MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
      servantFaceIcon = System_String__Format_44301068(v32, v33, v34, 0LL);
      if ( !v31 )
        goto LABEL_87;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v31,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_5528/*"EQUIP_GRAPH_USE"*/, 0LL);
    if ( !v31 )
      goto LABEL_87;
    v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon;
    v36 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__;
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v31, v35, v36);
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = System_String__Join_44360976(
                      (System_String_o *)StringLiteral_1/*""*/,
                      (System_Collections_Generic_IEnumerable_string__o *)v31,
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
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_28:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_87;
  v26 = *((_DWORD *)servantFaceIcon + 6);
  if ( v26 >= 1 )
  {
    if ( v26 == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      servantFaceIcon = this->fields.messageLabelList;
      if ( !servantFaceIcon )
        goto LABEL_87;
    }
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    sub_B2C434(servantFaceIcon, item);
  }
}
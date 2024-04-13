void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB802 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v5, v6, v7);
    byte_42EB802 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.messageLabelList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *baseButton; // x22
  __int64 v11; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *lockSprite; // x21
  UnityEngine_Object_o *choiceSprite; // x21
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_42EB804 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, (_DWORD)item, isInput, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EB804 = 1;
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
                                                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_B5D69C(Component_WebViewObject, v11);
    }
  }
}


void __fastcall EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
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
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  void *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  UILabel_o *skillInvalidLabel; // x21
  int v59; // w8
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x21
  System_String_o *v65; // x22
  Il2CppObject *v66; // x23
  Il2CppObject *v67; // x0
  __int64 *v68; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v69; // x1
  const MethodInfo_3056FC0 *v70; // x2
  UILabel_o *warningLabel; // x22
  System_String_o *v72; // x22
  Il2CppObject *v73; // x23
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42EB803 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__Clear__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_15500/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11752/*"SELECT_BONUS_SKILL_INVALID"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_15520/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_15521/*"WAVE_BATTLE_EQUIP_WAVE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_1/*""*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_5605/*"EQUIP_GRAPH_USE"*/, v52, v53, v54);
    byte_42EB803 = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_94;
  ServantFaceIconComponent__Set_30775392(
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
  UIIconLabel__Set_41886452((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_94;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)servantFaceIcon,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UIWidget__Clear__);
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
    servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_11752/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_94;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_94;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
      (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
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
    v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v64,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
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
        v72 = LocalizationManager__Get((System_String_o *)StringLiteral_15521/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = item->fields._UniqueOrganizedWave_k__BackingField;
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
        servantFaceIcon = System_String__Format_44573324(v72, v73, v74, 0LL);
        if ( !v64 )
          goto LABEL_94;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v64,
          (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v64,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      servantFaceIcon = LocalizationManager__Get((System_String_o *)StringLiteral_15520/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v64 )
        goto LABEL_94;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v64,
        (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v64,
        (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      v75 = LocalizationManager__Get((System_String_o *)StringLiteral_5605/*"EQUIP_GRAPH_USE"*/, 0LL);
      v70 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__;
      v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)v75;
      goto LABEL_80;
    }
  }
  else
  {
    v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v64,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
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
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_15521/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
        v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
        v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
        servantFaceIcon = System_String__Format_44573324(v65, v66, v67, 0LL);
        if ( !v64 )
          goto LABEL_94;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v64,
          (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v64,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StringLiteral_26/*"\n"*/,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v68 = &StringLiteral_5605/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_78;
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v68 = &StringLiteral_15500/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_78:
  servantFaceIcon = LocalizationManager__Get((System_String_o *)*v68, 0LL);
  if ( !v64 )
    goto LABEL_94;
  v69 = (EventMissionProgressRequest_Argument_ProgressData_o *)servantFaceIcon;
  v70 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__;
LABEL_80:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v64, v69, v70);
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = System_String__Join_44633232(
                      (System_String_o *)StringLiteral_1/*""*/,
                      (System_Collections_Generic_IEnumerable_string__o *)v64,
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
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
LABEL_28:
  servantFaceIcon = this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_94;
  v59 = *((_DWORD *)servantFaceIcon + 6);
  if ( v59 >= 1 )
  {
    if ( v59 == 1 && item->fields.isInvalidRarity )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantFaceIcon,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.skillInvalidLabel,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIWidget__Add__);
      servantFaceIcon = this->fields.messageLabelList;
      if ( !servantFaceIcon )
        goto LABEL_94;
    }
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)servantFaceIcon,
                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    sub_B5D69C(servantFaceIcon, item);
  }
}
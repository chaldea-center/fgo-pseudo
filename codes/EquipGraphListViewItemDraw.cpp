void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDBCF1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4BDBCF1 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.messageLabelList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


void __fastcall EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x22
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4BDBCF3 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDBCF3 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Collider___);
      if ( !Component_object )
        goto LABEL_35;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL);
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_35;
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
    lockSprite = (UnityEngine_Object_o *)this->fields.lockSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(lockSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.lockSprite;
      if ( !Component_object )
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_35;
      if ( item->fields.isSwapLock )
        isLock = !item->fields.isLock;
      else
        isLock = item->fields.isLock;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isLock, 0LL);
    }
    choiceSprite = (UnityEngine_Object_o *)this->fields.choiceSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(choiceSprite, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.choiceSprite;
      if ( !Component_object )
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Component_object, 0LL);
      if ( !Component_object )
        goto LABEL_35;
      if ( item->fields.isSwapChoice )
        isChoice = !item->fields.isChoice;
      else
        isChoice = item->fields.isChoice;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, isChoice, 0LL);
    }
    selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
        return;
      }
LABEL_35:
      sub_1C22094(Component_object, v8);
    }
  }
}


void __fastcall EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *v5; // x19
  int *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v12; // w9
  UILabel_o *skillInvalidLabel; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int v30; // w8
  __int64 v31; // x8
  _QWORD *v32; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_object__o *v37; // x21
  System_String_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x23
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  int64_t v56; // x1
  Il2CppClass **v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 *v64; // x8
  System_String_o *v65; // x22
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  Il2CppObject *v69; // x23
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  int64_t v83; // x1
  Il2CppClass **v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  _QWORD *v91; // x9
  struct System_Object_array *v92; // x8
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  int32_t version; // w10
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  int64_t v105; // x1
  Il2CppClass **v106; // x0
  UILabel_o *warningLabel; // x22
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  _QWORD *v118; // x9
  struct System_Object_array *v119; // x8
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  int64_t v131; // x1
  Il2CppClass **v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  _QWORD *v139; // x9
  struct System_Object_array *v140; // x8
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4BDBCF2 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_15759/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1C21E38(&StringLiteral_11713/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1C21E38(&StringLiteral_15779/*"WAVE_BATTLE_EQUIP_UNIQUE"*/);
    sub_1C21E38(&StringLiteral_15780/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_5634/*"EQUIP_GRAPH_USE"*/);
    byte_4BDBCF2 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_123;
  ServantFaceIconComponent__Set_39464008(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v5->fields.userSvtEntity,
    v5->fields.iconLabelInfo1,
    v5->fields.iconLabelInfo2,
    0LL);
  servantEntity = v5->fields.servantEntity;
  servantFaceIcon = (int *)this->fields.costIconLabel;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !servantFaceIcon )
      goto LABEL_123;
  }
  else
  {
    cost = 0;
    if ( !servantFaceIcon )
      goto LABEL_123;
  }
  UIIconLabel__Set_39480396((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_123;
  size = messageLabelList->fields._size;
  v12 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0LL);
  servantFaceIcon = (int *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_123;
  (*(void (__fastcall **)(int *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (int *)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_123;
  servantFaceIcon = (int *)(*(__int64 (__fastcall **)(int *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
                             servantFaceIcon,
                             *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
                             0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( v5->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11713/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v20 = *((_QWORD *)servantFaceIcon + 2);
    v21 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v20 )
      goto LABEL_123;
    v22 = servantFaceIcon[6];
    if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = v20 + 8 * v22;
      servantFaceIcon[6] = v22 + 1;
      *(_QWORD *)(v23 + 32) = item;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)item, v14, v15, v16, v17, v18, v19);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( v5->fields.isBase || v5->fields.isOldBase )
    goto LABEL_28;
  if ( (v5->fields.wearerMember & 0x80000000) != 0 )
  {
    if ( !v5->fields._IsUnique_k__BackingField )
    {
LABEL_28:
      servantFaceIcon = (int *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_123;
      servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      if ( !servantFaceIcon )
        goto LABEL_123;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
      servantFaceIcon = (int *)this->fields.warningLabel;
      if ( !servantFaceIcon )
        goto LABEL_123;
      UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      goto LABEL_32;
    }
    v37 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_123;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !v5->fields._IsClearedWave_k__BackingField )
    {
      if ( v5->fields._UniqueOrganizedWave_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_15780/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._UniqueOrganizedWave_k__BackingField;
        v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v66, v67, v68);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v70, v71, v72);
        servantFaceIcon = (int *)System_String__Format_63129848(v65, v69, v73, 0LL);
        if ( !v37 )
          goto LABEL_123;
        items = v37->fields._items;
        v81 = Method_System_Collections_Generic_List_string__Add__;
        ++v37->fields._version;
        if ( !items )
          goto LABEL_123;
        v82 = v37->fields._size;
        v83 = (int64_t)servantFaceIcon;
        if ( (unsigned int)v82 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
        }
        else
        {
          v84 = &items->obj.klass + v82;
          v37->fields._size = v82 + 1;
          v84[4] = (Il2CppClass *)v83;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v84 + 4), v83, v74, v75, v76, v77, v78, v79);
        }
        v118 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v119 = v37->fields._items;
        ++v37->fields._version;
        if ( !v119 )
          goto LABEL_123;
        v120 = v37->fields._size;
        if ( (unsigned int)v120 >= v119->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)item,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
        }
        else
        {
          v121 = &v119->obj.klass + v120;
          v37->fields._size = v120 + 1;
          v121[4] = (Il2CppClass *)item;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v121 + 4), (int64_t)item, v85, v86, v87, v88, v89, v90);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15779/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v37 )
        goto LABEL_123;
      v128 = v37->fields._items;
      v129 = Method_System_Collections_Generic_List_string__Add__;
      ++v37->fields._version;
      if ( !v128 )
        goto LABEL_123;
      v130 = v37->fields._size;
      v131 = (int64_t)servantFaceIcon;
      if ( (unsigned int)v130 >= v128->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v132 = &v128->obj.klass + v130;
        v37->fields._size = v130 + 1;
        v132[4] = (Il2CppClass *)v131;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v132 + 4), v131, v122, v123, v124, v125, v126, v127);
      }
      v139 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v140 = v37->fields._items;
      ++v37->fields._version;
      if ( !v140 )
        goto LABEL_123;
      v141 = v37->fields._size;
      if ( (unsigned int)v141 >= v140->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          (Il2CppObject *)item,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
      }
      else
      {
        v142 = &v140->obj.klass + v141;
        v37->fields._size = v141 + 1;
        v142[4] = (Il2CppClass *)item;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v142 + 4), (int64_t)item, v133, v134, v135, v136, v137, v138);
      }
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5634/*"EQUIP_GRAPH_USE"*/, 0LL);
      version = v37->fields._version;
      v102 = v37->fields._items;
      v103 = Method_System_Collections_Generic_List_string__Add__;
      goto LABEL_96;
    }
  }
  else
  {
    v37 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_123;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !v5->fields._IsClearedWave_k__BackingField )
    {
      if ( v5->fields._OrganizedWave_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_15780/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v39, v40, v41);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v43, v44, v45);
        servantFaceIcon = (int *)System_String__Format_63129848(v38, v42, v46, 0LL);
        if ( !v37 )
          goto LABEL_123;
        v53 = v37->fields._items;
        v54 = Method_System_Collections_Generic_List_string__Add__;
        ++v37->fields._version;
        if ( !v53 )
          goto LABEL_123;
        v55 = v37->fields._size;
        v56 = (int64_t)servantFaceIcon;
        if ( (unsigned int)v55 >= v53->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &v53->obj.klass + v55;
          v37->fields._size = v55 + 1;
          v57[4] = (Il2CppClass *)v56;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v57 + 4), v56, v47, v48, v49, v50, v51, v52);
        }
        v91 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v92 = v37->fields._items;
        ++v37->fields._version;
        if ( !v92 )
          goto LABEL_123;
        v93 = v37->fields._size;
        if ( (unsigned int)v93 >= v92->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)item,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = &v92->obj.klass + v93;
          v37->fields._size = v93 + 1;
          v94[4] = (Il2CppClass *)item;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)item, v58, v59, v60, v61, v62, v63);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = &StringLiteral_5634/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_94;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = &StringLiteral_15759/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_94:
  servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)*v64, 0LL);
  if ( !v37 )
    goto LABEL_123;
  version = v37->fields._version;
  v102 = v37->fields._items;
  v103 = Method_System_Collections_Generic_List_string__Add__;
LABEL_96:
  v37->fields._version = version + 1;
  if ( !v102 )
    goto LABEL_123;
  v104 = v37->fields._size;
  v105 = (int64_t)servantFaceIcon;
  if ( (unsigned int)v104 >= v102->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v37,
      (Il2CppObject *)servantFaceIcon,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = &v102->obj.klass + v104;
    v37->fields._size = v104 + 1;
    v106[4] = (Il2CppClass *)v105;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v106 + 4), v105, v95, v96, v97, v98, v99, v100);
  }
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_63131132(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v37,
                             0LL);
  if ( !warningLabel )
    goto LABEL_123;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v114 = *((_QWORD *)servantFaceIcon + 2);
  v115 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v114 )
    goto LABEL_123;
  v116 = servantFaceIcon[6];
  if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v117 = v114 + 8 * v116;
    servantFaceIcon[6] = v116 + 1;
    *(_QWORD *)(v117 + 32) = item;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v117 + 32), (int64_t)item, v108, v109, v110, v111, v112, v113);
  }
LABEL_32:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  v30 = servantFaceIcon[6];
  if ( v30 >= 1 )
  {
    if ( v30 == 1 && v5->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v31 = *((_QWORD *)servantFaceIcon + 2);
      v32 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v31 )
        goto LABEL_123;
      if ( *(_DWORD *)(v31 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v31 + 40) = item;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 40), (int64_t)item, v24, v25, v26, v27, v28, v29);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_123;
    SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    servantFaceIcon = (int *)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (int *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_123;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isFriendShipSvtEq, 0LL);
  }
  chocolateSprite = (UnityEngine_Object_o *)this->fields.chocolateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(chocolateSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (int *)this->fields.chocolateSprite;
    if ( servantFaceIcon )
    {
      servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      if ( servantFaceIcon )
      {
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)servantFaceIcon,
          v5->fields.isChocolateSvtEquip,
          0LL);
        return;
      }
    }
LABEL_123:
    sub_1C22094(servantFaceIcon, item);
  }
}
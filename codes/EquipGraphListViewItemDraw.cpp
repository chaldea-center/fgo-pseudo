void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFCEF6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1C2E12C(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_4BFCEF6 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.messageLabelList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4BFCEF8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    byte_4BFCEF8 = 1;
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
                                                      (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1C2E388(Component_object, v9);
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
  __int64 v22; // x1
  int *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v28; // w9
  UILabel_o *skillInvalidLabel; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int v46; // w8
  __int64 v47; // x8
  _QWORD *v48; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_object__o *v53; // x21
  System_String_o *v54; // x22
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x23
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  int64_t v72; // x1
  Il2CppClass **v73; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  __int64 *v80; // x8
  System_String_o *v81; // x22
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  Il2CppObject *v85; // x23
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  Il2CppObject *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  int64_t v99; // x1
  Il2CppClass **v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  _QWORD *v107; // x9
  struct System_Object_array *v108; // x8
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int32_t version; // w10
  struct System_Object_array *v118; // x8
  _QWORD *v119; // x9
  __int64 v120; // x10
  int64_t v121; // x1
  Il2CppClass **v122; // x0
  UILabel_o *warningLabel; // x22
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  __int64 v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  __int64 v133; // x8
  _QWORD *v134; // x9
  struct System_Object_array *v135; // x8
  __int64 v136; // x10
  Il2CppClass **v137; // x0
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  int64_t v147; // x1
  Il2CppClass **v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  _QWORD *v155; // x9
  struct System_Object_array *v156; // x8
  __int64 v157; // x10
  Il2CppClass **v158; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4BFCEF7 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, item);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIWidget__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v12);
    sub_1C2E12C(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v14);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_43/*"\n"*/, v16);
    sub_1C2E12C(&StringLiteral_15771/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v17);
    sub_1C2E12C(&StringLiteral_11707/*"SELECT_BONUS_SKILL_INVALID"*/, v18);
    sub_1C2E12C(&StringLiteral_15791/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, v19);
    sub_1C2E12C(&StringLiteral_15792/*"WAVE_BATTLE_EQUIP_WAVE"*/, v20);
    sub_1C2E12C(&StringLiteral_1/*""*/, v21);
    sub_1C2E12C(&StringLiteral_5625/*"EQUIP_GRAPH_USE"*/, v22);
    byte_4BFCEF7 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_123;
  ServantFaceIconComponent__Set_39534600(
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
  UIIconLabel__Set_39550988((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_123;
  size = messageLabelList->fields._size;
  v28 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v28;
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
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11707/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v36 = *((_QWORD *)servantFaceIcon + 2);
    v37 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v36 )
      goto LABEL_123;
    v38 = servantFaceIcon[6];
    if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else
    {
      v39 = v36 + 8 * v38;
      servantFaceIcon[6] = v38 + 1;
      *(_QWORD *)(v39 + 32) = item;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)item, v30, v31, v32, v33, v34, v35);
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
    v53 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_string___ctor__);
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
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_15792/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._UniqueOrganizedWave_k__BackingField;
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v82, v83, v84);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v86, v87, v88);
        servantFaceIcon = (int *)System_String__Format_63249956(v81, v85, v89, 0LL);
        if ( !v53 )
          goto LABEL_123;
        items = v53->fields._items;
        v97 = Method_System_Collections_Generic_List_string__Add__;
        ++v53->fields._version;
        if ( !items )
          goto LABEL_123;
        v98 = v53->fields._size;
        v99 = (int64_t)servantFaceIcon;
        if ( (unsigned int)v98 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = &items->obj.klass + v98;
          v53->fields._size = v98 + 1;
          v100[4] = (Il2CppClass *)v99;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v100 + 4), v99, v90, v91, v92, v93, v94, v95);
        }
        v134 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v135 = v53->fields._items;
        ++v53->fields._version;
        if ( !v135 )
          goto LABEL_123;
        v136 = v53->fields._size;
        if ( (unsigned int)v136 >= v135->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            (Il2CppObject *)item,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
        }
        else
        {
          v137 = &v135->obj.klass + v136;
          v53->fields._size = v136 + 1;
          v137[4] = (Il2CppClass *)item;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v137 + 4), (int64_t)item, v101, v102, v103, v104, v105, v106);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15791/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v53 )
        goto LABEL_123;
      v144 = v53->fields._items;
      v145 = Method_System_Collections_Generic_List_string__Add__;
      ++v53->fields._version;
      if ( !v144 )
        goto LABEL_123;
      v146 = v53->fields._size;
      v147 = (int64_t)servantFaceIcon;
      if ( (unsigned int)v146 >= v144->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
      }
      else
      {
        v148 = &v144->obj.klass + v146;
        v53->fields._size = v146 + 1;
        v148[4] = (Il2CppClass *)v147;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v148 + 4), v147, v138, v139, v140, v141, v142, v143);
      }
      v155 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v156 = v53->fields._items;
      ++v53->fields._version;
      if ( !v156 )
        goto LABEL_123;
      v157 = v53->fields._size;
      if ( (unsigned int)v157 >= v156->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v53,
          (Il2CppObject *)item,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
      }
      else
      {
        v158 = &v156->obj.klass + v157;
        v53->fields._size = v157 + 1;
        v158[4] = (Il2CppClass *)item;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v158 + 4), (int64_t)item, v149, v150, v151, v152, v153, v154);
      }
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5625/*"EQUIP_GRAPH_USE"*/, 0LL);
      version = v53->fields._version;
      v118 = v53->fields._items;
      v119 = Method_System_Collections_Generic_List_string__Add__;
      goto LABEL_96;
    }
  }
  else
  {
    v53 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_string___ctor__);
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
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_15792/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v55, v56, v57);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v59, v60, v61);
        servantFaceIcon = (int *)System_String__Format_63249956(v54, v58, v62, 0LL);
        if ( !v53 )
          goto LABEL_123;
        v69 = v53->fields._items;
        v70 = Method_System_Collections_Generic_List_string__Add__;
        ++v53->fields._version;
        if ( !v69 )
          goto LABEL_123;
        v71 = v53->fields._size;
        v72 = (int64_t)servantFaceIcon;
        if ( (unsigned int)v71 >= v69->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &v69->obj.klass + v71;
          v53->fields._size = v71 + 1;
          v73[4] = (Il2CppClass *)v72;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v73 + 4), v72, v63, v64, v65, v66, v67, v68);
        }
        v107 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v108 = v53->fields._items;
        ++v53->fields._version;
        if ( !v108 )
          goto LABEL_123;
        v109 = v53->fields._size;
        if ( (unsigned int)v109 >= v108->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v53,
            (Il2CppObject *)item,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = &v108->obj.klass + v109;
          v53->fields._size = v109 + 1;
          v110[4] = (Il2CppClass *)item;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v110 + 4), (int64_t)item, v74, v75, v76, v77, v78, v79);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v80 = &StringLiteral_5625/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_94;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v80 = &StringLiteral_15771/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_94:
  servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)*v80, 0LL);
  if ( !v53 )
    goto LABEL_123;
  version = v53->fields._version;
  v118 = v53->fields._items;
  v119 = Method_System_Collections_Generic_List_string__Add__;
LABEL_96:
  v53->fields._version = version + 1;
  if ( !v118 )
    goto LABEL_123;
  v120 = v53->fields._size;
  v121 = (int64_t)servantFaceIcon;
  if ( (unsigned int)v120 >= v118->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v53,
      (Il2CppObject *)servantFaceIcon,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = &v118->obj.klass + v120;
    v53->fields._size = v120 + 1;
    v122[4] = (Il2CppClass *)v121;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v122 + 4), v121, v111, v112, v113, v114, v115, v116);
  }
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_63251240(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v53,
                             0LL);
  if ( !warningLabel )
    goto LABEL_123;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v130 = *((_QWORD *)servantFaceIcon + 2);
  v131 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v130 )
    goto LABEL_123;
  v132 = servantFaceIcon[6];
  if ( (unsigned int)v132 >= *(_DWORD *)(v130 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
  }
  else
  {
    v133 = v130 + 8 * v132;
    servantFaceIcon[6] = v132 + 1;
    *(_QWORD *)(v133 + 32) = item;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v133 + 32), (int64_t)item, v124, v125, v126, v127, v128, v129);
  }
LABEL_32:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  v46 = servantFaceIcon[6];
  if ( v46 >= 1 )
  {
    if ( v46 == 1 && v5->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v47 = *((_QWORD *)servantFaceIcon + 2);
      v48 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v47 )
        goto LABEL_123;
      if ( *(_DWORD *)(v47 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v47 + 40) = item;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v47 + 40), (int64_t)item, v40, v41, v42, v43, v44, v45);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    sub_1C2E388(servantFaceIcon, item);
  }
}
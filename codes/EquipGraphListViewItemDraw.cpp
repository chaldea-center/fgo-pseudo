void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B159B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UIWidget__TypeInfo, v5, v6);
    byte_4B159B2 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_UIWidget__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.messageLabelList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *baseButton; // x22
  __int64 v10; // x1
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_4B159B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, item, isInput);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B159B4 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object )
        goto LABEL_35;
      Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                      Component_object,
                                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.selectObject;
      if ( Component_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, item->fields.isBase, 0LL);
        return;
      }
LABEL_35:
      sub_1BCAA3C(Component_object, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *v5; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  int *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v44; // w9
  UILabel_o *skillInvalidLabel; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  __int64 v56; // x2
  __int64 v57; // x3
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int v64; // w8
  __int64 v65; // x8
  _QWORD *v66; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_object__o *v71; // x21
  __int64 v72; // x1
  System_String_o *v73; // x22
  Il2CppObject *v74; // x23
  Il2CppObject *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  int64_t v85; // x1
  Il2CppClass **v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  __int64 *v93; // x8
  System_String_o *v94; // x22
  Il2CppObject *v95; // x23
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  int64_t v106; // x1
  Il2CppClass **v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  _QWORD *v114; // x9
  struct System_Object_array *v115; // x8
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int32_t version; // w10
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  int64_t v128; // x1
  Il2CppClass **v129; // x0
  UILabel_o *warningLabel; // x22
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  __int64 v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  __int64 v140; // x8
  _QWORD *v141; // x9
  struct System_Object_array *v142; // x8
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  int64_t v154; // x1
  Il2CppClass **v155; // x0
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  _QWORD *v162; // x9
  struct System_Object_array *v163; // x8
  __int64 v164; // x10
  Il2CppClass **v165; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4B159B3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v19, v20);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_15660/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_11633/*"SELECT_BONUS_SKILL_INVALID"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_15680/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_15681/*"WAVE_BATTLE_EQUIP_WAVE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_5595/*"EQUIP_GRAPH_USE"*/, v37, v38);
    byte_4B159B3 = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_123;
  ServantFaceIconComponent__Set_38931252(
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
  UIIconLabel__Set_38947284((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_123;
  size = messageLabelList->fields._size;
  v44 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v44;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11633/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v52 = *((_QWORD *)servantFaceIcon + 2);
    v53 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v52 )
      goto LABEL_123;
    v54 = servantFaceIcon[6];
    if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = v52 + 8 * v54;
      servantFaceIcon[6] = v54 + 1;
      *(_QWORD *)(v55 + 32) = item;
      sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)item, v46, v47, v48, v49, v50, v51);
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
    v71 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         item,
                                                         v56,
                                                         v57);
    System_Collections_Generic_List_object____ctor(
      v71,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
        v94 = LocalizationManager__Get((System_String_o *)StringLiteral_15681/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._UniqueOrganizedWave_k__BackingField;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
        servantFaceIcon = (int *)System_String__Format_62415592(v94, v95, v96, 0LL);
        if ( !v71 )
          goto LABEL_123;
        items = v71->fields._items;
        v104 = Method_System_Collections_Generic_List_string__Add__;
        ++v71->fields._version;
        if ( !items )
          goto LABEL_123;
        v105 = v71->fields._size;
        v106 = (int64_t)servantFaceIcon;
        if ( (unsigned int)v105 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v71,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &items->obj.klass + v105;
          v71->fields._size = v105 + 1;
          v107[4] = (Il2CppClass *)v106;
          sub_1BCA784((PartyOrganizationUtility_o *)(v107 + 4), v106, v97, v98, v99, v100, v101, v102);
        }
        v141 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v142 = v71->fields._items;
        ++v71->fields._version;
        if ( !v142 )
          goto LABEL_123;
        v143 = v71->fields._size;
        if ( (unsigned int)v143 >= v142->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v71,
            (Il2CppObject *)item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
        }
        else
        {
          v144 = &v142->obj.klass + v143;
          v71->fields._size = v143 + 1;
          v144[4] = (Il2CppClass *)item;
          sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 4), (int64_t)item, v108, v109, v110, v111, v112, v113);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15680/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v71 )
        goto LABEL_123;
      v151 = v71->fields._items;
      v152 = Method_System_Collections_Generic_List_string__Add__;
      ++v71->fields._version;
      if ( !v151 )
        goto LABEL_123;
      v153 = v71->fields._size;
      v154 = (int64_t)servantFaceIcon;
      if ( (unsigned int)v153 >= v151->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
      }
      else
      {
        v155 = &v151->obj.klass + v153;
        v71->fields._size = v153 + 1;
        v155[4] = (Il2CppClass *)v154;
        sub_1BCA784((PartyOrganizationUtility_o *)(v155 + 4), v154, v145, v146, v147, v148, v149, v150);
      }
      v162 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v163 = v71->fields._items;
      ++v71->fields._version;
      if ( !v163 )
        goto LABEL_123;
      v164 = v71->fields._size;
      if ( (unsigned int)v164 >= v163->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          (Il2CppObject *)item,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
      }
      else
      {
        v165 = &v163->obj.klass + v164;
        v71->fields._size = v164 + 1;
        v165[4] = (Il2CppClass *)item;
        sub_1BCA784((PartyOrganizationUtility_o *)(v165 + 4), (int64_t)item, v156, v157, v158, v159, v160, v161);
      }
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5595/*"EQUIP_GRAPH_USE"*/, 0LL);
      version = v71->fields._version;
      v125 = v71->fields._items;
      v126 = Method_System_Collections_Generic_List_string__Add__;
      goto LABEL_96;
    }
  }
  else
  {
    v71 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         item,
                                                         v56,
                                                         v57);
    System_Collections_Generic_List_object____ctor(
      v71,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_15681/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
        servantFaceIcon = (int *)System_String__Format_62415592(v73, v74, v75, 0LL);
        if ( !v71 )
          goto LABEL_123;
        v82 = v71->fields._items;
        v83 = Method_System_Collections_Generic_List_string__Add__;
        ++v71->fields._version;
        if ( !v82 )
          goto LABEL_123;
        v84 = v71->fields._size;
        v85 = (int64_t)servantFaceIcon;
        if ( (unsigned int)v84 >= v82->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v71,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v86 = &v82->obj.klass + v84;
          v71->fields._size = v84 + 1;
          v86[4] = (Il2CppClass *)v85;
          sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 4), v85, v76, v77, v78, v79, v80, v81);
        }
        v114 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v115 = v71->fields._items;
        ++v71->fields._version;
        if ( !v115 )
          goto LABEL_123;
        v116 = v71->fields._size;
        if ( (unsigned int)v116 >= v115->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v71,
            (Il2CppObject *)item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = &v115->obj.klass + v116;
          v71->fields._size = v116 + 1;
          v117[4] = (Il2CppClass *)item;
          sub_1BCA784((PartyOrganizationUtility_o *)(v117 + 4), (int64_t)item, v87, v88, v89, v90, v91, v92);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
      v93 = &StringLiteral_5595/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_94;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
  v93 = &StringLiteral_15660/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_94:
  servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)*v93, 0LL);
  if ( !v71 )
    goto LABEL_123;
  version = v71->fields._version;
  v125 = v71->fields._items;
  v126 = Method_System_Collections_Generic_List_string__Add__;
LABEL_96:
  v71->fields._version = version + 1;
  if ( !v125 )
    goto LABEL_123;
  v127 = v71->fields._size;
  v128 = (int64_t)servantFaceIcon;
  if ( (unsigned int)v127 >= v125->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v71,
      (Il2CppObject *)servantFaceIcon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
  }
  else
  {
    v129 = &v125->obj.klass + v127;
    v71->fields._size = v127 + 1;
    v129[4] = (Il2CppClass *)v128;
    sub_1BCA784((PartyOrganizationUtility_o *)(v129 + 4), v128, v118, v119, v120, v121, v122, v123);
  }
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_62416876(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v71,
                             0LL);
  if ( !warningLabel )
    goto LABEL_123;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v137 = *((_QWORD *)servantFaceIcon + 2);
  v138 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v137 )
    goto LABEL_123;
  v139 = servantFaceIcon[6];
  if ( (unsigned int)v139 >= *(_DWORD *)(v137 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
  }
  else
  {
    v140 = v137 + 8 * v139;
    servantFaceIcon[6] = v139 + 1;
    *(_QWORD *)(v140 + 32) = item;
    sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 32), (int64_t)item, v131, v132, v133, v134, v135, v136);
  }
LABEL_32:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  v64 = servantFaceIcon[6];
  if ( v64 >= 1 )
  {
    if ( v64 == 1 && v5->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v65 = *((_QWORD *)servantFaceIcon + 2);
      v66 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v65 )
        goto LABEL_123;
      if ( *(_DWORD *)(v65 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v65 + 40) = item;
        sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 40), (int64_t)item, v58, v59, v60, v61, v62, v63);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_123;
    SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    servantFaceIcon = (int *)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v5->fields.isBase, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
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
    sub_1BCAA3C(servantFaceIcon, item);
  }
}
void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE52E & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_49FE52E = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.messageLabelList, (int32_t)v4, v5, v6);
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

  if ( (byte_49FE530 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    byte_49FE530 = 1;
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
                                                      (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1B64C5C(Component_object, v9);
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
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  int32_t v36; // w2
  int32_t v37; // w3
  int v38; // w8
  __int64 v39; // x8
  _QWORD *v40; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_object__o *v45; // x21
  System_String_o *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x23
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  int *v60; // x1
  Il2CppClass **v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
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
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  int *v79; // x1
  Il2CppClass **v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  _QWORD *v83; // x9
  struct System_Object_array *v84; // x8
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t version; // w10
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  int *v93; // x1
  Il2CppClass **v94; // x0
  UILabel_o *warningLabel; // x22
  int32_t v96; // w2
  int32_t v97; // w3
  __int64 v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  __int64 v101; // x8
  _QWORD *v102; // x9
  struct System_Object_array *v103; // x8
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  int *v111; // x1
  Il2CppClass **v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  _QWORD *v115; // x9
  struct System_Object_array *v116; // x8
  __int64 v117; // x10
  Il2CppClass **v118; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_49FE52F & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, item);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget__Add__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v12);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_1B64A00(&LocalizationManager_TypeInfo, v14);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v15);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v16);
    sub_1B64A00(&StringLiteral_15428/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v17);
    sub_1B64A00(&StringLiteral_11444/*"SELECT_BONUS_SKILL_INVALID"*/, v18);
    sub_1B64A00(&StringLiteral_15448/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, v19);
    sub_1B64A00(&StringLiteral_15449/*"WAVE_BATTLE_EQUIP_WAVE"*/, v20);
    sub_1B64A00(&StringLiteral_1/*""*/, v21);
    sub_1B64A00(&StringLiteral_5493/*"EQUIP_GRAPH_USE"*/, v22);
    byte_49FE52F = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_123;
  ServantFaceIconComponent__Set_37909632(
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
  UIIconLabel__Set_37925880((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
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
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11444/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v32 = *((_QWORD *)servantFaceIcon + 2);
    v33 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v32 )
      goto LABEL_123;
    v34 = servantFaceIcon[6];
    if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = v32 + 8 * v34;
      servantFaceIcon[6] = v34 + 1;
      *(_QWORD *)(v35 + 32) = item;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v35 + 32), (int32_t)item, v30, v31);
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
    v45 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v45,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
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
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_15449/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._UniqueOrganizedWave_k__BackingField;
        v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v66, v67, v68);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v70, v71, v72);
        servantFaceIcon = (int *)System_String__Format_61399508(v65, v69, v73, 0LL);
        if ( !v45 )
          goto LABEL_123;
        items = v45->fields._items;
        v77 = Method_System_Collections_Generic_List_string__Add__;
        ++v45->fields._version;
        if ( !items )
          goto LABEL_123;
        v78 = v45->fields._size;
        v79 = servantFaceIcon;
        if ( (unsigned int)v78 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
        }
        else
        {
          v80 = &items->obj.klass + v78;
          v45->fields._size = v78 + 1;
          v80[4] = (Il2CppClass *)v79;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v79, v74, v75);
        }
        v102 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v103 = v45->fields._items;
        ++v45->fields._version;
        if ( !v103 )
          goto LABEL_123;
        v104 = v45->fields._size;
        if ( (unsigned int)v104 >= v103->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            (Il2CppObject *)item,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
        }
        else
        {
          v105 = &v103->obj.klass + v104;
          v45->fields._size = v104 + 1;
          v105[4] = (Il2CppClass *)item;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v105 + 4), (int32_t)item, v81, v82);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15448/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v45 )
        goto LABEL_123;
      v108 = v45->fields._items;
      v109 = Method_System_Collections_Generic_List_string__Add__;
      ++v45->fields._version;
      if ( !v108 )
        goto LABEL_123;
      v110 = v45->fields._size;
      v111 = servantFaceIcon;
      if ( (unsigned int)v110 >= v108->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
      }
      else
      {
        v112 = &v108->obj.klass + v110;
        v45->fields._size = v110 + 1;
        v112[4] = (Il2CppClass *)v111;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v112 + 4), (int32_t)v111, v106, v107);
      }
      v115 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v116 = v45->fields._items;
      ++v45->fields._version;
      if ( !v116 )
        goto LABEL_123;
      v117 = v45->fields._size;
      if ( (unsigned int)v117 >= v116->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)item,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
      }
      else
      {
        v118 = &v116->obj.klass + v117;
        v45->fields._size = v117 + 1;
        v118[4] = (Il2CppClass *)item;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v118 + 4), (int32_t)item, v113, v114);
      }
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5493/*"EQUIP_GRAPH_USE"*/, 0LL);
      version = v45->fields._version;
      v90 = v45->fields._items;
      v91 = Method_System_Collections_Generic_List_string__Add__;
      goto LABEL_96;
    }
  }
  else
  {
    v45 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v45,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
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
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_15449/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v47, v48, v49);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v51, v52, v53);
        servantFaceIcon = (int *)System_String__Format_61399508(v46, v50, v54, 0LL);
        if ( !v45 )
          goto LABEL_123;
        v57 = v45->fields._items;
        v58 = Method_System_Collections_Generic_List_string__Add__;
        ++v45->fields._version;
        if ( !v57 )
          goto LABEL_123;
        v59 = v45->fields._size;
        v60 = servantFaceIcon;
        if ( (unsigned int)v59 >= v57->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &v57->obj.klass + v59;
          v45->fields._size = v59 + 1;
          v61[4] = (Il2CppClass *)v60;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v60, v55, v56);
        }
        v83 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v84 = v45->fields._items;
        ++v45->fields._version;
        if ( !v84 )
          goto LABEL_123;
        v85 = v45->fields._size;
        if ( (unsigned int)v85 >= v84->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            (Il2CppObject *)item,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v86 = &v84->obj.klass + v85;
          v45->fields._size = v85 + 1;
          v86[4] = (Il2CppClass *)item;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v86 + 4), (int32_t)item, v62, v63);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = &StringLiteral_5493/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_94;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v64 = &StringLiteral_15428/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_94:
  servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)*v64, 0LL);
  if ( !v45 )
    goto LABEL_123;
  version = v45->fields._version;
  v90 = v45->fields._items;
  v91 = Method_System_Collections_Generic_List_string__Add__;
LABEL_96:
  v45->fields._version = version + 1;
  if ( !v90 )
    goto LABEL_123;
  v92 = v45->fields._size;
  v93 = servantFaceIcon;
  if ( (unsigned int)v92 >= v90->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v45,
      (Il2CppObject *)servantFaceIcon,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v90->obj.klass + v92;
    v45->fields._size = v92 + 1;
    v94[4] = (Il2CppClass *)v93;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v93, v87, v88);
  }
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_61400792(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v45,
                             0LL);
  if ( !warningLabel )
    goto LABEL_123;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v98 = *((_QWORD *)servantFaceIcon + 2);
  v99 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v98 )
    goto LABEL_123;
  v100 = servantFaceIcon[6];
  if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = v98 + 8 * v100;
    servantFaceIcon[6] = v100 + 1;
    *(_QWORD *)(v101 + 32) = item;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v101 + 32), (int32_t)item, v96, v97);
  }
LABEL_32:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  v38 = servantFaceIcon[6];
  if ( v38 >= 1 )
  {
    if ( v38 == 1 && v5->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v39 = *((_QWORD *)servantFaceIcon + 2);
      v40 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v39 )
        goto LABEL_123;
      if ( *(_DWORD *)(v39 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v39 + 40) = item;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v39 + 40), (int32_t)item, v36, v37);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    sub_1B64C5C(servantFaceIcon, item);
  }
}
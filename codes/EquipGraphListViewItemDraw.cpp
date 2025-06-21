void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1BAA0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_4B1BAA0 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.messageLabelList, (int32_t)v4, v5, v6);
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

  if ( (byte_4B1BAA2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1BAA2 = 1;
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
                                                      (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1BCB254(Component_object, v9);
    }
  }
}


void __fastcall EquipGraphListViewItemDraw__SetItem(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        int32_t mode,
        bool afterEndSelectConfirmBaseItem,
        const MethodInfo *method)
{
  EquipGraphListViewItem_o *v7; // x19
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
  __int64 v23; // x1
  __int64 v24; // x1
  int *servantFaceIcon; // x0
  struct ServantEntity_o *servantEntity; // x8
  int32_t cost; // w2
  struct System_Collections_Generic_List_UIWidget__o *messageLabelList; // x8
  int32_t size; // w2
  int v30; // w9
  UILabel_o *skillInvalidLabel; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *v40; // x21
  System_String_o *v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x23
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  int *v55; // x1
  Il2CppClass **v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 *v59; // x8
  System_String_o *v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  Il2CppObject *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  int *v74; // x1
  Il2CppClass **v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  _QWORD *v78; // x9
  struct System_Object_array *v79; // x8
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t version; // w10
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  int *v88; // x1
  Il2CppClass **v89; // x0
  UILabel_o *warningLabel; // x22
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  __int64 v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  __int64 v96; // x8
  int v97; // w8
  __int64 v98; // x8
  _QWORD *v99; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  _QWORD *v104; // x9
  struct System_Object_array *v105; // x8
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  int *v113; // x1
  Il2CppClass **v114; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  _QWORD *v117; // x9
  struct System_Object_array *v118; // x8
  __int64 v119; // x10
  Il2CppClass **v120; // x0
  int32_t MaxWave_k__BackingField; // [xsp+28h] [xbp-38h] BYREF
  int32_t OrganizedWave_k__BackingField; // [xsp+2Ch] [xbp-34h] BYREF

  v7 = item;
  if ( (byte_4B1BAA1 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, item);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v15);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v16);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v18);
    sub_1BCAFF8(&StringLiteral_15358/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v19);
    sub_1BCAFF8(&StringLiteral_11416/*"SELECT_BONUS_SKILL_INVALID"*/, v20);
    sub_1BCAFF8(&StringLiteral_15378/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, v21);
    sub_1BCAFF8(&StringLiteral_15379/*"WAVE_BATTLE_EQUIP_WAVE"*/, v22);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v23);
    sub_1BCAFF8(&StringLiteral_5447/*"EQUIP_GRAPH_USE"*/, v24);
    byte_4B1BAA1 = 1;
  }
  if ( !v7 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_128;
  ServantFaceIconComponent__Set_40190236(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    v7->fields.userSvtEntity,
    v7->fields.iconLabelInfo1,
    v7->fields.iconLabelInfo2,
    0LL);
  servantEntity = v7->fields.servantEntity;
  servantFaceIcon = (int *)this->fields.costIconLabel;
  if ( servantEntity )
  {
    cost = servantEntity->fields.cost;
    if ( !servantFaceIcon )
      goto LABEL_128;
  }
  else
  {
    cost = 0;
    if ( !servantFaceIcon )
      goto LABEL_128;
  }
  UIIconLabel__Set_40290232((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  messageLabelList = this->fields.messageLabelList;
  if ( !messageLabelList )
    goto LABEL_128;
  size = messageLabelList->fields._size;
  v30 = messageLabelList->fields._version + 1;
  messageLabelList->fields._size = 0;
  messageLabelList->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)messageLabelList->fields._items, 0, size, 0LL);
  servantFaceIcon = (int *)this->fields.warningLabel;
  if ( !servantFaceIcon )
    goto LABEL_128;
  (*(void (__fastcall **)(int *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
    servantFaceIcon,
    *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
    0.0);
  servantFaceIcon = (int *)this->fields.skillInvalidLabel;
  if ( !servantFaceIcon )
    goto LABEL_128;
  servantFaceIcon = (int *)(*(__int64 (__fastcall **)(int *, _QWORD, float))(*(_QWORD *)servantFaceIcon + 440LL))(
                             servantFaceIcon,
                             *(_QWORD *)(*(_QWORD *)servantFaceIcon + 448LL),
                             0.0);
  skillInvalidLabel = this->fields.skillInvalidLabel;
  if ( v7->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11416/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_128;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_128;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v34 = *((_QWORD *)servantFaceIcon + 2);
    v35 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v34 )
      goto LABEL_128;
    v36 = servantFaceIcon[6];
    if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = v34 + 8 * v36;
      servantFaceIcon[6] = v36 + 1;
      *(_QWORD *)(v37 + 32) = item;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v37 + 32), (int32_t)item, v32, v33);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_128;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( v7->fields.isBase || v7->fields.isOldBase )
  {
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_128;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
    servantFaceIcon = (int *)this->fields.warningLabel;
    if ( !servantFaceIcon )
      goto LABEL_128;
    UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( afterEndSelectConfirmBaseItem )
    goto LABEL_33;
  if ( EquipGraphListViewItem__get_IsUse(v7, (const MethodInfo *)item) )
  {
    v40 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v40,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_128;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !v7->fields._IsClearedWave_k__BackingField )
    {
      if ( v7->fields._OrganizedWave_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v41 = LocalizationManager__Get((System_String_o *)StringLiteral_15379/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        OrganizedWave_k__BackingField = v7->fields._OrganizedWave_k__BackingField;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OrganizedWave_k__BackingField, v42, v43, v44);
        MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
        v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v46, v47, v48);
        servantFaceIcon = (int *)System_String__Format_62491716(v41, v45, v49, 0LL);
        if ( !v40 )
          goto LABEL_128;
        items = v40->fields._items;
        v53 = Method_System_Collections_Generic_List_string__Add__;
        ++v40->fields._version;
        if ( !items )
          goto LABEL_128;
        v54 = v40->fields._size;
        v55 = servantFaceIcon;
        if ( (unsigned int)v54 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &items->obj.klass + v54;
          v40->fields._size = v54 + 1;
          v56[4] = (Il2CppClass *)v55;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
        }
        v78 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v79 = v40->fields._items;
        ++v40->fields._version;
        if ( !v79 )
          goto LABEL_128;
        v80 = v40->fields._size;
        if ( (unsigned int)v80 >= v79->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)item,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = &v79->obj.klass + v80;
          v40->fields._size = v80 + 1;
          v81[4] = (Il2CppClass *)item;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v81 + 4), (int32_t)item, v57, v58);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v59 = &StringLiteral_5447/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_70;
    }
  }
  else
  {
    if ( !v7->fields._IsUnique_k__BackingField )
    {
LABEL_33:
      servantFaceIcon = (int *)this->fields.maskSprite;
      if ( !servantFaceIcon )
        goto LABEL_128;
      servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
      if ( !servantFaceIcon )
        goto LABEL_128;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 0, 0LL);
      servantFaceIcon = (int *)this->fields.warningLabel;
      if ( !servantFaceIcon )
        goto LABEL_128;
      UILabel__set_text((UILabel_o *)servantFaceIcon, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      goto LABEL_82;
    }
    v40 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v40,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_128;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !v7->fields._IsClearedWave_k__BackingField )
    {
      if ( v7->fields._UniqueOrganizedWave_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v60 = LocalizationManager__Get((System_String_o *)StringLiteral_15379/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        OrganizedWave_k__BackingField = v7->fields._UniqueOrganizedWave_k__BackingField;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OrganizedWave_k__BackingField, v61, v62, v63);
        MaxWave_k__BackingField = v7->fields._MaxWave_k__BackingField;
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v65, v66, v67);
        servantFaceIcon = (int *)System_String__Format_62491716(v60, v64, v68, 0LL);
        if ( !v40 )
          goto LABEL_128;
        v71 = v40->fields._items;
        v72 = Method_System_Collections_Generic_List_string__Add__;
        ++v40->fields._version;
        if ( !v71 )
          goto LABEL_128;
        v73 = v40->fields._size;
        v74 = servantFaceIcon;
        if ( (unsigned int)v73 >= v71->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &v71->obj.klass + v73;
          v40->fields._size = v73 + 1;
          v75[4] = (Il2CppClass *)v74;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v75 + 4), (int32_t)v74, v69, v70);
        }
        v104 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v105 = v40->fields._items;
        ++v40->fields._version;
        if ( !v105 )
          goto LABEL_128;
        v106 = v40->fields._size;
        if ( (unsigned int)v106 >= v105->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            (Il2CppObject *)item,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
        }
        else
        {
          v107 = &v105->obj.klass + v106;
          v40->fields._size = v106 + 1;
          v107[4] = (Il2CppClass *)item;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v107 + 4), (int32_t)item, v76, v77);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15378/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v40 )
        goto LABEL_128;
      v110 = v40->fields._items;
      v111 = Method_System_Collections_Generic_List_string__Add__;
      ++v40->fields._version;
      if ( !v110 )
        goto LABEL_128;
      v112 = v40->fields._size;
      v113 = servantFaceIcon;
      if ( (unsigned int)v112 >= v110->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = &v110->obj.klass + v112;
        v40->fields._size = v112 + 1;
        v114[4] = (Il2CppClass *)v113;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v114 + 4), (int32_t)v113, v108, v109);
      }
      v117 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v118 = v40->fields._items;
      ++v40->fields._version;
      if ( !v118 )
        goto LABEL_128;
      v119 = v40->fields._size;
      if ( (unsigned int)v119 >= v118->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          (Il2CppObject *)item,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = &v118->obj.klass + v119;
        v40->fields._size = v119 + 1;
        v120[4] = (Il2CppClass *)item;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v120 + 4), (int32_t)item, v115, v116);
      }
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5447/*"EQUIP_GRAPH_USE"*/, 0LL);
      version = v40->fields._version;
      v85 = v40->fields._items;
      v86 = Method_System_Collections_Generic_List_string__Add__;
      goto LABEL_72;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v59 = &StringLiteral_15358/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_70:
  servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)*v59, 0LL);
  if ( !v40 )
    goto LABEL_128;
  version = v40->fields._version;
  v85 = v40->fields._items;
  v86 = Method_System_Collections_Generic_List_string__Add__;
LABEL_72:
  v40->fields._version = version + 1;
  if ( !v85 )
    goto LABEL_128;
  v87 = v40->fields._size;
  v88 = servantFaceIcon;
  if ( (unsigned int)v87 >= v85->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v40,
      (Il2CppObject *)servantFaceIcon,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = &v85->obj.klass + v87;
    v40->fields._size = v87 + 1;
    v89[4] = (Il2CppClass *)v88;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v89 + 4), (int32_t)v88, v82, v83);
  }
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_62493000(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v40,
                             0LL);
  if ( !warningLabel )
    goto LABEL_128;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_128;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v93 = *((_QWORD *)servantFaceIcon + 2);
  v94 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v93 )
    goto LABEL_128;
  v95 = servantFaceIcon[6];
  if ( (unsigned int)v95 >= *(_DWORD *)(v93 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v96 = v93 + 8 * v95;
    servantFaceIcon[6] = v95 + 1;
    *(_QWORD *)(v96 + 32) = item;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v96 + 32), (int32_t)item, v91, v92);
  }
LABEL_82:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_128;
  v97 = servantFaceIcon[6];
  if ( v97 >= 1 )
  {
    if ( v97 == 1 && v7->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v98 = *((_QWORD *)servantFaceIcon + 2);
      v99 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v98 )
        goto LABEL_128;
      if ( *(_DWORD *)(v98 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v98 + 40) = item;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v98 + 40), (int32_t)item, v38, v39);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_128;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
    if ( !messageLabel )
      goto LABEL_128;
    SwitchUIWidgetComponent__Set(messageLabel, (UIWidget_array *)servantFaceIcon, 0, 0LL);
  }
  selectObject = (UnityEngine_Object_o *)this->fields.selectObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectObject, 0LL, 0LL) )
  {
    servantFaceIcon = (int *)this->fields.selectObject;
    if ( !servantFaceIcon )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isBase, 0LL);
  }
  friendShipSprite = (UnityEngine_Object_o *)this->fields.friendShipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendShipSprite, 0LL, 0LL) )
  {
    servantFaceIcon = (int *)this->fields.friendShipSprite;
    if ( !servantFaceIcon )
      goto LABEL_128;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_128;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, v7->fields.isFriendShipSvtEq, 0LL);
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
          v7->fields.isChocolateSvtEquip,
          0LL);
        return;
      }
    }
LABEL_128:
    sub_1BCB254(servantFaceIcon, item);
  }
}
void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5AA5D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    byte_4A5AA5D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.messageLabelList, (int32_t)v3, v4, v5);
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

  if ( (byte_4A5AA5F & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5AA5F = 1;
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
                                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1B8880C(Component_object, v8);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  int v22; // w8
  __int64 v23; // x8
  _QWORD *v24; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_object__o *v29; // x21
  System_String_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  int *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 *v48; // x8
  System_String_o *v49; // x22
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x23
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  int *v63; // x1
  Il2CppClass **v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  _QWORD *v67; // x9
  struct System_Object_array *v68; // x8
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t version; // w10
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  int *v77; // x1
  Il2CppClass **v78; // x0
  UILabel_o *warningLabel; // x22
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  _QWORD *v86; // x9
  struct System_Object_array *v87; // x8
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  int *v95; // x1
  Il2CppClass **v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  _QWORD *v99; // x9
  struct System_Object_array *v100; // x8
  __int64 v101; // x10
  Il2CppClass **v102; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4A5AA5E & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_15493/*"WAVE_BATTLE_ALREADY_SORTIE"*/);
    sub_1B885B0(&StringLiteral_11495/*"SELECT_BONUS_SKILL_INVALID"*/);
    sub_1B885B0(&StringLiteral_15513/*"WAVE_BATTLE_EQUIP_UNIQUE"*/);
    sub_1B885B0(&StringLiteral_15514/*"WAVE_BATTLE_EQUIP_WAVE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_5518/*"EQUIP_GRAPH_USE"*/);
    byte_4A5AA5E = 1;
  }
  if ( !v5 || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_123;
  ServantFaceIconComponent__Set_38220260(
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
  UIIconLabel__Set_38235604((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
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
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11495/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
    v16 = *((_QWORD *)servantFaceIcon + 2);
    v17 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v16 )
      goto LABEL_123;
    v18 = servantFaceIcon[6];
    if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        (Il2CppObject *)item,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = v16 + 8 * v18;
      servantFaceIcon[6] = v18 + 1;
      *(_QWORD *)(v19 + 32) = item;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)item, v14, v15);
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
    v29 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
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
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_15514/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._UniqueOrganizedWave_k__BackingField;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v50, v51, v52);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v54, v55, v56);
        servantFaceIcon = (int *)System_String__Format_61721404(v49, v53, v57, 0LL);
        if ( !v29 )
          goto LABEL_123;
        items = v29->fields._items;
        v61 = Method_System_Collections_Generic_List_string__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_123;
        v62 = v29->fields._size;
        v63 = servantFaceIcon;
        if ( (unsigned int)v62 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v64 = &items->obj.klass + v62;
          v29->fields._size = v62 + 1;
          v64[4] = (Il2CppClass *)v63;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v63, v58, v59);
        }
        v86 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v87 = v29->fields._items;
        ++v29->fields._version;
        if ( !v87 )
          goto LABEL_123;
        v88 = v29->fields._size;
        if ( (unsigned int)v88 >= v87->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
        }
        else
        {
          v89 = &v87->obj.klass + v88;
          v29->fields._size = v88 + 1;
          v89[4] = (Il2CppClass *)item;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v89 + 4), (int32_t)item, v65, v66);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15513/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v29 )
        goto LABEL_123;
      v92 = v29->fields._items;
      v93 = Method_System_Collections_Generic_List_string__Add__;
      ++v29->fields._version;
      if ( !v92 )
        goto LABEL_123;
      v94 = v29->fields._size;
      v95 = servantFaceIcon;
      if ( (unsigned int)v94 >= v92->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
      }
      else
      {
        v96 = &v92->obj.klass + v94;
        v29->fields._size = v94 + 1;
        v96[4] = (Il2CppClass *)v95;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v96 + 4), (int32_t)v95, v90, v91);
      }
      v99 = Method_System_Collections_Generic_List_string__Add__;
      item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
      v100 = v29->fields._items;
      ++v29->fields._version;
      if ( !v100 )
        goto LABEL_123;
      v101 = v29->fields._size;
      if ( (unsigned int)v101 >= v100->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)item,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v102 = &v100->obj.klass + v101;
        v29->fields._size = v101 + 1;
        v102[4] = (Il2CppClass *)item;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v102 + 4), (int32_t)item, v97, v98);
      }
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5518/*"EQUIP_GRAPH_USE"*/, 0LL);
      version = v29->fields._version;
      v74 = v29->fields._items;
      v75 = Method_System_Collections_Generic_List_string__Add__;
      goto LABEL_96;
    }
  }
  else
  {
    v29 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
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
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_15514/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = v5->fields._OrganizedWave_k__BackingField;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField, v31, v32, v33);
        MaxWave_k__BackingField = v5->fields._MaxWave_k__BackingField;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField, v35, v36, v37);
        servantFaceIcon = (int *)System_String__Format_61721404(v30, v34, v38, 0LL);
        if ( !v29 )
          goto LABEL_123;
        v41 = v29->fields._items;
        v42 = Method_System_Collections_Generic_List_string__Add__;
        ++v29->fields._version;
        if ( !v41 )
          goto LABEL_123;
        v43 = v29->fields._size;
        v44 = servantFaceIcon;
        if ( (unsigned int)v43 >= v41->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v45 = &v41->obj.klass + v43;
          v29->fields._size = v43 + 1;
          v45[4] = (Il2CppClass *)v44;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v44, v39, v40);
        }
        v67 = Method_System_Collections_Generic_List_string__Add__;
        item = (EquipGraphListViewItem_o *)StringLiteral_43/*"\n"*/;
        v68 = v29->fields._items;
        ++v29->fields._version;
        if ( !v68 )
          goto LABEL_123;
        v69 = v29->fields._size;
        if ( (unsigned int)v69 >= v68->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v68->obj.klass + v69;
          v29->fields._size = v69 + 1;
          v70[4] = (Il2CppClass *)item;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)item, v46, v47);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v48 = &StringLiteral_5518/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_94;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v48 = &StringLiteral_15493/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_94:
  servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)*v48, 0LL);
  if ( !v29 )
    goto LABEL_123;
  version = v29->fields._version;
  v74 = v29->fields._items;
  v75 = Method_System_Collections_Generic_List_string__Add__;
LABEL_96:
  v29->fields._version = version + 1;
  if ( !v74 )
    goto LABEL_123;
  v76 = v29->fields._size;
  v77 = servantFaceIcon;
  if ( (unsigned int)v76 >= v74->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)servantFaceIcon,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = &v74->obj.klass + v76;
    v29->fields._size = v76 + 1;
    v78[4] = (Il2CppClass *)v77;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v77, v71, v72);
  }
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_61722688(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v29,
                             0LL);
  if ( !warningLabel )
    goto LABEL_123;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  item = (EquipGraphListViewItem_o *)this->fields.warningLabel;
  v82 = *((_QWORD *)servantFaceIcon + 2);
  v83 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v82 )
    goto LABEL_123;
  v84 = servantFaceIcon[6];
  if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      (Il2CppObject *)item,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = v82 + 8 * v84;
    servantFaceIcon[6] = v84 + 1;
    *(_QWORD *)(v85 + 32) = item;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v85 + 32), (int32_t)item, v80, v81);
  }
LABEL_32:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  v22 = servantFaceIcon[6];
  if ( v22 >= 1 )
  {
    if ( v22 == 1 && v5->fields.isInvalidRarity )
    {
      item = (EquipGraphListViewItem_o *)this->fields.skillInvalidLabel;
      v23 = *((_QWORD *)servantFaceIcon + 2);
      v24 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v23 )
        goto LABEL_123;
      if ( *(_DWORD *)(v23 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          (Il2CppObject *)item,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v23 + 40) = item;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 40), (int32_t)item, v20, v21);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    sub_1B8880C(servantFaceIcon, item);
  }
}
void __fastcall EquipGraphListViewItemDraw___ctor(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EquipGraphListViewItemDraw__Awake(EquipGraphListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FBE16 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    byte_49FBE16 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UIWidget__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.messageLabelList = (struct System_Collections_Generic_List_UIWidget__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.messageLabelList, (int32_t)v5, v6, v7);
}


void __fastcall EquipGraphListViewItemDraw__SetInput(
        EquipGraphListViewItemDraw_o *this,
        EquipGraphListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x22
  UnityEngine_Component_o *Component_object; // x0
  UnityEngine_Object_o *lockSprite; // x21
  bool isLock; // w1
  UnityEngine_Object_o *choiceSprite; // x21
  bool isChoice; // w1
  UnityEngine_Object_o *selectObject; // x21

  if ( (byte_49FBE18 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FBE18 = 1;
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
                                                      (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1B64324(Component_object);
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
  Il2CppObject *v32; // x1
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t v39; // w2
  int32_t v40; // w3
  int v41; // w8
  Il2CppObject *v42; // x1
  __int64 v43; // x8
  _QWORD *v44; // x9
  SwitchUIWidgetComponent_o *messageLabel; // x21
  UnityEngine_Object_o *selectObject; // x21
  UnityEngine_Object_o *friendShipSprite; // x21
  UnityEngine_Object_o *chocolateSprite; // x21
  System_Collections_Generic_List_object__o *v49; // x21
  System_String_o *v50; // x22
  Il2CppObject *v51; // x23
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  int *v58; // x1
  Il2CppClass **v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 *v62; // x8
  System_String_o *v63; // x22
  Il2CppObject *v64; // x23
  Il2CppObject *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Object_array *items; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  int *v71; // x1
  Il2CppClass **v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  _QWORD *v75; // x9
  Il2CppObject *v76; // x1
  struct System_Object_array *v77; // x8
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t version; // w10
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  int *v86; // x1
  Il2CppClass **v87; // x0
  UILabel_o *warningLabel; // x22
  int32_t v89; // w2
  int32_t v90; // w3
  Il2CppObject *v91; // x1
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  _QWORD *v96; // x9
  Il2CppObject *v97; // x1
  struct System_Object_array *v98; // x8
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  int32_t v101; // w2
  int32_t v102; // w3
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  int *v106; // x1
  Il2CppClass **v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  _QWORD *v110; // x9
  Il2CppObject *v111; // x1
  struct System_Object_array *v112; // x8
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  int32_t MaxWave_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t UniqueOrganizedWave_k__BackingField; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FBE17 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, item);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v16);
    sub_1B640C8(&StringLiteral_15425/*"WAVE_BATTLE_ALREADY_SORTIE"*/, v17);
    sub_1B640C8(&StringLiteral_11440/*"SELECT_BONUS_SKILL_INVALID"*/, v18);
    sub_1B640C8(&StringLiteral_15445/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, v19);
    sub_1B640C8(&StringLiteral_15446/*"WAVE_BATTLE_EQUIP_WAVE"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    sub_1B640C8(&StringLiteral_5492/*"EQUIP_GRAPH_USE"*/, v22);
    byte_49FBE17 = 1;
  }
  if ( !item || !mode )
    return;
  servantFaceIcon = (int *)this->fields.servantFaceIcon;
  if ( !servantFaceIcon )
    goto LABEL_123;
  ServantFaceIconComponent__Set_37904900(
    (ServantFaceIconComponent_o *)servantFaceIcon,
    item->fields.userSvtEntity,
    item->fields.iconLabelInfo1,
    item->fields.iconLabelInfo2,
    0LL);
  servantEntity = item->fields.servantEntity;
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
  UIIconLabel__Set_37921148((UIIconLabel_o *)servantFaceIcon, 7, cost, 0, 0, 0LL, 0, 0, 0, 0LL);
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
  if ( item->fields.isInvalidRarity )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_11440/*"SELECT_BONUS_SKILL_INVALID"*/, 0LL);
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(skillInvalidLabel, (System_String_o *)servantFaceIcon, 0LL);
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    v32 = (Il2CppObject *)this->fields.skillInvalidLabel;
    v33 = *((_QWORD *)servantFaceIcon + 2);
    v34 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++servantFaceIcon[7];
    if ( !v33 )
      goto LABEL_123;
    v35 = servantFaceIcon[6];
    if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)servantFaceIcon,
        v32,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = v33 + 8 * v35;
      servantFaceIcon[6] = v35 + 1;
      *(_QWORD *)(v36 + 32) = v32;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v32, v30, v31);
    }
  }
  else
  {
    if ( !skillInvalidLabel )
      goto LABEL_123;
    UILabel__set_text(this->fields.skillInvalidLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  if ( item->fields.isBase || item->fields.isOldBase )
    goto LABEL_28;
  if ( (item->fields.wearerMember & 0x80000000) != 0 )
  {
    if ( !item->fields._IsUnique_k__BackingField )
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
    v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v37,
                                                         v38);
    System_Collections_Generic_List_object____ctor(
      v49,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_123;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !item->fields._IsClearedWave_k__BackingField )
    {
      if ( item->fields._UniqueOrganizedWave_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_15446/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = item->fields._UniqueOrganizedWave_k__BackingField;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
        v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
        servantFaceIcon = (int *)System_String__Format_61389768(v63, v64, v65, 0LL);
        if ( !v49 )
          goto LABEL_123;
        items = v49->fields._items;
        v69 = Method_System_Collections_Generic_List_string__Add__;
        ++v49->fields._version;
        if ( !items )
          goto LABEL_123;
        v70 = v49->fields._size;
        v71 = servantFaceIcon;
        if ( (unsigned int)v70 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
        }
        else
        {
          v72 = &items->obj.klass + v70;
          v49->fields._size = v70 + 1;
          v72[4] = (Il2CppClass *)v71;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)v71, v66, v67);
        }
        v96 = Method_System_Collections_Generic_List_string__Add__;
        v97 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
        v98 = v49->fields._items;
        ++v49->fields._version;
        if ( !v98 )
          goto LABEL_123;
        v99 = v49->fields._size;
        if ( (unsigned int)v99 >= v98->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            v97,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        }
        else
        {
          v100 = &v98->obj.klass + v99;
          v49->fields._size = v99 + 1;
          v100[4] = (Il2CppClass *)v97;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v97, v73, v74);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_15445/*"WAVE_BATTLE_EQUIP_UNIQUE"*/, 0LL);
      if ( !v49 )
        goto LABEL_123;
      v103 = v49->fields._items;
      v104 = Method_System_Collections_Generic_List_string__Add__;
      ++v49->fields._version;
      if ( !v103 )
        goto LABEL_123;
      v105 = v49->fields._size;
      v106 = servantFaceIcon;
      if ( (unsigned int)v105 >= v103->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          (Il2CppObject *)servantFaceIcon,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        v107 = &v103->obj.klass + v105;
        v49->fields._size = v105 + 1;
        v107[4] = (Il2CppClass *)v106;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v107 + 4), (int32_t)v106, v101, v102);
      }
      v110 = Method_System_Collections_Generic_List_string__Add__;
      v111 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
      v112 = v49->fields._items;
      ++v49->fields._version;
      if ( !v112 )
        goto LABEL_123;
      v113 = v49->fields._size;
      if ( (unsigned int)v113 >= v112->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          v111,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = &v112->obj.klass + v113;
        v49->fields._size = v113 + 1;
        v114[4] = (Il2CppClass *)v111;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v114 + 4), (int32_t)v111, v108, v109);
      }
      servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)StringLiteral_5492/*"EQUIP_GRAPH_USE"*/, 0LL);
      version = v49->fields._version;
      v83 = v49->fields._items;
      v84 = Method_System_Collections_Generic_List_string__Add__;
      goto LABEL_96;
    }
  }
  else
  {
    v49 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_string__TypeInfo,
                                                         v37,
                                                         v38);
    System_Collections_Generic_List_object____ctor(
      v49,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
    servantFaceIcon = (int *)this->fields.maskSprite;
    if ( !servantFaceIcon )
      goto LABEL_123;
    servantFaceIcon = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servantFaceIcon, 0LL);
    if ( !servantFaceIcon )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, 1, 0LL);
    if ( !item->fields._IsClearedWave_k__BackingField )
    {
      if ( item->fields._OrganizedWave_k__BackingField >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v50 = LocalizationManager__Get((System_String_o *)StringLiteral_15446/*"WAVE_BATTLE_EQUIP_WAVE"*/, 0LL);
        UniqueOrganizedWave_k__BackingField = item->fields._OrganizedWave_k__BackingField;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &UniqueOrganizedWave_k__BackingField);
        MaxWave_k__BackingField = item->fields._MaxWave_k__BackingField;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &MaxWave_k__BackingField);
        servantFaceIcon = (int *)System_String__Format_61389768(v50, v51, v52, 0LL);
        if ( !v49 )
          goto LABEL_123;
        v55 = v49->fields._items;
        v56 = Method_System_Collections_Generic_List_string__Add__;
        ++v49->fields._version;
        if ( !v55 )
          goto LABEL_123;
        v57 = v49->fields._size;
        v58 = servantFaceIcon;
        if ( (unsigned int)v57 >= v55->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            (Il2CppObject *)servantFaceIcon,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v59 = &v55->obj.klass + v57;
          v49->fields._size = v57 + 1;
          v59[4] = (Il2CppClass *)v58;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v58, v53, v54);
        }
        v75 = Method_System_Collections_Generic_List_string__Add__;
        v76 = (Il2CppObject *)StringLiteral_43/*"\n"*/;
        v77 = v49->fields._items;
        ++v49->fields._version;
        if ( !v77 )
          goto LABEL_123;
        v78 = v49->fields._size;
        if ( (unsigned int)v78 >= v77->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v49,
            v76,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v79 = &v77->obj.klass + v78;
          v49->fields._size = v78 + 1;
          v79[4] = (Il2CppClass *)v76;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)v76, v60, v61);
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = &StringLiteral_5492/*"EQUIP_GRAPH_USE"*/;
      goto LABEL_94;
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v62 = &StringLiteral_15425/*"WAVE_BATTLE_ALREADY_SORTIE"*/;
LABEL_94:
  servantFaceIcon = (int *)LocalizationManager__Get((System_String_o *)*v62, 0LL);
  if ( !v49 )
    goto LABEL_123;
  version = v49->fields._version;
  v83 = v49->fields._items;
  v84 = Method_System_Collections_Generic_List_string__Add__;
LABEL_96:
  v49->fields._version = version + 1;
  if ( !v83 )
    goto LABEL_123;
  v85 = v49->fields._size;
  v86 = servantFaceIcon;
  if ( (unsigned int)v85 >= v83->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      (Il2CppObject *)servantFaceIcon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = &v83->obj.klass + v85;
    v49->fields._size = v85 + 1;
    v87[4] = (Il2CppClass *)v86;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 4), (int32_t)v86, v80, v81);
  }
  warningLabel = this->fields.warningLabel;
  servantFaceIcon = (int *)System_String__Join_61391052(
                             (System_String_o *)StringLiteral_1/*""*/,
                             (System_Collections_Generic_IEnumerable_string__o *)v49,
                             0LL);
  if ( !warningLabel )
    goto LABEL_123;
  UILabel__set_text(warningLabel, (System_String_o *)servantFaceIcon, 0LL);
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  v91 = (Il2CppObject *)this->fields.warningLabel;
  v92 = *((_QWORD *)servantFaceIcon + 2);
  v93 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++servantFaceIcon[7];
  if ( !v92 )
    goto LABEL_123;
  v94 = servantFaceIcon[6];
  if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)servantFaceIcon,
      v91,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
  }
  else
  {
    v95 = v92 + 8 * v94;
    servantFaceIcon[6] = v94 + 1;
    *(_QWORD *)(v95 + 32) = v91;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v95 + 32), (int32_t)v91, v89, v90);
  }
LABEL_32:
  servantFaceIcon = (int *)this->fields.messageLabelList;
  if ( !servantFaceIcon )
    goto LABEL_123;
  v41 = servantFaceIcon[6];
  if ( v41 >= 1 )
  {
    if ( v41 == 1 && item->fields.isInvalidRarity )
    {
      v42 = (Il2CppObject *)this->fields.skillInvalidLabel;
      v43 = *((_QWORD *)servantFaceIcon + 2);
      v44 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++servantFaceIcon[7];
      if ( !v43 )
        goto LABEL_123;
      if ( *(_DWORD *)(v43 + 24) < 2u )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)servantFaceIcon,
          v42,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        servantFaceIcon[6] = 2;
        *(_QWORD *)(v43 + 40) = v42;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 40), (int32_t)v42, v39, v40);
      }
    }
    servantFaceIcon = (int *)this->fields.messageLabelList;
    if ( !servantFaceIcon )
      goto LABEL_123;
    messageLabel = this->fields.messageLabel;
    servantFaceIcon = (int *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)servantFaceIcon,
                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isBase, 0LL);
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantFaceIcon, item->fields.isFriendShipSvtEq, 0LL);
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
          item->fields.isChocolateSvtEquip,
          0LL);
        return;
      }
    }
LABEL_123:
    sub_1B64324(servantFaceIcon);
  }
}
void MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_597436D & 1) == 0 )
  {
    sub_2213A60(&MissionListViewManager_TypeInfo);
    byte_597436D = 1;
  }
  if ( !*(&MissionListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo, method);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, method);
}


void MasterMissionListViewManager__AcceptReward(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  GiftEntity_array *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x25
  GiftEntity_array *v28; // x20
  System_Action_o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x1
  GiftEntity_array *v33; // x20
  System_Action_o *v34; // x22
  const MethodInfo *v35; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5974362 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__);
    sub_2213A60(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__);
    sub_2213A60(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
    byte_5974362 = 1;
  }
  entity = 0;
  v7 = sub_2213CCC(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_26;
  *(_QWORD *)(v7 + 16) = callback;
  v16 = v7 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    v24 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
    v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    max_length = receiveMissionIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)max_length )
          sub_2213CE4(Instance);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v27],
                                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v24 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v24, HIDWORD(entity[5].klass), 0);
          if ( !v25 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v25,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(max_length) = receiveMissionIds->max_length;
        if ( (__int64)++v27 >= (int)max_length )
          goto LABEL_18;
      }
LABEL_26:
      sub_2213CDC(Instance, v9);
    }
LABEL_18:
    if ( this->fields.isTreasureEffect )
    {
      if ( !v25 )
        goto LABEL_26;
      v28 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v25,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
      v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
        0);
      MissionListViewManager__StartEventMissionClearItemAction((MissionListViewManager_o *)this, v28, v30, v29, v31);
    }
    else
    {
      if ( !v25 )
        goto LABEL_26;
      v33 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                  v25,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
      v34 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v34,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__,
        0);
      MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v33, 0, v34, v35);
    }
    ActionExtensions__Call(this->fields.reDispAct, 0);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0);
    if ( !*(_QWORD *)v16 )
      goto LABEL_26;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v16 + 64LL),
      *(_QWORD *)(*(_QWORD *)v16 + 40LL));
    MasterMissionListViewManager__afterReward(this, v32);
  }
}


void MasterMissionListViewManager__CheckBulkButton(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bulkButton; // x20
  __int64 v4; // x1
  UIWidget_o *bulkButtonTxt; // x0
  __int64 v6; // x1
  __int64 naturalAligment; // x11
  struct UICommonButton_o *v8; // x0
  __int64 v9; // x1
  UIWidget_o *v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597435F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597435F = 1;
  }
  bulkButton = (UnityEngine_Object_o *)this->fields.bulkButton;
  memset(&v11, 0, sizeof(v11));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(bulkButton, 0, 0) )
  {
    bulkButtonTxt = (UIWidget_o *)this->fields.bulkButton;
    if ( !bulkButtonTxt )
      goto LABEL_20;
    ((void (__fastcall *)(UIWidget_o *, __int64, __int64, const MethodInfo *))bulkButtonTxt->klass->vtable._14_OnEnable.methodPtr)(
      bulkButtonTxt,
      3,
      1,
      bulkButtonTxt->klass->vtable._14_OnEnable.method);
    bulkButtonTxt = (UIWidget_o *)this->fields.bulkButtonTxt;
    if ( !bulkButtonTxt
      || (v12.fields.r = 0.5,
          v12.fields.g = 0.5,
          v12.fields.b = 0.5,
          v12.fields.a = 1.0,
          UIWidget__set_color(bulkButtonTxt, v12, 0),
          (bulkButtonTxt = (UIWidget_o *)this->fields.itemSortList) == 0) )
    {
LABEL_20:
      sub_2213CDC(bulkButtonTxt, v4);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v11.fields._current )
      {
        naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
        if ( v11.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (MasterMissionListViewItem_c *)v11.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
          && *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&qword_118) == 3 )
        {
          v8 = this->fields.bulkButton;
          if ( !v8 )
            sub_2213CDC(0, v6);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v8->klass->vtable._14_SetState.methodPtr)(
            v8,
            0,
            1,
            v8->klass->vtable._14_SetState.method);
          v10 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v10 )
            sub_2213CDC(0, v9);
          v13.fields.r = 1.0;
          v13.fields.g = 1.0;
          v13.fields.b = 1.0;
          v13.fields.a = 1.0;
          UIWidget__set_color(v10, v13, 0);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void MasterMissionListViewManager__CreateList(
        MasterMissionListViewManager_o *this,
        System_Collections_Generic_List_EventMissionEntity__o *missionList,
        System_Int32_array *mstMissionIdList,
        int32_t type,
        System_Action_o *redispCallBack,
        const MethodInfo *method)
{
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct ListViewSort_o *sort; // x1
  int32_t listType; // w8
  UILabel_o *v34; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v36; // x8
  void *ObjectList; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x1
  int32_t *p_ExtraMissionFilterId_k__BackingField; // x8
  UILabel_o *v41; // x21
  UILabel_o *v42; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v44; // x8
  UILabel_o *emptyMessageLabel; // x21
  const MethodInfo *v46; // x1
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int v53; // w22
  System_Collections_Generic_List_object__o *v54; // x19
  int32_t i; // w20
  __int64 v56; // x1
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5974356 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/);
    sub_2213A60(&StringLiteral_9043/*"MISSION_EMPTY_TXT"*/);
    byte_5974356 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v58,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v59 = v58;
    v58.fields._list = 0;
    *(_QWORD *)&v58.fields._index = &v59;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v59,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v59.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v18 = (MasterMissionListViewItem_o *)sub_2213CCC(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v18, (EventMissionEntity_o *)current, type, v19);
      if ( !itemList
        || (items = itemList->fields._items,
            v29 = Method_System_Collections_Generic_List_ListViewItem__Add__,
            ++itemList->fields._version,
            !items) )
      {
        sub_2213CDC(v20, v21);
      }
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 4), (int32_t)v18, v22, v23, v24, v25, v26, v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v59,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSortInfo,
      (int32_t)sort,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  listType = this->fields.listType;
  if ( listType > 1 )
  {
    if ( listType == 2 )
    {
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_9043/*"MISSION_EMPTY_TXT"*/, 0);
      if ( emptyMessageLabel )
      {
        UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0);
        if ( !byte_596A84A )
        {
          sub_2213A60(&EventRewardSaveData_TypeInfo);
          byte_596A84A = 1;
        }
        p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
        goto LABEL_52;
      }
    }
    else
    {
      if ( listType != 3 )
        goto LABEL_53;
      v41 = this->fields.emptyMessageLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_9043/*"MISSION_EMPTY_TXT"*/, 0);
      if ( v41 )
      {
        UILabel__set_text(v41, (System_String_o *)ObjectList, 0);
        if ( !byte_596A84C )
        {
          sub_2213A60(&EventRewardSaveData_TypeInfo);
          byte_596A84C = 1;
        }
        p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
        goto LABEL_52;
      }
    }
    goto LABEL_66;
  }
  if ( !listType )
  {
    v42 = this->fields.emptyMessageLabel;
    if ( !byte_596A846 )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A846 = 1;
    }
    DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
    v44 = &StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/;
    if ( DailyFilterId_k__BackingField )
      v44 = &StringLiteral_9043/*"MISSION_EMPTY_TXT"*/;
    ObjectList = LocalizationManager__Get((System_String_o *)*v44, 0);
    if ( v42 )
    {
      UILabel__set_text(v42, (System_String_o *)ObjectList, 0);
      if ( !byte_596A846 )
      {
        sub_2213A60(&EventRewardSaveData_TypeInfo);
        byte_596A846 = 1;
      }
      p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      goto LABEL_52;
    }
LABEL_66:
    sub_2213CDC(ObjectList, v38);
  }
  if ( listType != 1 )
    goto LABEL_53;
  v34 = this->fields.emptyMessageLabel;
  if ( !byte_596A848 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A848 = 1;
  }
  WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, sort);
  v36 = &StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/;
  if ( WeeklyFilterId_k__BackingField )
    v36 = &StringLiteral_9043/*"MISSION_EMPTY_TXT"*/;
  ObjectList = LocalizationManager__Get((System_String_o *)*v36, 0);
  if ( !v34 )
    goto LABEL_66;
  UILabel__set_text(v34, (System_String_o *)ObjectList, 0);
  if ( !byte_596A848 )
  {
    sub_2213A60(&EventRewardSaveData_TypeInfo);
    byte_596A848 = 1;
  }
  p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
LABEL_52:
  this->fields.filterStatus = *p_ExtraMissionFilterId_k__BackingField;
  MasterMissionListViewManager__setList(this, v39);
LABEL_53:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.reDispAct,
      (int32_t)redispCallBack,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v46);
  if ( !ObjectList )
    goto LABEL_66;
  v53 = *((_DWORD *)ObjectList + 6);
  v54 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v53 >= 1 )
  {
    for ( i = 0; i != v53; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v54,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_66;
        MissionListViewObject__RedispResTime((MissionListViewObject_o *)Item, 0);
      }
    }
  }
}


void MasterMissionListViewManager__DestroyList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t MasterMissionListViewManager__GetBoardTouchMissionId(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItem_o *receiveItem; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8

  receiveItem = this->fields.receiveItem;
  if ( !receiveItem || (eventMissionEnt = receiveItem->fields.eventMissionEnt) == 0 )
    sub_2213CDC(this, method);
  return eventMissionEnt->fields.id;
}


MasterMissionListViewItem_o *MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5974359 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    byte_5974359 = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MasterMissionListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *MasterMissionListViewManager__GetRewardItemInfo(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w8
  int32_t listType; // w19
  __int64 v4; // x1
  int32_t MissionTypeByTabType; // w19
  MissionItemDisplayMaster_o *Master_object; // x0
  __int64 v7; // x1
  MissionItemDisplayEntity_array *ListByMissionType; // x21
  System_Collections_Generic_Dictionary_int__object__o *v9; // x19
  int max_length; // w8
  unsigned int v11; // w25
  MissionItemDisplayEntity_o *v12; // x22
  __int64 v13; // x23
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Item; // x0
  __int64 v21; // x1
  __int64 naturalAligment; // x11
  Il2CppClass *klass; // x25
  int namespaze; // w9
  unsigned int monitor; // w20
  int i; // w27
  _DWORD *v27; // x24
  int v28; // w23
  System_Collections_Generic_List_int__o *v29; // x20
  _BOOL8 v30; // x0
  __int64 key_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v37; // [xsp+10h] [xbp-F0h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v39; // [xsp+50h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+80h] [xbp-80h] BYREF

  if ( (byte_597436C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_MissionItemDisplayMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&MasterMissionComponent_TypeInfo);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    sub_2213A60(&MissionItemDisplayInfo_TypeInfo);
    byte_597436C = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v2 = *(&MasterMissionComponent_TypeInfo->_2.cctor_finished + 1);
  memset(&v39, 0, sizeof(v39));
  listType = this->fields.listType;
  memset(&v38, 0, sizeof(v38));
  if ( !v2 )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo, method);
  MissionTypeByTabType = MasterMissionComponent__GetMissionTypeByTabType(listType, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  Master_object = (MissionItemDisplayMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MissionItemDisplayMaster___);
  if ( !Master_object )
    goto LABEL_54;
  ListByMissionType = MissionItemDisplayMaster__GetListByMissionType(Master_object, MissionTypeByTabType, 0);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
  if ( !ListByMissionType )
    goto LABEL_54;
  max_length = ListByMissionType->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_2213CE4(Master_object);
      v12 = ListByMissionType->m_Items[v11];
      if ( !v12 || !v9 )
        break;
      Master_object = (MissionItemDisplayMaster_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                      v9,
                                                      v12->fields.targetId,
                                                      (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v13 = sub_2213CCC(MissionItemDisplayInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v13, 0);
        if ( !v13 )
          break;
        *(_QWORD *)(v13 + 16) = v12;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)v12, v14, v15, v16, v17, v18, v19);
        *(_QWORD *)(v13 + 24) = 0;
        System_Collections_Generic_Dictionary_int__object___Add(
          v9,
          v12->fields.targetId,
          (Il2CppObject *)v13,
          (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
      }
      max_length = ListByMissionType->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_18;
    }
LABEL_54:
    sub_2213CDC(Master_object, v7);
  }
LABEL_18:
  Master_object = (MissionItemDisplayMaster_o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v40 = *(System_Collections_Generic_List_Enumerator_object__o *)&v37.fields._dictionary;
  v37.fields._dictionary = 0;
  *(_QWORD *)&v37.fields._version = &v40;
  while ( 1 )
  {
    Item = (Il2CppObject *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v40,
                             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( ((unsigned __int8)Item & 1) == 0 )
      break;
    if ( v40.fields._current )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( v40.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MasterMissionListViewItem_c *)v40.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v40.fields._current[18].monitor) == this->fields.listType )
      {
        klass = v40.fields._current[8].klass;
        if ( !klass )
          sub_2213CDC(Item, v21);
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          monitor = (unsigned int)v40.fields._current[17].monitor;
          for ( i = 0; i < namespaze; ++i )
          {
            if ( i >= (unsigned int)namespaze )
              sub_2213CE4(Item);
            v27 = (_DWORD *)*((_QWORD *)&klass->_1.byval_arg.data + i);
            if ( !v27 )
              sub_2213CDC(Item, v21);
            if ( v27[5] == 2 )
            {
              if ( !v9 )
                sub_2213CDC(Item, v21);
              Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       v9,
                                       v27[6],
                                       (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                v28 = v27[7];
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         v9,
                         v27[6],
                         (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                if ( !Item )
                  sub_2213CDC(0, v21);
                HIDWORD(Item[1].monitor) += v28;
                if ( monitor < 4 )
                {
                  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                           v9,
                           v27[6],
                           (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                  if ( !Item )
                    sub_2213CDC(0, v21);
                  LODWORD(Item[1].monitor) += v28;
                }
              }
            }
            namespaze = (int)klass->_1.namespaze;
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v29 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9 )
    goto LABEL_54;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v37,
    v9,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v39 = v37;
  v37.fields._dictionary = 0;
  *(_QWORD *)&v37.fields._version = &v39;
  while ( 1 )
  {
    v30 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v39,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v30 )
      break;
    if ( !v39.fields._current.fields.value )
      sub_2213CDC(v30, key_low);
    if ( SHIDWORD(v39.fields._current.fields.value[1].monitor) <= 0 )
    {
      if ( !v29
        || (items = v29->fields._items,
            key_low = LODWORD(v39.fields._current.fields.key),
            v33 = Method_System_Collections_Generic_List_int__Add__,
            ++v29->fields._version,
            !items) )
      {
        sub_2213CDC(v30, key_low);
      }
      size = v29->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v29,
          key_low,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v29->fields._size = size + 1;
        items->m_Items[size] = key_low;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v39,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  if ( !v29 )
    goto LABEL_54;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v29,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v37.fields._dictionary = 0;
  *(_QWORD *)&v37.fields._version = &v38;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    System_Collections_Generic_Dictionary_int__object___Remove(
      v9,
      v38.fields._current,
      (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v38,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *)v9;
}


void MasterMissionListViewManager__ModifyItem(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x1
  unsigned __int64 v8; // x29
  __int64 v9; // x26
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_Predicate_object__o *v11; // x28
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 naturalAligment; // x11
  Il2CppObject *current; // x27
  int32_t v16; // w28
  UnityEngine_Object_c *v17; // x0
  UnityEngine_Object_o *klass; // x28
  __int64 v19; // x1
  Il2CppClass *v20; // x0
  UserEventMissionMaster_o *v21; // [xsp+0h] [xbp-B0h]
  int64_t Time; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_5974367 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_ListViewItem__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__);
    sub_2213A60(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
    byte_5974367 = 1;
  }
  entity = 0;
  memset(&v25, 0, sizeof(v25));
  if ( receiveMissionIds && receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    v21 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    Time = NetworkManager__getTime(0);
    if ( SLODWORD(receiveMissionIds->max_length) >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = sub_2213CCC(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        if ( v8 >= LODWORD(receiveMissionIds->max_length) )
          sub_2213CE4(Instance);
        if ( !v9 )
          break;
        v5 = (unsigned int)receiveMissionIds->m_Items[v8];
        *(_DWORD *)(v9 + 16) = v5;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v5,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( Time > (__int64)Instance->fields.saveNameList && Time <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
          if ( !byte_5969EF2 )
          {
            sub_2213A60(&NetworkManager_TypeInfo);
            byte_5969EF2 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v21 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v21,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v9 + 16),
                                        0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            itemList = this->fields.itemList;
            v11 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v11,
              (Il2CppObject *)v9,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v11,
                                          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v24,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v25 = v24;
            v24.fields._list = 0;
            *(_QWORD *)&v24.fields._index = &v25;
            while ( 1 )
            {
              v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v25,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v12 & 1) == 0 )
                break;
              if ( v25.fields._current
                && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
                    v25.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (MasterMissionListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
                  current = v25.fields._current;
                else
                  current = 0;
              }
              else
              {
                current = 0;
              }
              v16 = *(_DWORD *)(v9 + 16);
              if ( !byte_596A748 )
              {
                v12 = sub_2213A60(&EventRewardSaveData_TypeInfo);
                byte_596A748 = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v16;
              if ( !current )
                sub_2213CDC(v12, v13);
              v17 = UnityEngine_Object_TypeInfo;
              LODWORD(current[17].monitor) = 4;
              klass = (UnityEngine_Object_o *)current[7].klass;
              if ( !*(&v17->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v17, v13);
              if ( UnityEngine_Object__op_Inequality(klass, 0, 0) )
              {
                v20 = current[7].klass;
                if ( !v20 )
                  sub_2213CDC(0, v19);
                (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v20->_1.image + 49))(
                  v20,
                  current,
                  *((_QWORD *)v20->_1.image + 50));
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v25,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v8 >= SLODWORD(receiveMissionIds->max_length) )
          return;
      }
LABEL_51:
      sub_2213CDC(Instance, v5);
    }
  }
}


void MasterMissionListViewManager__OnChangeAlphaAnim(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_597436A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    byte_597436A = 1;
  }
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_10;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  ObjectList,
                                                                  v6,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_2213CDC(ObjectList, v4);
  }
}


void MasterMissionListViewManager__OnClickFilterList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_597435D & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionListViewManager_OnClickFilterList__);
    byte_597435D = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = (unsigned int)this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_ED8CE8[filterStatus];
  MasterMissionListViewManager__setList(this, v5);
}


void MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 naturalAligment; // x10
  PlayMakerFSM_o *v8; // x20
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  MethodInfo *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x3
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v25; // x20
  MasterMissionListViewManager___c_c *v26; // x8
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__27_0; // x22
  System_String_o *v29; // x21
  Il2CppObject *v30; // x23
  struct MasterMissionListViewManager___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Reflection_MethodBase_o *v38; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_597435A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_MasterMissionListViewManager_OnClickListView__);
    sub_2213A60(&MasterMissionListViewObject_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__);
    sub_2213A60(&MasterMissionListViewManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/);
    sub_2213A60(&StringLiteral_16179/*"Wait_Action"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597435A = 1;
  }
  targetFSM = this->fields.targetFSM;
  naviAction = 0;
  if ( !targetFSM )
    goto LABEL_42;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_16179/*"Wait_Action"*/, 0);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj )
    goto LABEL_42;
  naturalAligment = MasterMissionListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewObject_TypeInfo )
  {
    goto LABEL_42;
  }
  targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem(
                                  (MasterMissionListViewObject_o *)obj,
                                  (const MethodInfo *)obj);
  v8 = targetFSM;
  if ( this->fields.listType == 3 )
  {
    if ( !targetFSM )
      goto LABEL_42;
    if ( (((__int64 (__fastcall *)(PlayMakerFSM_o *, _QWORD))targetFSM->klass[1]._1.byval_arg.data)(
            targetFSM,
            *(_QWORD *)&targetFSM->klass[1]._1.byval_arg.bits)
        & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v8, v9)
      && !BYTE4(v8[4].fields.fsmTemplate) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( targetFSM )
      {
        AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0);
        if ( LODWORD(v8[4].fields.m_CancellationTokenSource) == 2
          && MissionListViewManager__TrySetupMissionCondNaviAction(
               (MissionListViewManager_o *)this,
               (MissionListViewItem_o *)v8,
               &naviAction,
               v16) )
        {
          targetFSM = (PlayMakerFSM_o *)v8[1].fields.addEventHandlers;
          if ( targetFSM )
          {
            if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0) )
            {
              v17 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_MasterMissionListViewManager_OnClickListView__);
              OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
              ActionExtensions__Call(naviAction, 0);
              return;
            }
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
            targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5177/*"DIALOG_OUT_OF_TERM"*/, 0);
            v25 = (System_String_o *)targetFSM;
            v26 = MasterMissionListViewManager___c_TypeInfo;
            if ( !*(&MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo, obj);
              v26 = MasterMissionListViewManager___c_TypeInfo;
            }
            static_fields = v26->static_fields;
            _9__27_0 = static_fields->__9__27_0;
            v29 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__27_0 )
            {
              if ( !*(&v26->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v26, obj);
                static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
              }
              v30 = (Il2CppObject *)static_fields->__9;
              _9__27_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(_9__27_0, v30, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0);
              v31 = MasterMissionListViewManager___c_TypeInfo->static_fields;
              v31->__9__27_0 = _9__27_0;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&v31->__9__27_0,
                (int32_t)_9__27_0,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
            }
            if ( Instance )
            {
              CommonUI__OpenNotificationDialog(
                (CommonUI_o *)Instance,
                v29,
                v25,
                _9__27_0,
                -1,
                0,
                0,
                0,
                1,
                0,
                0,
                0,
                0,
                0.0,
                0,
                0);
              v38 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_MasterMissionListViewManager_OnClickListView__);
              OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0, 0);
              targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( targetFSM )
              {
                AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
                return;
              }
            }
          }
        }
        else
        {
          targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
          if ( targetFSM )
          {
            AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
            MissionListViewManager__ShowRewardDetailInfo(
              (MissionListViewManager_o *)this,
              (MissionListViewItem_o *)v8,
              0,
              v22);
            return;
          }
        }
      }
LABEL_42:
      sub_2213CDC(targetFSM, obj);
    }
  }
  else
  {
    if ( !targetFSM )
      goto LABEL_42;
    if ( (((__int64 (__fastcall *)(PlayMakerFSM_o *, _QWORD))targetFSM->klass[1]._1.byval_arg.data)(
            targetFSM,
            *(_QWORD *)&targetFSM->klass[1]._1.byval_arg.bits)
        & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v8, v18)
      && !BYTE4(v8[4].fields.fsmTemplate) )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v8,
        0,
        v11);
      return;
    }
  }
  if ( LODWORD(v8[4].fields.m_CancellationTokenSource) == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.receiveItem,
      (int32_t)v8,
      v10,
      (System_String_o *)v11,
      v12,
      v13,
      v14,
      v15);
    MasterMissionListViewManager__SetReceiveReward(this, (EventMissionEntity_o *)v8[1].fields.addEventHandlers, v19);
  }
  else
  {
    v20 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_2213A78(Method_MasterMissionListViewManager_OnClickListView__);
    v21 = (System_Reflection_MethodBase_o *)sub_2213A44(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
  }
}


void MasterMissionListViewManager__OnClickRewardIcon(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x10
  MasterMissionListViewItem_o *Item; // x0
  MasterMissionListViewItem_o *v10; // x20
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  MethodInfo *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_597435B & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionListViewManager_OnClickRewardIcon__);
    sub_2213A60(&MasterMissionListViewObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16179/*"Wait_Action"*/);
    byte_597435B = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_16179/*"Wait_Action"*/, 0) )
    return;
  if ( v3 )
  {
    naturalAligment = MasterMissionListViewObject_TypeInfo->_2.naturalAligment;
    if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (MasterMissionListViewObject_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewObject_TypeInfo )
        v3 = 0;
    }
    else
    {
      v3 = 0;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  targetFSM = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v3, 0, 0);
  if ( ((unsigned __int8)targetFSM & 1) == 0 )
    goto LABEL_20;
  if ( !v3 )
LABEL_24:
    sub_2213CDC(targetFSM, obj);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, (const MethodInfo *)obj);
  if ( Item )
  {
    v10 = Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))Item->klass->vtable._8_get_IsShowRewardInfo.methodPtr)(
            Item,
            Item->klass->vtable._8_get_IsShowRewardInfo.method)
        & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward(v10, v11)
      && !v10->fields.isHideRewardDetail )
    {
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v10,
        0,
        v13);
      return;
    }
    if ( v10->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v10;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.receiveItem,
        (int32_t)v10,
        v12,
        (System_String_o *)v13,
        v14,
        v15,
        v16,
        v17);
      MasterMissionListViewManager__SetReceiveReward(this, v10->fields.eventMissionEnt, v18);
      return;
    }
  }
LABEL_20:
  v19 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_2213A78(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v20 = (System_Reflection_MethodBase_o *)sub_2213A44(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
}


void MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x28
  __int64 Instance; // x0
  Il2CppObject *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v16; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x25
  il2cpp_array_size_t max_length; // x22
  const MethodInfo_47A29F8 **v19; // x29
  __int64 v20; // x21
  GiftEntity_o **m_Items; // x26
  GiftEntity_o *v22; // x8
  int32_t type; // w19
  GiftEntity_o *v24; // x8
  System_Collections_Generic_List_object__o *v25; // x28
  __int64 v26; // x26
  GiftEntity_o **v27; // x27
  GiftEntity_o *v28; // x8
  int32_t v29; // w19
  GiftEntity_o *v30; // x8
  ServantEntity_o *v31; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v33; // x0
  GiftEntity_o *v34; // x8
  Il2CppObject *v35; // x19
  Il2CppObject *v36; // x0
  __int64 v37; // x1
  Il2CppObject *v38; // x19
  System_String_o *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  GiftEntity_o *v50; // x8
  const MethodInfo_47A29F8 **v51; // x20
  Il2CppObject *CountableString; // x19
  System_Text_StringBuilder_o *v53; // x29
  __int64 v54; // x1
  GiftEntity_o *v55; // x8
  System_String_o *v56; // x21
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  System_Text_StringBuilder_o *v59; // x19
  System_String_o *v60; // x1
  __int64 v61; // x8
  System_Collections_Generic_List_object__o *v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  System_Collections_Generic_List_object__o *v66; // x23
  System_Text_StringBuilder_o *v67; // x21
  System_String_o *v68; // x19
  __int64 v69; // x1
  System_String_o *v70; // x0
  System_String_o *v71; // x0
  System_String_o *v72; // x19
  __int64 v73; // x1
  System_String_o *v74; // x0
  Il2CppObject *v75; // x19
  GiftEntity_array *v76; // x20
  System_String_o *v77; // x21
  MissionRewardGetDialog_ClickDelegate_o *v78; // x22
  const MethodInfo *v79; // x3
  __int64 v80; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v81; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v82; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v84; // [xsp+28h] [xbp-98h]
  int v85; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int32_t num; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v89; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_5974363 & 1) == 0 )
  {
    sub_2213A60(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor___91651904);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__);
    sub_2213A60(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_2213A60(&StringLiteral_9036/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_2213A60(&StringLiteral_9040/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_2213A60(&StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/);
    sub_2213A60(&StringLiteral_3839/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_2213A60(&StringLiteral_51/*"\n \n "*/);
    sub_2213A60(&StringLiteral_9035/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_2213A60(&StringLiteral_49/*"\n "*/);
    sub_2213A60(&StringLiteral_9042/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_5974363 = 1;
  }
  v89 = 0;
  entity = 0;
  v5 = sub_2213CCC(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_114;
  *(_QWORD *)(v5 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v16 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0);
  v84 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v84, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v80 = v5 + 16;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  v19 = (const MethodInfo_47A29F8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3839/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  format = (System_String_o *)Instance;
  if ( (int)max_length >= 1 )
  {
    v20 = 0;
    m_Items = GiftListById->m_Items;
    v85 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v20 >= LODWORD(GiftListById->max_length) )
LABEL_115:
        sub_2213CE4(Instance);
      v22 = m_Items[v20];
      if ( !v22 )
        goto LABEL_114;
      type = v22->fields.type;
      Instance = Gift__IsServant_47387968(type, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_47388336(type, 0);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(type, 0);
          if ( (Instance & 1) == 0 )
          {
            if ( (unsigned int)v20 >= LODWORD(GiftListById->max_length) )
              goto LABEL_115;
            v24 = m_Items[v20];
            Instance = (__int64)MasterData_object;
            if ( !v24 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         v24->fields.objectId,
                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0);
              v85 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( (_DWORD)max_length == (_DWORD)++v20 )
        goto LABEL_29;
    }
  }
  v85 = 0;
LABEL_29:
  v81 = (Il2CppObject *)v5;
  collection = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( (int)max_length >= 1 )
  {
    v26 = 0;
    v27 = GiftListById->m_Items;
    v82 = v16;
    do
    {
      if ( (unsigned int)v26 >= LODWORD(GiftListById->max_length) )
        goto LABEL_115;
      v28 = v27[v26];
      if ( !v28 )
        goto LABEL_114;
      v29 = v28->fields.type;
      Instance = Gift__IsServant_47387968(v29, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( (unsigned int)v26 >= LODWORD(GiftListById->max_length) )
          goto LABEL_115;
        v30 = v27[v26];
        if ( !v30 )
          goto LABEL_114;
        if ( !v17 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v17,
                              v30->fields.objectId,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v31 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0);
        Instance = SvtType__IsStatusUp(v31->fields.type, 0);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_114;
          v33 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                                     v16,
                                     v16->klass->vtable._3_ToString.method);
          if ( !System_String__IsNullOrEmpty(v33, 0) )
            System_Text_StringBuilder__Append_75735064(v16, (System_String_o *)StringLiteral_49/*"\n "*/, 0);
          Instance = (__int64)ServantEntity__getName(v31, -1, -1, 0, 0, 0);
          if ( (unsigned int)v26 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          v34 = v27[v26];
          if ( !v34 )
            goto LABEL_114;
          v35 = (Il2CppObject *)Instance;
          num = v34->fields.num;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &num);
          v38 = (Il2CppObject *)System_String__Format_75697880(format, v35, v36, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_9035/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v16, v39, v38, 0);
          if ( (unsigned int)v26 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          if ( !v25 )
            goto LABEL_114;
          items = v25->fields._items;
          v7 = (Il2CppObject *)v27[v26];
          v47 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v25->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v25->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v61 = v47[4];
            v62 = v25;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              v7,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v61 + 192) + 112LL));
            continue;
          }
          v49 = &items->obj.klass + size;
          v25->fields._size = size + 1;
LABEL_52:
          v49[4] = (Il2CppClass *)v7;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v7, v40, v41, v42, v43, v44, v45);
        }
      }
      else
      {
        Instance = Gift__IsItem_47387928(v29, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( (unsigned int)v26 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          v50 = v27[v26];
          Instance = (__int64)MasterData_object;
          if ( !v50 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v89,
                       v50->fields.objectId,
                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v19);
            if ( !v89 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v89[1].klass, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( !v89 )
                goto LABEL_114;
              v51 = v19;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v89[3].klass, 0);
              v53 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v53, 0);
              if ( !v89 || !v53 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_75735064(v53, (System_String_o *)v89[1].monitor, 0);
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9040/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
              if ( (unsigned int)v26 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              v55 = v27[v26];
              if ( !v55 )
                goto LABEL_114;
              v56 = (System_String_o *)Instance;
              num = v55->fields.num;
              v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &num);
              System_Text_StringBuilder__AppendFormat_75741272(v53, v56, CountableString, v57, 0);
              if ( v85 >= 2 )
              {
                v59 = v84;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9035/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                if ( !v84 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v84, (System_String_o *)Instance, (Il2CppObject *)v53, 0);
                v60 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v53->klass->vtable._3_ToString.methodPtr)(
                             v53,
                             v53->klass->vtable._3_ToString.method);
                v59 = v84;
                if ( !v84 )
                  goto LABEL_114;
                v60 = (System_String_o *)Instance;
              }
              v19 = v51;
              Instance = (__int64)System_Text_StringBuilder__Append_75735064(v59, v60, 0);
              v16 = v82;
              if ( (unsigned int)v26 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v63 = collection->fields._items;
              v7 = (Il2CppObject *)v27[v26];
              v64 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v63 )
                goto LABEL_114;
              v65 = collection->fields._size;
              if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
              {
                v61 = v64[4];
                v62 = collection;
                goto LABEL_72;
              }
              v49 = &v63->obj.klass + v65;
              collection->fields._size = v65 + 1;
              goto LABEL_52;
            }
          }
        }
      }
    }
    while ( (_DWORD)max_length != (_DWORD)++v26 );
  }
  v66 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_71841080(
    v66,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_GiftEntity___ctor___91651904);
  if ( !v66 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v66,
    (System_Collections_Generic_IEnumerable_T__o *)v25,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v66->fields._size >= 1 )
  {
    v67 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v67, 0);
    if ( !v84 )
      goto LABEL_114;
    v68 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v84->klass->vtable._3_ToString.methodPtr)(
                               v84,
                               v84->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v68, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_114;
    }
    else
    {
      if ( v85 >= 2 )
      {
        if ( !v68 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_75702848(v68, 0, v68->fields._stringLength - 2, 0);
        if ( !v67 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_75735064(v67, (System_String_o *)Instance, 0);
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v69);
        v70 = LocalizationManager__Get((System_String_o *)StringLiteral_9036/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
        Instance = (__int64)System_Text_StringBuilder__Append_75735064(v67, v70, 0);
      }
      else
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_9039/*"MISSION_ACTION_SUCCESS"*/, 0);
        if ( !v67 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v67,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v68,
                              0);
      }
      if ( !v16 )
        goto LABEL_114;
      v71 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                                 v16,
                                 v16->klass->vtable._3_ToString.method);
      if ( !System_String__IsNullOrEmpty(v71, 0) )
        System_Text_StringBuilder__Append_75735064(v67, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0);
    }
    v72 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                               v16,
                               v16->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v72, 0);
    if ( (Instance & 1) == 0 )
    {
      if ( !v67 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_75735064(v67, v72, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_9042/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0);
      System_Text_StringBuilder__Append_75735064(v67, v74, 0);
    }
    v75 = SingletonMonoBehaviour_object___get_Instance(*v19);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v66,
                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v67 )
    {
      v76 = (GiftEntity_array *)Instance;
      v77 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v67->klass->vtable._3_ToString.methodPtr)(
                                 v67,
                                 v67->klass->vtable._3_ToString.method);
      v78 = (MissionRewardGetDialog_ClickDelegate_o *)sub_2213CCC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v78,
        v81,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        v79);
      if ( v75 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v75, v76, v77, v78, 0, 0);
        return;
      }
    }
LABEL_114:
    sub_2213CDC(Instance, v7);
  }
  if ( !*(_QWORD *)v80 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v80 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v80 + 64LL),
    *(_QWORD *)(*(_QWORD *)v80 + 40LL));
}


System_Collections_Generic_List_MasterMissionListViewItem__o *MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *receiveItem; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  _BOOL8 v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *current; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_597436B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    byte_597436B = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = (Il2CppObject *)this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
    if ( v5 )
    {
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
      ++v5->fields._version;
      if ( items )
      {
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            receiveItem,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v30[4] = (Il2CppClass *)receiveItem;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)receiveItem, v8, v9, v10, v11, v12, v13);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
      }
    }
LABEL_25:
    sub_2213CDC(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_25;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33 = v32;
  v32.fields._list = 0;
  *(_QWORD *)&v32.fields._index = &v33;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v14 )
      break;
    current = v33.fields._current;
    if ( v33.fields._current )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( v33.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MasterMissionListViewItem_c *)v33.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v33.fields._current[17].monitor) == 3 )
      {
        if ( !v5
          || (v23 = v5->fields._items,
              v24 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__,
              ++v5->fields._version,
              !v23) )
        {
          sub_2213CDC(v14, current);
        }
        v25 = v5->fields._size;
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &v23->obj.klass + v25;
          v5->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)current, v15, v16, v17, v18, v19, v20);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
}


void MasterMissionListViewManager__RefrashListDisp(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  Il2CppClass *klass; // x8
  __int64 naturalAligment; // x10
  const MethodInfo *v11; // x1
  int32_t size; // w8
  int32_t v13; // w21
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_597435C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    byte_597435C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v14.fields._current;
    if ( !v14.fields._current
      || (klass = v14.fields._current->klass,
          naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
          v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (MasterMissionListViewItem_c *)klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
    {
      sub_2213CDC(v6, v7);
    }
    ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))klass->vtable[6].methodPtr)(
      v14.fields._current,
      klass->vtable[6].method);
    MissionListViewItem__CheckEventMissionAdd((MissionListViewItem_o *)current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size > 0 )
  {
    v13 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v13,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v13 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_2213CDC(ObjectList, v4);
  }
}


void MasterMissionListViewManager__SetOpenItem(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  Il2CppObject *current; // x20
  MasterMissionListViewItem_o *Item; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct MasterMissionListViewItem_o *v17; // x21
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t id; // w23
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5974368 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_19715/*"ef_mission_extric01"*/);
    sub_2213A60(&StringLiteral_22750/*"modifyOpenItem"*/);
    byte_5974368 = 1;
  }
  itemList = this->fields.itemList;
  memset(&v23, 0, sizeof(v23));
  if ( itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_2213CDC(0, v5);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        ObjectList,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v23 = v22;
      v22.fields._list = 0;
      *(_QWORD *)&v22.fields._index = &v23;
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v23,
               (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v6 )
          break;
        current = v23.fields._current;
        if ( !v23.fields._current )
          sub_2213CDC(v6, v7);
        Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v23.fields._current, v7);
        v17 = Item;
        if ( !Item )
          sub_2213CDC(0, v10);
        eventMissionEnt = Item->fields.eventMissionEnt;
        if ( !eventMissionEnt )
          sub_2213CDC(Item, v10);
        id = eventMissionEnt->fields.id;
        if ( id == this->fields.targetMissionId )
        {
          if ( !byte_596A748 )
          {
            sub_2213A60(&EventRewardSaveData_TypeInfo);
            byte_596A748 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          this->fields.openTargetItem = v17;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.openTargetItem,
            (int32_t)v17,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          if ( v17->fields.progStatus == 1 )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_19715/*"ef_mission_extric01"*/, transform, v21);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v23,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_22750/*"modifyOpenItem"*/,
      this->fields.openItemTime,
      0);
  }
}


void MasterMissionListViewManager__SetReceiveReward(
        MasterMissionListViewManager_o *this,
        EventMissionEntity_o *missionEntity,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_5974360 & 1) == 0 )
  {
    sub_2213A60(&Method_MasterMissionListViewManager_SetReceiveReward__);
    sub_2213A60(&StringLiteral_9075/*"MISSION_REWARD"*/);
    byte_5974360 = 1;
  }
  MissionListViewManager__SetupGetEffectOptions((MissionListViewManager_o *)this, missionEntity, method);
  v5 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_MasterMissionListViewManager_SetReceiveReward__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
  this->fields.missionToRecieve = missionEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.missionToRecieve,
    (int32_t)missionEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_2213CDC(0, v13);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_9075/*"MISSION_REWARD"*/, 0);
}


void MasterMissionListViewManager__SetResultData(
        MasterMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields.getSvtList = svts;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (System_String_o *)cmds,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.getCommandCodeList,
    (int32_t)cmds,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void MasterMissionListViewManager___modifyOpenItem_b__45_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_597436E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17332/*"actionAfterCallback"*/);
    byte_597436E = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_17332/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0);
}


void MasterMissionListViewManager__actionAfterCallback(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *actionCallback; // x19
  MissionNaviTransitionBoardItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0;
    sub_2213A04(p_actionCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


void MasterMissionListViewManager__afterReward(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_5974364 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5642/*"END_EFFECT"*/);
    byte_5974364 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5642/*"END_EFFECT"*/, 0);
}


UnityEngine_GameObject_o *MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v6; // x1
  Il2CppObject *Object_object__58532980; // x19
  UnityEngine_GameObject_o *v8; // x19
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x20

  if ( (byte_5974366 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&MasterMissionListViewManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974366 = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              effectAssetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__58532980,
                                     (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v8 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v8, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE0 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v9 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v8, 0);
  v10 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_5969AE5 )
  {
    effectAssetData = (AssetData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v10 )
LABEL_15:
    sub_2213CDC(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v8;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5974355 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974355 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v12 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v11);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v11);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v23 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v20, v21);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v12,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v23 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v12;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_5974354 & 1) == 0 )
  {
    sub_2213A60(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
    byte_5974354 = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_38EE7FC *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void MasterMissionListViewManager__modifyOpenItem(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  struct MasterMissionListViewItem_o *openTargetItem; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  __int64 v10; // x1
  Il2CppClass *v11; // x0
  System_Action_o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5974369 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    sub_2213A60(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974369 = 1;
  }
  openTargetItem = this->fields.openTargetItem;
  memset(&v21, 0, sizeof(v21));
  if ( openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_2213CDC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v21 = v20;
    v20.fields._list = 0;
    *(_QWORD *)&v20.fields._index = &v21;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v21,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v5 )
        break;
      current = v21.fields._current;
      if ( !v21.fields._current
        || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
            v21.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (MasterMissionListViewItem_c *)v21.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_2213CDC(v5, v6);
      }
      klass = v21.fields._current[7].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v11 = current[7].klass;
        if ( !v11 )
          sub_2213CDC(0, v10);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v11->_1.image + 49))(
          v11,
          current,
          *((_QWORD *)v11->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0);
  this->fields.callbackFunc2 = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  MissionListViewManager__SetMode_55044076((MissionListViewManager_o *)this, 3, v19);
}


void MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  char *v10; // x9
  NetworkManager_c *v11; // x0
  int v12; // w8
  int64_t Time; // x20
  bool v14; // w8
  System_Action_o *v15; // x20

  if ( (byte_5974365 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_2213A60(&Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__);
    sub_2213A60(&MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
    byte_5974365 = 1;
  }
  v5 = sub_2213CCC(MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  MasterMissionListViewManager__RefrashListDisp(this, v6);
  MasterMissionListViewManager__CheckBulkButton(this, v7);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
    Instance = (Il2CppObject *)UnityEngine_Random__Range_83400680(0, receiveMissionIds->max_length, 0);
    if ( (unsigned int)Instance >= LODWORD(receiveMissionIds->max_length) )
      sub_2213CE4(Instance);
    if ( !v5 )
      goto LABEL_18;
    v10 = (char *)receiveMissionIds + 4 * (int)Instance;
    v11 = NetworkManager_TypeInfo;
    v12 = *((_DWORD *)v10 + 8);
    LODWORD(v10) = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
    *(_DWORD *)(v5 + 20) = v12;
    if ( !(_DWORD)v10 )
      j_il2cpp_runtime_class_init_0(v11, v9);
    Time = NetworkManager__getTime(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       *(_DWORD *)(v5 + 20),
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0 )
    {
LABEL_18:
      sub_2213CDC(Instance, v9);
    }
    v14 = Time > (__int64)Instance[4].klass && Time <= (__int64)Instance[4].monitor;
    *(_BYTE *)(v5 + 16) = v14;
    v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)v5,
      Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__,
      0);
    EventTutorialMaster__CheckTutorial(0, 94, v15, 0, 0, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionListViewManager__setFilterId(
        MasterMissionListViewManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  this->fields.filterStatus = id;
  MasterMissionListViewManager__setList(this, *(const MethodInfo **)&id);
}


void MasterMissionListViewManager__setFilterName(
        MasterMissionListViewManager_o *this,
        System_String_o *targetFile,
        const MethodInfo *method)
{
  UISprite_o *filterBtnTxt; // x0

  filterBtnTxt = this->fields.filterBtnTxt;
  if ( !filterBtnTxt
    || (UISprite__set_spriteName(filterBtnTxt, targetFile, 0), (filterBtnTxt = this->fields.filterBtnTxt) == 0) )
  {
    sub_2213CDC(filterBtnTxt, targetFile);
  }
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))filterBtnTxt->klass->vtable._33_MakePixelPerfect.methodPtr)(
    filterBtnTxt,
    filterBtnTxt->klass->vtable._33_MakePixelPerfect.method);
}


void MasterMissionListViewManager__setList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  ListViewSort_o *baseSortInfo; // x20
  ListViewSort_o *v4; // x21
  struct ListViewSort_o **p_operationSortInfo; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t filterStatus; // w8
  struct ListViewSort_o *v18; // x8
  int v19; // w9
  bool v20; // w2
  __int64 v21; // x1
  UILabel_o *v22; // x21
  const MethodInfo *v23; // x1
  int32_t listType; // w8
  int32_t v25; // w20
  int32_t v26; // w20
  int32_t v27; // w20
  int32_t v28; // w20

  if ( (byte_597435E & 1) == 0 )
  {
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/);
    sub_2213A60(&StringLiteral_18329/*"btn_txt_completed"*/);
    sub_2213A60(&StringLiteral_18363/*"btn_txt_receipt"*/);
    sub_2213A60(&StringLiteral_18362/*"btn_txt_progress"*/);
    sub_2213A60(&StringLiteral_9043/*"MISSION_EMPTY_TXT"*/);
    sub_2213A60(&StringLiteral_18311/*"btn_txt_all"*/);
    byte_597435E = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
  ListViewSort___ctor_50855524(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.operationSortInfo,
    (int32_t)v4,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_9043/*"MISSION_EMPTY_TXT"*/, 0);
  if ( !emptyMessageLabel )
    goto LABEL_61;
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0);
  filterStatus = this->fields.filterStatus;
  if ( filterStatus > 1 )
  {
    if ( filterStatus == 2 )
    {
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18362/*"btn_txt_progress"*/, v16);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_61;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_61;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_61;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_61;
      v20 = 0;
    }
    else
    {
      if ( filterStatus != 3 )
        goto LABEL_42;
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18329/*"btn_txt_completed"*/, v16);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo
        || (ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0),
            (operationSortInfo = (System_String_o *)*p_operationSortInfo) == 0)
        || (ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0),
            (operationSortInfo = (System_String_o *)*p_operationSortInfo) == 0)
        || (ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0),
            (operationSortInfo = (System_String_o *)*p_operationSortInfo) == 0) )
      {
LABEL_61:
        sub_2213CDC(operationSortInfo, v15);
      }
      v20 = 1;
    }
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v20, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_61;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
LABEL_39:
    v18 = *p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_61;
    v19 = 13;
    goto LABEL_41;
  }
  if ( !filterStatus )
  {
    MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18311/*"btn_txt_all"*/, v16);
    operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
    if ( !operationSortInfo )
      goto LABEL_61;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_61;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_61;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_61;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0);
    operationSortInfo = (System_String_o *)*p_operationSortInfo;
    if ( !*p_operationSortInfo )
      goto LABEL_61;
    ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0);
    v22 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_9178/*"MST_MISSION_EMPTY_TXT"*/, 0);
    if ( !v22 )
      goto LABEL_61;
    UILabel__set_text(v22, operationSortInfo, 0);
    goto LABEL_39;
  }
  if ( filterStatus != 1 )
    goto LABEL_42;
  MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_18363/*"btn_txt_receipt"*/, v16);
  operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
  if ( !operationSortInfo )
    goto LABEL_61;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_61;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_61;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_61;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0);
  operationSortInfo = (System_String_o *)*p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_61;
  ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
  v18 = *p_operationSortInfo;
  if ( !*p_operationSortInfo )
    goto LABEL_61;
  v19 = 1;
LABEL_41:
  v18->fields.sortKind = v19;
LABEL_42:
  operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
  if ( !operationSortInfo )
    goto LABEL_61;
  ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  listType = this->fields.listType;
  if ( listType > 1 )
  {
    if ( listType == 2 )
    {
      v28 = this->fields.filterStatus;
      if ( !byte_596A849 )
      {
        sub_2213A60(&EventRewardSaveData_TypeInfo);
        byte_596A849 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v28;
      EventRewardSaveData__SaveExtraMissionData(0);
    }
    else if ( listType == 3 )
    {
      v26 = this->fields.filterStatus;
      if ( !byte_596A84B )
      {
        sub_2213A60(&EventRewardSaveData_TypeInfo);
        byte_596A84B = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v26;
      EventRewardSaveData__SaveLimitedMissionData(0);
    }
  }
  else if ( listType )
  {
    if ( listType == 1 )
    {
      v25 = this->fields.filterStatus;
      if ( !byte_596A847 )
      {
        sub_2213A60(&EventRewardSaveData_TypeInfo);
        byte_596A847 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v25;
      EventRewardSaveData__SaveWeeklyMissionData(0);
    }
  }
  else
  {
    v27 = this->fields.filterStatus;
    if ( !byte_596A845 )
    {
      sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A845 = 1;
    }
    EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = v27;
    EventRewardSaveData__SaveDailyMissionData(0);
  }
  MasterMissionListViewManager__CheckBulkButton(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionListViewManager__setMissionListIdx(
        MasterMissionListViewManager_o *this,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  MasterMissionListViewManager_o *v4; // x19
  int listType; // w8
  int32_t *p_ExtraMissionFilterId_k__BackingField; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  int32_t v9; // w21
  __int64 naturalAligment; // x10
  MasterMissionListViewManager_o *v11; // x8
  struct UnityEngine_GameObject_o *dragParentObject; // x8

  v4 = this;
  if ( (byte_5974358 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (MasterMissionListViewManager_o *)sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    byte_5974358 = 1;
  }
  listType = v4->fields.listType;
  if ( listType > 1 )
  {
    if ( listType == 2 )
    {
      if ( !byte_596A84A )
      {
        this = (MasterMissionListViewManager_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
        byte_596A84A = 1;
      }
      p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField;
    }
    else
    {
      if ( listType != 3 )
        return;
      if ( !byte_596A84C )
      {
        this = (MasterMissionListViewManager_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
        byte_596A84C = 1;
      }
      p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField;
    }
  }
  else if ( listType )
  {
    if ( listType != 1 )
      return;
    if ( !byte_596A848 )
    {
      this = (MasterMissionListViewManager_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A848 = 1;
    }
    p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
  }
  else
  {
    if ( !byte_596A846 )
    {
      this = (MasterMissionListViewManager_o *)sub_2213A60(&EventRewardSaveData_TypeInfo);
      byte_596A846 = 1;
    }
    p_ExtraMissionFilterId_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
  }
  if ( v4->fields.listType == 1 && !*p_ExtraMissionFilterId_k__BackingField )
  {
    itemList = v4->fields.itemList;
    if ( itemList )
    {
      size = itemList->fields._size;
      if ( size < 1 )
      {
LABEL_38:
        v9 = 0;
LABEL_39:
        ListViewManager__SetTopItem((ListViewManager_o *)v4, v9, 0);
        return;
      }
      v9 = 0;
      while ( 1 )
      {
        this = (MasterMissionListViewManager_o *)v4->fields.itemList;
        if ( !this )
          break;
        this = (MasterMissionListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                   (System_Collections_Generic_List_object__o *)this,
                                                   v9,
                                                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( this
          && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
              this->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          if ( (MasterMissionListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
            v11 = this;
          else
            v11 = 0;
        }
        else
        {
          v11 = 0;
        }
        if ( targetMissionId >= 1 )
        {
          if ( !v11 )
            break;
          dragParentObject = v11->fields.dragParentObject;
          if ( !dragParentObject )
            break;
          if ( LODWORD(dragParentObject->fields.m_CachedPtr) == targetMissionId )
            goto LABEL_39;
        }
        if ( size == ++v9 )
          goto LABEL_38;
      }
    }
    sub_2213CDC(this, *(_QWORD *)&targetMissionId);
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionListViewManager__setNextMissionInfo(
        MasterMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MasterMissionListViewManager_o *v10; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w22
  int32_t v13; // w21
  __int64 naturalAligment; // x10
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  System_Action_o *v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v10 = this;
  if ( (byte_5974357 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    this = (MasterMissionListViewManager_o *)sub_2213A60(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__);
    byte_5974357 = 1;
  }
  v10->fields.targetMissionId = missionID;
  if ( callback )
  {
    v10->fields.actionCallback = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.actionCallback,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = v10->fields.itemList;
  if ( !itemList )
    goto LABEL_17;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      this = (MasterMissionListViewManager_o *)v10->fields.itemList;
      if ( !this )
        break;
      this = (MasterMissionListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)this,
                                                 v13,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (MasterMissionListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
        break;
      dragParentObject = this->fields.dragParentObject;
      if ( !dragParentObject )
        break;
      if ( LODWORD(dragParentObject->fields.m_CachedPtr) == missionID )
        goto LABEL_16;
      if ( size == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_2213CDC(this, *(_QWORD *)&missionID);
  }
LABEL_15:
  v13 = 0;
LABEL_16:
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v10, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0);
  v10->fields.callbackAfterScroll = v16;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.callbackAfterScroll,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewManager__MoveTopItem((ListViewManager_o *)v10, v13, 1, 0.0, 0);
}


void MasterMissionListViewManager__unAcceptableDlg(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_5974361 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_2213A60(&StringLiteral_5647/*"END_NOTICE"*/);
    byte_5974361 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_2213CDC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5647/*"END_NOTICE"*/, 0);
}


void MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597436F & 1) == 0 )
  {
    sub_2213A60(&MasterMissionListViewManager___c_TypeInfo);
    byte_597436F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MasterMissionListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MasterMissionListViewManager___c___ctor(MasterMissionListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionListViewManager___c___OnClickListView_b__27_0(
        MasterMissionListViewManager___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5974370 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5974370 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v3);
  }
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MasterMissionListViewManager___c__DisplayClass38_0___ctor(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionListViewManager___c__DisplayClass38_0___AcceptReward_b__0(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MasterMissionListViewManager___c__DisplayClass38_0_o *v3; // x19

  callback = this->fields.callback;
  if ( !callback
    || (v3 = this,
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (MasterMissionListViewManager___c__DisplayClass38_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)this, method);
}


void MasterMissionListViewManager___c__DisplayClass38_0___AcceptReward_b__1(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MasterMissionListViewManager___c__DisplayClass38_0_o *v3; // x19

  callback = this->fields.callback;
  if ( !callback
    || (v3 = this,
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (MasterMissionListViewManager___c__DisplayClass38_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)this, method);
}


void MasterMissionListViewManager___c__DisplayClass39_0___ctor(
        MasterMissionListViewManager___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionListViewManager___c__DisplayClass39_0___OpenOneResultDialog_b__0(
        MasterMissionListViewManager___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_5974371 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974371 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0), (callback = this->fields.callback) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void MasterMissionListViewManager___c__DisplayClass41_0___ctor(
        MasterMissionListViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MasterMissionListViewManager___c__DisplayClass41_0___setAfterAction_b__0(
        MasterMissionListViewManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  _BOOL4 endEvent; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_5974372 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_5974372 = 1;
  }
  endEvent = this->fields.endEvent;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  AutomatedAction__SetMissionAction((AutomatedAction_o *)Instance, this->fields.missionId, 5, endEvent, 0);
}


void MasterMissionListViewManager___c__DisplayClass43_0___ctor(
        MasterMissionListViewManager___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MasterMissionListViewManager___c__DisplayClass43_0___ModifyItem_b__0(
        MasterMissionListViewManager___c__DisplayClass43_0_o *this,
        ListViewItem_o *x,
        const MethodInfo *method)
{
  MasterMissionListViewManager___c__DisplayClass43_0_o *v4; // x19
  __int64 naturalAligment; // x10
  ListViewItem_c *klass; // x8

  v4 = this;
  if ( (byte_5974373 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_2213A60(&MasterMissionListViewItem_TypeInfo);
    byte_5974373 = 1;
  }
  if ( !x
    || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
        x->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo
    || (klass = x[1].klass) == 0 )
  {
    sub_2213CDC(this, x);
  }
  return LODWORD(klass->_1.name) == v4->fields.missionId;
}
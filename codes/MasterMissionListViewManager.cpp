void MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CF1804 & 1) == 0 )
  {
    sub_1C7BAE8(&MissionListViewManager_TypeInfo);
    byte_4CF1804 = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v27; // x25
  _BOOL4 isTreasureEffect; // w24
  GiftEntity_array *v29; // x20
  System_Action_o *v30; // x0
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CF17F9 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__);
    sub_1C7BAE8(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__);
    sub_1C7BAE8(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
    byte_4CF17F9 = 1;
  }
  entity = 0;
  v7 = sub_1C7BD34(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = callback;
  v16 = v7 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    v24 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GiftMaster___);
    v25 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v25,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    max_length = receiveMissionIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)max_length )
          sub_1C7BD48(Instance);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v27],
                                         (const MethodInfo_342E348 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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
            (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(max_length) = receiveMissionIds->max_length;
        if ( (__int64)++v27 >= (int)max_length )
          goto LABEL_18;
      }
LABEL_25:
      sub_1C7BD40(Instance, v9);
    }
LABEL_18:
    if ( !v25 )
      goto LABEL_25;
    isTreasureEffect = this->fields.isTreasureEffect;
    v29 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v25,
                                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v30 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    v31 = v30;
    if ( isTreasureEffect )
    {
      System_Action___ctor(
        v30,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
        0);
      MissionListViewManager__StartEventMissionClearItemAction((MissionListViewManager_o *)this, v29, 0, v31, 0);
    }
    else
    {
      System_Action___ctor(
        v30,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__,
        0);
      MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v29, 0, v31, 0);
    }
    ActionExtensions__Call(this->fields.reDispAct, 0);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0);
    if ( !*(_QWORD *)v16 )
      goto LABEL_25;
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
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF17F6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17F6 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  bulkButton = (UnityEngine_Object_o *)this->fields.bulkButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      || (v13.fields.r = 0.5,
          v13.fields.g = 0.5,
          v13.fields.b = 0.5,
          v13.fields.a = 1.0,
          UIWidget__set_color(bulkButtonTxt, v13, 0),
          (bulkButtonTxt = (UIWidget_o *)this->fields.itemSortList) == 0) )
    {
LABEL_20:
      sub_1C7BD40(bulkButtonTxt, v4);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v12.fields._current )
      {
        naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
        if ( v12.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (MasterMissionListViewItem_c *)v12.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v12.fields._current[17].monitor) == 3 )
        {
          v8 = this->fields.bulkButton;
          if ( !v8 )
            sub_1C7BD40(0, v6);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v8->klass->vtable._14_SetState.methodPtr)(
            v8,
            0,
            1,
            v8->klass->vtable._14_SetState.method);
          v10 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v10 )
            sub_1C7BD40(0, v9);
          v14.fields.r = 1.0;
          v14.fields.g = 1.0;
          v14.fields.b = 1.0;
          v14.fields.a = 1.0;
          UIWidget__set_color(v10, v14, 0);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v35; // x8
  void *ObjectList; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x1
  __int64 v39; // x8
  UILabel_o *v40; // x21
  UILabel_o *v41; // x21
  UILabel_o *v42; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v44; // x8
  const MethodInfo *v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int v52; // w22
  System_Collections_Generic_List_object__o *v53; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CF17ED & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8837/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C7BAE8(&StringLiteral_8704/*"MISSION_EMPTY_TXT"*/);
    byte_4CF17ED = 1;
  }
  memset(&v57, 0, sizeof(v57));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v57 = v56;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v57,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v57.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v18 = (MasterMissionListViewItem_o *)sub_1C7BD34(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v18, (EventMissionEntity_o *)current, type, v19);
      if ( !itemList )
        sub_1C7BD40(v20, v21);
      items = itemList->fields._items;
      v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C7BD40(v20, v21);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v18,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v18;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v31 + 4), (int32_t)v18, v22, v23, v24, v25, v26, v27);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v57,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v10, v11, v12, v13, v14, v15);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4CE8A25 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A25 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v35 = &StringLiteral_8837/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v35 = &StringLiteral_8704/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v35, 0);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0);
      if ( !byte_4CE8A25 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A25 = 1;
      }
      v39 = 20;
      break;
    case 1:
      v42 = this->fields.emptyMessageLabel;
      if ( !byte_4CE8A27 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A27 = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = &StringLiteral_8837/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v44 = &StringLiteral_8704/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v44, 0);
      if ( !v42 )
        goto LABEL_63;
      UILabel__set_text(v42, (System_String_o *)ObjectList, 0);
      if ( !byte_4CE8A27 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A27 = 1;
      }
      v39 = 24;
      break;
    case 2:
      v40 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8704/*"MISSION_EMPTY_TXT"*/, 0);
      if ( !v40 )
        goto LABEL_63;
      UILabel__set_text(v40, (System_String_o *)ObjectList, 0);
      if ( !byte_4CE8A29 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A29 = 1;
      }
      v39 = 28;
      break;
    case 3:
      v41 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8704/*"MISSION_EMPTY_TXT"*/, 0);
      if ( !v41 )
        goto LABEL_63;
      UILabel__set_text(v41, (System_String_o *)ObjectList, 0);
      if ( !byte_4CE8A2B )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A2B = 1;
      }
      v39 = 32;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v39);
  MasterMissionListViewManager__setList(this, v38);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.reDispAct,
      (int32_t)redispCallBack,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v45);
  if ( !ObjectList )
LABEL_63:
    sub_1C7BD40(ObjectList, v37);
  v52 = *((_DWORD *)ObjectList + 6);
  v53 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v52 >= 1 )
  {
    for ( i = 0; i != v52; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v53,
               i,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      ObjectList = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)ObjectList & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_63;
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
  MissionListViewItem_o *receiveItem; // x0

  receiveItem = (MissionListViewItem_o *)this->fields.receiveItem;
  if ( !receiveItem )
    sub_1C7BD40(0, method);
  return MissionListViewItem__get_MissionId(receiveItem, 0);
}


MasterMissionListViewItem_o *MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CF17F0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    byte_4CF17F0 = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t listType; // w19
  int32_t v3; // w19
  MissionItemDisplayMaster_o *Master_object; // x0
  __int64 v5; // x1
  MissionItemDisplayEntity_array *ListByMissionType; // x21
  System_Collections_Generic_Dictionary_int__object__o *v7; // x19
  int max_length; // w8
  unsigned int v9; // w20
  MissionItemDisplayEntity_o *v10; // x22
  __int64 v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  __int64 naturalAligment; // x11
  Il2CppClass *klass; // x26
  int namespaze; // w9
  unsigned int monitor; // w20
  int i; // w28
  _DWORD *v25; // x25
  int v26; // w24
  System_Collections_Generic_List_int__o *v27; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  __int64 key_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4CF1803 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_MissionItemDisplayMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&MasterMissionComponent_TypeInfo);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&MissionItemDisplayInfo_TypeInfo);
    byte_4CF1803 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  memset(&v37, 0, sizeof(v37));
  listType = this->fields.listType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  if ( (unsigned int)(listType - 1) > 2 )
    v3 = 3;
  else
    v3 = dword_D2AED0[listType - 1];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionItemDisplayMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_MissionItemDisplayMaster___);
  if ( !Master_object )
    goto LABEL_57;
  ListByMissionType = MissionItemDisplayMaster__GetListByMissionType(Master_object, v3, 0);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
  if ( !ListByMissionType )
    goto LABEL_57;
  max_length = ListByMissionType->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C7BD48(Master_object);
      v10 = ListByMissionType->m_Items[v9];
      if ( !v10 || !v7 )
        break;
      Master_object = (MissionItemDisplayMaster_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                      v7,
                                                      v10->fields.targetId,
                                                      (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v11 = sub_1C7BD34(MissionItemDisplayInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v11, 0);
        if ( !v11 )
          break;
        *(_QWORD *)(v11 + 16) = v10;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)v10, v12, v13, v14, v15, v16, v17);
        *(_QWORD *)(v11 + 24) = 0;
        System_Collections_Generic_Dictionary_int__object___Add(
          v7,
          v10->fields.targetId,
          (Il2CppObject *)v11,
          (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
      }
      max_length = ListByMissionType->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_21;
    }
LABEL_57:
    sub_1C7BD40(Master_object, v5);
  }
LABEL_21:
  Master_object = (MissionItemDisplayMaster_o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_57;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v39.fields._list = *(_OWORD *)&v36.fields._dictionary;
  v39.fields._current = v36.fields._current.fields.key;
  while ( 1 )
  {
    Item = (Il2CppObject *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v39,
                             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( ((unsigned __int8)Item & 1) == 0 )
      break;
    if ( v39.fields._current )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( v39.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MasterMissionListViewItem_c *)v39.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v39.fields._current[18].monitor) == this->fields.listType )
      {
        klass = v39.fields._current[8].klass;
        if ( !klass )
          sub_1C7BD40(Item, v19);
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          monitor = (unsigned int)v39.fields._current[17].monitor;
          for ( i = 0; i < namespaze; ++i )
          {
            if ( i >= (unsigned int)namespaze )
              sub_1C7BD48(Item);
            v25 = (_DWORD *)*((_QWORD *)&klass->_1.byval_arg.data + i);
            if ( !v25 )
              sub_1C7BD40(Item, v19);
            if ( v25[5] == 2 )
            {
              if ( !v7 )
                sub_1C7BD40(Item, v19);
              Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       v7,
                                       v25[6],
                                       (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                v26 = v25[7];
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         v7,
                         v25[6],
                         (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                if ( !Item )
                  sub_1C7BD40(0, v19);
                HIDWORD(Item[1].monitor) += v26;
                if ( monitor < 4 )
                {
                  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                           v7,
                           v25[6],
                           (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                  if ( !Item )
                    sub_1C7BD40(0, v19);
                  LODWORD(Item[1].monitor) += v26;
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
    &v39,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v27 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7 )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v36,
    v7,
    (const MethodInfo_3487B48 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v38 = v36;
  while ( 1 )
  {
    v28 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v38,
            (const MethodInfo_35E1B90 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v28 )
      break;
    if ( !v38.fields._current.fields.value )
      sub_1C7BD40(v28, v29);
    if ( SHIDWORD(v38.fields._current.fields.value[1].monitor) <= 0 )
    {
      if ( !v27 )
        sub_1C7BD40(v28, v29);
      key_low = LODWORD(v38.fields._current.fields.key);
      items = v27->fields._items;
      v32 = Method_System_Collections_Generic_List_int__Add__;
      ++v27->fields._version;
      if ( !items )
        sub_1C7BD40(v28, key_low);
      size = v27->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v27,
          key_low,
          *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v27->fields._size = size + 1;
        items->m_Items[size] = key_low;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v38,
    (const MethodInfo_35E1CB4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  if ( !v27 )
    goto LABEL_57;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    v27,
    (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_OWORD *)&v37.fields._list = *(_OWORD *)&v36.fields._dictionary;
  *(_QWORD *)&v37.fields._current = v36.fields._current.fields.key;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v37,
            (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    System_Collections_Generic_Dictionary_int__object___Remove(
      v7,
      v37.fields._current,
      (const MethodInfo_3488B98 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v37,
    (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *)v7;
}


void MasterMissionListViewManager__ModifyItem(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x21
  unsigned __int64 v7; // x29
  __int64 v8; // x26
  int32_t missionProgressType; // w24
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_Predicate_object__o *v11; // x28
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 naturalAligment; // x11
  MissionListViewItem_o *current; // x27
  int32_t v16; // w28
  UnityEngine_Object_o *viewObject; // x28
  __int64 v18; // x1
  struct ListViewObject_o *v19; // x0
  UserEventMissionMaster_o *v20; // [xsp+0h] [xbp-B0h]
  int64_t Time; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4CF17FE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__FindAll__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__);
    sub_1C7BAE8(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
    byte_4CF17FE = 1;
  }
  entity = 0;
  memset(&v24, 0, sizeof(v24));
  if ( receiveMissionIds && receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    v20 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( SLODWORD(receiveMissionIds->max_length) >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = sub_1C7BD34(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v8, 0);
        if ( v7 >= LODWORD(receiveMissionIds->max_length) )
          sub_1C7BD48(Instance);
        if ( !v8 )
          break;
        v5 = (unsigned int)receiveMissionIds->m_Items[v7];
        *(_DWORD *)(v8 + 16) = v5;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v5,
                                      (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( Time > (__int64)Instance->fields.saveNameList && Time <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4CE827C )
          {
            sub_1C7BAE8(&NetworkManager_TypeInfo);
            byte_4CE827C = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v20 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v20,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v8 + 16),
                                        0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            missionProgressType = entity->fields.missionProgressType;
            itemList = this->fields.itemList;
            v11 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v11,
              (Il2CppObject *)v8,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v11,
                                          (const MethodInfo_383F50C *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v23,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v24 = v23;
            while ( 1 )
            {
              v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v24,
                      (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v12 & 1) == 0 )
                break;
              if ( v24.fields._current
                && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
                    v24.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (MasterMissionListViewItem_c *)v24.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v24.fields._current;
                else
                  current = 0;
              }
              else
              {
                current = 0;
              }
              v16 = *(_DWORD *)(v8 + 16);
              if ( !byte_4CE8A1C )
              {
                v12 = sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
                byte_4CE8A1C = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v16;
              if ( !current )
                sub_1C7BD40(v12, v13);
              MissionListViewItem__ModifyItem(current, missionProgressType == 5, 0);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v19 = current->fields.viewObject;
                if ( !v19 )
                  sub_1C7BD40(0, v18);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v19->klass->vtable._5_SetItem.methodPtr)(
                  v19,
                  current,
                  v19->klass->vtable._5_SetItem.method);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v24,
              (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v7 >= SLODWORD(receiveMissionIds->max_length) )
          return;
      }
LABEL_51:
      sub_1C7BD40(Instance, v5);
    }
  }
}


void MasterMissionListViewManager__OnChangeAlphaAnim(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4CF1801 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    byte_4CF1801 = 1;
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
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C7BD40(ObjectList, v4);
  }
}


void MasterMissionListViewManager__OnClickFilterList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4CF17F4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionListViewManager_OnClickFilterList__);
    byte_4CF17F4 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_D28154[filterStatus];
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
  int32_t listType; // w21
  PlayMakerFSM_o *v9; // x20
  char v10; // w0
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v21; // x2
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  Il2CppObject *Instance; // x19
  System_String_o *v25; // x20
  MasterMissionListViewManager___c_c *v26; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v28; // x21
  Il2CppObject *v29; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4CF17F1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionListViewManager_OnClickListView__);
    sub_1C7BAE8(&MasterMissionListViewObject_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C7BAE8(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__);
    sub_1C7BAE8(&MasterMissionListViewManager___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_4992/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C7BAE8(&StringLiteral_15625/*"Wait_Action"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF17F1 = 1;
  }
  naviAction = 0;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15625/*"Wait_Action"*/, 0);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj )
    goto LABEL_46;
  naturalAligment = MasterMissionListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_46;
  if ( (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewObject_TypeInfo )
    goto LABEL_46;
  targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem(
                                  (MasterMissionListViewObject_o *)obj,
                                  (const MethodInfo *)obj);
  if ( !targetFSM )
    goto LABEL_46;
  listType = this->fields.listType;
  v9 = targetFSM;
  v10 = ((__int64 (__fastcall *)(PlayMakerFSM_o *, _QWORD))targetFSM->klass[1]._1.byval_arg.data)(
          targetFSM,
          *(_QWORD *)&targetFSM->klass[1]._1.byval_arg.bits);
  if ( listType == 3 )
  {
    if ( (v10 & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v9, v11)
      && !BYTE4(v9[4].fields.fsmTemplate) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0);
      if ( LODWORD(v9[4].fields.m_CancellationTokenSource) == 2
        && MissionListViewManager__TrySetupMissionCondNaviAction(
             (MissionListViewManager_o *)this,
             (MissionListViewItem_o *)v9,
             &naviAction,
             0) )
      {
        targetFSM = (PlayMakerFSM_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v9, 0);
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0) )
          {
            v18 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v18 = (_QWORD *)sub_1C7BB00(Method_MasterMissionListViewManager_OnClickListView__);
            v19 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v18, v18[4]);
            OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
            ActionExtensions__Call(naviAction, 0);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4992/*"DIALOG_OUT_OF_TERM"*/, 0);
          v25 = (System_String_o *)targetFSM;
          v26 = MasterMissionListViewManager___c_TypeInfo;
          if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo);
            v26 = MasterMissionListViewManager___c_TypeInfo;
          }
          _9__27_0 = v26->static_fields->__9__27_0;
          v28 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__27_0 )
          {
            if ( !v26->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v26);
              v26 = MasterMissionListViewManager___c_TypeInfo;
            }
            v29 = (Il2CppObject *)v26->static_fields->__9;
            _9__27_0 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
            System_Action___ctor(_9__27_0, v29, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
              (int32_t)_9__27_0,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v28,
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
            v37 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v37 = (_QWORD *)sub_1C7BB00(Method_MasterMissionListViewManager_OnClickListView__);
            v38 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v37, v37[4]);
            OverwriteAssetSoundName__PlaySystemSe(v38, 2, 0, 0);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
              return;
            }
          }
        }
LABEL_46:
        sub_1C7BD40(targetFSM, obj);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
LABEL_32:
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v9, 0, 0);
      return;
    }
  }
  else if ( (v10 & 1) != 0
         && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v9, v11)
         && !BYTE4(v9[4].fields.fsmTemplate) )
  {
    goto LABEL_32;
  }
  if ( LODWORD(v9[4].fields.m_CancellationTokenSource) == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.receiveItem, (int32_t)v9, v12, v13, v14, v15, v16, v17);
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v9, 0);
    MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v21);
  }
  else
  {
    v22 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v22 = (_QWORD *)sub_1C7BB00(Method_MasterMissionListViewManager_OnClickListView__);
    v23 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v22, v22[4]);
    OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
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
  __int64 naturalAligment; // x10
  MasterMissionListViewItem_o *Item; // x0
  MasterMissionListViewItem_o *v9; // x20
  const MethodInfo *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  EventMissionEntity_o *EventMissionEntity; // x1
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_4CF17F2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionListViewManager_OnClickRewardIcon__);
    sub_1C7BAE8(&MasterMissionListViewObject_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15625/*"Wait_Action"*/);
    byte_4CF17F2 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15625/*"Wait_Action"*/, 0) )
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  targetFSM = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v3, 0, 0);
  if ( ((unsigned __int8)targetFSM & 1) == 0 )
    goto LABEL_20;
  if ( !v3 )
LABEL_24:
    sub_1C7BD40(targetFSM, obj);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v3, (const MethodInfo *)obj);
  if ( Item )
  {
    v9 = Item;
    if ( (((__int64 (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))Item->klass->vtable._8_get_IsShowRewardInfo.methodPtr)(
            Item,
            Item->klass->vtable._8_get_IsShowRewardInfo.method)
        & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward(v9, v10)
      && !v9->fields.isHideRewardDetail )
    {
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)v9, 0, 0);
      return;
    }
    if ( v9->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v9;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.receiveItem, (int32_t)v9, v11, v12, v13, v14, v15, v16);
      EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v9, 0);
      MasterMissionListViewManager__SetReceiveReward(this, EventMissionEntity, v18);
      return;
    }
  }
LABEL_20:
  v19 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1C7BB00(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v20 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
}


void MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x27
  __int64 Instance; // x0
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v16; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x25
  int max_length; // w22
  const MethodInfo_3A8C5A8 **v19; // x29
  unsigned int v20; // w21
  Il2CppClass **v21; // x26
  Il2CppClass *v22; // x8
  char *v23; // x26
  Il2CppClass *v24; // t1
  int32_t name_high; // w19
  System_Collections_Generic_List_object__o *v26; // x28
  unsigned int v27; // w26
  Il2CppClass **v28; // x27
  Il2CppClass *v29; // x8
  Il2CppObject **v30; // x27
  Il2CppClass *v31; // t1
  int32_t v32; // w19
  ServantEntity_o *v33; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v35; // x0
  Il2CppObject *v36; // x19
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x19
  System_String_o *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  const MethodInfo_3A8C5A8 **v50; // x20
  Il2CppObject *CountableString; // x19
  System_Text_StringBuilder_o *v52; // x29
  System_String_o *v53; // x21
  Il2CppObject *v54; // x0
  System_Text_StringBuilder_o *v55; // x19
  System_String_o *v56; // x1
  __int64 v57; // x8
  System_Collections_Generic_List_object__o *v58; // x0
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  System_Collections_Generic_List_object__o *v62; // x23
  System_Text_StringBuilder_o *v63; // x21
  System_String_o *v64; // x19
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x19
  System_String_o *v68; // x0
  Il2CppObject *v69; // x19
  GiftEntity_array *v70; // x20
  System_String_o *v71; // x21
  MissionRewardGetDialog_ClickDelegate_o *v72; // x22
  const MethodInfo *v73; // x3
  __int64 v74; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v75; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v76; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v78; // [xsp+28h] [xbp-98h]
  int v79; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v83; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CF17FA & 1) == 0 )
  {
    sub_1C7BAE8(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity___ctor___78740728);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&System_Text_StringBuilder_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__);
    sub_1C7BAE8(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8697/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1C7BAE8(&StringLiteral_8701/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1C7BAE8(&StringLiteral_8700/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C7BAE8(&StringLiteral_3702/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1C7BAE8(&StringLiteral_51/*"\n \n "*/);
    sub_1C7BAE8(&StringLiteral_8696/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1C7BAE8(&StringLiteral_49/*"\n "*/);
    sub_1C7BAE8(&StringLiteral_8703/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_4CF17FA = 1;
  }
  v83 = 0;
  entity = 0;
  v5 = sub_1C7BD34(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_114;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v16 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v16, 0);
  v78 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v78, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = (const MethodInfo_3A8C5A8 **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3702/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v79 = 0;
    while ( 1 )
    {
      if ( v20 >= LODWORD(GiftListById->max_length) )
LABEL_115:
        sub_1C7BD48(Instance);
      v21 = &GiftListById->obj.klass + (int)v20;
      v24 = v21[4];
      v23 = (char *)(v21 + 4);
      v22 = v24;
      if ( !v24 )
        goto LABEL_114;
      name_high = HIDWORD(v22->_1.name);
      Instance = Gift__IsServant_40988476(name_high, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_40988868(name_high, 0);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0);
          if ( (Instance & 1) == 0 )
          {
            if ( v20 >= LODWORD(GiftListById->max_length) )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v23 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v23 + 24LL),
                         (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0);
              v79 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v20 )
        goto LABEL_29;
    }
  }
  v79 = 0;
LABEL_29:
  v74 = v5 + 16;
  v75 = (Il2CppObject *)v5;
  collection = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v27 = 0;
    v76 = v16;
    do
    {
      if ( v27 >= LODWORD(GiftListById->max_length) )
        goto LABEL_115;
      v28 = &GiftListById->obj.klass + (int)v27;
      v31 = v28[4];
      v30 = (Il2CppObject **)(v28 + 4);
      v29 = v31;
      if ( !v31 )
        goto LABEL_114;
      v32 = HIDWORD(v29->_1.name);
      Instance = Gift__IsServant_40988476(v32, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( v27 >= LODWORD(GiftListById->max_length) )
          goto LABEL_115;
        if ( !*v30 )
          goto LABEL_114;
        if ( !v17 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v17,
                              (int32_t)(*v30)[1].monitor,
                              (const MethodInfo_342E2FC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v33 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0);
        Instance = SvtType__IsStatusUp(v33->fields.type, 0);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_114;
          v35 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                                     v16,
                                     v16->klass->vtable._3_ToString.method);
          if ( !System_String__IsNullOrEmpty(v35, 0) )
            System_Text_StringBuilder__Append_64260872(v16, (System_String_o *)StringLiteral_49/*"\n "*/, 0);
          Instance = (__int64)ServantEntity__getName(v33, -1, -1, 0, 0);
          if ( v27 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          if ( !*v30 )
            goto LABEL_114;
          v36 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v30)[1].monitor);
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
          v38 = (Il2CppObject *)System_String__Format_64218220(format, v36, v37, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8696/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v16, v39, v38, 0);
          if ( v27 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          if ( !v26 )
            goto LABEL_114;
          v7 = *v30;
          items = v26->fields._items;
          v47 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v26->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v26->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v57 = v47[4];
            v58 = v26;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              v7,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v57 + 192) + 112LL));
            continue;
          }
          v49 = &items->obj.klass + size;
          v26->fields._size = size + 1;
LABEL_52:
          v49[4] = (Il2CppClass *)v7;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v49 + 4), (int32_t)v7, v40, v41, v42, v43, v44, v45);
        }
      }
      else
      {
        Instance = Gift__IsItem_40988424(v32, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v27 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v30 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v83,
                       (int32_t)(*v30)[1].monitor,
                       (const MethodInfo_342E348 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v19);
            if ( !v83 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v83[1].klass, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( !v83 )
                goto LABEL_114;
              v50 = v19;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v83[3].klass, 0);
              v52 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v52, 0);
              if ( !v83 || !v52 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_64260872(v52, (System_String_o *)v83[1].monitor, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8701/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
              if ( v27 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              if ( !*v30 )
                goto LABEL_114;
              v53 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v30)[1].monitor);
              v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
              System_Text_StringBuilder__AppendFormat_64267224(v52, v53, CountableString, v54, 0);
              if ( v79 >= 2 )
              {
                v55 = v78;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8696/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                if ( !v78 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v78, (System_String_o *)Instance, (Il2CppObject *)v52, 0);
                v56 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v52->klass->vtable._3_ToString.methodPtr)(
                             v52,
                             v52->klass->vtable._3_ToString.method);
                v55 = v78;
                if ( !v78 )
                  goto LABEL_114;
                v56 = (System_String_o *)Instance;
              }
              v19 = v50;
              Instance = (__int64)System_Text_StringBuilder__Append_64260872(v55, v56, 0);
              v16 = v76;
              if ( v27 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v7 = *v30;
              v59 = collection->fields._items;
              v60 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v59 )
                goto LABEL_114;
              v61 = collection->fields._size;
              if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
              {
                v57 = v60[4];
                v58 = collection;
                goto LABEL_72;
              }
              v49 = &v59->obj.klass + v61;
              collection->fields._size = v61 + 1;
              goto LABEL_52;
            }
          }
        }
      }
    }
    while ( max_length != ++v27 );
  }
  v62 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58975984(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_GiftEntity___ctor___78740728);
  if ( !v62 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v62,
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v62->fields._size >= 1 )
  {
    v63 = (System_Text_StringBuilder_o *)sub_1C7BD34(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v63, 0);
    if ( !v78 )
      goto LABEL_114;
    v64 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v78->klass->vtable._3_ToString.methodPtr)(
                               v78,
                               v78->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v64, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_114;
    }
    else
    {
      if ( v79 >= 2 )
      {
        if ( !v64 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_64222852(v64, 0, v64->fields._stringLength - 2, 0);
        if ( !v63 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_64260872(v63, (System_String_o *)Instance, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8697/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
        Instance = (__int64)System_Text_StringBuilder__Append_64260872(v63, v65, 0);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8700/*"MISSION_ACTION_SUCCESS"*/, 0);
        if ( !v63 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v63,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v64,
                              0);
      }
      if ( !v16 )
        goto LABEL_114;
      v66 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                                 v16,
                                 v16->klass->vtable._3_ToString.method);
      if ( !System_String__IsNullOrEmpty(v66, 0) )
        System_Text_StringBuilder__Append_64260872(v63, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0);
    }
    v67 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v16->klass->vtable._3_ToString.methodPtr)(
                               v16,
                               v16->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v67, 0);
    if ( (Instance & 1) == 0 )
    {
      if ( !v63 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_64260872(v63, v67, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v68 = LocalizationManager__Get((System_String_o *)StringLiteral_8703/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0);
      System_Text_StringBuilder__Append_64260872(v63, v68, 0);
    }
    v69 = SingletonMonoBehaviour_object___get_Instance(*v19);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v62,
                          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v63 )
    {
      v70 = (GiftEntity_array *)Instance;
      v71 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v63->klass->vtable._3_ToString.methodPtr)(
                                 v63,
                                 v63->klass->vtable._3_ToString.method);
      v72 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C7BD34(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v72,
        v75,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        v73);
      if ( v69 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v69, v70, v71, v72, 0, 0);
        return;
      }
    }
LABEL_114:
    sub_1C7BD40(Instance, v7);
  }
  if ( !*(_QWORD *)v74 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v74 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v74 + 64LL),
    *(_QWORD *)(*(_QWORD *)v74 + 40LL));
}


System_Collections_Generic_List_MasterMissionListViewItem__o *MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  Il2CppObject *receiveItem; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  _BOOL8 v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
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

  if ( (byte_4CF1802 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    byte_4CF1802 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
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
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v30[4] = (Il2CppClass *)receiveItem;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)receiveItem, v8, v9, v10, v11, v12, v13);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
      }
    }
LABEL_26:
    sub_1C7BD40(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
        if ( !v5 )
          sub_1C7BD40(v14, v33.fields._current);
        v23 = v5->fields._items;
        v24 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v5->fields._version;
        if ( !v23 )
          sub_1C7BD40(v14, current);
        v25 = v5->fields._size;
        if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &v23->obj.klass + v25;
          v5->fields._size = v25 + 1;
          v26[4] = (Il2CppClass *)current;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)current, v15, v16, v17, v18, v19, v20);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
}


void MasterMissionListViewManager__RefrashListDisp(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 naturalAligment; // x11
  int32_t size; // w8
  int32_t v10; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CF17F3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    byte_4CF17F3 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))i.fields._current->klass->vtable[6].methodPtr)(
          i.fields._current,
          i.fields._current->klass->vtable[6].method) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( i.fields._current )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( i.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MasterMissionListViewItem_c *)i.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
      {
        continue;
      }
    }
    sub_1C7BD40(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v5,
                                                                  v10,
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v10 >= v5->fields._size )
        return;
    }
LABEL_17:
    sub_1C7BD40(ObjectList, v4);
  }
}


void MasterMissionListViewManager__SetOpenItem(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  struct MasterMissionListViewItem_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t MissionId; // w22
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CF17FF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C7BAE8(&StringLiteral_18972/*"ef_mission_extric01"*/);
    sub_1C7BAE8(&StringLiteral_21848/*"modifyOpenItem"*/);
    byte_4CF17FF = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1C7BD40(0, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        ObjectList,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v21 = v20;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v21,
               (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v21.fields._current;
        if ( !v21.fields._current )
          sub_1C7BD40(v5, v6);
        Item = (MissionListViewItem_o *)MasterMissionListViewObject__GetItem(
                                          (MasterMissionListViewObject_o *)v21.fields._current,
                                          v6);
        v10 = (struct MasterMissionListViewItem_o *)Item;
        if ( !Item )
          sub_1C7BD40(0, v9);
        MissionId = MissionListViewItem__get_MissionId(Item, 0);
        if ( MissionId == this->fields.targetMissionId )
        {
          if ( !byte_4CE8A1C )
          {
            sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
            byte_4CE8A1C = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = MissionId;
          this->fields.openTargetItem = v10;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.openTargetItem,
            (int32_t)v10,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          if ( MissionListViewItem__get_IsOpenMission((MissionListViewItem_o *)v10, 0) )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18972/*"ef_mission_extric01"*/, transform, v19);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21848/*"modifyOpenItem"*/,
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4CF17F7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MasterMissionListViewManager_SetReceiveReward__);
    sub_1C7BAE8(&StringLiteral_8736/*"MISSION_REWARD"*/);
    byte_4CF17F7 = 1;
  }
  MissionListViewManager__SetupGetEffectOptions((MissionListViewManager_o *)this, missionEntity, 0);
  v5 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C7BB00(Method_MasterMissionListViewManager_SetReceiveReward__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
  this->fields.missionToRecieve = missionEntity;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.missionToRecieve,
    (int32_t)missionEntity,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C7BD40(0, v13);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8736/*"MISSION_REWARD"*/, 0);
}


void MasterMissionListViewManager__SetResultData(
        MasterMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields.getSvtList = svts;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.getSvtList,
    (int32_t)svts,
    (int32_t)cmds,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.getCommandCodeList = cmds;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.getCommandCodeList,
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
  if ( (byte_4CF1805 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_16718/*"actionAfterCallback"*/);
    byte_4CF1805 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16718/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0);
}


void MasterMissionListViewManager__actionAfterCallback(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *actionCallback; // x19
  GrandQuestFolderBoardItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (GrandQuestFolderBoardItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0;
    sub_1C7BA8C(p_actionCallback, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


void MasterMissionListViewManager__afterReward(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4CF17FB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5448/*"END_EFFECT"*/);
    byte_4CF17FB = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C7BD40(0, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5448/*"END_EFFECT"*/, 0);
}


UnityEngine_GameObject_o *MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51713432; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4CF17FD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&MasterMissionListViewManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17FD = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51713432 = AssetData__GetObject_object__51713432(
                              effectAssetData,
                              name,
                              (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51713432,
                                     (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CE7E59 )
  {
    effectAssetData = (AssetData_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4CE7E5E )
  {
    effectAssetData = (AssetData_o *)sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C7BD40(effectAssetData, parentTr);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CF17EC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17EC = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C7BD40(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( !current )
        sub_1C7BD40(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C7BD40(0, v10);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C7BD40(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44341312((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1C7BD40(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C7BD40(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C7BD40(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C7BD40(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CF17EB & 1) == 0 )
  {
    sub_1C7BAE8(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
    byte_4CF17EB = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_31F7AA4 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void MasterMissionListViewManager__modifyOpenItem(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  __int64 v9; // x1
  Il2CppClass *v10; // x0
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CF1800 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1800 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1C7BD40(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v13 = v12;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v13,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v13.fields._current;
      if ( !v13.fields._current
        || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
            v13.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (MasterMissionListViewItem_c *)v13.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1C7BD40(v4, v5);
      }
      klass = v13.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v10 = current[7].klass;
        if ( !v10 )
          sub_1C7BD40(0, v9);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v10->_1.image + 49))(
          v10,
          current,
          *((_QWORD *)v10->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v11 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0);
  MissionListViewManager__SetMode((MissionListViewManager_o *)this, 3, v11, 0);
}


void MasterMissionListViewManager__setAfterAction(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int64_t Time; // x21
  bool v11; // w8
  System_Action_o *v12; // x21

  if ( (byte_4CF17FC & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C7BAE8(&Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__);
    sub_1C7BAE8(&MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
    byte_4CF17FC = 1;
  }
  v5 = sub_1C7BD34(MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  MasterMissionListViewManager__RefrashListDisp(this, v6);
  MasterMissionListViewManager__CheckBulkButton(this, v7);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
    Instance = (Il2CppObject *)UnityEngine_Random__Range_71829860(0, receiveMissionIds->max_length, 0);
    if ( (unsigned int)Instance >= LODWORD(receiveMissionIds->max_length) )
      sub_1C7BD48(Instance);
    if ( !v5 )
      goto LABEL_18;
    *(_DWORD *)(v5 + 20) = receiveMissionIds->m_Items[(int)Instance];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       *(_DWORD *)(v5 + 20),
                       (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0 )
    {
LABEL_18:
      sub_1C7BD40(Instance, v9);
    }
    v11 = Time > (__int64)Instance[4].klass && Time <= (__int64)Instance[4].monitor;
    *(_BYTE *)(v5 + 16) = v11;
    v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__,
      0);
    MissionListViewManager__DisplayAfterMissionAchieveTutorial((MissionListViewManager_o *)this, v12, 0);
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
    sub_1C7BD40(filterBtnTxt, targetFile);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  UILabel_o *v16; // x21
  struct ListViewSort_o *v17; // x8
  int v18; // w9
  bool v19; // w2
  const MethodInfo *v20; // x1
  int32_t filterStatus; // w20
  int32_t v22; // w20
  int32_t v23; // w20
  int32_t v24; // w20

  if ( (byte_4CF17F5 & 1) == 0 )
  {
    sub_1C7BAE8(&ListViewSort_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8837/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C7BAE8(&StringLiteral_17647/*"btn_txt_completed"*/);
    sub_1C7BAE8(&StringLiteral_17680/*"btn_txt_receipt"*/);
    sub_1C7BAE8(&StringLiteral_17679/*"btn_txt_progress"*/);
    sub_1C7BAE8(&StringLiteral_8704/*"MISSION_EMPTY_TXT"*/);
    sub_1C7BAE8(&StringLiteral_17629/*"btn_txt_all"*/);
    byte_4CF17F5 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C7BD34(ListViewSort_TypeInfo);
  ListViewSort___ctor_44359580(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8704/*"MISSION_EMPTY_TXT"*/, 0);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1C7BD40(operationSortInfo, v14);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17629/*"btn_txt_all"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 1, 0);
      v16 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8837/*"MST_MISSION_EMPTY_TXT"*/, 0);
      if ( !v16 )
        goto LABEL_53;
      UILabel__set_text(v16, operationSortInfo, 0);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17680/*"btn_txt_receipt"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
      v17 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v18 = 1;
      goto LABEL_37;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17679/*"btn_txt_progress"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 1, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v19 = 0;
      goto LABEL_33;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17647/*"btn_txt_completed"*/, v15);
      operationSortInfo = (System_String_o *)this->fields.operationSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 13, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 14, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 15, 0, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v19 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v19, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
LABEL_35:
      v17 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v18 = 13;
LABEL_37:
      v17->fields.sortKind = v18;
LABEL_38:
      operationSortInfo = (System_String_o *)this->fields.baseSortInfo;
      if ( !operationSortInfo )
        goto LABEL_53;
      ListViewSort__Set((ListViewSort_o *)operationSortInfo, this->fields.operationSortInfo, 0);
      ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
      switch ( this->fields.listType )
      {
        case 0:
          filterStatus = this->fields.filterStatus;
          if ( !byte_4CE8A24 )
          {
            sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
            byte_4CE8A24 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0);
          break;
        case 1:
          v22 = this->fields.filterStatus;
          if ( !byte_4CE8A26 )
          {
            sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
            byte_4CE8A26 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v22;
          EventRewardSaveData__SaveWeeklyMissionData(0);
          break;
        case 2:
          v23 = this->fields.filterStatus;
          if ( !byte_4CE8A28 )
          {
            sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
            byte_4CE8A28 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v23;
          EventRewardSaveData__SaveExtraMissionData(0);
          break;
        case 3:
          v24 = this->fields.filterStatus;
          if ( !byte_4CE8A2A )
          {
            sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
            byte_4CE8A2A = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v24;
          EventRewardSaveData__SaveLimitedMissionData(0);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v20);
      return;
    default:
      goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionListViewManager__setMissionListIdx(
        MasterMissionListViewManager_o *this,
        int32_t targetMissionId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v8; // w22
  int32_t v9; // w21
  __int64 naturalAligment; // x10

  if ( (byte_4CF17EF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    byte_4CF17EF = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4CE8A25 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A25 = 1;
      }
      v5 = 20;
      goto LABEL_16;
    case 1:
      if ( !byte_4CE8A27 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A27 = 1;
      }
      v5 = 24;
      goto LABEL_16;
    case 2:
      if ( !byte_4CE8A29 )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A29 = 1;
      }
      v5 = 28;
      goto LABEL_16;
    case 3:
      if ( !byte_4CE8A2B )
      {
        sub_1C7BAE8(&EventRewardSaveData_TypeInfo);
        byte_4CE8A2B = 1;
      }
      v5 = 32;
LABEL_16:
      if ( this->fields.listType != 1
        || *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField + v5) )
      {
        return;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_32;
      size = itemList->fields._size;
      v8 = size - 1;
      if ( size < 1 )
        goto LABEL_33;
      v9 = 0;
      break;
    default:
      return;
  }
  while ( 1 )
  {
    itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              itemList,
                                                              v9,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
          itemList = 0;
      }
      else
      {
        itemList = 0;
      }
    }
    if ( targetMissionId >= 1 )
    {
      if ( !itemList )
        goto LABEL_32;
      if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)itemList, 0) == targetMissionId )
        break;
    }
    if ( v8 == v9 )
    {
LABEL_33:
      v9 = 0;
      break;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v9;
    if ( !itemList )
LABEL_32:
      sub_1C7BD40(itemList, *(_QWORD *)&targetMissionId);
  }
  ListViewManager__SetTopItem((ListViewManager_o *)this, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionListViewManager__setNextMissionInfo(
        MasterMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v13; // w22
  int32_t v14; // w21
  __int64 naturalAligment; // x10
  System_Action_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CF17EE & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__);
    byte_4CF17EE = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.actionCallback,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v13 = size - 1;
  if ( size >= 1 )
  {
    v14 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v14,
                                                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
        break;
      itemList = (System_Collections_Generic_List_object__o *)MissionListViewItem__get_EventMissionEntity(
                                                                (MissionListViewItem_o *)itemList,
                                                                0);
      if ( !itemList )
        break;
      if ( LODWORD(itemList->fields._items) == missionID )
        goto LABEL_17;
      if ( v13 == v14 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v14;
    }
    while ( itemList );
LABEL_15:
    sub_1C7BD40(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v14 = 0;
LABEL_17:
  v16 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0);
  this->fields.callbackAfterScroll = v16;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackAfterScroll,
    (int32_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v14, 1, 0.0, 0);
}


void MasterMissionListViewManager__unAcceptableDlg(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4CF17F8 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1C7BAE8(&StringLiteral_5453/*"END_NOTICE"*/);
    byte_4CF17F8 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_1C7BD40(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5453/*"END_NOTICE"*/, 0);
}


void MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF1806 & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionListViewManager___c_TypeInfo);
    byte_4CF1806 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)MasterMissionListViewManager___c_TypeInfo->static_fields,
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

  if ( (byte_4CF1807 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CF1807 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C7BD40(Instance, v3);
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
    sub_1C7BD40(this, method);
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
    sub_1C7BD40(this, method);
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

  if ( (byte_4CF1808 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF1808 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0), (callback = this->fields.callback) == 0) )
  {
    sub_1C7BD40(Instance, v4);
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
  _BOOL4 endEvent; // w21
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CF1809 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4CF1809 = 1;
  }
  endEvent = this->fields.endEvent;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
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

  v4 = this;
  if ( (byte_4CF180A & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    byte_4CF180A = 1;
  }
  if ( !x
    || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
        x->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
  {
    sub_1C7BD40(this, x);
  }
  return MissionListViewItem__get_MissionId((MissionListViewItem_o *)x, 0) == v4->fields.missionId;
}
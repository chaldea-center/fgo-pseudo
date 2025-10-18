void MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C46111 & 1) == 0 )
  {
    sub_1C37058(&MissionListViewManager_TypeInfo);
    byte_4C46111 = 1;
  }
  if ( !MissionListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x23
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v15; // x24
  System_Collections_Generic_List_object__o *v16; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x25
  _BOOL4 isTreasureEffect; // w24
  GiftEntity_array *v20; // x20
  System_Action_o *v21; // x0
  System_Action_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C46106 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__);
    sub_1C37058(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__);
    sub_1C37058(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
    byte_4C46106 = 1;
  }
  entity = 0;
  v7 = sub_1C372A4(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = callback;
  v11 = v7 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v9, v10);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v12, v13);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    v15 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
    v16 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    max_length = receiveMissionIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)max_length )
          sub_1C372BC(Instance);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v18],
                                         (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v15 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v15, HIDWORD(entity[5].klass), 0);
          if ( !v16 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v16,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(max_length) = receiveMissionIds->max_length;
        if ( (__int64)++v18 >= (int)max_length )
          goto LABEL_18;
      }
LABEL_25:
      sub_1C372B4(Instance);
    }
LABEL_18:
    if ( !v16 )
      goto LABEL_25;
    isTreasureEffect = this->fields.isTreasureEffect;
    v20 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v16,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    v22 = v21;
    if ( isTreasureEffect )
    {
      System_Action___ctor(
        v21,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
        0);
      MissionListViewManager__StartEventMissionClearItemAction((MissionListViewManager_o *)this, v20, v23, v22, v24);
    }
    else
    {
      System_Action___ctor(
        v21,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__,
        0);
      MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v20, 0, v22, v26);
    }
    ActionExtensions__Call(this->fields.reDispAct, 0);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0);
    if ( !*(_QWORD *)v11 )
      goto LABEL_25;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v11 + 64LL),
      *(_QWORD *)(*(_QWORD *)v11 + 40LL));
    MasterMissionListViewManager__afterReward(this, v25);
  }
}


void MasterMissionListViewManager__CheckBulkButton(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bulkButton; // x20
  UIWidget_o *bulkButtonTxt; // x0
  __int64 naturalAligment; // x11
  struct UICommonButton_o *v6; // x0
  UIWidget_o *v7; // x0
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C46103 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46103 = 1;
  }
  memset(&v9, 0, sizeof(v9));
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
      || (v10.fields.r = 0.5,
          v10.fields.g = 0.5,
          v10.fields.b = 0.5,
          v10.fields.a = 1.0,
          UIWidget__set_color(bulkButtonTxt, v10, 0),
          (bulkButtonTxt = (UIWidget_o *)this->fields.itemSortList) == 0) )
    {
LABEL_20:
      sub_1C372B4(bulkButtonTxt);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v9 = v8;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( v9.fields._current )
      {
        naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
        if ( v9.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
          && (MasterMissionListViewItem_c *)v9.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
          && LODWORD(v9.fields._current[17].monitor) == 3 )
        {
          v6 = this->fields.bulkButton;
          if ( !v6 )
            sub_1C372B4(0);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v6->klass->vtable._14_SetState.methodPtr)(
            v6,
            0,
            1,
            v6->klass->vtable._14_SetState.method);
          v7 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v7 )
            sub_1C372B4(0);
          v11.fields.r = 1.0;
          v11.fields.g = 1.0;
          v11.fields.b = 1.0;
          v11.fields.a = 1.0;
          UIWidget__set_color(v7, v11, 0);
          break;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x24
  System_Collections_Generic_List_object__o *itemList; // x22
  MasterMissionListViewItem_o *v14; // x23
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v26; // x8
  void *ObjectList; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x8
  UILabel_o *v30; // x21
  UILabel_o *v31; // x21
  UILabel_o *v32; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v34; // x8
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int v38; // w22
  System_Collections_Generic_List_object__o *v39; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C460FA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_8813/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C37058(&StringLiteral_8680/*"MISSION_EMPTY_TXT"*/);
    byte_4C460FA = 1;
  }
  memset(&v43, 0, sizeof(v43));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v43 = v42;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v43,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v43.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v14 = (MasterMissionListViewItem_o *)sub_1C372A4(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v14, (EventMissionEntity_o *)current, type, v15);
      if ( !itemList )
        sub_1C372B4(v16);
      items = itemList->fields._items;
      v20 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C372B4(v16);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v14,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v14;
        sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v10, v11);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4C3D4A6 )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4A6 = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = &StringLiteral_8813/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v26 = &StringLiteral_8680/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v26, 0);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0);
      if ( !byte_4C3D4A6 )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4A6 = 1;
      }
      v29 = 20;
      break;
    case 1:
      v32 = this->fields.emptyMessageLabel;
      if ( !byte_4C3D4A8 )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4A8 = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = &StringLiteral_8813/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v34 = &StringLiteral_8680/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v34, 0);
      if ( !v32 )
        goto LABEL_63;
      UILabel__set_text(v32, (System_String_o *)ObjectList, 0);
      if ( !byte_4C3D4A8 )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4A8 = 1;
      }
      v29 = 24;
      break;
    case 2:
      v30 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8680/*"MISSION_EMPTY_TXT"*/, 0);
      if ( !v30 )
        goto LABEL_63;
      UILabel__set_text(v30, (System_String_o *)ObjectList, 0);
      if ( !byte_4C3D4AA )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4AA = 1;
      }
      v29 = 28;
      break;
    case 3:
      v31 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8680/*"MISSION_EMPTY_TXT"*/, 0);
      if ( !v31 )
        goto LABEL_63;
      UILabel__set_text(v31, (System_String_o *)ObjectList, 0);
      if ( !byte_4C3D4AC )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4AC = 1;
      }
      v29 = 32;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v29);
  MasterMissionListViewManager__setList(this, v28);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v36, v37);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v35);
  if ( !ObjectList )
LABEL_63:
    sub_1C372B4(ObjectList);
  v38 = *((_DWORD *)ObjectList + 6);
  v39 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v38 >= 1 )
  {
    for ( i = 0; i != v38; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v39,
               i,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
  struct MasterMissionListViewItem_o *receiveItem; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8

  receiveItem = this->fields.receiveItem;
  if ( !receiveItem || (eventMissionEnt = receiveItem->fields.eventMissionEnt) == 0 )
    sub_1C372B4(this);
  return eventMissionEnt->fields.id;
}


MasterMissionListViewItem_o *MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C460FD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    byte_4C460FD = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  int32_t MissionTypeByTabType; // w19
  MissionItemDisplayMaster_o *Master_object; // x0
  MissionItemDisplayEntity_array *ListByMissionType; // x21
  System_Collections_Generic_Dictionary_int__object__o *v6; // x19
  int max_length; // w8
  unsigned int v8; // w20
  MissionItemDisplayEntity_o *v9; // x22
  __int64 v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x11
  Il2CppClass *klass; // x26
  int namespaze; // w9
  unsigned int monitor; // w20
  int i; // w28
  _DWORD *v19; // x25
  int v20; // w24
  System_Collections_Generic_List_int__o *v21; // x21
  _BOOL8 v22; // x0
  int32_t key; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4C46110 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MissionItemDisplayMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&MasterMissionComponent_TypeInfo);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&MissionItemDisplayInfo_TypeInfo);
    byte_4C46110 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  listType = this->fields.listType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  MissionTypeByTabType = MasterMissionComponent__GetMissionTypeByTabType(listType, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionItemDisplayMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MissionItemDisplayMaster___);
  if ( !Master_object )
    goto LABEL_54;
  ListByMissionType = MissionItemDisplayMaster__GetListByMissionType(Master_object, MissionTypeByTabType, 0);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
  if ( !ListByMissionType )
    goto LABEL_54;
  max_length = ListByMissionType->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(Master_object);
      v9 = ListByMissionType->m_Items[v8];
      if ( !v9 || !v6 )
        break;
      Master_object = (MissionItemDisplayMaster_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                      v6,
                                                      v9->fields.targetId,
                                                      (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v10 = sub_1C372A4(MissionItemDisplayInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0);
        if ( !v10 )
          break;
        *(_QWORD *)(v10 + 16) = v9;
        sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)v9, v11, v12);
        *(_QWORD *)(v10 + 24) = 0;
        System_Collections_Generic_Dictionary_int__object___Add(
          v6,
          v9->fields.targetId,
          (Il2CppObject *)v10,
          (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
      }
      max_length = ListByMissionType->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_18;
    }
LABEL_54:
    sub_1C372B4(Master_object);
  }
LABEL_18:
  Master_object = (MissionItemDisplayMaster_o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v32.fields._list = *(_OWORD *)&v29.fields._dictionary;
  v32.fields._current = v29.fields._current.fields.key;
  while ( 1 )
  {
    Item = (Il2CppObject *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v32,
                             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( ((unsigned __int8)Item & 1) == 0 )
      break;
    if ( v32.fields._current )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( v32.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MasterMissionListViewItem_c *)v32.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v32.fields._current[18].monitor) == this->fields.listType )
      {
        klass = v32.fields._current[8].klass;
        if ( !klass )
          sub_1C372B4(Item);
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          monitor = (unsigned int)v32.fields._current[17].monitor;
          for ( i = 0; i < namespaze; ++i )
          {
            if ( i >= (unsigned int)namespaze )
              sub_1C372BC(Item);
            v19 = (_DWORD *)*((_QWORD *)&klass->_1.byval_arg.data + i);
            if ( !v19 )
              sub_1C372B4(Item);
            if ( v19[5] == 2 )
            {
              if ( !v6 )
                sub_1C372B4(Item);
              Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       v6,
                                       v19[6],
                                       (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                v20 = v19[7];
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         v6,
                         v19[6],
                         (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                if ( !Item )
                  sub_1C372B4(0);
                HIDWORD(Item[1].monitor) += v20;
                if ( monitor < 4 )
                {
                  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                           v6,
                           v19[6],
                           (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                  if ( !Item )
                    sub_1C372B4(0);
                  LODWORD(Item[1].monitor) += v20;
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
    &v32,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v21 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v6 )
    goto LABEL_54;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v29,
    v6,
    (const MethodInfo_33FA9BC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v31 = v29;
  while ( 1 )
  {
    v22 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v31,
            (const MethodInfo_35513F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v22 )
      break;
    if ( !v31.fields._current.fields.value )
      sub_1C372B4(v22);
    if ( SHIDWORD(v31.fields._current.fields.value[1].monitor) <= 0 )
    {
      if ( !v21 )
        sub_1C372B4(v22);
      key = (int32_t)v31.fields._current.fields.key;
      items = v21->fields._items;
      v25 = Method_System_Collections_Generic_List_int__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1C372B4(v22);
      size = v21->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v21,
          key,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v21->fields._size = size + 1;
        items->m_Items[size] = key;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v31,
    (const MethodInfo_355151C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  if ( !v21 )
    goto LABEL_54;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    v21,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_OWORD *)&v30.fields._list = *(_OWORD *)&v29.fields._dictionary;
  *(_QWORD *)&v30.fields._current = v29.fields._current.fields.key;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    System_Collections_Generic_Dictionary_int__object___Remove(
      v6,
      v30.fields._current,
      (const MethodInfo_33FBA0C *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return (System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__o *)v6;
}


void MasterMissionListViewManager__ModifyItem(
        MasterMissionListViewManager_o *this,
        System_Int32_array *receiveMissionIds,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  int64_t Time; // x0
  int64_t v7; // x24
  unsigned __int64 v8; // x29
  __int64 v9; // x26
  int32_t v10; // w1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_Predicate_object__o *v12; // x28
  __int64 v13; // x0
  const MethodInfo *v14; // x2
  __int64 naturalAligment; // x11
  MissionListViewItem_o *current; // x27
  int32_t v17; // w28
  UnityEngine_Object_o *viewObject; // x28
  struct ListViewObject_o *v19; // x0
  UserEventMissionMaster_o *v20; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C4610B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__FindAll__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__);
    sub_1C37058(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
    byte_4C4610B = 1;
  }
  entity = 0;
  memset(&v23, 0, sizeof(v23));
  if ( receiveMissionIds && receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    v20 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( SLODWORD(receiveMissionIds->max_length) >= 1 )
    {
      v7 = Time;
      v8 = 0;
      while ( 1 )
      {
        v9 = sub_1C372A4(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v9, 0);
        if ( v8 >= LODWORD(receiveMissionIds->max_length) )
          sub_1C372BC(Instance);
        if ( !v9 )
          break;
        v10 = receiveMissionIds->m_Items[v8];
        *(_DWORD *)(v9 + 16) = v10;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v10,
                                      (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( v7 > (__int64)Instance->fields.saveNameList && v7 <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C3CD62 )
          {
            sub_1C37058(&NetworkManager_TypeInfo);
            byte_4C3CD62 = 1;
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
                                        *(_DWORD *)(v9 + 16),
                                        0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            itemList = this->fields.itemList;
            v12 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v12,
              (Il2CppObject *)v9,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v12,
                                          (const MethodInfo_37A3734 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v22,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v23 = v22;
            while ( 1 )
            {
              v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v23,
                      (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v13 & 1) == 0 )
                break;
              if ( v23.fields._current
                && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
                    v23.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (MasterMissionListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v23.fields._current;
                else
                  current = 0;
              }
              else
              {
                current = 0;
              }
              v17 = *(_DWORD *)(v9 + 16);
              if ( !byte_4C3D49C )
              {
                v13 = sub_1C37058(&EventRewardSaveData_TypeInfo);
                byte_4C3D49C = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v17;
              if ( !current )
                sub_1C372B4(v13);
              MissionListViewItem__ModifyItem(current, 0, v14);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v19 = current->fields.viewObject;
                if ( !v19 )
                  sub_1C372B4(0);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v19->klass->vtable._5_SetItem.methodPtr)(
                  v19,
                  current,
                  v19->klass->vtable._5_SetItem.method);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v23,
              (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v8 >= SLODWORD(receiveMissionIds->max_length) )
          return;
      }
LABEL_51:
      sub_1C372B4(Instance);
    }
  }
}


void MasterMissionListViewManager__OnChangeAlphaAnim(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4C4610E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    byte_4C4610E = 1;
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
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v7);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C372B4(ObjectList);
  }
}


void MasterMissionListViewManager__OnClickFilterList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4C46101 & 1) == 0 )
  {
    sub_1C37058(&Method_MasterMissionListViewManager_OnClickFilterList__);
    byte_4C46101 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_C46640[filterStatus];
  MasterMissionListViewManager__setList(this, v5);
}


void MasterMissionListViewManager__OnClickListView(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v7; // x1
  __int64 naturalAligment; // x10
  int32_t listType; // w21
  PlayMakerFSM_o *v10; // x20
  char v11; // w0
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  Il2CppObject *Instance; // x19
  System_String_o *v22; // x20
  MasterMissionListViewManager___c_c *v23; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v25; // x21
  Il2CppObject *v26; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C460FE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MasterMissionListViewManager_OnClickListView__);
    sub_1C37058(&MasterMissionListViewObject_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C37058(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__);
    sub_1C37058(&MasterMissionListViewManager___c_TypeInfo);
    sub_1C37058(&StringLiteral_4991/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C37058(&StringLiteral_15567/*"Wait_Action"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C460FE = 1;
  }
  naviAction = 0;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15567/*"Wait_Action"*/, 0);
  if ( ((unsigned __int8)targetFSM & 1) != 0 )
    return;
  if ( !obj )
    goto LABEL_46;
  naturalAligment = MasterMissionListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_46;
  if ( (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewObject_TypeInfo )
    goto LABEL_46;
  targetFSM = (PlayMakerFSM_o *)MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)obj, v7);
  if ( !targetFSM )
    goto LABEL_46;
  listType = this->fields.listType;
  v10 = targetFSM;
  v11 = ((__int64 (__fastcall *)(PlayMakerFSM_o *, _QWORD))targetFSM->klass[1]._1.byval_arg.data)(
          targetFSM,
          *(_QWORD *)&targetFSM->klass[1]._1.byval_arg.bits);
  if ( listType == 3 )
  {
    if ( (v11 & 1) != 0
      && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v10, v12)
      && !BYTE4(v10[4].fields.fsmTemplate) )
    {
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0);
      if ( LODWORD(v10[4].fields.m_CancellationTokenSource) == 2
        && MissionListViewManager__TrySetupMissionCondNaviAction(
             (MissionListViewManager_o *)this,
             (MissionListViewItem_o *)v10,
             &naviAction,
             v15) )
      {
        targetFSM = (PlayMakerFSM_o *)v10[1].fields.addEventHandlers;
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0) )
          {
            v16 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v16 = (_QWORD *)sub_1C37070(Method_MasterMissionListViewManager_OnClickListView__);
            v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
            OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
            ActionExtensions__Call(naviAction, 0);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4991/*"DIALOG_OUT_OF_TERM"*/, 0);
          v22 = (System_String_o *)targetFSM;
          v23 = MasterMissionListViewManager___c_TypeInfo;
          if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo);
            v23 = MasterMissionListViewManager___c_TypeInfo;
          }
          _9__27_0 = v23->static_fields->__9__27_0;
          v25 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__27_0 )
          {
            if ( !v23->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v23);
              v23 = MasterMissionListViewManager___c_TypeInfo;
            }
            v26 = (Il2CppObject *)v23->static_fields->__9;
            _9__27_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(_9__27_0, v26, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v28, v29);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v25,
              v22,
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
            v30 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v30 = (_QWORD *)sub_1C37070(Method_MasterMissionListViewManager_OnClickListView__);
            v31 = (System_Reflection_MethodBase_o *)sub_1C3703C(v30, v30[4]);
            OverwriteAssetSoundName__PlaySystemSe(v31, 2, 0, 0);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
              return;
            }
          }
        }
LABEL_46:
        sub_1C372B4(targetFSM);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
LABEL_32:
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v10,
        0,
        v14);
      return;
    }
  }
  else if ( (v11 & 1) != 0
         && !MasterMissionListViewItem__get_IsHideReward((MasterMissionListViewItem_o *)v10, v12)
         && !BYTE4(v10[4].fields.fsmTemplate) )
  {
    goto LABEL_32;
  }
  if ( LODWORD(v10[4].fields.m_CancellationTokenSource) == 3 )
  {
    this->fields.receiveItem = (struct MasterMissionListViewItem_o *)v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.receiveItem, (int32_t)v10, v13, v14);
    MasterMissionListViewManager__SetReceiveReward(this, (EventMissionEntity_o *)v10[1].fields.addEventHandlers, v18);
  }
  else
  {
    v19 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1C37070(Method_MasterMissionListViewManager_OnClickListView__);
    v20 = (System_Reflection_MethodBase_o *)sub_1C3703C(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0);
  }
}


void MasterMissionListViewManager__OnClickRewardIcon(
        MasterMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0
  System_String_o *ActiveStateName; // x0
  __int64 naturalAligment; // x10
  const MethodInfo *v8; // x1
  MasterMissionListViewItem_o *Item; // x0
  MasterMissionListViewItem_o *v10; // x20
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_4C460FF & 1) == 0 )
  {
    sub_1C37058(&Method_MasterMissionListViewManager_OnClickRewardIcon__);
    sub_1C37058(&MasterMissionListViewObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_15567/*"Wait_Action"*/);
    byte_4C460FF = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15567/*"Wait_Action"*/, 0) )
    return;
  if ( obj )
  {
    naturalAligment = MasterMissionListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (MasterMissionListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  targetFSM = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)obj, 0, 0);
  if ( ((unsigned __int8)targetFSM & 1) == 0 )
    goto LABEL_20;
  if ( !obj )
LABEL_24:
    sub_1C372B4(targetFSM);
  Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)obj, v8);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.receiveItem, (int32_t)v10, v12, v13);
      MasterMissionListViewManager__SetReceiveReward(this, v10->fields.eventMissionEnt, v14);
      return;
    }
  }
LABEL_20:
  v15 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C37070(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C3703C(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 2, 0, 0);
}


void MasterMissionListViewManager__OpenOneResultDialog(
        MasterMissionListViewManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x27
  __int64 Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v11; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x25
  int max_length; // w22
  const MethodInfo_39ED16C **v14; // x29
  unsigned int v15; // w21
  Il2CppClass **v16; // x26
  Il2CppClass *v17; // x8
  char *v18; // x26
  Il2CppClass *v19; // t1
  int32_t name_high; // w19
  System_Collections_Generic_List_object__o *v21; // x28
  unsigned int v22; // w26
  Il2CppClass **v23; // x27
  Il2CppClass *v24; // x8
  Il2CppObject **v25; // x27
  Il2CppClass *v26; // t1
  int32_t v27; // w19
  ServantEntity_o *v28; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v30; // x0
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  __int64 v34; // x5
  __int64 v35; // x6
  __int64 v36; // x7
  Il2CppObject *v37; // x19
  Il2CppObject *v38; // x0
  Il2CppObject *v39; // x19
  System_String_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  Il2CppObject *v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  const MethodInfo_39ED16C **v48; // x20
  Il2CppObject *CountableString; // x19
  System_Text_StringBuilder_o *v50; // x29
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x5
  __int64 v55; // x6
  __int64 v56; // x7
  System_String_o *v57; // x21
  Il2CppObject *v58; // x0
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
  System_String_o *v69; // x0
  System_String_o *v70; // x0
  System_String_o *v71; // x19
  System_String_o *v72; // x0
  Il2CppObject *v73; // x19
  GiftEntity_array *v74; // x20
  System_String_o *v75; // x21
  MissionRewardGetDialog_ClickDelegate_o *v76; // x22
  const MethodInfo *v77; // x3
  __int64 v78; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v79; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v80; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v82; // [xsp+28h] [xbp-98h]
  int v83; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v87; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C46107 & 1) == 0 )
  {
    sub_1C37058(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity___ctor___78054432);
    sub_1C37058(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__);
    sub_1C37058(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_1C37058(&StringLiteral_8673/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1C37058(&StringLiteral_8677/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1C37058(&StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C37058(&StringLiteral_3696/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1C37058(&StringLiteral_51/*"\n \n "*/);
    sub_1C37058(&StringLiteral_8672/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1C37058(&StringLiteral_49/*"\n "*/);
    sub_1C37058(&StringLiteral_8679/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_4C46107 = 1;
  }
  v87 = 0;
  entity = 0;
  v5 = sub_1C372A4(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_114;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v7, v8);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v11 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v11, 0);
  v82 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v82, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = (const MethodInfo_39ED16C **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v83 = 0;
    while ( 1 )
    {
      if ( v15 >= LODWORD(GiftListById->max_length) )
LABEL_115:
        sub_1C372BC(Instance);
      v16 = &GiftListById->obj.klass + (int)v15;
      v19 = v16[4];
      v18 = (char *)(v16 + 4);
      v17 = v19;
      if ( !v19 )
        goto LABEL_114;
      name_high = HIDWORD(v17->_1.name);
      Instance = Gift__IsServant_40427180(name_high, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_40427572(name_high, 0);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0);
          if ( (Instance & 1) == 0 )
          {
            if ( v15 >= LODWORD(GiftListById->max_length) )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v18 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v18 + 24LL),
                         (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0);
              v83 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v15 )
        goto LABEL_29;
    }
  }
  v83 = 0;
LABEL_29:
  v78 = v5 + 16;
  v79 = (Il2CppObject *)v5;
  collection = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v22 = 0;
    v80 = v11;
    do
    {
      if ( v22 >= LODWORD(GiftListById->max_length) )
        goto LABEL_115;
      v23 = &GiftListById->obj.klass + (int)v22;
      v26 = v23[4];
      v25 = (Il2CppObject **)(v23 + 4);
      v24 = v26;
      if ( !v26 )
        goto LABEL_114;
      v27 = HIDWORD(v24->_1.name);
      Instance = Gift__IsServant_40427180(v27, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( v22 >= LODWORD(GiftListById->max_length) )
          goto LABEL_115;
        if ( !*v25 )
          goto LABEL_114;
        if ( !v12 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v12,
                              (int32_t)(*v25)[1].monitor,
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v28 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0);
        Instance = SvtType__IsStatusUp(v28->fields.type, 0);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_114;
          v30 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v11->klass->vtable._3_ToString.methodPtr)(
                                     v11,
                                     v11->klass->vtable._3_ToString.method);
          if ( !System_String__IsNullOrEmpty(v30, 0) )
            System_Text_StringBuilder__Append_63646720(v11, (System_String_o *)StringLiteral_49/*"\n "*/, 0);
          Instance = (__int64)ServantEntity__getName(v28, -1, -1, 0, 0);
          if ( v22 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          if ( !*v25 )
            goto LABEL_114;
          v37 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v25)[1].monitor);
          v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v31, v32, v33, v34, v35, v36);
          v39 = (Il2CppObject *)System_String__Format_63602948(format, v37, v38, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v40 = LocalizationManager__Get((System_String_o *)StringLiteral_8672/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v11, v40, v39, 0);
          if ( v22 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          if ( !v21 )
            goto LABEL_114;
          v43 = *v25;
          items = v21->fields._items;
          v45 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v21->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v21->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v61 = v45[4];
            v62 = v21;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              v43,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v61 + 192) + 112LL));
            continue;
          }
          v47 = &items->obj.klass + size;
          v21->fields._size = size + 1;
LABEL_52:
          v47[4] = (Il2CppClass *)v43;
          sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v43, v41, v42);
        }
      }
      else
      {
        Instance = Gift__IsItem_40427128(v27, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v22 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v25 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v87,
                       (int32_t)(*v25)[1].monitor,
                       (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v14);
            if ( !v87 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v87[1].klass, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( !v87 )
                goto LABEL_114;
              v48 = v14;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v87[3].klass, 0);
              v50 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v50, 0);
              if ( !v87 || !v50 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_63646720(v50, (System_String_o *)v87[1].monitor, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8677/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
              if ( v22 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              if ( !*v25 )
                goto LABEL_114;
              v57 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v25)[1].monitor);
              v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v51, v52, v53, v54, v55, v56);
              System_Text_StringBuilder__AppendFormat_63653072(v50, v57, CountableString, v58, 0);
              if ( v83 >= 2 )
              {
                v59 = v82;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8672/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                if ( !v82 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v82, (System_String_o *)Instance, (Il2CppObject *)v50, 0);
                v60 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v50->klass->vtable._3_ToString.methodPtr)(
                             v50,
                             v50->klass->vtable._3_ToString.method);
                v59 = v82;
                if ( !v82 )
                  goto LABEL_114;
                v60 = (System_String_o *)Instance;
              }
              v14 = v48;
              Instance = (__int64)System_Text_StringBuilder__Append_63646720(v59, v60, 0);
              v11 = v80;
              if ( v22 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v43 = *v25;
              v63 = collection->fields._items;
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
              v47 = &v63->obj.klass + v65;
              collection->fields._size = v65 + 1;
              goto LABEL_52;
            }
          }
        }
      }
    }
    while ( max_length != ++v22 );
  }
  v66 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58337560(
    v66,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_GiftEntity___ctor___78054432);
  if ( !v66 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v66,
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v66->fields._size >= 1 )
  {
    v67 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v67, 0);
    if ( !v82 )
      goto LABEL_114;
    v68 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v82->klass->vtable._3_ToString.methodPtr)(
                               v82,
                               v82->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v68, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_114;
    }
    else
    {
      if ( v83 >= 2 )
      {
        if ( !v68 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_63607580(v68, 0, v68->fields._stringLength - 2, 0);
        if ( !v67 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_63646720(v67, (System_String_o *)Instance, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8673/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
        Instance = (__int64)System_Text_StringBuilder__Append_63646720(v67, v69, 0);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8676/*"MISSION_ACTION_SUCCESS"*/, 0);
        if ( !v67 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v67,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v68,
                              0);
      }
      if ( !v11 )
        goto LABEL_114;
      v70 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v11->klass->vtable._3_ToString.methodPtr)(
                                 v11,
                                 v11->klass->vtable._3_ToString.method);
      if ( !System_String__IsNullOrEmpty(v70, 0) )
        System_Text_StringBuilder__Append_63646720(v67, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0);
    }
    v71 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v11->klass->vtable._3_ToString.methodPtr)(
                               v11,
                               v11->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v71, 0);
    if ( (Instance & 1) == 0 )
    {
      if ( !v67 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_63646720(v67, v71, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v72 = LocalizationManager__Get((System_String_o *)StringLiteral_8679/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0);
      System_Text_StringBuilder__Append_63646720(v67, v72, 0);
    }
    v73 = SingletonMonoBehaviour_object___get_Instance(*v14);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v66,
                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v67 )
    {
      v74 = (GiftEntity_array *)Instance;
      v75 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v67->klass->vtable._3_ToString.methodPtr)(
                                 v67,
                                 v67->klass->vtable._3_ToString.method);
      v76 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C372A4(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v76,
        v79,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        v77);
      if ( v73 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v73, v74, v75, v76, 0, 0);
        return;
      }
    }
LABEL_114:
    sub_1C372B4(Instance);
  }
  if ( !*(_QWORD *)v78 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v78 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v78 + 64LL),
    *(_QWORD *)(*(_QWORD *)v78 + 40LL));
}


System_Collections_Generic_List_MasterMissionListViewItem__o *MasterMissionListViewManager__ReceiveMissionItems(
        MasterMissionListViewManager_o *this,
        bool bulk,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  _BOOL8 v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0
  Il2CppObject *receiveItem; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C4610F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    byte_4C4610F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
  if ( !bulk )
  {
    receiveItem = (Il2CppObject *)this->fields.receiveItem;
    if ( !receiveItem )
      return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
    if ( v5 )
    {
      items = v5->fields._items;
      v20 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
      ++v5->fields._version;
      if ( items )
      {
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            receiveItem,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v22[4] = (Il2CppClass *)receiveItem;
          sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)receiveItem, v7, v8);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
      }
    }
LABEL_26:
    sub_1C372B4(itemSortList);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v25,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v25.fields._current;
    if ( v25.fields._current )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( v25.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MasterMissionListViewItem_c *)v25.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v25.fields._current[17].monitor) == 3 )
      {
        if ( !v5 )
          sub_1C372B4(v9);
        v14 = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v5->fields._version;
        if ( !v14 )
          sub_1C372B4(v9);
        v16 = v5->fields._size;
        if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &v14->obj.klass + v16;
          v5->fields._size = v16 + 1;
          v17[4] = (Il2CppClass *)current;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)current, v10, v11);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
}


void MasterMissionListViewManager__RefrashListDisp(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  _BOOL8 v5; // x0
  __int64 naturalAligment; // x11
  int32_t size; // w8
  int32_t v8; // w21
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C46100 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    byte_4C46100 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v4 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v9;
        ;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))i.fields._current->klass->vtable[6].methodPtr)(
          i.fields._current,
          i.fields._current->klass->vtable[6].method) )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
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
    sub_1C372B4(v5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v4 )
    goto LABEL_17;
  size = v4->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      ObjectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  v4,
                                                                  v8,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      ((void (__fastcall *)(System_Collections_Generic_List_object__o *, bool, const MethodInfo *))ObjectList->klass->vtable._9_unknown.methodPtr)(
        ObjectList,
        this->fields.isInput,
        ObjectList->klass->vtable._9_unknown.method);
      if ( ++v8 >= v4->fields._size )
        return;
    }
LABEL_17:
    sub_1C372B4(ObjectList);
  }
}


void MasterMissionListViewManager__SetOpenItem(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *current; // x20
  MasterMissionListViewItem_o *Item; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MasterMissionListViewItem_o *v10; // x21
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t id; // w23
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C4610C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C37058(&StringLiteral_18849/*"ef_mission_extric01"*/);
    sub_1C37058(&StringLiteral_21648/*"modifyOpenItem"*/);
    byte_4C4610C = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1C372B4(0);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        ObjectList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v16 = v15;
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v4 )
          break;
        current = v16.fields._current;
        if ( !v16.fields._current )
          sub_1C372B4(v4);
        Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v16.fields._current, v5);
        v10 = Item;
        if ( !Item )
          sub_1C372B4(0);
        eventMissionEnt = Item->fields.eventMissionEnt;
        if ( !eventMissionEnt )
          sub_1C372B4(Item);
        id = eventMissionEnt->fields.id;
        if ( id == this->fields.targetMissionId )
        {
          if ( !byte_4C3D49C )
          {
            sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D49C = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          this->fields.openTargetItem = v10;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.openTargetItem, (int32_t)v10, v8, v9);
          if ( v10->fields.progStatus == 1 )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18849/*"ef_mission_extric01"*/, transform, v14);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21648/*"modifyOpenItem"*/,
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
  const MethodInfo *v8; // x3
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4C46104 & 1) == 0 )
  {
    sub_1C37058(&Method_MasterMissionListViewManager_SetReceiveReward__);
    sub_1C37058(&StringLiteral_8712/*"MISSION_REWARD"*/);
    byte_4C46104 = 1;
  }
  MissionListViewManager__SetupGetEffectOptions((MissionListViewManager_o *)this, missionEntity, method);
  v5 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_MasterMissionListViewManager_SetReceiveReward__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
  this->fields.missionToRecieve = missionEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.missionToRecieve, (int32_t)missionEntity, v7, v8);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8712/*"MISSION_REWARD"*/, 0);
}


void MasterMissionListViewManager__SetResultData(
        MasterMissionListViewManager_o *this,
        GetSvts_array *svts,
        GetCommandCodes_array *cmds,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.getSvtList = svts;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.getSvtList, (int32_t)svts, (int32_t)cmds, method);
  this->fields.getCommandCodeList = cmds;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
}


void MasterMissionListViewManager___modifyOpenItem_b__45_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C46112 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16655/*"actionAfterCallback"*/);
    byte_4C46112 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16655/*"actionAfterCallback"*/,
    this->fields.endEffectTime,
    0);
}


void MasterMissionListViewManager__actionAfterCallback(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *actionCallback; // x19
  CGThumbnailListItem_o *p_actionCallback; // x0

  actionCallback = this->fields.actionCallback;
  if ( actionCallback )
  {
    p_actionCallback = (CGThumbnailListItem_o *)&this->fields.actionCallback;
    p_actionCallback->klass = 0;
    sub_1C36FFC(p_actionCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


void MasterMissionListViewManager__afterReward(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4C46108 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5441/*"END_EFFECT"*/);
    byte_4C46108 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5441/*"END_EFFECT"*/, 0);
}


UnityEngine_GameObject_o *MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51154888; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4C4610A & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&MasterMissionListViewManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4610A = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              effectAssetData,
                              name,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51154888,
                                     (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C921 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C3C926 )
  {
    effectAssetData = (AssetData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C372B4(effectAssetData);
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  return v7;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *MasterMissionListViewManager__get_ClippingObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v6; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *v9; // x21
  ListViewItem_o *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C460F9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C460F9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v6 )
    {
      if ( !current )
        sub_1C372B4(v6);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v9 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v8);
      if ( !Item )
        sub_1C372B4(0);
      if ( Item->fields.isTermination )
      {
        v13 = ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, Item, 0);
        if ( v13 )
        {
          if ( !v3 )
            sub_1C372B4(v13);
          items = v3->fields._items;
          v15 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C372B4(v13);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v9,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C372B4(Item);
        items = v3->fields._items;
        v15 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(Item);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v17 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v9;
        sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v9, v11, v12);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C460F8 & 1) == 0 )
  {
    sub_1C37058(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
    byte_4C460F8 = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_316FBB4 *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
}


void MasterMissionListViewManager__modifyOpenItem(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x20
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x21
  Il2CppClass *v8; // x0
  System_Action_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C4610D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4610D = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1C372B4(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current
        || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
            v14.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (MasterMissionListViewItem_c *)v14.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1C372B4(v4);
      }
      klass = v14.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v8 = current[7].klass;
        if ( !v8 )
          sub_1C372B4(0);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v8->_1.image + 49))(
          v8,
          current,
          *((_QWORD *)v8->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0);
  this->fields.callbackFunc2 = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)v9, v10, v11);
  MissionListViewManager__SetMode_47004184((MissionListViewManager_o *)this, 3, v12);
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
  int64_t Time; // x20
  bool v10; // w8
  System_Action_o *v11; // x20

  if ( (byte_4C46109 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C37058(&Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__);
    sub_1C37058(&MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
    byte_4C46109 = 1;
  }
  v5 = sub_1C372A4(MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  MasterMissionListViewManager__RefrashListDisp(this, v6);
  MasterMissionListViewManager__CheckBulkButton(this, v7);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
    Instance = (Il2CppObject *)UnityEngine_Random__Range_71226972(0, receiveMissionIds->max_length, 0);
    if ( (unsigned int)Instance >= LODWORD(receiveMissionIds->max_length) )
      sub_1C372BC(Instance);
    if ( !v5 )
      goto LABEL_18;
    *(_DWORD *)(v5 + 20) = receiveMissionIds->m_Items[(int)Instance];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       *(_DWORD *)(v5 + 20),
                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0 )
    {
LABEL_18:
      sub_1C372B4(Instance);
    }
    v10 = Time > (__int64)Instance[4].klass && Time <= (__int64)Instance[4].monitor;
    *(_BYTE *)(v5 + 16) = v10;
    v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)v5,
      Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__,
      0);
    EventTutorialMaster__CheckTutorial(0, 94, v11, 0, 0, 0, 0, 0);
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
    sub_1C372B4(filterBtnTxt);
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
  const MethodInfo *v7; // x3
  UILabel_o *emptyMessageLabel; // x21
  System_String_o *operationSortInfo; // x0
  const MethodInfo *v10; // x2
  UILabel_o *v11; // x21
  struct ListViewSort_o *v12; // x8
  int v13; // w9
  bool v14; // w2
  const MethodInfo *v15; // x1
  int32_t filterStatus; // w20
  int32_t v17; // w20
  int32_t v18; // w20
  int32_t v19; // w20

  if ( (byte_4C46102 & 1) == 0 )
  {
    sub_1C37058(&ListViewSort_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_8813/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C37058(&StringLiteral_17557/*"btn_txt_completed"*/);
    sub_1C37058(&StringLiteral_17590/*"btn_txt_receipt"*/);
    sub_1C37058(&StringLiteral_17589/*"btn_txt_progress"*/);
    sub_1C37058(&StringLiteral_8680/*"MISSION_EMPTY_TXT"*/);
    sub_1C37058(&StringLiteral_17539/*"btn_txt_all"*/);
    byte_4C46102 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C372A4(ListViewSort_TypeInfo);
  ListViewSort___ctor_43839288(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8680/*"MISSION_EMPTY_TXT"*/, 0);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1C372B4(operationSortInfo);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17539/*"btn_txt_all"*/, v10);
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
      v11 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8813/*"MST_MISSION_EMPTY_TXT"*/, 0);
      if ( !v11 )
        goto LABEL_53;
      UILabel__set_text(v11, operationSortInfo, 0);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17590/*"btn_txt_receipt"*/, v10);
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
      v12 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v13 = 1;
      goto LABEL_37;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17589/*"btn_txt_progress"*/, v10);
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
      v14 = 0;
      goto LABEL_33;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17557/*"btn_txt_completed"*/, v10);
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
      v14 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v14, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
LABEL_35:
      v12 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v13 = 13;
LABEL_37:
      v12->fields.sortKind = v13;
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
          if ( !byte_4C3D4A5 )
          {
            sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D4A5 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0);
          break;
        case 1:
          v17 = this->fields.filterStatus;
          if ( !byte_4C3D4A7 )
          {
            sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D4A7 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v17;
          EventRewardSaveData__SaveWeeklyMissionData(0);
          break;
        case 2:
          v18 = this->fields.filterStatus;
          if ( !byte_4C3D4A9 )
          {
            sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D4A9 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v18;
          EventRewardSaveData__SaveExtraMissionData(0);
          break;
        case 3:
          v19 = this->fields.filterStatus;
          if ( !byte_4C3D4AB )
          {
            sub_1C37058(&EventRewardSaveData_TypeInfo);
            byte_4C3D4AB = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v19;
          EventRewardSaveData__SaveLimitedMissionData(0);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v15);
      return;
    default:
      goto LABEL_38;
  }
}


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
  System_Collections_Generic_List_object__o *v11; // x8
  System_Collections_Generic_List_object__c *klass; // x8

  if ( (byte_4C460FC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    byte_4C460FC = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4C3D4A6 )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4A6 = 1;
      }
      v5 = 20;
      goto LABEL_16;
    case 1:
      if ( !byte_4C3D4A8 )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4A8 = 1;
      }
      v5 = 24;
      goto LABEL_16;
    case 2:
      if ( !byte_4C3D4AA )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4AA = 1;
      }
      v5 = 28;
      goto LABEL_16;
    case 3:
      if ( !byte_4C3D4AC )
      {
        sub_1C37058(&EventRewardSaveData_TypeInfo);
        byte_4C3D4AC = 1;
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
        goto LABEL_34;
      size = itemList->fields._size;
      v8 = size - 1;
      if ( size < 1 )
        goto LABEL_35;
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
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( itemList
      && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
          itemList->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
        v11 = itemList;
      else
        v11 = 0;
    }
    else
    {
      v11 = 0;
    }
    if ( targetMissionId >= 1 )
    {
      if ( !v11 || (klass = v11[3].klass) == 0 )
LABEL_34:
        sub_1C372B4(itemList);
      if ( LODWORD(klass->_1.name) == targetMissionId )
        goto LABEL_36;
    }
    if ( v8 == v9 )
      break;
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    ++v9;
    if ( !itemList )
      goto LABEL_34;
  }
LABEL_35:
  v9 = 0;
LABEL_36:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v9, 0);
}


void MasterMissionListViewManager__setNextMissionInfo(
        MasterMissionListViewManager_o *this,
        int32_t missionID,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__c *klass; // x8
  System_Action_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C460FB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__);
    byte_4C460FB = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, (int32_t)callback, method);
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v9 = size - 1;
  if ( size >= 1 )
  {
    v10 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v10,
                                                                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment )
        break;
      if ( (MasterMissionListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
        break;
      klass = itemList[3].klass;
      if ( !klass )
        break;
      if ( LODWORD(klass->_1.name) == missionID )
        goto LABEL_17;
      if ( v9 == v10 )
        goto LABEL_16;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v10;
    }
    while ( itemList );
LABEL_15:
    sub_1C372B4(itemList);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0);
  this->fields.callbackAfterScroll = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v13, v14, v15);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v10, 1, 0.0, 0);
}


void MasterMissionListViewManager__unAcceptableDlg(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4C46105 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1C37058(&StringLiteral_5446/*"END_NOTICE"*/);
    byte_4C46105 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_1C372B4(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5446/*"END_NOTICE"*/, 0);
}


void MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46113 & 1) == 0 )
  {
    sub_1C37058(&MasterMissionListViewManager___c_TypeInfo);
    byte_4C46113 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MasterMissionListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C46114 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C46114 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
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
  const MethodInfo *v4; // x1

  callback = this->fields.callback;
  if ( !callback
    || (v3 = this,
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (MasterMissionListViewManager___c__DisplayClass38_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)this, v4);
}


void MasterMissionListViewManager___c__DisplayClass38_0___AcceptReward_b__1(
        MasterMissionListViewManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MasterMissionListViewManager___c__DisplayClass38_0_o *v3; // x19
  const MethodInfo *v4; // x1

  callback = this->fields.callback;
  if ( !callback
    || (v3 = this,
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method),
        (this = (MasterMissionListViewManager___c__DisplayClass38_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  MasterMissionListViewManager__afterReward((MasterMissionListViewManager_o *)this, v4);
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
  struct System_Action_o *callback; // x8

  if ( (byte_4C46115 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46115 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0), (callback = this->fields.callback) == 0) )
  {
    sub_1C372B4(Instance);
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

  if ( (byte_4C46116 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C46116 = 1;
  }
  endEvent = this->fields.endEvent;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  if ( (byte_4C46117 & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    byte_4C46117 = 1;
  }
  if ( !x
    || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
        x->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo
    || (klass = x[1].klass) == 0 )
  {
    sub_1C372B4(this);
  }
  return LODWORD(klass->_1.name) == v4->fields.missionId;
}
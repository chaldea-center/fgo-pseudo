void MasterMissionListViewManager___ctor(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C2A4E5 & 1) == 0 )
  {
    sub_1C2D490(&MissionListViewManager_TypeInfo);
    byte_4C2A4E5 = 1;
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v16; // x24
  System_Collections_Generic_List_object__o *v17; // x23
  __int64 v18; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x25
  _BOOL4 isTreasureEffect; // w24
  GiftEntity_array *v22; // x20
  System_Action_o *v23; // x0
  System_Action_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x4
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x4
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2A4DA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__);
    sub_1C2D490(&Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__);
    sub_1C2D490(&MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
    byte_4C2A4DA = 1;
  }
  entity = 0;
  v7 = sub_1C2D6DC(MasterMissionListViewManager___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_25;
  *(_QWORD *)(v7 + 16) = callback;
  v12 = v7 + 16;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v13, v14);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (GiftEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    v16 = DataManager__GetMasterData_object_(
            (DataManager_o *)Instance,
            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
    v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
    max_length = receiveMissionIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)max_length )
          sub_1C2D6F4(Instance, v9, v18);
        if ( !MasterData_object )
          break;
        Instance = (GiftEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                         &entity,
                                         receiveMissionIds->m_Items[v20],
                                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( !v16 )
            break;
          Instance = GiftMaster__GetGiftListById((GiftMaster_o *)v16, HIDWORD(entity[5].klass), 0);
          if ( !v17 )
            break;
          System_Collections_Generic_List_object___AddRange(
            v17,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
        }
        LODWORD(max_length) = receiveMissionIds->max_length;
        if ( (__int64)++v20 >= (int)max_length )
          goto LABEL_18;
      }
LABEL_25:
      sub_1C2D6EC(Instance, v9);
    }
LABEL_18:
    if ( !v17 )
      goto LABEL_25;
    isTreasureEffect = this->fields.isTreasureEffect;
    v22 = (GiftEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v17,
                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    v23 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    v24 = v23;
    if ( isTreasureEffect )
    {
      System_Action___ctor(
        v23,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__0__,
        0);
      MissionListViewManager__StartEventMissionClearItemAction((MissionListViewManager_o *)this, v22, v25, v24, v26);
    }
    else
    {
      System_Action___ctor(
        v23,
        (Il2CppObject *)v7,
        Method_MasterMissionListViewManager___c__DisplayClass38_0__AcceptReward_b__1__,
        0);
      MissionListViewManager__StartItemGetEffectAction((MissionListViewManager_o *)this, v22, 0, v24, v28);
    }
    ActionExtensions__Call(this->fields.reDispAct, 0);
  }
  else
  {
    ActionExtensions__Call(this->fields.reDispAct, 0);
    if ( !*(_QWORD *)v12 )
      goto LABEL_25;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v12 + 64LL),
      *(_QWORD *)(*(_QWORD *)v12 + 40LL));
    MasterMissionListViewManager__afterReward(this, v27);
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

  if ( (byte_4C2A4D7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A4D7 = 1;
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
      sub_1C2D6EC(bulkButtonTxt, v4);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)bulkButtonTxt,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v12 = v11;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
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
            sub_1C2D6EC(0, v6);
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, const MethodInfo *))v8->klass->vtable._14_SetState.methodPtr)(
            v8,
            0,
            1,
            v8->klass->vtable._14_SetState.method);
          v10 = (UIWidget_o *)this->fields.bulkButtonTxt;
          if ( !v10 )
            sub_1C2D6EC(0, v9);
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
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  struct ListViewSort_o *sort; // x1
  UILabel_o *emptyMessageLabel; // x21
  int32_t DailyFilterId_k__BackingField; // w24
  __int64 *v27; // x8
  void *ObjectList; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x8
  UILabel_o *v32; // x21
  UILabel_o *v33; // x21
  UILabel_o *v34; // x21
  int32_t WeeklyFilterId_k__BackingField; // w24
  __int64 *v36; // x8
  const MethodInfo *v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int v40; // w22
  System_Collections_Generic_List_object__o *v41; // x19
  int32_t i; // w20
  Il2CppObject *Item; // x21
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C2A4CE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_8806/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C2D490(&StringLiteral_8673/*"MISSION_EMPTY_TXT"*/);
    byte_4C2A4CE = 1;
  }
  memset(&v45, 0, sizeof(v45));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.listType = type;
  if ( missionList && missionList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      (System_Collections_Generic_List_object__o *)missionList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventMissionEntity__GetEnumerator__);
    v45 = v44;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__MoveNext__) )
    {
      current = v45.fields._current;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      v14 = (MasterMissionListViewItem_o *)sub_1C2D6DC(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v14, (EventMissionEntity_o *)current, type, v15);
      if ( !itemList )
        sub_1C2D6EC(v16, v17);
      items = itemList->fields._items;
      v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C2D6EC(v16, v17);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v14,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v14;
        sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMissionEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( sort )
  {
    this->fields.baseSortInfo = sort;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseSortInfo, (int32_t)sort, v10, v11);
  }
  switch ( this->fields.listType )
  {
    case 0:
      emptyMessageLabel = this->fields.emptyMessageLabel;
      if ( !byte_4C217ED )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217ED = 1;
      }
      DailyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = &StringLiteral_8806/*"MST_MISSION_EMPTY_TXT"*/;
      if ( DailyFilterId_k__BackingField )
        v27 = &StringLiteral_8673/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v27, 0);
      if ( !emptyMessageLabel )
        goto LABEL_63;
      UILabel__set_text(emptyMessageLabel, (System_String_o *)ObjectList, 0);
      if ( !byte_4C217ED )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217ED = 1;
      }
      v31 = 20;
      break;
    case 1:
      v34 = this->fields.emptyMessageLabel;
      if ( !byte_4C217EF )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217EF = 1;
      }
      WeeklyFilterId_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = &StringLiteral_8806/*"MST_MISSION_EMPTY_TXT"*/;
      if ( WeeklyFilterId_k__BackingField )
        v36 = &StringLiteral_8673/*"MISSION_EMPTY_TXT"*/;
      ObjectList = LocalizationManager__Get((System_String_o *)*v36, 0);
      if ( !v34 )
        goto LABEL_63;
      UILabel__set_text(v34, (System_String_o *)ObjectList, 0);
      if ( !byte_4C217EF )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217EF = 1;
      }
      v31 = 24;
      break;
    case 2:
      v32 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8673/*"MISSION_EMPTY_TXT"*/, 0);
      if ( !v32 )
        goto LABEL_63;
      UILabel__set_text(v32, (System_String_o *)ObjectList, 0);
      if ( !byte_4C217F1 )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217F1 = 1;
      }
      v31 = 28;
      break;
    case 3:
      v33 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      ObjectList = LocalizationManager__Get((System_String_o *)StringLiteral_8673/*"MISSION_EMPTY_TXT"*/, 0);
      if ( !v33 )
        goto LABEL_63;
      UILabel__set_text(v33, (System_String_o *)ObjectList, 0);
      if ( !byte_4C217F3 )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217F3 = 1;
      }
      v31 = 32;
      break;
    default:
      goto LABEL_49;
  }
  this->fields.filterStatus = *(int32_t *)((char *)&EventRewardSaveData_TypeInfo->static_fields->_PriorityIndex_k__BackingField
                                         + v31);
  MasterMissionListViewManager__setList(this, v30);
LABEL_49:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  if ( redispCallBack )
  {
    this->fields.reDispAct = redispCallBack;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.reDispAct, (int32_t)redispCallBack, v38, v39);
  }
  ObjectList = MasterMissionListViewManager__get_ObjectList(this, v37);
  if ( !ObjectList )
LABEL_63:
    sub_1C2D6EC(ObjectList, v29);
  v40 = *((_DWORD *)ObjectList + 6);
  v41 = (System_Collections_Generic_List_object__o *)ObjectList;
  if ( v40 >= 1 )
  {
    for ( i = 0; i != v40; ++i )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v41,
               i,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
    sub_1C2D6EC(this, method);
  return eventMissionEnt->fields.id;
}


MasterMissionListViewItem_o *MasterMissionListViewManager__GetItem(
        MasterMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C2A4D1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    byte_4C2A4D1 = 1;
  }
  result = (MasterMissionListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MasterMissionListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)result,
                                              index,
                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x1
  MissionItemDisplayEntity_array *ListByMissionType; // x21
  System_Collections_Generic_Dictionary_int__object__o *v7; // x19
  __int64 v8; // x2
  int max_length; // w8
  unsigned int v10; // w20
  MissionItemDisplayEntity_o *v11; // x22
  __int64 v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Item; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 naturalAligment; // x11
  Il2CppClass *klass; // x26
  int namespaze; // w9
  unsigned int monitor; // w20
  int i; // w28
  _DWORD *v23; // x25
  int v24; // w24
  System_Collections_Generic_List_int__o *v25; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 key_low; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+18h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+40h] [xbp-D0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+60h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+90h] [xbp-80h] BYREF

  if ( (byte_4C2A4E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_MissionItemDisplayMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__MissionItemDisplayInfo__get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&MasterMissionComponent_TypeInfo);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    sub_1C2D490(&MissionItemDisplayInfo_TypeInfo);
    byte_4C2A4E4 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  listType = this->fields.listType;
  if ( !MasterMissionComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MasterMissionComponent_TypeInfo);
  MissionTypeByTabType = MasterMissionComponent__GetMissionTypeByTabType(listType, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MissionItemDisplayMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_MissionItemDisplayMaster___);
  if ( !Master_object )
    goto LABEL_54;
  ListByMissionType = MissionItemDisplayMaster__GetListByMissionType(Master_object, MissionTypeByTabType, 0);
  v7 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v7,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo___ctor__);
  if ( !ListByMissionType )
    goto LABEL_54;
  max_length = ListByMissionType->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2D6F4(Master_object, v5, v8);
      v11 = ListByMissionType->m_Items[v10];
      if ( !v11 || !v7 )
        break;
      Master_object = (MissionItemDisplayMaster_o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                      v7,
                                                      v11->fields.targetId,
                                                      (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
      if ( ((unsigned __int8)Master_object & 1) == 0 )
      {
        v12 = sub_1C2D6DC(MissionItemDisplayInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v12, 0);
        if ( !v12 )
          break;
        *(_QWORD *)(v12 + 16) = v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v11, v13, v14);
        *(_QWORD *)(v12 + 24) = 0;
        System_Collections_Generic_Dictionary_int__object___Add(
          v7,
          v11->fields.targetId,
          (Il2CppObject *)v12,
          (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Add__);
      }
      max_length = ListByMissionType->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_18;
    }
LABEL_54:
    sub_1C2D6EC(Master_object, v5);
  }
LABEL_18:
  Master_object = (MissionItemDisplayMaster_o *)this->fields.itemList;
  if ( !Master_object )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)Master_object,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  *(_OWORD *)&v37.fields._list = *(_OWORD *)&v34.fields._dictionary;
  v37.fields._current = v34.fields._current.fields.key;
  while ( 1 )
  {
    Item = (Il2CppObject *)System_Collections_Generic_List_Enumerator_object___MoveNext(
                             &v37,
                             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( ((unsigned __int8)Item & 1) == 0 )
      break;
    if ( v37.fields._current )
    {
      naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
      if ( v37.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (MasterMissionListViewItem_c *)v37.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo
        && LODWORD(v37.fields._current[18].monitor) == this->fields.listType )
      {
        klass = v37.fields._current[8].klass;
        if ( !klass )
          sub_1C2D6EC(Item, v16);
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          monitor = (unsigned int)v37.fields._current[17].monitor;
          for ( i = 0; i < namespaze; ++i )
          {
            if ( i >= (unsigned int)namespaze )
              sub_1C2D6F4(Item, v16, v17);
            v23 = (_DWORD *)*((_QWORD *)&klass->_1.byval_arg.data + i);
            if ( !v23 )
              sub_1C2D6EC(Item, v16);
            if ( v23[5] == 2 )
            {
              if ( !v7 )
                sub_1C2D6EC(Item, v16);
              Item = (Il2CppObject *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                       v7,
                                       v23[6],
                                       (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__ContainsKey__);
              if ( ((unsigned __int8)Item & 1) != 0 )
              {
                v24 = v23[7];
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         v7,
                         v23[6],
                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                if ( !Item )
                  sub_1C2D6EC(0, v16);
                HIDWORD(Item[1].monitor) += v24;
                if ( monitor < 4 )
                {
                  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                           v7,
                           v23[6],
                           (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__get_Item__);
                  if ( !Item )
                    sub_1C2D6EC(0, v16);
                  LODWORD(Item[1].monitor) += v24;
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
    &v37,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  v25 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v7 )
    goto LABEL_54;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v34,
    v7,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__GetEnumerator__);
  v36 = v34;
  while ( 1 )
  {
    v26 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v36,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__MoveNext__);
    if ( !v26 )
      break;
    if ( !v36.fields._current.fields.value )
      sub_1C2D6EC(v26, v27);
    if ( SHIDWORD(v36.fields._current.fields.value[1].monitor) <= 0 )
    {
      if ( !v25 )
        sub_1C2D6EC(v26, v27);
      key_low = LODWORD(v36.fields._current.fields.key);
      items = v25->fields._items;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++v25->fields._version;
      if ( !items )
        sub_1C2D6EC(v26, key_low);
      size = v25->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v25,
          key_low,
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v25->fields._size = size + 1;
        items->m_Items[size] = key_low;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v36,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__MissionItemDisplayInfo__Dispose__);
  if ( !v25 )
    goto LABEL_54;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v25,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  *(_OWORD *)&v35.fields._list = *(_OWORD *)&v34.fields._dictionary;
  *(_QWORD *)&v35.fields._current = v34.fields._current.fields.key;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v35,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    System_Collections_Generic_Dictionary_int__object___Remove(
      v7,
      v35.fields._current,
      (const MethodInfo_33E2704 *)Method_System_Collections_Generic_Dictionary_int__MissionItemDisplayInfo__Remove__);
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v35,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  int64_t Time; // x0
  int64_t v8; // x24
  unsigned __int64 v9; // x29
  __int64 v10; // x26
  __int64 v11; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x27
  System_Predicate_object__o *v13; // x28
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 naturalAligment; // x11
  MissionListViewItem_o *current; // x27
  int32_t v19; // w28
  UnityEngine_Object_o *viewObject; // x28
  __int64 v21; // x1
  struct ListViewObject_o *v22; // x0
  UserEventMissionMaster_o *v23; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-80h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4C2A4DF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Predicate_ListViewItem__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__);
    sub_1C2D490(&MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
    byte_4C2A4DF = 1;
  }
  entity = 0;
  memset(&v26, 0, sizeof(v26));
  if ( receiveMissionIds && receiveMissionIds->max_length && this->fields.itemList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    v23 = (UserEventMissionMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    if ( SLODWORD(receiveMissionIds->max_length) >= 1 )
    {
      v8 = Time;
      v9 = 0;
      while ( 1 )
      {
        v10 = sub_1C2D6DC(MasterMissionListViewManager___c__DisplayClass43_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0);
        if ( v9 >= LODWORD(receiveMissionIds->max_length) )
          sub_1C2D6F4(Instance, v5, v11);
        if ( !v10 )
          break;
        v5 = (unsigned int)receiveMissionIds->m_Items[v9];
        *(_DWORD *)(v10 + 16) = v5;
        if ( !MasterData_object )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                      v5,
                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
        if ( !Instance )
          break;
        if ( v8 > (__int64)Instance->fields.saveNameList && v8 <= (__int64)Instance->fields.saveDataMapList )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          if ( !byte_4C211E1 )
          {
            sub_1C2D490(&NetworkManager_TypeInfo);
            byte_4C211E1 = 1;
          }
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
          }
          if ( !v23 )
            break;
          Instance = (DataManager_o *)UserEventMissionMaster__TryGetEntity(
                                        v23,
                                        &entity,
                                        *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                        *(_DWORD *)(v10 + 16),
                                        0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            itemList = this->fields.itemList;
            v13 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_ListViewItem__TypeInfo);
            System_Predicate_object____ctor(
              v13,
              (Il2CppObject *)v10,
              Method_MasterMissionListViewManager___c__DisplayClass43_0__ModifyItem_b__0__,
              0);
            if ( !itemList )
              break;
            Instance = (DataManager_o *)System_Collections_Generic_List_object___FindAll(
                                          (System_Collections_Generic_List_object__o *)itemList,
                                          (System_Predicate_T__o *)v13,
                                          (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_ListViewItem__FindAll__);
            if ( !Instance )
              break;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v25,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
            v26 = v25;
            while ( 1 )
            {
              v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v26,
                      (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
              if ( (v14 & 1) == 0 )
                break;
              if ( v26.fields._current
                && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
                    v26.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
              {
                if ( (MasterMissionListViewItem_c *)v26.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
                  current = (MissionListViewItem_o *)v26.fields._current;
                else
                  current = 0;
              }
              else
              {
                current = 0;
              }
              v19 = *(_DWORD *)(v10 + 16);
              if ( !byte_4C217E3 )
              {
                v14 = sub_1C2D490(&EventRewardSaveData_TypeInfo);
                byte_4C217E3 = 1;
              }
              EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = v19;
              if ( !current )
                sub_1C2D6EC(v14, v15);
              MissionListViewItem__ModifyItem(current, 0, v16);
              viewObject = (UnityEngine_Object_o *)current->fields.viewObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(viewObject, 0, 0) )
              {
                v22 = current->fields.viewObject;
                if ( !v22 )
                  sub_1C2D6EC(0, v21);
                ((void (__fastcall *)(struct ListViewObject_o *, MissionListViewItem_o *, const MethodInfo *))v22->klass->vtable._5_SetItem.methodPtr)(
                  v22,
                  current,
                  v22->klass->vtable._5_SetItem.method);
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v26,
              (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          }
        }
        if ( (__int64)++v9 >= SLODWORD(receiveMissionIds->max_length) )
          return;
      }
LABEL_51:
      sub_1C2D6EC(Instance, v5);
    }
  }
}


void MasterMissionListViewManager__OnChangeAlphaAnim(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4C2A4E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    byte_4C2A4E2 = 1;
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
      if ( !ObjectList )
        break;
      MasterMissionListViewObject__OnChangeAlphaAnim((MasterMissionListViewObject_o *)ObjectList, v4);
      if ( size == ++v6 )
        return;
    }
LABEL_10:
    sub_1C2D6EC(ObjectList, v4);
  }
}


void MasterMissionListViewManager__OnClickFilterList(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  __int64 filterStatus; // x8

  if ( (byte_4C2A4D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_MasterMissionListViewManager_OnClickFilterList__);
    byte_4C2A4D5 = 1;
  }
  v3 = Method_MasterMissionListViewManager_OnClickFilterList__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickFilterList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_MasterMissionListViewManager_OnClickFilterList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  filterStatus = this->fields.filterStatus;
  if ( (unsigned int)filterStatus <= 3 )
    this->fields.filterStatus = dword_C41278[filterStatus];
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x19
  System_String_o *v21; // x20
  MasterMissionListViewManager___c_c *v22; // x8
  System_Action_o *_9__27_0; // x22
  System_String_o *v24; // x21
  Il2CppObject *v25; // x23
  struct MasterMissionListViewManager___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  System_Action_o *naviAction; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C2A4D2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_MasterMissionListViewManager_OnClickListView__);
    sub_1C2D490(&MasterMissionListViewObject_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__);
    sub_1C2D490(&MasterMissionListViewManager___c_TypeInfo);
    sub_1C2D490(&StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/);
    sub_1C2D490(&StringLiteral_15564/*"Wait_Action"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2A4D2 = 1;
  }
  naviAction = 0;
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_46;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  targetFSM = (PlayMakerFSM_o *)System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15564/*"Wait_Action"*/, 0);
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
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 1, 0);
      if ( LODWORD(v9[4].fields.m_CancellationTokenSource) == 2
        && MissionListViewManager__TrySetupMissionCondNaviAction(
             (MissionListViewManager_o *)this,
             (MissionListViewItem_o *)v9,
             &naviAction,
             v14) )
      {
        targetFSM = (PlayMakerFSM_o *)v9[1].fields.addEventHandlers;
        if ( targetFSM )
        {
          if ( EventMissionEntity__isNowMission((EventMissionEntity_o *)targetFSM, 0) )
          {
            v15 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v15 = (_QWORD *)sub_1C2D4A8(Method_MasterMissionListViewManager_OnClickListView__);
            v16 = (System_Reflection_MethodBase_o *)sub_1C2D474(v15, v15[4]);
            OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
            ActionExtensions__Call(naviAction, 0);
            return;
          }
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          targetFSM = (PlayMakerFSM_o *)LocalizationManager__Get((System_String_o *)StringLiteral_4982/*"DIALOG_OUT_OF_TERM"*/, 0);
          v21 = (System_String_o *)targetFSM;
          v22 = MasterMissionListViewManager___c_TypeInfo;
          if ( !MasterMissionListViewManager___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MasterMissionListViewManager___c_TypeInfo);
            v22 = MasterMissionListViewManager___c_TypeInfo;
          }
          _9__27_0 = v22->static_fields->__9__27_0;
          v24 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__27_0 )
          {
            if ( !v22->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v22);
              v22 = MasterMissionListViewManager___c_TypeInfo;
            }
            v25 = (Il2CppObject *)v22->static_fields->__9;
            _9__27_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
            System_Action___ctor(_9__27_0, v25, Method_MasterMissionListViewManager___c__OnClickListView_b__27_0__, 0);
            static_fields = MasterMissionListViewManager___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = _9__27_0;
            sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v27, v28);
          }
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v24,
              v21,
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
            v29 = Method_MasterMissionListViewManager_OnClickListView__;
            if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
              v29 = (_QWORD *)sub_1C2D4A8(Method_MasterMissionListViewManager_OnClickListView__);
            v30 = (System_Reflection_MethodBase_o *)sub_1C2D474(v29, v29[4]);
            OverwriteAssetSoundName__PlaySystemSe(v30, 2, 0, 0);
            targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( targetFSM )
            {
              AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
              return;
            }
          }
        }
LABEL_46:
        sub_1C2D6EC(targetFSM, obj);
      }
      targetFSM = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
      if ( !targetFSM )
        goto LABEL_46;
      AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)targetFSM, 0, 0);
LABEL_32:
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v9,
        0,
        v13);
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
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.receiveItem, (int32_t)v9, v12, v13);
    MasterMissionListViewManager__SetReceiveReward(this, (EventMissionEntity_o *)v9[1].fields.addEventHandlers, v17);
  }
  else
  {
    v18 = Method_MasterMissionListViewManager_OnClickListView__;
    if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickListView__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C2D4A8(Method_MasterMissionListViewManager_OnClickListView__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C2D474(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
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
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0

  v3 = (UnityEngine_Object_o *)obj;
  if ( (byte_4C2A4D3 & 1) == 0 )
  {
    sub_1C2D490(&Method_MasterMissionListViewManager_OnClickRewardIcon__);
    sub_1C2D490(&MasterMissionListViewObject_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_15564/*"Wait_Action"*/);
    byte_4C2A4D3 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    goto LABEL_24;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(targetFSM, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15564/*"Wait_Action"*/, 0) )
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
    sub_1C2D6EC(targetFSM, obj);
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
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)this,
        (MissionListViewItem_o *)v9,
        0,
        v12);
      return;
    }
    if ( v9->fields.progStatus == 3 )
    {
      this->fields.receiveItem = v9;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.receiveItem, (int32_t)v9, v11, v12);
      MasterMissionListViewManager__SetReceiveReward(this, v9->fields.eventMissionEnt, v13);
      return;
    }
  }
LABEL_20:
  v14 = Method_MasterMissionListViewManager_OnClickRewardIcon__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_OnClickRewardIcon__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C2D4A8(Method_MasterMissionListViewManager_OnClickRewardIcon__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C2D474(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
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
  const MethodInfo *v9; // x3
  struct EventMissionEntity_o *missionToRecieve; // x8
  GiftEntity_array *GiftListById; // x23
  System_Text_StringBuilder_o *v12; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x25
  int max_length; // w22
  const MethodInfo_39D3CCC **v15; // x29
  __int64 v16; // x2
  unsigned int v17; // w21
  Il2CppClass **v18; // x26
  Il2CppClass *v19; // x8
  char *v20; // x26
  Il2CppClass *v21; // t1
  int32_t name_high; // w19
  System_Collections_Generic_List_object__o *v23; // x28
  unsigned int v24; // w26
  Il2CppClass **v25; // x27
  Il2CppClass *v26; // x8
  Il2CppObject **v27; // x27
  Il2CppClass *v28; // t1
  int32_t v29; // w19
  ServantEntity_o *v30; // x19
  bool IsCombineMaterial; // w21
  System_String_o *v32; // x0
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x19
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x19
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  const MethodInfo_39D3CCC **v44; // x20
  Il2CppObject *CountableString; // x19
  System_Text_StringBuilder_o *v46; // x29
  __int64 v47; // x3
  __int64 v48; // x4
  System_String_o *v49; // x21
  Il2CppObject *v50; // x0
  System_Text_StringBuilder_o *v51; // x19
  System_String_o *v52; // x1
  __int64 v53; // x8
  System_Collections_Generic_List_object__o *v54; // x0
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  System_Collections_Generic_List_object__o *v58; // x23
  System_Text_StringBuilder_o *v59; // x21
  System_String_o *v60; // x19
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x19
  System_String_o *v64; // x0
  Il2CppObject *v65; // x19
  GiftEntity_array *v66; // x20
  System_String_o *v67; // x21
  MissionRewardGetDialog_ClickDelegate_o *v68; // x22
  const MethodInfo *v69; // x3
  __int64 v70; // [xsp+8h] [xbp-B8h]
  Il2CppObject *v71; // [xsp+10h] [xbp-B0h]
  System_Text_StringBuilder_o *v72; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_object__o *collection; // [xsp+20h] [xbp-A0h]
  System_Text_StringBuilder_o *v74; // [xsp+28h] [xbp-98h]
  int v75; // [xsp+34h] [xbp-8Ch]
  System_String_o *format; // [xsp+38h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+40h] [xbp-80h]
  int monitor_high; // [xsp+4Ch] [xbp-74h] BYREF
  Il2CppObject *v79; // [xsp+50h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4C2A4DB & 1) == 0 )
  {
    sub_1C2D490(&MissionRewardGetDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity___ctor___77943392);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C2D490(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__);
    sub_1C2D490(&MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_1C2D490(&StringLiteral_8666/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_8670/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/);
    sub_1C2D490(&StringLiteral_8669/*"MISSION_ACTION_SUCCESS"*/);
    sub_1C2D490(&StringLiteral_3689/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/);
    sub_1C2D490(&StringLiteral_51/*"\n \n "*/);
    sub_1C2D490(&StringLiteral_8665/*"MISSION_ACTION_ITEM_FORMAT"*/);
    sub_1C2D490(&StringLiteral_49/*"\n "*/);
    sub_1C2D490(&StringLiteral_8672/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/);
    byte_4C2A4DB = 1;
  }
  v79 = 0;
  entity = 0;
  v5 = sub_1C2D6DC(MasterMissionListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_114;
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)callback, v8, v9);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
  missionToRecieve = this->fields.missionToRecieve;
  if ( !missionToRecieve )
    goto LABEL_114;
  if ( !Instance )
    goto LABEL_114;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Instance, missionToRecieve->fields.giftId, 0);
  v12 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v12, 0);
  v74 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v74, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_114;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !GiftListById )
    goto LABEL_114;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  max_length = GiftListById->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v15 = (const MethodInfo_39D3CCC **)&Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONSUME_INFO_IF_ENOUGH"*/, 0);
  format = (System_String_o *)Instance;
  if ( max_length >= 1 )
  {
    v17 = 0;
    v75 = 0;
    while ( 1 )
    {
      if ( v17 >= LODWORD(GiftListById->max_length) )
LABEL_115:
        sub_1C2D6F4(Instance, v7, v16);
      v18 = &GiftListById->obj.klass + (int)v17;
      v21 = v18[4];
      v20 = (char *)(v18 + 4);
      v19 = v21;
      if ( !v21 )
        goto LABEL_114;
      name_high = HIDWORD(v19->_1.name);
      Instance = Gift__IsServant_40205568(name_high, 0);
      if ( (Instance & 1) == 0 )
      {
        Instance = Gift__IsCommandCode_40205960(name_high, 0);
        if ( (Instance & 1) == 0 )
        {
          Instance = Gift__IsCostumeRelease(name_high, 0);
          if ( (Instance & 1) == 0 )
          {
            if ( v17 >= LODWORD(GiftListById->max_length) )
              goto LABEL_115;
            Instance = (__int64)MasterData_object;
            if ( !*(_QWORD *)v20 || !MasterData_object )
              goto LABEL_114;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         MasterData_object,
                         &entity,
                         *(_DWORD *)(*(_QWORD *)v20 + 24LL),
                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( !entity || !Instance )
                goto LABEL_114;
              Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)entity[1].klass, 0);
              v75 += (Instance & 1) == 0;
            }
          }
        }
      }
      if ( max_length == ++v17 )
        goto LABEL_29;
    }
  }
  v75 = 0;
LABEL_29:
  v70 = v5 + 16;
  v71 = (Il2CppObject *)v5;
  collection = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    collection,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
  if ( max_length >= 1 )
  {
    v24 = 0;
    v72 = v12;
    do
    {
      if ( v24 >= LODWORD(GiftListById->max_length) )
        goto LABEL_115;
      v25 = &GiftListById->obj.klass + (int)v24;
      v28 = v25[4];
      v27 = (Il2CppObject **)(v25 + 4);
      v26 = v28;
      if ( !v28 )
        goto LABEL_114;
      v29 = HIDWORD(v26->_1.name);
      Instance = Gift__IsServant_40205568(v29, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( v24 >= LODWORD(GiftListById->max_length) )
          goto LABEL_115;
        if ( !*v27 )
          goto LABEL_114;
        if ( !v13 )
          goto LABEL_114;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              v13,
                              (int32_t)(*v27)[1].monitor,
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_114;
        v30 = (ServantEntity_o *)Instance;
        IsCombineMaterial = SvtType__IsCombineMaterial(*(_DWORD *)(Instance + 84), 0);
        Instance = SvtType__IsStatusUp(v30->fields.type, 0);
        if ( IsCombineMaterial || (Instance & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_114;
          v32 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                                     v12,
                                     v12->klass->vtable._3_ToString.method);
          if ( !System_String__IsNullOrEmpty(v32, 0) )
            System_Text_StringBuilder__Append_63542928(v12, (System_String_o *)StringLiteral_49/*"\n "*/, 0);
          Instance = (__int64)ServantEntity__getName(v30, -1, -1, 0, 0);
          if ( v24 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          if ( !*v27 )
            goto LABEL_114;
          v35 = (Il2CppObject *)Instance;
          monitor_high = HIDWORD((*v27)[1].monitor);
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v16, v33, v34);
          v37 = (Il2CppObject *)System_String__Format_63499156(format, v35, v36, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8665/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
          Instance = (__int64)System_Text_StringBuilder__AppendFormat(v12, v38, v37, 0);
          if ( v24 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          if ( !v23 )
            goto LABEL_114;
          v7 = *v27;
          items = v23->fields._items;
          v41 = Method_System_Collections_Generic_List_GiftEntity__Add__;
          ++v23->fields._version;
          if ( !items )
            goto LABEL_114;
          size = v23->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v53 = v41[4];
            v54 = v23;
LABEL_72:
            System_Collections_Generic_List_object___AddWithResize(
              v54,
              v7,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v53 + 192) + 112LL));
            continue;
          }
          v43 = &items->obj.klass + size;
          v23->fields._size = size + 1;
LABEL_52:
          v43[4] = (Il2CppClass *)v7;
          sub_1C2D434((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v7, v16, v39);
        }
      }
      else
      {
        Instance = Gift__IsItem_40205516(v29, 0);
        if ( (Instance & 1) != 0 )
        {
          if ( v24 >= LODWORD(GiftListById->max_length) )
            goto LABEL_115;
          Instance = (__int64)MasterData_object;
          if ( !*v27 || !MasterData_object )
            goto LABEL_114;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       MasterData_object,
                       &v79,
                       (int32_t)(*v27)[1].monitor,
                       (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance(*v15);
            if ( !v79 || !Instance )
              goto LABEL_114;
            Instance = CommonUI__IsGetItemEffect((CommonUI_o *)Instance, (int32_t)v79[1].klass, 0);
            if ( (Instance & 1) == 0 )
            {
              if ( !v79 )
                goto LABEL_114;
              v44 = v15;
              CountableString = (Il2CppObject *)ItemType__GetCountableString((int32_t)v79[3].klass, 0);
              v46 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
              System_Text_StringBuilder___ctor(v46, 0);
              if ( !v79 || !v46 )
                goto LABEL_114;
              System_Text_StringBuilder__Append_63542928(v46, (System_String_o *)v79[1].monitor, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8670/*"MISSION_ACTION_SUCCESS_MULTIPLE2"*/, 0);
              if ( v24 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              if ( !*v27 )
                goto LABEL_114;
              v49 = (System_String_o *)Instance;
              monitor_high = HIDWORD((*v27)[1].monitor);
              v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v16, v47, v48);
              System_Text_StringBuilder__AppendFormat_63549280(v46, v49, CountableString, v50, 0);
              if ( v75 >= 2 )
              {
                v51 = v74;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8665/*"MISSION_ACTION_ITEM_FORMAT"*/, 0);
                if ( !v74 )
                  goto LABEL_114;
                System_Text_StringBuilder__AppendFormat(v74, (System_String_o *)Instance, (Il2CppObject *)v46, 0);
                v52 = (System_String_o *)StringLiteral_49/*"\n "*/;
              }
              else
              {
                Instance = ((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v46->klass->vtable._3_ToString.methodPtr)(
                             v46,
                             v46->klass->vtable._3_ToString.method);
                v51 = v74;
                if ( !v74 )
                  goto LABEL_114;
                v52 = (System_String_o *)Instance;
              }
              v15 = v44;
              Instance = (__int64)System_Text_StringBuilder__Append_63542928(v51, v52, 0);
              v12 = v72;
              if ( v24 >= LODWORD(GiftListById->max_length) )
                goto LABEL_115;
              if ( !collection )
                goto LABEL_114;
              v7 = *v27;
              v55 = collection->fields._items;
              v56 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++collection->fields._version;
              if ( !v55 )
                goto LABEL_114;
              v57 = collection->fields._size;
              if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
              {
                v53 = v56[4];
                v54 = collection;
                goto LABEL_72;
              }
              v43 = &v55->obj.klass + v57;
              collection->fields._size = v57 + 1;
              goto LABEL_52;
            }
          }
        }
      }
    }
    while ( max_length != ++v24 );
  }
  v58 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v58,
    (System_Collections_Generic_IEnumerable_T__o *)collection,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_GiftEntity___ctor___77943392);
  if ( !v58 )
    goto LABEL_114;
  System_Collections_Generic_List_object___AddRange(
    v58,
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_GiftEntity__AddRange__);
  if ( v58->fields._size >= 1 )
  {
    v59 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v59, 0);
    if ( !v74 )
      goto LABEL_114;
    v60 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v74->klass->vtable._3_ToString.methodPtr)(
                               v74,
                               v74->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v60, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_114;
    }
    else
    {
      if ( v75 >= 2 )
      {
        if ( !v60 )
          goto LABEL_114;
        Instance = (__int64)System_String__Substring_63503788(v60, 0, v60->fields._stringLength - 2, 0);
        if ( !v59 )
          goto LABEL_114;
        System_Text_StringBuilder__Append_63542928(v59, (System_String_o *)Instance, 0);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v61 = LocalizationManager__Get((System_String_o *)StringLiteral_8666/*"MISSION_ACTION_MULTIPLE_GET_MESSAGE"*/, 0);
        Instance = (__int64)System_Text_StringBuilder__Append_63542928(v59, v61, 0);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_8669/*"MISSION_ACTION_SUCCESS"*/, 0);
        if ( !v59 )
          goto LABEL_114;
        Instance = (__int64)System_Text_StringBuilder__AppendFormat(
                              v59,
                              (System_String_o *)Instance,
                              (Il2CppObject *)v60,
                              0);
      }
      if ( !v12 )
        goto LABEL_114;
      v62 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                                 v12,
                                 v12->klass->vtable._3_ToString.method);
      if ( !System_String__IsNullOrEmpty(v62, 0) )
        System_Text_StringBuilder__Append_63542928(v59, (System_String_o *)StringLiteral_51/*"\n \n "*/, 0);
    }
    v63 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                               v12,
                               v12->klass->vtable._3_ToString.method);
    Instance = System_String__IsNullOrEmpty(v63, 0);
    if ( (Instance & 1) == 0 )
    {
      if ( !v59 )
        goto LABEL_114;
      System_Text_StringBuilder__Append_63542928(v59, v63, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8672/*"MISSION_ACTION_SUCCESS_SEND_PRESENT_BOX2"*/, 0);
      System_Text_StringBuilder__Append_63542928(v59, v64, 0);
    }
    v65 = SingletonMonoBehaviour_object___get_Instance(*v15);
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v58,
                          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_GiftEntity__ToArray__);
    if ( v59 )
    {
      v66 = (GiftEntity_array *)Instance;
      v67 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v59->klass->vtable._3_ToString.methodPtr)(
                                 v59,
                                 v59->klass->vtable._3_ToString.method);
      v68 = (MissionRewardGetDialog_ClickDelegate_o *)sub_1C2D6DC(MissionRewardGetDialog_ClickDelegate_TypeInfo);
      MissionRewardGetDialog_ClickDelegate___ctor(
        v68,
        v71,
        Method_MasterMissionListViewManager___c__DisplayClass39_0__OpenOneResultDialog_b__0__,
        v69);
      if ( v65 )
      {
        CommonUI__OpenMissionRewardGetDialog((CommonUI_o *)v65, v66, v67, v68, 0, 0);
        return;
      }
    }
LABEL_114:
    sub_1C2D6EC(Instance, v7);
  }
  if ( !*(_QWORD *)v70 )
    goto LABEL_114;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v70 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v70 + 64LL),
    *(_QWORD *)(*(_QWORD *)v70 + 40LL));
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
  const MethodInfo *v9; // x3
  _BOOL8 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *current; // x1
  __int64 naturalAligment; // x10
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C2A4E3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    byte_4C2A4E3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MasterMissionListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MasterMissionListViewItem___ctor__);
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
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v22[4] = (Il2CppClass *)receiveItem;
          sub_1C2D434((CGThumbnailListItem_o *)(v22 + 4), (int32_t)receiveItem, v8, v9);
        }
        return (System_Collections_Generic_List_MasterMissionListViewItem__o *)v5;
      }
    }
LABEL_26:
    sub_1C2D6EC(itemSortList, receiveItem);
  }
  itemSortList = this->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)itemSortList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v10 )
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
          sub_1C2D6EC(v10, v25.fields._current);
        v15 = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_MasterMissionListViewItem__Add__;
        ++v5->fields._version;
        if ( !v15 )
          sub_1C2D6EC(v10, current);
        v17 = v5->fields._size;
        if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            current,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &v15->obj.klass + v17;
          v5->fields._size = v17 + 1;
          v18[4] = (Il2CppClass *)current;
          sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)current, v11, v12);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4C2A4D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    byte_4C2A4D4 = 1;
  }
  memset(&i, 0, sizeof(i));
  ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_17;
  v5 = ObjectList;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.itemList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  for ( i = v11;
        ;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))i.fields._current->klass->vtable[6].methodPtr)(
          i.fields._current,
          i.fields._current->klass->vtable[6].method) )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
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
    sub_1C2D6EC(v6, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Item__);
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
    sub_1C2D6EC(ObjectList, v4);
  }
}


void MasterMissionListViewManager__SetOpenItem(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  MasterMissionListViewItem_o *Item; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct MasterMissionListViewItem_o *v12; // x21
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int32_t id; // w23
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C2A4E0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_18837/*"ef_mission_extric01"*/);
    sub_1C2D490(&StringLiteral_21630/*"modifyOpenItem"*/);
    byte_4C2A4E0 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.itemList )
  {
    ObjectList = (System_Collections_Generic_List_object__o *)MasterMissionListViewManager__get_ObjectList(this, method);
    if ( !ObjectList )
      sub_1C2D6EC(0, v4);
    if ( ObjectList->fields._size >= 1 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        ObjectList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MasterMissionListViewObject__GetEnumerator__);
      v18 = v17;
      while ( 1 )
      {
        v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v18,
               (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__MoveNext__);
        if ( !v5 )
          break;
        current = v18.fields._current;
        if ( !v18.fields._current )
          sub_1C2D6EC(v5, v6);
        Item = MasterMissionListViewObject__GetItem((MasterMissionListViewObject_o *)v18.fields._current, v6);
        v12 = Item;
        if ( !Item )
          sub_1C2D6EC(0, v9);
        eventMissionEnt = Item->fields.eventMissionEnt;
        if ( !eventMissionEnt )
          sub_1C2D6EC(Item, v9);
        id = eventMissionEnt->fields.id;
        if ( id == this->fields.targetMissionId )
        {
          if ( !byte_4C217E3 )
          {
            sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217E3 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_MissionId_k__BackingField = id;
          this->fields.openTargetItem = v12;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openTargetItem, (int32_t)v12, v10, v11);
          if ( v12->fields.progStatus == 1 )
          {
            transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)current, 0);
            MasterMissionListViewManager__getEffect((System_String_o *)StringLiteral_18837/*"ef_mission_extric01"*/, transform, v16);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionListViewObject__Dispose__);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_21630/*"modifyOpenItem"*/,
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
  __int64 v9; // x1
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4C2A4D8 & 1) == 0 )
  {
    sub_1C2D490(&Method_MasterMissionListViewManager_SetReceiveReward__);
    sub_1C2D490(&StringLiteral_8705/*"MISSION_REWARD"*/);
    byte_4C2A4D8 = 1;
  }
  MissionListViewManager__SetupGetEffectOptions((MissionListViewManager_o *)this, missionEntity, method);
  v5 = Method_MasterMissionListViewManager_SetReceiveReward__;
  if ( (*((_BYTE *)Method_MasterMissionListViewManager_SetReceiveReward__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2D4A8(Method_MasterMissionListViewManager_SetReceiveReward__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
  this->fields.missionToRecieve = missionEntity;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.missionToRecieve, (int32_t)missionEntity, v7, v8);
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C2D6EC(0, v9);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_8705/*"MISSION_REWARD"*/, 0);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.getSvtList, (int32_t)svts, (int32_t)cmds, method);
  this->fields.getCommandCodeList = cmds;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.getCommandCodeList, (int32_t)cmds, v6, v7);
}


void MasterMissionListViewManager___modifyOpenItem_b__45_0(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A4E6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16651/*"actionAfterCallback"*/);
    byte_4C2A4E6 = 1;
  }
  MasterMissionListViewManager__RefrashListDisp(this, method);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_16651/*"actionAfterCallback"*/,
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
    sub_1C2D434(p_actionCallback, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))actionCallback->fields.invoke_impl)(
      actionCallback->fields.method_code,
      actionCallback->fields.method);
  }
}


void MasterMissionListViewManager__afterReward(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4C2A4DC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5432/*"END_EFFECT"*/);
    byte_4C2A4DC = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5432/*"END_EFFECT"*/, 0);
}


UnityEngine_GameObject_o *MasterMissionListViewManager__getEffect(
        System_String_o *name,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51051712; // x19
  UnityEngine_GameObject_o *v7; // x19
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20

  if ( (byte_4C2A4DE & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&MasterMissionListViewManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A4DE = 1;
  }
  effectAssetData = MasterMissionListViewManager_TypeInfo->static_fields->effectAssetData;
  if ( !effectAssetData )
    goto LABEL_15;
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              effectAssetData,
                              name,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  effectAssetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                     Object_object__51051712,
                                     (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !effectAssetData )
    goto LABEL_15;
  v7 = (UnityEngine_GameObject_o *)effectAssetData;
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)effectAssetData, 0);
  if ( !effectAssetData )
    goto LABEL_15;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)effectAssetData, parentTr, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v8 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C20DA1 )
  {
    effectAssetData = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  effectAssetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v7, 0);
  v9 = (UnityEngine_Transform_o *)effectAssetData;
  if ( !byte_4C20DA6 )
  {
    effectAssetData = (AssetData_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v9 )
LABEL_15:
    sub_1C2D6EC(effectAssetData, parentTr);
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
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C2A4CD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A4CD = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MasterMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MasterMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)MasterMissionListViewObject__GetItem(
                                 (MasterMissionListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_MasterMissionListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_MasterMissionListViewObject__o *MasterMissionListViewManager__get_ObjectList(
        MasterMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A4CC & 1) == 0 )
  {
    sub_1C2D490(&Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
    byte_4C2A4CC = 1;
  }
  return (System_Collections_Generic_List_MasterMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                             (MissionListViewManager_o *)this,
                                                                             (const MethodInfo_31568AC *)Method_MissionListViewManager_GetObjectList_MasterMissionListViewObject___);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2A4E1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    sub_1C2D490(&Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A4E1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( this->fields.openTargetItem )
  {
    itemList = this->fields.itemList;
    if ( !itemList )
      sub_1C2D6EC(0, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current
        || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
            v16.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (MasterMissionListViewItem_c *)v16.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo )
      {
        sub_1C2D6EC(v4, v5);
      }
      klass = v16.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v10 = current[7].klass;
        if ( !v10 )
          sub_1C2D6EC(0, v9);
        (*((void (__fastcall **)(Il2CppClass *, Il2CppObject *, _QWORD))v10->_1.image + 49))(
          v10,
          current,
          *((_QWORD *)v10->_1.image + 50));
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MasterMissionListViewManager__modifyOpenItem_b__45_0__, 0);
  this->fields.callbackFunc2 = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)v11, v12, v13);
  MissionListViewManager__SetMode_46853176((MissionListViewManager_o *)this, 3, v14);
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
  __int64 v10; // x2
  int64_t Time; // x20
  bool v12; // w8
  System_Action_o *v13; // x20

  if ( (byte_4C2A4DD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C2D490(&Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__);
    sub_1C2D490(&MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
    byte_4C2A4DD = 1;
  }
  v5 = sub_1C2D6DC(MasterMissionListViewManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  MasterMissionListViewManager__RefrashListDisp(this, v6);
  MasterMissionListViewManager__CheckBulkButton(this, v7);
  if ( receiveMissionIds && receiveMissionIds->max_length )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    AutomatedAction__SetBackGroundUntouchable((AutomatedAction_o *)Instance, 1, 0);
    Instance = (Il2CppObject *)UnityEngine_Random__Range_71123924(0, receiveMissionIds->max_length, 0);
    if ( (unsigned int)Instance >= LODWORD(receiveMissionIds->max_length) )
      sub_1C2D6F4(Instance, v9, v10);
    if ( !v5 )
      goto LABEL_18;
    *(_DWORD *)(v5 + 20) = receiveMissionIds->m_Items[(int)Instance];
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
      || (Instance = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                       *(_DWORD *)(v5 + 20),
                       (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0 )
    {
LABEL_18:
      sub_1C2D6EC(Instance, v9);
    }
    v12 = Time > (__int64)Instance[4].klass && Time <= (__int64)Instance[4].monitor;
    *(_BYTE *)(v5 + 16) = v12;
    v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)v5,
      Method_MasterMissionListViewManager___c__DisplayClass41_0__setAfterAction_b__0__,
      0);
    EventTutorialMaster__CheckTutorial(0, 94, v13, 0, 0, 0, 0, 0);
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
    sub_1C2D6EC(filterBtnTxt, targetFile);
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
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  UILabel_o *v12; // x21
  struct ListViewSort_o *v13; // x8
  int v14; // w9
  bool v15; // w2
  const MethodInfo *v16; // x1
  int32_t filterStatus; // w20
  int32_t v18; // w20
  int32_t v19; // w20
  int32_t v20; // w20

  if ( (byte_4C2A4D6 & 1) == 0 )
  {
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8806/*"MST_MISSION_EMPTY_TXT"*/);
    sub_1C2D490(&StringLiteral_17551/*"btn_txt_completed"*/);
    sub_1C2D490(&StringLiteral_17584/*"btn_txt_receipt"*/);
    sub_1C2D490(&StringLiteral_17583/*"btn_txt_progress"*/);
    sub_1C2D490(&StringLiteral_8673/*"MISSION_EMPTY_TXT"*/);
    sub_1C2D490(&StringLiteral_17533/*"btn_txt_all"*/);
    byte_4C2A4D6 = 1;
  }
  baseSortInfo = this->fields.baseSortInfo;
  v4 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
  ListViewSort___ctor_43601448(v4, baseSortInfo, 0);
  p_operationSortInfo = &this->fields.operationSortInfo;
  this->fields.operationSortInfo = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.operationSortInfo, (int32_t)v4, v6, v7);
  emptyMessageLabel = this->fields.emptyMessageLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8673/*"MISSION_EMPTY_TXT"*/, 0);
  if ( !emptyMessageLabel )
LABEL_53:
    sub_1C2D6EC(operationSortInfo, v10);
  UILabel__set_text(emptyMessageLabel, operationSortInfo, 0);
  switch ( this->fields.filterStatus )
  {
    case 0:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17533/*"btn_txt_all"*/, v11);
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
      v12 = this->fields.emptyMessageLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      operationSortInfo = LocalizationManager__Get((System_String_o *)StringLiteral_8806/*"MST_MISSION_EMPTY_TXT"*/, 0);
      if ( !v12 )
        goto LABEL_53;
      UILabel__set_text(v12, operationSortInfo, 0);
      goto LABEL_35;
    case 1:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17584/*"btn_txt_receipt"*/, v11);
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
      v13 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v14 = 1;
      goto LABEL_37;
    case 2:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17583/*"btn_txt_progress"*/, v11);
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
      v15 = 0;
      goto LABEL_33;
    case 3:
      MasterMissionListViewManager__setFilterName(this, (System_String_o *)StringLiteral_17551/*"btn_txt_completed"*/, v11);
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
      v15 = 1;
LABEL_33:
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 16, v15, 0);
      operationSortInfo = (System_String_o *)*p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      ListViewSort__SetFilter((ListViewSort_o *)operationSortInfo, 17, 0, 0);
LABEL_35:
      v13 = *p_operationSortInfo;
      if ( !*p_operationSortInfo )
        goto LABEL_53;
      v14 = 13;
LABEL_37:
      v13->fields.sortKind = v14;
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
          if ( !byte_4C217EC )
          {
            sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217EC = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_DailyFilterId_k__BackingField = filterStatus;
          EventRewardSaveData__SaveDailyMissionData(0);
          break;
        case 1:
          v18 = this->fields.filterStatus;
          if ( !byte_4C217EE )
          {
            sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217EE = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_WeeklyFilterId_k__BackingField = v18;
          EventRewardSaveData__SaveWeeklyMissionData(0);
          break;
        case 2:
          v19 = this->fields.filterStatus;
          if ( !byte_4C217F0 )
          {
            sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217F0 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_ExtraMissionFilterId_k__BackingField = v19;
          EventRewardSaveData__SaveExtraMissionData(0);
          break;
        case 3:
          v20 = this->fields.filterStatus;
          if ( !byte_4C217F2 )
          {
            sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217F2 = 1;
          }
          EventRewardSaveData_TypeInfo->static_fields->_LimitedMissionFilterId_k__BackingField = v20;
          EventRewardSaveData__SaveLimitedMissionData(0);
          break;
        default:
          break;
      }
      MasterMissionListViewManager__CheckBulkButton(this, v16);
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
  System_Collections_Generic_List_object__o *v11; // x8
  System_Collections_Generic_List_object__c *klass; // x8

  if ( (byte_4C2A4D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    byte_4C2A4D0 = 1;
  }
  switch ( this->fields.listType )
  {
    case 0:
      if ( !byte_4C217ED )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217ED = 1;
      }
      v5 = 20;
      goto LABEL_16;
    case 1:
      if ( !byte_4C217EF )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217EF = 1;
      }
      v5 = 24;
      goto LABEL_16;
    case 2:
      if ( !byte_4C217F1 )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217F1 = 1;
      }
      v5 = 28;
      goto LABEL_16;
    case 3:
      if ( !byte_4C217F3 )
      {
        sub_1C2D490(&EventRewardSaveData_TypeInfo);
        byte_4C217F3 = 1;
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
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
        sub_1C2D6EC(itemList, *(_QWORD *)&targetMissionId);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4C2A4CF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    sub_1C2D490(&Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__);
    byte_4C2A4CF = 1;
  }
  this->fields.targetMissionId = missionID;
  if ( callback )
  {
    this->fields.actionCallback = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actionCallback, (int32_t)callback, (int32_t)callback, method);
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
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
    sub_1C2D6EC(itemList, *(_QWORD *)&missionID);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MasterMissionListViewManager__setNextMissionInfo_b__23_0__, 0);
  this->fields.callbackAfterScroll = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackAfterScroll, (int32_t)v13, v14, v15);
  ListViewManager__MoveTopItem((ListViewManager_o *)this, v10, 1, 0.0, 0);
}


void MasterMissionListViewManager__unAcceptableDlg(MasterMissionListViewManager_o *this, const MethodInfo *method)
{
  MasterMissionListViewManager_o *v2; // x19
  struct System_Action_o *ShowMSG; // x8

  v2 = this;
  if ( (byte_4C2A4D9 & 1) == 0 )
  {
    this = (MasterMissionListViewManager_o *)sub_1C2D490(&StringLiteral_5437/*"END_NOTICE"*/);
    byte_4C2A4D9 = 1;
  }
  ShowMSG = v2->fields.ShowMSG;
  if ( !ShowMSG
    || (((void (__fastcall *)(intptr_t, intptr_t))ShowMSG->fields.invoke_impl)(
          ShowMSG->fields.method_code,
          ShowMSG->fields.method),
        (this = (MasterMissionListViewManager_o *)v2->fields.targetFSM) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5437/*"END_NOTICE"*/, 0);
}


void MasterMissionListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A4E7 & 1) == 0 )
  {
    sub_1C2D490(&MasterMissionListViewManager___c_TypeInfo);
    byte_4C2A4E7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MasterMissionListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MasterMissionListViewManager___c_TypeInfo->static_fields->__9 = (struct MasterMissionListViewManager___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MasterMissionListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4C2A4E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C2A4E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMasterMission((CommonUI_o *)Instance, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v3);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2A4E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2A4E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseMissionRewardGetDialog((CommonUI_o *)Instance, 0), (callback = this->fields.callback) == 0) )
  {
    sub_1C2D6EC(Instance, v4);
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

  if ( (byte_4C2A4EA & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    byte_4C2A4EA = 1;
  }
  endEvent = this->fields.endEvent;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
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
  if ( (byte_4C2A4EB & 1) == 0 )
  {
    this = (MasterMissionListViewManager___c__DisplayClass43_0_o *)sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    byte_4C2A4EB = 1;
  }
  if ( !x
    || (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
        x->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MasterMissionListViewItem_c *)x->klass->_2.typeHierarchy[naturalAligment - 1] != MasterMissionListViewItem_TypeInfo
    || (klass = x[1].klass) == 0 )
  {
    sub_1C2D6EC(this, x);
  }
  return LODWORD(klass->_1.name) == v4->fields.missionId;
}
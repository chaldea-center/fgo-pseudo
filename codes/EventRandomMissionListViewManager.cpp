void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_438BD84 & 1) == 0 )
  {
    sub_B775C4(&MissionListViewManager_TypeInfo);
    byte_438BD84 = 1;
  }
  if ( (BYTE3(MissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewManager_TypeInfo);
  }
  MissionListViewManager___ctor((MissionListViewManager_o *)this, 0LL);
}


void __fastcall EventRandomMissionListViewManager__CheckItemListNum(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w8
  EventMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v7; // x21
  ListViewItem_o *v8; // x8
  __int64 v9; // x11
  EventRandomMissionListViewItem_c *v10; // x10
  UserEventRandomMissionEntity_o *sortValue2B; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x19
  EventMissionEntity_o *v14; // x22
  EventRandomMissionListViewItem_o *v15; // x20
  const MethodInfo *v16; // x4

  if ( (byte_438BD83 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&EventRandomMissionListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438BD83 = 1;
  }
  itemList = this->fields.itemList;
  if ( itemList )
  {
    size = itemList->fields._size;
    if ( size )
    {
      if ( !(size % 3) )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMissionMaster___);
        v7 = this->fields.itemList;
        if ( v7 )
        {
          if ( !v7->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v8 = v7->fields._items->m_Items[0];
          if ( !v8 )
            return;
          v9 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9 )
            return;
          v10 = (EventRandomMissionListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1];
          if ( v10 != EventRandomMissionListViewItem_TypeInfo )
            v8 = 0LL;
          if ( v10 != EventRandomMissionListViewItem_TypeInfo )
            return;
          if ( v8 )
          {
            sortValue2B = (UserEventRandomMissionEntity_o *)v8[2].fields.sortValue2B;
            if ( !sortValue2B )
              return;
            if ( Master_WarQuestSelectionMaster )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           Master_WarQuestSelectionMaster,
                                           this->fields.currentEventId,
                                           sortValue2B->fields.missionId,
                                           0LL);
              v13 = this->fields.itemList;
              v14 = TargetEventMissionEntity;
              v15 = (EventRandomMissionListViewItem_o *)sub_B77694(EventRandomMissionListViewItem_TypeInfo);
              EventRandomMissionListViewItem___ctor(v15, sortValue2B, v14, 1, v16);
              if ( v13 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                return;
              }
            }
          }
        }
        sub_B7769C(Master_WarQuestSelectionMaster, v6);
      }
    }
  }
}


void __fastcall EventRandomMissionListViewManager__CreateList(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  EventRandomMissionListViewManager__CreateList_26544472(this, randomMissionList, eventId, 1, v4);
}


void __fastcall EventRandomMissionListViewManager__CreateList_26544472(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v9; // x1
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x22
  WarEntity_o *Entity; // x21
  bool v15; // w8
  signed int max_length; // w8
  EventMissionMaster_o *v17; // x21
  unsigned int v18; // w26
  UserEventRandomMissionEntity_o *v19; // x22
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionEntity_o *v22; // x25
  EventRandomMissionListViewItem_o *v23; // x24
  const MethodInfo *v24; // x4
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v26; // x22
  __int64 v27; // x8
  UserEventRandomMissionEntity_o *v28; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v29; // x21
  UserEventRandomMissionEntity_o *v30; // x23
  EventMissionEntity_o *v31; // x22
  EventRandomMissionListViewItem_o *v32; // x20
  const MethodInfo *v33; // x4
  __int64 v34; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  key = eventId;
  if ( (byte_438BD7A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&EventRandomMissionListViewItem_TypeInfo);
    sub_B775C4(&EventRewardRootComponent_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_5850/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/);
    sub_B775C4(&StringLiteral_20951/*"mission_bg_"*/);
    byte_438BD7A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_48;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  bgSprite = this->fields.bgSprite;
  v12 = System_Int32__ToString((int32_t)&key, 0LL);
  v13 = System_String__Concat_44901936((System_String_o *)StringLiteral_20951/*"mission_bg_"*/, v12, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v13, 0LL);
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_48;
  (*(void (__fastcall **)(int64_t, __int64, _QWORD))(*(_QWORD *)Instance + 952LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 960LL));
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_48;
  UIWidget__set_width((UIWidget_o *)Instance, 568, 0LL);
  Instance = (int64_t)this->fields.bgSprite;
  if ( !Instance )
    goto LABEL_48;
  UIWidget__set_height((UIWidget_o *)Instance, 368, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_48;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             key,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_48;
  v15 = Instance > *(_QWORD *)&Entity->fields.eventId && Instance <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v15;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_48;
  max_length = randomMissionList->max_length;
  v17 = (EventMissionMaster_o *)Instance;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < max_length )
    {
      v19 = randomMissionList->m_Items[v18];
      if ( !v19 )
        goto LABEL_48;
      if ( !v17 )
        goto LABEL_48;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v17, key, v19->fields.missionId, 0LL);
      itemList = this->fields.itemList;
      v22 = TargetEventMissionEntity;
      v23 = (EventRandomMissionListViewItem_o *)sub_B77694(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v23, v19, v22, 0, v24);
      if ( !itemList )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = randomMissionList->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_30;
    }
LABEL_49:
    v34 = sub_B776C8(Instance);
    sub_B77668(v34, 0LL);
  }
LABEL_30:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v26 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5850/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v26 )
      goto LABEL_48;
    UILabel__set_text(v26, (System_String_o *)Instance, 0LL);
  }
  v9 = (unsigned int)key;
  this->fields.currentEventId = key;
  v27 = *(_QWORD *)&randomMissionList->max_length;
  if ( v27 && (_DWORD)v27 == 3 * ((int)v27 / 3) )
  {
    if ( !(_DWORD)v27 )
      goto LABEL_49;
    v28 = randomMissionList->m_Items[0];
    if ( v28 && v17 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v17, v9, v28->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_49;
      v29 = this->fields.itemList;
      v30 = randomMissionList->m_Items[0];
      v31 = (EventMissionEntity_o *)Instance;
      v32 = (EventRandomMissionListViewItem_o *)sub_B77694(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v32, v30, v31, 1, v33);
      if ( v29 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        goto LABEL_47;
      }
    }
LABEL_48:
    sub_B7769C(Instance, v9);
  }
LABEL_47:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall EventRandomMissionListViewManager__DestroyList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


EventRandomMissionListViewItem_o *__fastcall EventRandomMissionListViewManager__GetItem(
        EventRandomMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438BD7B & 1) == 0 )
  {
    sub_B775C4(&EventRandomMissionListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438BD7B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EventRandomMissionListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EventRandomMissionListViewItem_TypeInfo )
    return (EventRandomMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall EventRandomMissionListViewManager__OnChangeAlphaAnim(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v4; // x1
  int size; // w21
  __int64 v6; // x22

  if ( (byte_438BD7D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_438BD7D = 1;
  }
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, v4);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v6 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      ObjectList = (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)ObjectList->fields._items->m_Items[v6];
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v4);
      if ( (int)++v6 >= size )
        return;
    }
LABEL_12:
    sub_B7769C(ObjectList, v4);
  }
}


void __fastcall EventRandomMissionListViewManager__OnClickListView(
        EventRandomMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  __int64 v5; // x10
  EventRandomMissionListViewItem_o *Item; // x0

  v4 = this;
  if ( (byte_438BD7C & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_B775C4(&EventRandomMissionListViewObject_TypeInfo);
    byte_438BD7C = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (v5 = *(&EventRandomMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_B7769C(this, obj);
    }
    Item = EventRandomMissionListViewObject__GetItem((EventRandomMissionListViewObject_o *)obj, (const MethodInfo *)obj);
    if ( Item && !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
      MissionListViewManager__ShowRewardDetailInfo(
        (MissionListViewManager_o *)v4,
        (MissionListViewItem_o *)Item,
        0,
        0LL);
  }
}


void __fastcall EventRandomMissionListViewManager__RefrashListDisp(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x11
  __int64 v9; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v12; // w8
  __int64 v13; // x21
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438BD7E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&EventRandomMissionListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_438BD7E = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v5 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v15,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( !v15.fields.current
      || (v8 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (EventRandomMissionListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v8 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B7769C(v6, v7);
    }
    v9 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      if ( (EventRandomMissionListViewItem_c *)v15.fields.current->klass->_2.typeHierarchy[v9 - 1] == EventRandomMissionListViewItem_TypeInfo )
        current = v15.fields.current;
      else
        current = 0LL;
    }
    else
    {
      current = 0LL;
    }
    ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
      current,
      current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v5 )
    goto LABEL_25;
  size = v5->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v12 = v5->fields._size;
    if ( v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( v12 <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        ObjectList = (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v5->fields._items->m_Items[v13];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventRandomMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v12 = v5->fields._size;
        if ( (int)++v13 >= v12 )
          return;
      }
LABEL_25:
      sub_B7769C(ObjectList, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_26546956(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  __int64 v9; // x10
  const MethodInfo *v10; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v12; // x21
  int v13; // w8
  __int64 v14; // x23
  __int64 v15; // x8
  __int64 v16; // x22
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438BD7F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&EventRandomMissionListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__);
    byte_438BD7F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v18,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current
      || (v9 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v18.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (EventRandomMissionListViewItem_c *)v18.fields.current->klass->_2.typeHierarchy[v9 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B7769C(v6, v7);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v18.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v10);
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  v12 = itemList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v13 = itemList->fields._size;
    if ( v13 >= 1 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v13 <= (unsigned int)v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v15 = (__int64)v12->fields._items + 8 * v14;
        v16 = *(_QWORD *)(v15 + 32);
        if ( !v16 )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRandomMissionListViewObject__GetItem(
                                                                                                    *(EventRandomMissionListViewObject_o **)(v15 + 32),
                                                                                                    *(const MethodInfo **)&missionId);
        if ( !itemList )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewItem__get_MissionId(
                                                                                                    (MissionListViewItem_o *)itemList,
                                                                                                    0LL);
        if ( (_DWORD)itemList == missionId )
          itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)(*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v16 + 456LL))(v16, this->fields.isInput, *(_QWORD *)(*(_QWORD *)v16 + 464LL));
        v13 = v12->fields._size;
        if ( (int)++v14 >= v13 )
          return;
      }
LABEL_24:
      sub_B7769C(itemList, *(_QWORD *)&missionId);
    }
  }
}


void __fastcall EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_o *v21; // x20
  System_String_o *v22; // x21
  CommonUI_o *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v24; // x23

  if ( (byte_438BD80 & 1) == 0 )
  {
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__);
    sub_B775C4(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
    sub_B775C4(&StringLiteral_5849/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_5848/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/);
    byte_438BD80 = 1;
  }
  v5 = sub_B77694(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
  EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
    (EventRandomMissionListViewManager___c__DisplayClass22_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = item;
  v14 = v5 + 24;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)item, v15, v16, v17, v18, v19, v20);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5849/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5848/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v14 )
    goto LABEL_13;
  v22 = System_String__Format(v6, *(Il2CppObject **)(*(_QWORD *)v14 + 192LL), 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_13:
    sub_B7769C(v6, v7);
  CommonUI__OpenConfirmDecideDlg(Instance, v21, v22, 0LL, 0LL, v24, 0, 0.0, 43.0, 0, 0, 0, 350, 2, 1, 0, 0LL);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ClippingObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventRandomMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438BD79 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BD79 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventRandomMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v3;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_438BD78 & 1) == 0 )
  {
    sub_B775C4(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
    byte_438BD78 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_1DF7EB0 *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void __fastcall EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  const MethodInfo *v5; // x1
  UnityEngine_Vector3_o v6; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector2_o offset; // [xsp+18h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_438BD82 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Remove__);
    this = (EventRandomMissionListViewManager_o *)sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438BD82 = 1;
  }
  v6.fields.z = 0.0;
  *(_QWORD *)&v6.fields.x = 0LL;
  offset = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_44889276(result, (System_String_o *)StringLiteral_21504/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &v6, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)v4->fields.cancelItem,
          (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v5),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_B7769C(this, result);
  }
  EventRewardRootComponent__UpdateEventRandomMissionNum((EventRewardRootComponent_o *)this, 0LL);
  ListViewManager__SetScrollView((ListViewManager_o *)v4, v6, offset, 0LL);
}


void __fastcall EventRandomMissionListViewManager__requestRandomMissionCancel(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  EventMissionRandomCancelRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v7; // x1

  if ( (byte_438BD81 & 1) == 0 )
  {
    sub_B775C4(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__);
    sub_B775C4(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438BD81 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionRandomCancelRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                             v5,
                                                                             (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7769C(0LL, v7);
  EventMissionRandomCancelRequest__beginRequest(Request_WarBoardWallAttackRequest, missionId, 0LL);
}


void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ShowRejectDialog_b__0(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  EventRandomMissionListViewManager_o *v8; // x19

  if ( (byte_4387FFC & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4387FFC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.cancelItem = this->fields.item;
      sub_B77560(&_4__this->fields.cancelItem);
      Instance = (CommonUI_o *)this->fields.item;
      if ( Instance )
      {
        v8 = this->fields.__4__this;
        Instance = (CommonUI_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)Instance, 0LL);
        if ( v8 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v8, (int32_t)Instance, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B7769C(Instance, v6);
  }
}
void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214A13 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewManager_TypeInfo, method);
    byte_4214A13 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w8
  EventMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v11; // x21
  ListViewItem_o *v12; // x8
  __int64 v13; // x11
  EventRandomMissionListViewItem_c *v14; // x10
  UserEventRandomMissionEntity_o *sortValue2B; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v17; // x19
  EventMissionEntity_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  EventRandomMissionListViewItem_o *v21; // x20
  const MethodInfo *v22; // x4

  if ( (byte_4214A12 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&EventRandomMissionListViewItem_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    byte_4214A12 = 1;
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
        Master_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionMaster___);
        v11 = this->fields.itemList;
        if ( v11 )
        {
          if ( !v11->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v12 = v11->fields._items->m_Items[0];
          if ( !v12 )
            return;
          v13 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v12->klass->_2.bitflags2 + 1) < (unsigned int)v13 )
            return;
          v14 = (EventRandomMissionListViewItem_c *)v12->klass->_2.typeHierarchy[v13 - 1];
          if ( v14 != EventRandomMissionListViewItem_TypeInfo )
            v12 = 0LL;
          if ( v14 != EventRandomMissionListViewItem_TypeInfo )
            return;
          if ( v12 )
          {
            sortValue2B = (UserEventRandomMissionEntity_o *)v12[2].fields.sortValue2B;
            if ( !sortValue2B )
              return;
            if ( Master_WarQuestSelectionMaster )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           Master_WarQuestSelectionMaster,
                                           this->fields.currentEventId,
                                           sortValue2B->fields.missionId,
                                           0LL);
              v17 = this->fields.itemList;
              v18 = TargetEventMissionEntity;
              v21 = (EventRandomMissionListViewItem_o *)sub_B0D974(EventRandomMissionListViewItem_TypeInfo, v19, v20);
              EventRandomMissionListViewItem___ctor(v21, sortValue2B, v18, 1, v22);
              if ( v17 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                return;
              }
            }
          }
        }
        sub_B0D97C(Master_WarQuestSelectionMaster);
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

  EventRandomMissionListViewManager__CreateList_24914884(this, randomMissionList, eventId, 1, v4);
}


void __fastcall EventRandomMissionListViewManager__CreateList_24914884(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
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
  int64_t Instance; // x0
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  WarEntity_o *Entity; // x21
  bool v26; // w8
  signed int max_length; // w8
  EventMissionMaster_o *v28; // x21
  unsigned int v29; // w26
  UserEventRandomMissionEntity_o *v30; // x22
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionEntity_o *v33; // x25
  __int64 v34; // x1
  __int64 v35; // x2
  EventRandomMissionListViewItem_o *v36; // x24
  const MethodInfo *v37; // x4
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v39; // x22
  int32_t v40; // w1
  __int64 v41; // x8
  UserEventRandomMissionEntity_o *v42; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  struct System_Collections_Generic_List_ListViewItem__o *v45; // x21
  UserEventRandomMissionEntity_o *v46; // x23
  EventMissionEntity_o *v47; // x22
  EventRandomMissionListViewItem_o *v48; // x20
  const MethodInfo *v49; // x4
  __int64 v50; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  key = eventId;
  if ( (byte_4214A09 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, randomMissionList);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B0D8A4(&EventRandomMissionListViewItem_TypeInfo, v11);
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&StringLiteral_5722/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, v18);
    sub_B0D8A4(&StringLiteral_20595/*"mission_bg_"*/, v19);
    byte_4214A09 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_48;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  bgSprite = this->fields.bgSprite;
  v23 = System_Int32__ToString((int32_t)&key, 0LL);
  v24 = System_String__Concat_43849904((System_String_o *)StringLiteral_20595/*"mission_bg_"*/, v23, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v24, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_48;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             key,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_48;
  v26 = Instance > *(_QWORD *)&Entity->fields.eventId && Instance <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v26;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_48;
  max_length = randomMissionList->max_length;
  v28 = (EventMissionMaster_o *)Instance;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( v29 < max_length )
    {
      v30 = randomMissionList->m_Items[v29];
      if ( !v30 )
        goto LABEL_48;
      if ( !v28 )
        goto LABEL_48;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v28, key, v30->fields.missionId, 0LL);
      itemList = this->fields.itemList;
      v33 = TargetEventMissionEntity;
      v36 = (EventRandomMissionListViewItem_o *)sub_B0D974(EventRandomMissionListViewItem_TypeInfo, v34, v35);
      EventRandomMissionListViewItem___ctor(v36, v30, v33, 0, v37);
      if ( !itemList )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = randomMissionList->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_30;
    }
LABEL_49:
    v50 = sub_B0D9A8(Instance);
    sub_B0D948(v50, 0LL);
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
    v39 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5722/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v39 )
      goto LABEL_48;
    UILabel__set_text(v39, (System_String_o *)Instance, 0LL);
  }
  v40 = key;
  this->fields.currentEventId = key;
  v41 = *(_QWORD *)&randomMissionList->max_length;
  if ( v41 && (_DWORD)v41 == 3 * ((int)v41 / 3) )
  {
    if ( !(_DWORD)v41 )
      goto LABEL_49;
    v42 = randomMissionList->m_Items[0];
    if ( v42 && v28 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v28, v40, v42->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_49;
      v45 = this->fields.itemList;
      v46 = randomMissionList->m_Items[0];
      v47 = (EventMissionEntity_o *)Instance;
      v48 = (EventRandomMissionListViewItem_o *)sub_B0D974(EventRandomMissionListViewItem_TypeInfo, v43, v44);
      EventRandomMissionListViewItem___ctor(v48, v46, v47, 1, v49);
      if ( v45 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        goto LABEL_47;
      }
    }
LABEL_48:
    sub_B0D97C(Instance);
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


// local variable allocation has failed, the output may be wrong!
EventRandomMissionListViewItem_o *__fastcall EventRandomMissionListViewManager__GetItem(
        EventRandomMissionListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4214A0A & 1) == 0 )
  {
    sub_B0D8A4(&EventRandomMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4214A0A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EventRandomMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EventRandomMissionListViewItem_TypeInfo )
    return (EventRandomMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall EventRandomMissionListViewManager__OnChangeAlphaAnim(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v5; // x1
  int size; // w21
  __int64 v7; // x22
  const MethodInfo *v8; // x1

  if ( (byte_4214A0C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v3);
    byte_4214A0C = 1;
  }
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, v5);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      ObjectList = (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)ObjectList->fields._items->m_Items[v7];
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v8);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B0D97C(ObjectList);
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
  if ( (byte_4214A0B & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_B0D8A4(&EventRandomMissionListViewObject_TypeInfo, obj);
    byte_4214A0B = 1;
  }
  if ( v4->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (v5 = *(&EventRandomMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_B0D97C(this);
    }
    Item = EventRandomMissionListViewObject__GetItem((EventRandomMissionListViewObject_o *)obj, (const MethodInfo *)obj);
    if ( Item && !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)v4, (MissionListViewItem_o *)Item, 0LL);
  }
}


void __fastcall EventRandomMissionListViewManager__RefrashListDisp(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *ObjectList; // x0
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x11
  __int64 v13; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v16; // w8
  __int64 v17; // x21
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4214A0D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B0D8A4(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v8);
    byte_4214A0D = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v10 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v11 )
      break;
    if ( !v19.fields.current
      || (v12 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12)
      || (EventRandomMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v12 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B0D97C(v11);
    }
    v13 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
    {
      if ( (EventRandomMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v13 - 1] == EventRandomMissionListViewItem_TypeInfo )
        current = v19.fields.current;
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
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_25;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v16 = v10->fields._size;
    if ( v16 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v16 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        ObjectList = (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v10->fields._items->m_Items[v17];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventRandomMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v16 = v10->fields._size;
        if ( (int)++v17 >= v16 )
          return;
      }
LABEL_25:
      sub_B0D97C(ObjectList);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_24917364(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  __int64 v14; // x10
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v18; // x21
  int v19; // w8
  __int64 v20; // x23
  __int64 v21; // x8
  __int64 v22; // x22
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4214A0E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B0D8A4(&EventRandomMissionListViewItem_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v10);
    byte_4214A0E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v12 )
      break;
    current = v24.fields.current;
    if ( !v24.fields.current
      || (v14 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v24.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v14)
      || (EventRandomMissionListViewItem_c *)v24.fields.current->klass->_2.typeHierarchy[v14 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B0D97C(v12);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v24.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v15);
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  v18 = itemList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v19 = itemList->fields._size;
    if ( v19 >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( v19 <= (unsigned int)v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v21 = (__int64)v18->fields._items + 8 * v20;
        v22 = *(_QWORD *)(v21 + 32);
        if ( !v22 )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRandomMissionListViewObject__GetItem(
                                                                                                    *(EventRandomMissionListViewObject_o **)(v21 + 32),
                                                                                                    v16);
        if ( !itemList )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewItem__get_MissionId(
                                                                                                    (MissionListViewItem_o *)itemList,
                                                                                                    0LL);
        if ( (_DWORD)itemList == missionId )
          itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)(*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v22 + 456LL))(v22, this->fields.isInput, *(_QWORD *)(*(_QWORD *)v22 + 464LL));
        v19 = v18->fields._size;
        if ( (int)++v20 >= v19 )
          return;
      }
LABEL_24:
      sub_B0D97C(itemList);
    }
  }
}


void __fastcall EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  System_String_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o *v27; // x20
  System_String_o *v28; // x21
  CommonUI_o *Instance; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  CommonConfirmDialog_ClickDelegate_o *v32; // x23

  if ( (byte_4214A0F & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&SoundManager_TypeInfo, v7);
    sub_B0D8A4(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__, v8);
    sub_B0D8A4(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_5721/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, v10);
    sub_B0D8A4(&StringLiteral_5720/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v11);
    byte_4214A0F = 1;
  }
  v12 = sub_B0D974(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, item, method);
  EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
    (EventRandomMissionListViewManager___c__DisplayClass22_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = item;
  v20 = v12 + 24;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)item, v21, v22, v23, v24, v25, v26);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5721/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5720/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v20 )
    goto LABEL_13;
  v28 = System_String__Format(v13, *(Il2CppObject **)(*(_QWORD *)v20 + 192LL), 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v32 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v30, v31);
  CommonConfirmDialog_ClickDelegate___ctor(
    v32,
    (Il2CppObject *)v12,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_13:
    sub_B0D97C(v13);
  CommonUI__OpenConfirmDecideDlg(Instance, v27, v28, 0LL, 0LL, v32, 0, 0.0, 43.0, 0, 0, 0, 350, 2, 0LL);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ClippingObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  EventRandomMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4214A08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4214A08 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventRandomMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(Component_srcLineSprite, v17);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v12 )
            sub_B0D97C(v20);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v18,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v12;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214A07 & 1) == 0 )
  {
    sub_B0D8A4(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___, method);
    byte_4214A07 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_2049060 *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void __fastcall EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  EventRandomMissionListViewManager_o *v4; // x19
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_Vector3_o v7; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector2_o offset; // [xsp+18h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_4214A11 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Remove__, result);
    this = (EventRandomMissionListViewManager_o *)sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v5);
    byte_4214A11 = 1;
  }
  v7.fields.z = 0.0;
  *(_QWORD *)&v7.fields.x = 0LL;
  offset = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_43837244(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v4, &v7, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v4->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)v4->fields.cancelItem,
          (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v4, v6),
        ListViewManager__SortItem((ListViewManager_o *)v4, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v4->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(this);
  }
  EventRewardRootComponent__UpdateEventRandomMissionNum((EventRewardRootComponent_o *)this, 0LL);
  ListViewManager__SetScrollView((ListViewManager_o *)v4, v7, offset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__requestRandomMissionCancel(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  NetworkManager_ResultCallbackFunc_o *v8; // x21
  EventMissionRandomCancelRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_4214A10 & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__, *(_QWORD *)&missionId);
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_4214A10 = 1;
  }
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                NetworkManager_ResultCallbackFunc_TypeInfo,
                                                *(_QWORD *)&missionId,
                                                method);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionRandomCancelRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                             v8,
                                                                             (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(0LL);
  EventMissionRandomCancelRequest__beginRequest(Request_WarBoardWallAttackRequest, missionId, 0LL);
}


void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager___c__DisplayClass22_0___ShowRejectDialog_b__0(
        EventRandomMissionListViewManager___c__DisplayClass22_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  struct EventRandomMissionListViewItem_o *item; // x1
  EventRandomMissionListViewManager_o *v8; // x19

  if ( (byte_4211BBE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4211BBE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      item = this->fields.item;
      _4__this->fields.cancelItem = item;
      sub_B0D840(&_4__this->fields.cancelItem, item);
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
    sub_B0D97C(Instance);
  }
}
void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F60BB & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewManager_TypeInfo, method);
    byte_40F60BB = 1;
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
  __int64 v21; // x3
  __int64 v22; // x4
  EventRandomMissionListViewItem_o *v23; // x20
  const MethodInfo *v24; // x4

  if ( (byte_40F60BA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMissionMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    byte_40F60BA = 1;
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
        Master_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMissionMaster___);
        v11 = this->fields.itemList;
        if ( v11 )
        {
          if ( !v11->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
              v23 = (EventRandomMissionListViewItem_o *)sub_B170CC(
                                                          EventRandomMissionListViewItem_TypeInfo,
                                                          v19,
                                                          v20,
                                                          v21,
                                                          v22);
              EventRandomMissionListViewItem___ctor(v23, sortValue2B, v18, 1, v24);
              if ( v17 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v17,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                return;
              }
            }
          }
        }
        sub_B170D4();
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

  EventRandomMissionListViewManager__CreateList_17442688(this, randomMissionList, eventId, 1, v4);
}


void __fastcall EventRandomMissionListViewManager__CreateList_17442688(
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
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v22; // x0
  const MethodInfo *v23; // x2
  System_String_o *v24; // x22
  struct UISprite_o *v25; // x0
  UIWidget_o *v26; // x0
  UIWidget_o *v27; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x21
  int64_t Time; // x0
  bool v32; // w8
  EventMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  signed int max_length; // w8
  EventMissionMaster_o *v37; // x21
  unsigned int v38; // w26
  UserEventRandomMissionEntity_o *v39; // x22
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionEntity_o *v42; // x25
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  EventRandomMissionListViewItem_o *v47; // x24
  const MethodInfo *v48; // x4
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v50; // x22
  System_String_o *v51; // x0
  __int64 v52; // x8
  UserEventRandomMissionEntity_o *v53; // x8
  __int64 v54; // x3
  __int64 v55; // x4
  struct System_Collections_Generic_List_ListViewItem__o *v56; // x21
  UserEventRandomMissionEntity_o *v57; // x23
  EventMissionEntity_o *v58; // x22
  EventRandomMissionListViewItem_o *v59; // x20
  const MethodInfo *v60; // x4
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  key = eventId;
  if ( (byte_40F60B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, randomMissionList);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMissionMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, v11);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_5688/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, v18);
    sub_B16FFC(&StringLiteral_20448/*"mission_bg_"*/, v19);
    byte_40F60B1 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_48;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  bgSprite = this->fields.bgSprite;
  v22 = System_Int32__ToString((int32_t)&key, 0LL);
  v24 = System_String__Concat_43743732((System_String_o *)StringLiteral_20448/*"mission_bg_"*/, v22, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v24, v23);
  v25 = this->fields.bgSprite;
  if ( !v25 )
    goto LABEL_48;
  ((void (__fastcall *)(struct UISprite_o *, __int64, Il2CppMethodPointer))v25->klass->vtable._40_set_type.method)(
    v25,
    1LL,
    v25->klass->vtable._41_get_premultipliedAlpha.methodPtr);
  v26 = (UIWidget_o *)this->fields.bgSprite;
  if ( !v26 )
    goto LABEL_48;
  UIWidget__set_width(v26, 568, 0LL);
  v27 = (UIWidget_o *)this->fields.bgSprite;
  if ( !v27 )
    goto LABEL_48;
  UIWidget__set_height(v27, 368, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_48;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             key,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_48;
  v32 = Time > *(_QWORD *)&Entity->fields.eventId && Time <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v32;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_48;
  max_length = randomMissionList->max_length;
  v37 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v38 = 0;
    while ( v38 < max_length )
    {
      v39 = randomMissionList->m_Items[v38];
      if ( !v39 )
        goto LABEL_48;
      if ( !v37 )
        goto LABEL_48;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v37, key, v39->fields.missionId, 0LL);
      itemList = this->fields.itemList;
      v42 = TargetEventMissionEntity;
      v47 = (EventRandomMissionListViewItem_o *)sub_B170CC(EventRandomMissionListViewItem_TypeInfo, v43, v44, v45, v46);
      EventRandomMissionListViewItem___ctor(v47, v39, v42, 0, v48);
      if ( !itemList )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = randomMissionList->max_length;
      if ( (int)++v38 >= max_length )
        goto LABEL_30;
    }
LABEL_49:
    sub_B17100(Master_WarQuestSelectionMaster, v34, v35);
    sub_B170A0();
  }
LABEL_30:
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventMissionMaster_o *)UnityEngine_Object__op_Inequality(
                                                             emptyMessageLabel,
                                                             0LL,
                                                             0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v50 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_5688/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v50 )
      goto LABEL_48;
    UILabel__set_text(v50, v51, 0LL);
  }
  v34 = (unsigned int)key;
  this->fields.currentEventId = key;
  v52 = *(_QWORD *)&randomMissionList->max_length;
  if ( v52 && (_DWORD)v52 == 3 * ((int)v52 / 3) )
  {
    if ( !(_DWORD)v52 )
      goto LABEL_49;
    v53 = randomMissionList->m_Items[0];
    if ( v53 && v37 )
    {
      Master_WarQuestSelectionMaster = (EventMissionMaster_o *)EventMissionMaster__getTargetEventMissionEntity(
                                                                 v37,
                                                                 v34,
                                                                 v53->fields.missionId,
                                                                 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_49;
      v56 = this->fields.itemList;
      v57 = randomMissionList->m_Items[0];
      v58 = (EventMissionEntity_o *)Master_WarQuestSelectionMaster;
      v59 = (EventRandomMissionListViewItem_o *)sub_B170CC(EventRandomMissionListViewItem_TypeInfo, v34, v35, v54, v55);
      EventRandomMissionListViewItem___ctor(v59, v57, v58, 1, v60);
      if ( v56 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v56,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        goto LABEL_47;
      }
    }
LABEL_48:
    sub_B170D4();
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

  if ( (byte_40F60B2 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40F60B2 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *v8; // x0
  const MethodInfo *v9; // x1
  EventRandomMissionListViewObject_o *v10; // x0

  if ( (byte_40F60B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v3);
    byte_40F60B4 = 1;
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
      v8 = EventRandomMissionListViewManager__get_ObjectList(this, v5);
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v10 = v8->fields._items->m_Items[v7];
      if ( !v10 )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim(v10, v9);
      if ( (int)++v7 >= size )
        return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall EventRandomMissionListViewManager__OnClickListView(
        EventRandomMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x10
  EventRandomMissionListViewItem_o *Item; // x0

  if ( (byte_40F60B3 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewObject_TypeInfo, obj);
    byte_40F60B3 = 1;
  }
  if ( this->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (v5 = *(&EventRandomMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_B170D4();
    }
    Item = EventRandomMissionListViewObject__GetItem((EventRandomMissionListViewObject_o *)obj, (const MethodInfo *)obj);
    if ( Item && !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)this, (MissionListViewItem_o *)Item, 0LL);
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
  __int64 v11; // x11
  __int64 v12; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v15; // w8
  __int64 v16; // x21
  EventRandomMissionListViewObject_o *v17; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F60B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v4);
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v8);
    byte_40F60B5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v10 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v19.fields.current
      || (v11 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v19.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v11)
      || (EventRandomMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v11 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    v12 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      if ( (EventRandomMissionListViewItem_c *)v19.fields.current->klass->_2.typeHierarchy[v12 - 1] == EventRandomMissionListViewItem_TypeInfo )
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
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v10 )
    goto LABEL_25;
  size = v10->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v15 = v10->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v15 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v17 = v10->fields._items->m_Items[v16];
        if ( !v17 )
          break;
        ((void (__fastcall *)(EventRandomMissionListViewObject_o *, bool, Il2CppMethodPointer))v17->klass->vtable._9_SetInput.method)(
          v17,
          this->fields.isInput,
          v17->klass->vtable._10_Invalidation.methodPtr);
        v15 = v10->fields._size;
        if ( (int)++v16 >= v15 )
          return;
      }
LABEL_25:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_17445164(
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
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  Il2CppObject *current; // x21
  __int64 v13; // x10
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v16; // x1
  int32_t size; // w8
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *v18; // x21
  int v19; // w8
  __int64 v20; // x23
  __int64 v21; // x8
  __int64 v22; // x22
  MissionListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F60B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&missionId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v10);
    byte_40F60B6 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    current = v25.fields.current;
    if ( !v25.fields.current
      || (v13 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v25.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v13)
      || (EventRandomMissionListViewItem_c *)v25.fields.current->klass->_2.typeHierarchy[v13 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B170D4();
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v25.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, v14);
  if ( !ObjectList )
    goto LABEL_24;
  size = ObjectList->fields._size;
  v18 = ObjectList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v19 = ObjectList->fields._size;
    if ( v19 >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( v19 <= (unsigned int)v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v21 = (__int64)v18->fields._items + 8 * v20;
        v22 = *(_QWORD *)(v21 + 32);
        if ( !v22 )
          break;
        Item = (MissionListViewItem_o *)EventRandomMissionListViewObject__GetItem(
                                          *(EventRandomMissionListViewObject_o **)(v21 + 32),
                                          v16);
        if ( !Item )
          break;
        if ( MissionListViewItem__get_MissionId(Item, 0LL) == missionId )
          (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v22 + 456LL))(
            v22,
            this->fields.isInput,
            *(_QWORD *)(*(_QWORD *)v22 + 464LL));
        v19 = v18->fields._size;
        if ( (int)++v20 >= v19 )
          return;
      }
LABEL_24:
      sub_B170D4();
    }
  }
}


void __fastcall EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o *v28; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  CommonUI_o *Instance; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  CommonConfirmDialog_ClickDelegate_o *v36; // x23

  if ( (byte_40F60B7 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__, v10);
    sub_B16FFC(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5687/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, v12);
    sub_B16FFC(&StringLiteral_5686/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v13);
    byte_40F60B7 = 1;
  }
  v14 = sub_B170CC(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, item, method, v3, v4);
  EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
    (EventRandomMissionListViewManager___c__DisplayClass22_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = item;
  v21 = v14 + 24;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)item, v22, v23, v24, v25, v26, v27);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5687/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5686/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v21 )
    goto LABEL_13;
  v30 = System_String__Format(v29, *(Il2CppObject **)(*(_QWORD *)v21 + 192LL), 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v36 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                 CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                 v32,
                                                 v33,
                                                 v34,
                                                 v35);
  CommonConfirmDialog_ClickDelegate___ctor(
    v36,
    (Il2CppObject *)v14,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_13:
    sub_B170D4();
  CommonUI__OpenConfirmDecideDlg(Instance, v28, v30, 0LL, 0LL, v36, 0, 0.0, 43.0, 0, 0, 0, 350, 2, 0LL);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ClippingObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  EventRandomMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40F60B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40F60B0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventRandomMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v14;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F60AF & 1) == 0 )
  {
    sub_B16FFC(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___, method);
    byte_40F60AF = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_19DCC28 *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void __fastcall EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *itemList; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  EventRewardRootComponent_o *eventRootComponent; // x0
  UnityEngine_Vector3_o v10; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector2_o offset; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F60B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Remove__, result);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v5);
    byte_40F60B9 = 1;
  }
  v10.fields.z = 0.0;
  *(_QWORD *)&v10.fields.x = 0LL;
  offset = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)this, &v10, &offset, 0LL);
  itemList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.itemList;
  if ( !itemList
    || (System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          itemList,
          (WarBoardManager_TaskList_o *)this->fields.cancelItem,
          (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(this, v7),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (eventRootComponent = this->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  EventRewardRootComponent__UpdateEventRandomMissionNum(eventRootComponent, v8);
  ListViewManager__SetScrollView((ListViewManager_o *)this, v10, offset, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__requestRandomMissionCancel(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x21
  EventMissionRandomCancelRequest_o *Request_WarBoardWallAttackRequest; // x0

  if ( (byte_40F60B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__, *(_QWORD *)&missionId);
    sub_B16FFC(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_40F60B8 = 1;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 *(_QWORD *)&missionId,
                                                 method,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionRandomCancelRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                             v10,
                                                                             (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  System_Int32_array **item; // x1
  MissionListViewItem_o *v14; // x0
  EventRandomMissionListViewManager_o *v15; // x19
  int32_t MissionId; // w0

  if ( (byte_40F7023 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40F7023 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      item = (System_Int32_array **)this->fields.item;
      _4__this->fields.cancelItem = (struct EventRandomMissionListViewItem_o *)item;
      sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.cancelItem, item, v6, v7, v8, v9, v10, v11);
      v14 = (MissionListViewItem_o *)this->fields.item;
      if ( v14 )
      {
        v15 = this->fields.__4__this;
        MissionId = MissionListViewItem__get_MissionId(v14, 0LL);
        if ( v15 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v15, MissionId, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B170D4();
  }
}
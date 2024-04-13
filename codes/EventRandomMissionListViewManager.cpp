void __fastcall EventRandomMissionListViewManager___ctor(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E82 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8E82 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w8
  EventMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_ListViewItem__o *v24; // x21
  ListViewItem_o *v25; // x8
  __int64 v26; // x11
  EventRandomMissionListViewItem_c *v27; // x10
  UserEventRandomMissionEntity_o *sortValue2B; // x21
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v30; // x19
  EventMissionEntity_o *v31; // x22
  EventRandomMissionListViewItem_o *v32; // x20
  const MethodInfo *v33; // x4

  if ( (byte_42E8E81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&EventRandomMissionListViewItem_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v17, v18, v19);
    byte_42E8E81 = 1;
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
        Master_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionMaster___);
        v24 = this->fields.itemList;
        if ( v24 )
        {
          if ( !v24->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v25 = v24->fields._items->m_Items[0];
          if ( !v25 )
            return;
          v26 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26 )
            return;
          v27 = (EventRandomMissionListViewItem_c *)v25->klass->_2.typeHierarchy[v26 - 1];
          if ( v27 != EventRandomMissionListViewItem_TypeInfo )
            v25 = 0LL;
          if ( v27 != EventRandomMissionListViewItem_TypeInfo )
            return;
          if ( v25 )
          {
            sortValue2B = (UserEventRandomMissionEntity_o *)v25[2].fields.sortValue2B;
            if ( !sortValue2B )
              return;
            if ( Master_WarQuestSelectionMaster )
            {
              TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(
                                           Master_WarQuestSelectionMaster,
                                           this->fields.currentEventId,
                                           sortValue2B->fields.missionId,
                                           0LL);
              v30 = this->fields.itemList;
              v31 = TargetEventMissionEntity;
              v32 = (EventRandomMissionListViewItem_o *)sub_B5D694(EventRandomMissionListViewItem_TypeInfo);
              EventRandomMissionListViewItem___ctor(v32, sortValue2B, v31, 1, v33);
              if ( v30 )
              {
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
                return;
              }
            }
          }
        }
        sub_B5D69C(Master_WarQuestSelectionMaster, v23);
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

  EventRandomMissionListViewManager__CreateList_25794568(this, randomMissionList, eventId, 1, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__CreateList_25794568(
        EventRandomMissionListViewManager_o *this,
        UserEventRandomMissionEntity_array *randomMissionList,
        int32_t eventId,
        bool isTouchListEnabled,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int64_t Instance; // x0
  __int64 v45; // x1
  struct UIScrollView_o *scrollView; // x8
  UISprite_o *bgSprite; // x21
  System_String_o *v48; // x0
  System_String_o *v49; // x22
  WarEntity_o *Entity; // x21
  bool v51; // w8
  signed int max_length; // w8
  EventMissionMaster_o *v53; // x21
  unsigned int v54; // w26
  UserEventRandomMissionEntity_o *v55; // x22
  EventMissionEntity_o *TargetEventMissionEntity; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  EventMissionEntity_o *v58; // x25
  EventRandomMissionListViewItem_o *v59; // x24
  const MethodInfo *v60; // x4
  UnityEngine_Object_o *emptyMessageLabel; // x22
  UILabel_o *v62; // x22
  __int64 v63; // x8
  UserEventRandomMissionEntity_o *v64; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v65; // x21
  UserEventRandomMissionEntity_o *v66; // x23
  EventMissionEntity_o *v67; // x22
  EventRandomMissionListViewItem_o *v68; // x20
  const MethodInfo *v69; // x4
  __int64 v70; // x0
  int32_t key; // [xsp+Ch] [xbp-54h] BYREF

  key = eventId;
  if ( (byte_42E8E78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)randomMissionList, eventId, isTouchListEnabled);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&EventRandomMissionListViewItem_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_5783/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_20795/*"mission_bg_"*/, v41, v42, v43);
    byte_42E8E78 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  scrollView = this->fields.scrollView;
  this->fields.isClickListViewEnabled = isTouchListEnabled;
  if ( !scrollView )
    goto LABEL_48;
  BYTE1(scrollView->fields.scrollWheelFactor) = 1;
  bgSprite = this->fields.bgSprite;
  v48 = System_Int32__ToString((int32_t)&key, 0LL);
  v49 = System_String__Concat_44577788((System_String_o *)StringLiteral_20795/*"mission_bg_"*/, v48, 0LL);
  if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  }
  EventRewardRootComponent__setRewardInfoImg(bgSprite, v49, 0LL);
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_48;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             key,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getTime(0LL);
  if ( !Entity )
    goto LABEL_48;
  v51 = Instance > *(_QWORD *)&Entity->fields.eventId && Instance <= (__int64)Entity->fields.coordinate;
  this->fields.isEndEvent = v51;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !randomMissionList )
    goto LABEL_48;
  max_length = randomMissionList->max_length;
  v53 = (EventMissionMaster_o *)Instance;
  if ( max_length >= 1 )
  {
    v54 = 0;
    while ( v54 < max_length )
    {
      v55 = randomMissionList->m_Items[v54];
      if ( !v55 )
        goto LABEL_48;
      if ( !v53 )
        goto LABEL_48;
      TargetEventMissionEntity = EventMissionMaster__getTargetEventMissionEntity(v53, key, v55->fields.missionId, 0LL);
      itemList = this->fields.itemList;
      v58 = TargetEventMissionEntity;
      v59 = (EventRandomMissionListViewItem_o *)sub_B5D694(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v59, v55, v58, 0, v60);
      if ( !itemList )
        goto LABEL_48;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      max_length = randomMissionList->max_length;
      if ( (int)++v54 >= max_length )
        goto LABEL_30;
    }
LABEL_49:
    v70 = sub_B5D6C8(Instance);
    sub_B5D668(v70, 0LL);
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
    v62 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_5783/*"EVENT_REWARD_RANDOM_MISSION_EMPTY"*/, 0LL);
    if ( !v62 )
      goto LABEL_48;
    UILabel__set_text(v62, (System_String_o *)Instance, 0LL);
  }
  v45 = (unsigned int)key;
  this->fields.currentEventId = key;
  v63 = *(_QWORD *)&randomMissionList->max_length;
  if ( v63 && (_DWORD)v63 == 3 * ((int)v63 / 3) )
  {
    if ( !(_DWORD)v63 )
      goto LABEL_49;
    v64 = randomMissionList->m_Items[0];
    if ( v64 && v53 )
    {
      Instance = (int64_t)EventMissionMaster__getTargetEventMissionEntity(v53, v45, v64->fields.missionId, 0LL);
      if ( !randomMissionList->max_length )
        goto LABEL_49;
      v65 = this->fields.itemList;
      v66 = randomMissionList->m_Items[0];
      v67 = (EventMissionEntity_o *)Instance;
      v68 = (EventRandomMissionListViewItem_o *)sub_B5D694(EventRandomMissionListViewItem_TypeInfo);
      EventRandomMissionListViewItem___ctor(v68, v66, v67, 1, v69);
      if ( v65 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v65,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        goto LABEL_47;
      }
    }
LABEL_48:
    sub_B5D69C(Instance, v45);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42E8E79 & 1) == 0 )
  {
    sub_B5D5C4(&EventRandomMissionListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E8E79 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EventRandomMissionListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventRandomMissionListViewItem_TypeInfo )
    return (EventRandomMissionListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall EventRandomMissionListViewManager__OnChangeAlphaAnim(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *ObjectList; // x0
  const MethodInfo *v9; // x1
  int size; // w21
  __int64 v11; // x22

  if ( (byte_42E8E7B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v5, v6, v7);
    byte_42E8E7B = 1;
  }
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, method);
  if ( !ObjectList )
    goto LABEL_12;
  size = ObjectList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, v9);
      if ( !ObjectList )
        break;
      if ( ObjectList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      ObjectList = (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)ObjectList->fields._items->m_Items[v11];
      if ( !ObjectList )
        break;
      EventRandomMissionListViewObject__OnChangeAlphaAnim((EventRandomMissionListViewObject_o *)ObjectList, v9);
      if ( (int)++v11 >= size )
        return;
    }
LABEL_12:
    sub_B5D69C(ObjectList, v9);
  }
}


void __fastcall EventRandomMissionListViewManager__OnClickListView(
        EventRandomMissionListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventRandomMissionListViewManager_o *v5; // x19
  __int64 v6; // x10
  EventRandomMissionListViewItem_o *Item; // x0

  v5 = this;
  if ( (byte_42E8E7A & 1) == 0 )
  {
    this = (EventRandomMissionListViewManager_o *)sub_B5D5C4(
                                                    &EventRandomMissionListViewObject_TypeInfo,
                                                    (_DWORD)obj,
                                                    (_DWORD)method,
                                                    v3);
    byte_42E8E7A = 1;
  }
  if ( v5->fields.isClickListViewEnabled )
  {
    if ( !obj
      || (v6 = *(&EventRandomMissionListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
      || (EventRandomMissionListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventRandomMissionListViewObject_TypeInfo )
    {
      sub_B5D69C(this, obj);
    }
    Item = EventRandomMissionListViewObject__GetItem((EventRandomMissionListViewObject_o *)obj, (const MethodInfo *)obj);
    if ( Item && !Item->fields._IsDummy_k__BackingField && !Item->fields._IsTimeOver_k__BackingField )
      MissionListViewManager__ShowRewardDetailInfo((MissionListViewManager_o *)v5, (MissionListViewItem_o *)Item, 0LL);
  }
}


void __fastcall EventRandomMissionListViewManager__RefrashListDisp(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *ObjectList; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_EventRandomMissionListViewObject__o *v25; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x11
  __int64 v29; // x11
  Il2CppObject *current; // x0
  int32_t size; // w8
  int v32; // w8
  __int64 v33; // x21
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E8E7C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8, v9, v10);
    sub_B5D5C4(&EventRandomMissionListViewItem_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v20, v21, v22);
    byte_42E8E7C = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = EventRandomMissionListViewManager__get_ObjectList(this, method);
  if ( !this->fields.itemList )
    goto LABEL_25;
  v25 = ObjectList;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v26 )
      break;
    if ( !v35.fields.current
      || (v28 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v35.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (EventRandomMissionListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v28 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B5D69C(v26, v27);
    }
    v29 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35.fields.current->klass->_2.bitflags2 + 1) >= (unsigned int)v29 )
    {
      if ( (EventRandomMissionListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v29 - 1] == EventRandomMissionListViewItem_TypeInfo )
        current = v35.fields.current;
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
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( !v25 )
    goto LABEL_25;
  size = v25->fields._size;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v32 = v25->fields._size;
    if ( v32 >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v32 <= (unsigned int)v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ObjectList = (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v25->fields._items->m_Items[v33];
        if ( !ObjectList )
          break;
        ((void (__fastcall *)(System_Collections_Generic_List_EventRandomMissionListViewObject__o *, bool, Il2CppMethodPointer))ObjectList->klass->vtable._9_unknown.method)(
          ObjectList,
          this->fields.isInput,
          ObjectList->klass->vtable._10_System_Collections_Generic_ICollection_T__get_IsReadOnly.methodPtr);
        v32 = v25->fields._size;
        if ( (int)++v33 >= v32 )
          return;
      }
LABEL_25:
      sub_B5D69C(ObjectList, v24);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewManager__RefrashListDisp_25797048(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x21
  __int64 v28; // x10
  const MethodInfo *v29; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v31; // x21
  int v32; // w8
  __int64 v33; // x23
  __int64 v34; // x8
  __int64 v35; // x22
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8E7D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__,
      missionId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9, v10, v11);
    sub_B5D5C4(&EventRandomMissionListViewItem_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__get_Item__, v21, v22, v23);
    byte_42E8E7D = 1;
  }
  memset(&v37, 0, sizeof(v37));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_24;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v36,
    itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v37 = v36;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v25 )
      break;
    current = v37.fields.current;
    if ( !v37.fields.current
      || (v28 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v37.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (EventRandomMissionListViewItem_c *)v37.fields.current->klass->_2.typeHierarchy[v28 - 1] != EventRandomMissionListViewItem_TypeInfo )
    {
      sub_B5D69C(v25, v26);
    }
    if ( MissionListViewItem__get_MissionId((MissionListViewItem_o *)v37.fields.current, 0LL) == missionId )
      ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[6].method)(
        current,
        current->klass->vtable[7].methodPtr);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRandomMissionListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v29);
  if ( !itemList )
    goto LABEL_24;
  size = itemList->fields._size;
  v31 = itemList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v32 = itemList->fields._size;
    if ( v32 >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v32 <= (unsigned int)v33 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v34 = (__int64)v31->fields._items + 8 * v33;
        v35 = *(_QWORD *)(v34 + 32);
        if ( !v35 )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventRandomMissionListViewObject__GetItem(
                                                                                                    *(EventRandomMissionListViewObject_o **)(v34 + 32),
                                                                                                    *(const MethodInfo **)&missionId);
        if ( !itemList )
          break;
        itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)MissionListViewItem__get_MissionId(
                                                                                                    (MissionListViewItem_o *)itemList,
                                                                                                    0LL);
        if ( (_DWORD)itemList == missionId )
          itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)(*(__int64 (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)v35 + 456LL))(v35, this->fields.isInput, *(_QWORD *)(*(_QWORD *)v35 + 464LL));
        v32 = v31->fields._size;
        if ( (int)++v33 >= v32 )
          return;
      }
LABEL_24:
      sub_B5D69C(itemList, *(_QWORD *)&missionId);
    }
  }
}


void __fastcall EventRandomMissionListViewManager__ShowRejectDialog(
        EventRandomMissionListViewManager_o *this,
        EventRandomMissionListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x19
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_o *v43; // x20
  System_String_o *v44; // x21
  CommonUI_o *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v46; // x23

  if ( (byte_42E8E7E & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__, v15, v16, v17);
    sub_B5D5C4(&EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5782/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_5781/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, v24, v25, v26);
    byte_42E8E7E = 1;
  }
  v27 = sub_B5D694(EventRandomMissionListViewManager___c__DisplayClass22_0_TypeInfo);
  EventRandomMissionListViewManager___c__DisplayClass22_0___ctor(
    (EventRandomMissionListViewManager___c__DisplayClass22_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_13;
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = item;
  v36 = v27 + 24;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)item, v37, v38, v39, v40, v41, v42);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_5782/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_TITLE"*/, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5781/*"EVENT_REWARD_RANDOM_MISSION_DEL_CONFIRM_MSG"*/, 0LL);
  if ( !*(_QWORD *)v36 )
    goto LABEL_13;
  v44 = System_String__Format(v28, *(Il2CppObject **)(*(_QWORD *)v36 + 192LL), 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v46,
    (Il2CppObject *)v27,
    Method_EventRandomMissionListViewManager___c__DisplayClass22_0__ShowRejectDialog_b__0__,
    0LL);
  if ( !Instance )
LABEL_13:
    sub_B5D69C(v28, v29);
  CommonUI__OpenConfirmDecideDlg(Instance, v43, v44, 0LL, 0LL, v46, 0, 0.0, 43.0, 0, 0, 0, 350, 2, 1, 0, 0LL);
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ClippingObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventRandomMissionListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E8E77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E8E77 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventRandomMissionListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventRandomMissionListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)current,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventRandomMissionListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)EventRandomMissionListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventRandomMissionListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)v29;
}


System_Collections_Generic_List_EventRandomMissionListViewObject__o *__fastcall EventRandomMissionListViewManager__get_ObjectList(
        EventRandomMissionListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8E76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___, (_DWORD)method, v2, v3);
    byte_42E8E76 = 1;
  }
  return (System_Collections_Generic_List_EventRandomMissionListViewObject__o *)MissionListViewManager__GetObjectList_object_(
                                                                                  (MissionListViewManager_o *)this,
                                                                                  (const MethodInfo_1E649B4 *)Method_MissionListViewManager_GetObjectList_EventRandomMissionListViewObject___);
}


void __fastcall EventRandomMissionListViewManager__randomMissionCancelCallback(
        EventRandomMissionListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventRandomMissionListViewManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x1
  UnityEngine_Vector3_o v10; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Vector2_o offset; // [xsp+18h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E8E80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Remove__, (_DWORD)result, (_DWORD)method, v3);
    this = (EventRandomMissionListViewManager_o *)sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v6, v7, v8);
    byte_42E8E80 = 1;
  }
  v10.fields.z = 0.0;
  *(_QWORD *)&v10.fields.x = 0LL;
  offset = 0LL;
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    return;
  ListViewManager__GetScrollView((ListViewManager_o *)v5, &v10, &offset, 0LL);
  this = (EventRandomMissionListViewManager_o *)v5->fields.itemList;
  if ( !this
    || (System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
          (WarBoardManager_TaskList_o *)v5->fields.cancelItem,
          (const MethodInfo_305896C *)Method_System_Collections_Generic_List_ListViewItem__Remove__),
        EventRandomMissionListViewManager__CheckItemListNum(v5, v9),
        ListViewManager__SortItem((ListViewManager_o *)v5, -1, 0, -1, 0LL),
        (this = (EventRandomMissionListViewManager_o *)v5->fields.eventRootComponent) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(this, result);
  }
  EventRewardRootComponent__UpdateEventRandomMissionNum((EventRewardRootComponent_o *)this, 0LL);
  ListViewManager__SetScrollView((ListViewManager_o *)v5, v10, offset, 0LL);
}


void __fastcall EventRandomMissionListViewManager__requestRandomMissionCancel(
        EventRandomMissionListViewManager_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  NetworkManager_ResultCallbackFunc_o *v15; // x21
  EventMissionRandomCancelRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v17; // x1

  if ( (byte_42E8E7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventRandomMissionListViewManager_randomMissionCancelCallback__, missionId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42E8E7F = 1;
  }
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_EventRandomMissionListViewManager_randomMissionCancelCallback__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventMissionRandomCancelRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                             v15,
                                                                             (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventMissionRandomCancelRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(0LL, v17);
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
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  struct EventRandomMissionListViewManager_o *_4__this; // x8
  EventRandomMissionListViewManager_o *v9; // x19

  if ( (byte_42E5647 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E5647 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      _4__this->fields.cancelItem = this->fields.item;
      sub_B5D560(&_4__this->fields.cancelItem);
      Instance = (CommonUI_o *)this->fields.item;
      if ( Instance )
      {
        v9 = this->fields.__4__this;
        Instance = (CommonUI_o *)MissionListViewItem__get_MissionId((MissionListViewItem_o *)Instance, 0LL);
        if ( v9 )
        {
          EventRandomMissionListViewManager__requestRandomMissionCancel(v9, (int32_t)Instance, 0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B5D69C(Instance, v7);
  }
}
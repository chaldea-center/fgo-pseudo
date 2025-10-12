void EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C378B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
    byte_4C378B0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    87,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  EventCampaignMaster___c_c *v3; // x0
  System_Func_object__int__o *_9__15_0; // x20
  Il2CppObject *v5; // x21
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_object__object__o *_9__15_1; // x21
  Il2CppObject *v10; // x22
  struct EventCampaignMaster___c_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Linq_ILookup_TKey__TElement__o *v14; // x0
  EventCampaignMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__object__o *_9__15_2; // x20
  Il2CppObject *v18; // x21
  struct EventCampaignMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4C378AD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    sub_1C32C20(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C32C20(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_0__);
    sub_1C32C20(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_1__);
    sub_1C32C20(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_2__);
    sub_1C32C20(&EventCampaignMaster___c_TypeInfo);
    byte_4C378AD = 1;
  }
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  v3 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__int__o *)v3->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventCampaignMaster___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__15_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_0, v5, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_0__, 0);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__15_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v7, v8);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  _9__15_1 = (System_Func_object__object__o *)v3->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventCampaignMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v3->static_fields->__9;
    _9__15_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__15_1,
      v10,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_1__,
      0);
    v11 = EventCampaignMaster___c_TypeInfo->static_fields;
    v11->__9__15_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__15_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v11->__9__15_1, (int32_t)_9__15_1, v12, v13);
  }
  v14 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__15_0,
          (System_Func_TSource__TElement__o *)_9__15_1,
          (const MethodInfo_3121B40 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
  v15 = EventCampaignMaster___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v15 = EventCampaignMaster___c_TypeInfo;
  }
  _9__15_2 = (System_Func_object__object__o *)v15->static_fields->__9__15_2;
  if ( !_9__15_2 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = EventCampaignMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__15_2 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__15_2,
      v18,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_2__,
      0);
    v19 = EventCampaignMaster___c_TypeInfo->static_fields;
    v19->__9__15_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__15_2;
    sub_1C32BC4((CGThumbnailListItem_o *)&v19->__9__15_2, (int32_t)_9__15_2, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v16,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__15_2,
                                                               (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v22,
                                                                     (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAvailableEventCampaign(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  void *Instance; // x0
  EventMaster_o *v11; // x24
  int32_t Count; // w0
  const MethodInfo *v13; // x1
  int32_t v14; // w25
  int32_t v15; // w26
  const MethodInfo *v16; // x4
  Il2CppObject *v17; // x27
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4C378AB & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C378AB = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_19;
  v11 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v15,
                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v17 = (Il2CppObject *)Instance;
        if ( *((_DWORD *)Instance + 5) == campaignTarget )
        {
          if ( !v11 )
            break;
          Instance = (void *)EventMaster__IsEnableEvent(v11, *((_DWORD *)Instance + 4), eventType, nowTime, v16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v21 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v17,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v17;
              sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
            }
          }
        }
      }
      if ( v14 == ++v15 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                 v13);
    }
LABEL_19:
    sub_1C32E7C(Instance);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v9, v13);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 30, 7, 0, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 36, 7, 0, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetCombineEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  __int64 v5; // x27
  int32_t Count; // w22
  Il2CppObject *v7; // x0
  const MethodInfo *v8; // x1
  EventCampaignReleaseMaster_o *v9; // x21
  System_Collections_Generic_List_object__o *v10; // x25
  int32_t v11; // w24
  unsigned int v12; // w8
  int64_t v13; // x26
  const MethodInfo *v14; // x5
  void *monitor; // x9
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t condTargetId; // w1
  int32_t condType; // w29
  int64_t condNum; // x2
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  int64_t condValue; // [xsp+0h] [xbp-80h]
  int32_t targetId; // [xsp+Ch] [xbp-74h]
  EventCampaignReleaseEntity_o *v28; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C378A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C378A7 = 1;
  }
  v28 = 0;
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_37;
  v5 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v9 = (EventCampaignReleaseMaster_o *)v7;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v11,
                            (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v12 = *(_DWORD *)(Instance + 20);
        v13 = Instance;
        if ( v12 <= 0x20 && ((1LL << v12) & 0x108000014LL) != 0 )
        {
          if ( !MasterData_object )
            break;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            if ( (LODWORD(entity[1].monitor) | 8) == 0xD )
            {
              monitor = entity[6].monitor;
              if ( (__int64)monitor >= 1 && (__int64)monitor >= v5 && (__int64)entity[5].monitor <= v5 )
              {
                if ( !v9 )
                  break;
                Instance = EventCampaignReleaseMaster__TryGetEntity(
                             v9,
                             &v28,
                             *(_DWORD *)(v13 + 16),
                             *(_DWORD *)(v13 + 20),
                             *(_DWORD *)(v13 + 24),
                             v14);
                if ( (Instance & 1) == 0 )
                  goto LABEL_40;
                if ( !v28 )
                  break;
                condType = v28->fields.condType;
                condTargetId = v28->fields.condTargetId;
                condNum = v28->fields.condNum;
                if ( !CondType_TypeInfo->_2.cctor_finished )
                {
                  targetId = v28->fields.condTargetId;
                  condValue = v28->fields.condNum;
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  condNum = condValue;
                  condTargetId = targetId;
                }
                Instance = CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
                if ( (Instance & 1) != 0 )
                {
LABEL_40:
                  if ( !v10 )
                  {
                    v10 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v10,
                      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                    if ( !v10 )
                      break;
                  }
                  items = v10->fields._items;
                  v22 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                  ++v10->fields._version;
                  if ( !items )
                    break;
                  size = v10->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v13,
                      *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v24 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v24[4] = (Il2CppClass *)v13;
                    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 4), v13, v16, v17);
                  }
                }
              }
            }
          }
        }
      }
      if ( Count == ++v11 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v10,
                 v8);
    }
LABEL_37:
    sub_1C32E7C(Instance);
  }
  v10 = 0;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v10, v8);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *EventCampaignMaster__GetCombineEventCampaigns_41842560(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  _BOOL8 v6; // x0
  EventCampaignEntity_o *current; // x20
  _BOOL8 v8; // x0
  System_Collections_Generic_List_object__o *v9; // x21
  int32_t target; // w25
  Il2CppObject *Item; // x0
  int32_t value; // w25
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w8
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x0
  System_Collections_Generic_List_object__o *v20; // x21
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  char v34; // w25
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x1
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  __int64 v47; // x0
  const MethodInfo *v48; // x1
  Il2CppObject *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // x1
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  __int64 v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C378A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
    byte_4C378A9 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  memset(&v60, 0, sizeof(v60));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_1C32E7C(v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v61 = v59;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v61,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v6 )
      break;
    if ( !v4 )
      sub_1C32E7C(v6);
    current = (EventCampaignEntity_o *)v61.fields._current;
    if ( v4->fields._size <= 0 )
    {
      v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v20,
        (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_1C32E7C(v21);
      v23 = (Il2CppObject *)EventCampaignEntity__Clone(current, v22);
      v26 = v23;
      if ( !v20 )
        sub_1C32E7C(v23);
      items = v20->fields._items;
      v28 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1C32E7C(v23);
      size = v20->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v20,
          v23,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v20->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C32BC4((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v26, v24, v25);
      }
      v43 = v4->fields._items;
      v44 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v4->fields._version;
      if ( !v43 )
        sub_1C32E7C(v31);
      v45 = v4->fields._size;
      if ( (unsigned int)v45 < LODWORD(v43->max_length) )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v20,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v59,
        v4,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v60 = v59;
      do
      {
        while ( 1 )
        {
          v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                 &v60,
                 (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v8 )
          {
            v34 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_1C32E7C(v8);
          v9 = (System_Collections_Generic_List_object__o *)v60.fields._current;
          if ( !v60.fields._current )
            sub_1C32E7C(v8);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v60.fields._current,
                   0,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_1C32E7C(0);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v15 = current->fields.target;
          if ( v15 == 2 )
          {
            v16 = System_Collections_Generic_List_object___get_Item(
                    v9,
                    0,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v16 )
              sub_1C32E7C(0);
            if ( HIDWORD(v16[1].klass) == 27 )
              break;
            v15 = current->fields.target;
          }
          if ( v15 == 27 )
          {
            v17 = System_Collections_Generic_List_object___get_Item(
                    v9,
                    0,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v17 )
              sub_1C32E7C(0);
            if ( HIDWORD(v17[1].klass) == 2 )
              break;
            v15 = current->fields.target;
          }
          if ( v15 == 4 )
          {
            v18 = System_Collections_Generic_List_object___get_Item(
                    v9,
                    0,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v18 )
              sub_1C32E7C(0);
            if ( HIDWORD(v18[1].klass) == 32 )
              break;
            v15 = current->fields.target;
          }
          if ( v15 == 32 )
          {
            v19 = System_Collections_Generic_List_object___get_Item(
                    v9,
                    0,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v19 )
              sub_1C32E7C(0);
            if ( HIDWORD(v19[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v13 = System_Collections_Generic_List_object___get_Item(
                v9,
                0,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v13 )
          sub_1C32E7C(0);
      }
      while ( value != LODWORD(v13[3].klass) );
      v35 = (Il2CppObject *)EventCampaignEntity__Clone(current, v14);
      v38 = v35;
      v39 = v9->fields._items;
      v40 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v9->fields._version;
      if ( !v39 )
        sub_1C32E7C(v35);
      v41 = v9->fields._size;
      if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v35,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &v39->obj.klass + v41;
        v9->fields._size = v41 + 1;
        v42[4] = (Il2CppClass *)v38;
        sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
      }
      v34 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v60,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v34 & 1) == 0 )
      {
        v20 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v20,
          (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_1C32E7C(v47);
        v49 = (Il2CppObject *)EventCampaignEntity__Clone(current, v48);
        v52 = v49;
        if ( !v20 )
          sub_1C32E7C(v49);
        v53 = v20->fields._items;
        v54 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v20->fields._version;
        if ( !v53 )
          sub_1C32E7C(v49);
        v55 = v20->fields._size;
        if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v20,
            v49,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &v53->obj.klass + v55;
          v20->fields._size = v55 + 1;
          v56[4] = (Il2CppClass *)v52;
          sub_1C32BC4((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v52, v50, v51);
        }
        v43 = v4->fields._items;
        v44 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v4->fields._version;
        if ( !v43 )
          sub_1C32E7C(v57);
        v45 = v4->fields._size;
        if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
          goto LABEL_58;
LABEL_45:
        v46 = &v43->obj.klass + v45;
        v4->fields._size = v45 + 1;
        v46[4] = (Il2CppClass *)v20;
        sub_1C32BC4((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v20, v32, v33);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *EventCampaignMaster__GetEntity(
        EventCampaignMaster_o *this,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C378B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
    byte_4C378B1 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_339B2F0 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetExchangeSvtCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 34, 7, 0, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 27, 5, 0, v2);
}


EventCampaignEntity_array *EventCampaignMaster__GetFriendPointCampaigns(
        EventCampaignMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v9; // x24
  const MethodInfo *v10; // x1
  int32_t v11; // w25
  Il2CppObject *v12; // x26
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  void *v15; // x9
  void *monitor; // x9
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C378A8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C378A8 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_38;
  v7 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_38;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v11,
                            (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v12 = (Il2CppObject *)Instance;
        if ( *(_DWORD *)(Instance + 20) == 24 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_38;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v7 || (__int64)entity[5].monitor > v7 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_38;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v7 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_38;
              v15 = entity[6].monitor;
              if ( (__int64)v15 < 1 || (__int64)v15 <= v7 || (__int64)entity[5].monitor >= v7 )
                continue;
            }
            if ( !v9 )
              goto LABEL_38;
            items = v9->fields._items;
            v18 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v9->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v12,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v12;
              sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v13, v14);
            }
          }
        }
      }
    }
    while ( Count != ++v11 );
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                        v10);
  if ( !Instance )
LABEL_38:
    sub_1C32E7C(Instance);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v7; // x22
  int32_t Count; // w0
  const MethodInfo *v9; // x1
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *v11; // x25
  int32_t v12; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x26
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C378AA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_IndexOf_int___);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C378AA = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_29;
  v7 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v12,
               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        if ( HIDWORD(Item[1].klass) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       (System_Int32_array *)Item[2].monitor,
                       gachaId,
                       (const MethodInfo_31E4470 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         (int32_t)v14[1].klass,
                         (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1 && (__int64)entity[5].monitor <= v7 && v7 <= (__int64)entity[6].klass )
              {
                if ( !v11 )
                {
                  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v11,
                    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v11 )
                    break;
                }
                items = v11->fields._items;
                v18 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v11->fields._version;
                if ( !items )
                  break;
                size = v11->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v11,
                    v14,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                }
                else
                {
                  v20 = &items->obj.klass + size;
                  v11->fields._size = size + 1;
                  v20[4] = (Il2CppClass *)v14;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
                }
              }
            }
          }
        }
      }
      if ( v10 == ++v12 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v11,
                 v9);
    }
LABEL_29:
    sub_1C32E7C(Instance);
  }
  v11 = 0;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v11, v9);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetFriendshipUpCampaigns(
        EventCampaignMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 31, 7, nowTime, v3);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4C378AC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C32C20(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C32C20(&Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__);
    sub_1C32C20(&EventCampaignMaster___c__DisplayClass11_0_TypeInfo);
    byte_4C378AC = 1;
  }
  v7 = sub_1C32E6C(EventCampaignMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = campaignTarget;
  *(_DWORD *)(v7 + 20) = itemId;
  list = this->fields.list;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v11,
                                                                     (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


EventCampaignEntity_array *EventCampaignMaster__GetTargetEntitiyAllList(
        EventCampaignMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C378A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_4C378A4 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( HIDWORD(list->fields.items) == targetType )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v13 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool EventCampaignMaster__IsEnableServant(
        EventCampaignMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        const MethodInfo *method)
{
  EventCampaignEntity_o *Data; // x0
  EventCampaignEntity_o *v8; // x20

  if ( (byte_4C378AE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C378AE = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_30FA3A0 *)Method_System_Linq_Enumerable_Contains_int___);
  }
  return (char)Data;
}


bool EventCampaignMaster__IsOverrideEntryCondMessage(
        EventCampaignMaster_o *this,
        System_String_o **message,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v7; // x23
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  System_String_o *EventName; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  System_Func_object__bool__o *v23; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  EventCampaignMaster___c_c *v25; // x8
  System_Func_T__TResult__o *_9__17_1; // x23
  Il2CppObject *v27; // x24
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x3
  Il2CppObject *v35; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C378AF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C32C20(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventCampaignEntity__Nullable_int___TypeInfo);
    sub_1C32C20(&Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__17_1__);
    sub_1C32C20(&Method_EventCampaignMaster___c__DisplayClass17_0__IsOverrideEntryCondMessage_b__0__);
    sub_1C32C20(&EventCampaignMaster___c__DisplayClass17_0_TypeInfo);
    sub_1C32C20(&EventCampaignMaster___c_TypeInfo);
    byte_4C378AF = 1;
  }
  entitya = 0;
  v35 = 0;
  v7 = sub_1C32E6C(EventCampaignMaster___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_33;
  *(_QWORD *)(v7 + 16) = entity;
  v11 = (Il2CppObject **)(v7 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)entity, v9, v10);
  if ( !*(_QWORD *)(v7 + 16) )
    goto LABEL_33;
  v14 = *(System_String_o **)(*(_QWORD *)(v7 + 16) + 64LL);
  *message = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)message, (int32_t)v14, v12, v13);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  if ( !*v11 || !Master_object )
    goto LABEL_33;
  if ( !EventCampaignReleaseMaster__isRelease(
          (EventCampaignReleaseMaster_o *)Master_object,
          (int32_t)(*v11)[1].klass,
          HIDWORD((*v11)[1].klass),
          v15) )
  {
    Master_object = *v11;
    if ( *v11 )
    {
      if ( !EventCampaignEntity__IsNotDispEntryCondMessage((EventCampaignEntity_o *)Master_object, v16) )
        return 0;
      list = this->fields.list;
      v23 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v23,
        (Il2CppObject *)v7,
        Method_EventCampaignMaster___c__DisplayClass17_0__IsOverrideEntryCondMessage_b__0__,
        0);
      v24 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)list,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v25 = EventCampaignMaster___c_TypeInfo;
      if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
        v25 = EventCampaignMaster___c_TypeInfo;
      }
      _9__17_1 = (System_Func_T__TResult__o *)v25->static_fields->__9__17_1;
      if ( !_9__17_1 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = EventCampaignMaster___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__17_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_EventCampaignEntity__Nullable_int___TypeInfo);
        System_Func_object__Nullable_int_____ctor(
          _9__17_1,
          v27,
          Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__17_1__,
          0);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
        static_fields->__9__17_1 = (struct System_Func_EventCampaignEntity__Nullable_int___o *)_9__17_1;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__17_1, (int32_t)_9__17_1, v29, v30);
      }
      v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Nullable_int__(
                                                                   v24,
                                                                   (System_Func_TSource__TKey__o *)_9__17_1,
                                                                   (const MethodInfo_310CFEC *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____);
      v32 = System_Linq_Enumerable__FirstOrDefault_object_(
              v31,
              (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
      if ( v32 )
        return EventCampaignMaster__IsOverrideEntryCondMessage(this, message, (EventCampaignEntity_o *)v32, v33);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
      if ( *v11 && Master_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                &v35,
                (int32_t)(*v11)[1].klass,
                (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          return 0;
        Master_object = v35;
        if ( v35 )
          goto LABEL_16;
      }
    }
LABEL_33:
    sub_1C32E7C(Master_object);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !*v11 || !Master_object )
    goto LABEL_33;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entitya,
          (int32_t)(*v11)[1].klass,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entitya;
  if ( !entitya )
    goto LABEL_33;
LABEL_16:
  EventName = EventEntity__getEventName((EventEntity_o *)Master_object, v17);
  *message = EventName;
  sub_1C32BC4((CGThumbnailListItem_o *)message, (int32_t)EventName, v19, v20);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool EventCampaignMaster__TryGetEntity(
        EventCampaignMaster_o *this,
        EventCampaignEntity_o **entity,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C378B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
    byte_4C378B2 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


EventCampaignEntity_o *EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  EventCampaignEntity_o *v16; // x21
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0

  if ( (byte_4C378A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C378A5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventCampaignEntity__c **)v13 - 1) != System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*v13];
    }
    else
    {
LABEL_16:
      v14 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v16 = (EventCampaignEntity_o *)v15;
    if ( v15 && *(_DWORD *)(v15 + 16) == event_id )
      goto LABEL_22;
  }
  v16 = 0;
LABEL_22:
  v17 = Enumerator->klass;
  v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v19 - 1) != System_IDisposable_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_26;
    }
    v20 = (__int64)&v17->vtable[*v19];
  }
  else
  {
LABEL_26:
    v20 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(Enumerator, *(_QWORD *)(v20 + 8));
  return v16;
}


EventCampaignEntity_array *EventCampaignMaster__getData_41839636(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v9; // x1
  int max_length; // w25
  int v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int v15; // w10
  EventEntity_o *v16; // x11
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C378A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_4C378A6 = 1;
  }
  if ( !eventEntityList )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    max_length = eventEntityList->max_length;
    v11 = (int)list;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( !list )
        break;
      v9 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( LODWORD(eventEntityList->max_length) == v15 )
            sub_1C32E84(list);
          v16 = eventEntityList->m_Items[v15];
          if ( !v16 )
            goto LABEL_28;
          if ( LODWORD(list->fields.items) == v16->fields.id )
            break;
          if ( max_length == ++v15 )
            goto LABEL_22;
        }
        if ( !v7 )
          break;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v9;
          sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v9, v13, v14);
        }
      }
LABEL_22:
      if ( ++v12 == v11 )
        goto LABEL_23;
    }
LABEL_28:
    sub_1C32E7C(list);
  }
LABEL_23:
  if ( !v7 )
    goto LABEL_28;
  if ( v7->fields._size < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v7,
                                                             v9);
  if ( !list )
    goto LABEL_28;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C378B3 & 1) == 0 )
  {
    sub_1C32C20(&EventCampaignMaster___c_TypeInfo);
    byte_4C378B3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)EventCampaignMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventCampaignMaster___c___ctor(EventCampaignMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventCampaignMaster___c___CheckCampaignGrouping_b__15_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.groupId;
}


EventCampaignEntity_o *EventCampaignMaster___c___CheckCampaignGrouping_b__15_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *EventCampaignMaster___c___CheckCampaignGrouping_b__15_2(
        EventCampaignMaster___c_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  EventCampaignMaster___c_c *v9; // x0
  System_Func_object__int__o *_9__15_3; // x21
  Il2CppObject *v11; // x22
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  EventCampaignMaster___c_o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4C378B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_First_EventCampaignEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C32C20(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C32C20(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C32C20(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_3__);
    this = (EventCampaignMaster___c_o *)sub_1C32C20(&EventCampaignMaster___c_TypeInfo);
    byte_4C378B4 = 1;
  }
  if ( !x )
    goto LABEL_24;
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C83438(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))v7)(
          x,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v9 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v9 = EventCampaignMaster___c_TypeInfo;
  }
  _9__15_3 = (System_Func_object__int__o *)v9->static_fields->__9__15_3;
  if ( !_9__15_3 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventCampaignMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__15_3 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_3, v11, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_3__, 0);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__15_3;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__15_3, (int32_t)_9__15_3, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__15_3,
                                                               (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v15,
                                        (const MethodInfo_3103CC8 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v8
    || (items = v8->fields._items,
        v19 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_24:
    sub_1C32E7C(this);
  }
  size = v8->fields._size;
  v21 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)this,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v8;
}


int32_t EventCampaignMaster___c___CheckCampaignGrouping_b__15_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C32E7C(this);
  return y->fields.priority;
}


System_Nullable_int__o EventCampaignMaster___c___IsOverrideEntryCondMessage_b__17_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  int32_t priority; // w1
  System_Nullable_int__o v5; // x0
  System_Nullable_int__o v7; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C378B5 & 1) == 0 )
  {
    this = (EventCampaignMaster___c_o *)sub_1C32C20(&Method_System_Nullable_int___ctor__);
    byte_4C378B5 = 1;
  }
  if ( !x )
    sub_1C32E7C(this);
  priority = x->fields.priority;
  v5 = (System_Nullable_int__o)&v7;
  v7 = 0;
  System_Nullable_int____ctor(v5, priority, (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
  return v7;
}


void EventCampaignMaster___c__DisplayClass11_0___ctor(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCampaignMaster___c__DisplayClass11_0___GetQuestUseItemEventCampaignsByItemId_b__0(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster___c__DisplayClass11_0_o *v4; // x19
  System_Int32_array *targetIds; // x20
  System_Func_int__bool__o *_9__1; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4C378B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    this = (EventCampaignMaster___c__DisplayClass11_0_o *)sub_1C32C20(&Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__);
    byte_4C378B6 = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
  if ( entity->fields.target != v4->fields.target )
    return 0;
  targetIds = entity->fields.targetIds;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  return BasicHelper__Any_int__51143952(
           targetIds,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
}


bool EventCampaignMaster___c__DisplayClass11_0___GetQuestUseItemEventCampaignsByItemId_b__1(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.itemId == id;
}


void EventCampaignMaster___c__DisplayClass17_0___ctor(
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCampaignMaster___c__DisplayClass17_0___IsOverrideEntryCondMessage_b__0(
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0 )
    sub_1C32E7C(this);
  return x->fields.target == entity->fields.target
      && x->fields.groupId == entity->fields.groupId
      && x->fields.priority < entity->fields.priority;
}
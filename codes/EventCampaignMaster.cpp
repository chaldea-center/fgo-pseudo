void EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56C57 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
    byte_4C56C57 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    87,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  EventCampaignMaster___c_c *v3; // x0
  System_Func_object__int__o *_9__16_0; // x20
  Il2CppObject *v5; // x21
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Func_object__object__o *_9__16_1; // x21
  Il2CppObject *v10; // x22
  struct EventCampaignMaster___c_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Linq_ILookup_TKey__TElement__o *v14; // x0
  EventCampaignMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__object__o *_9__16_2; // x20
  Il2CppObject *v18; // x21
  struct EventCampaignMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4C56C54 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    sub_1C3E564(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    sub_1C3E564(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C3E564(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__);
    sub_1C3E564(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__);
    sub_1C3E564(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__);
    sub_1C3E564(&EventCampaignMaster___c_TypeInfo);
    byte_4C56C54 = 1;
  }
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  v3 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v3->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventCampaignMaster___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_0, v5, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, 0);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v7, v8);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__object__o *)v3->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = EventCampaignMaster___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_1 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__16_1,
      v10,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
      0);
    v11 = EventCampaignMaster___c_TypeInfo->static_fields;
    v11->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v11->__9__16_1, (int32_t)_9__16_1, v12, v13);
  }
  v14 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (System_Func_TSource__TElement__o *)_9__16_1,
          (const MethodInfo_313E29C *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
  v15 = EventCampaignMaster___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v15 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_2 = (System_Func_object__object__o *)v15->static_fields->__9__16_2;
  if ( !_9__16_2 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = EventCampaignMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__16_2 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__16_2,
      v18,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
      0);
    v19 = EventCampaignMaster___c_TypeInfo->static_fields;
    v19->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
    sub_1C3E508((CGThumbnailListItem_o *)&v19->__9__16_2, (int32_t)_9__16_2, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v16,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                               (const MethodInfo_3133008 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v22,
                                                                     (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetAddPassiveCampaigns(
        EventCampaignMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 38, 7, nowTime, v3);
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
  const MethodInfo *v11; // x1
  EventMaster_o *v12; // x24
  int32_t Count; // w0
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

  if ( (byte_4C56C52 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56C52 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_19;
  v12 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
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
                   (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v17 = (Il2CppObject *)Instance;
        if ( *((_DWORD *)Instance + 5) == campaignTarget )
        {
          if ( !v12 )
            break;
          Instance = (void *)EventMaster__IsEnableEvent(v12, *((_DWORD *)Instance + 4), eventType, nowTime, v16);
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
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v23[4] = (Il2CppClass *)v17;
              sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v17, v18, v19);
            }
          }
        }
      }
      if ( v14 == ++v15 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                 v11);
    }
LABEL_19:
    sub_1C3E7C0(Instance, v11);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v9, v11);
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
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  Il2CppObject *v8; // x0
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

  if ( (byte_4C56C4E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56C4E = 1;
  }
  v28 = 0;
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_37;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v9 = (EventCampaignReleaseMaster_o *)v8;
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
                            (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
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
                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            if ( (LODWORD(entity[1].monitor) | 8) == 0xD )
            {
              monitor = entity[6].monitor;
              if ( (__int64)monitor >= 1 && (__int64)monitor >= v6 && (__int64)entity[5].monitor <= v6 )
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
                    v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v10,
                      (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
                      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v24 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v24[4] = (Il2CppClass *)v13;
                    sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), v13, v16, v17);
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
                 v4);
    }
LABEL_37:
    sub_1C3E7C0(Instance, v4);
  }
  v10 = 0;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v10, v4);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *EventCampaignMaster__GetCombineEventCampaigns_41993896(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventCampaignEntity_o *current; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t target; // w25
  Il2CppObject *Item; // x0
  __int64 v15; // x1
  int32_t value; // w25
  Il2CppObject *v17; // x0
  const MethodInfo *v18; // x1
  int32_t v19; // w8
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *v28; // x21
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  char v43; // w25
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x1
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  __int64 v56; // x0
  const MethodInfo *v57; // x1
  Il2CppObject *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x1
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x0
  __int64 v67; // x1
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C56C50 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
    byte_4C56C50 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_1C3E7C0(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v71 = v69;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v71,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1C3E7C0(v7, v8);
    current = (EventCampaignEntity_o *)v71.fields._current;
    if ( v4->fields._size <= 0 )
    {
      v28 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v28,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_1C3E7C0(v29, v30);
      v31 = (Il2CppObject *)EventCampaignEntity__Clone(current, v30);
      v34 = v31;
      if ( !v28 )
        sub_1C3E7C0(v31, v31);
      items = v28->fields._items;
      v36 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        sub_1C3E7C0(v31, v31);
      size = v28->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          v31,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v34;
        sub_1C3E508((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v34, v32, v33);
      }
      v52 = v4->fields._items;
      v53 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v4->fields._version;
      if ( !v52 )
        sub_1C3E7C0(v39, v40);
      v54 = v4->fields._size;
      if ( (unsigned int)v54 < LODWORD(v52->max_length) )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v28,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v69,
        v4,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v70 = v69;
      do
      {
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v70,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v10 )
          {
            v43 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_1C3E7C0(v10, v11);
          v12 = (System_Collections_Generic_List_object__o *)v70.fields._current;
          if ( !v70.fields._current )
            sub_1C3E7C0(v10, v11);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v70.fields._current,
                   0,
                   (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_1C3E7C0(0, v15);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v19 = current->fields.target;
          if ( v19 == 2 )
          {
            v20 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v20 )
              sub_1C3E7C0(0, v21);
            if ( HIDWORD(v20[1].klass) == 27 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 27 )
          {
            v22 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v22 )
              sub_1C3E7C0(0, v23);
            if ( HIDWORD(v22[1].klass) == 2 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 4 )
          {
            v24 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v24 )
              sub_1C3E7C0(0, v25);
            if ( HIDWORD(v24[1].klass) == 32 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 32 )
          {
            v26 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v26 )
              sub_1C3E7C0(0, v27);
            if ( HIDWORD(v26[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v17 = System_Collections_Generic_List_object___get_Item(
                v12,
                0,
                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v17 )
          sub_1C3E7C0(0, v18);
      }
      while ( value != LODWORD(v17[3].klass) );
      v44 = (Il2CppObject *)EventCampaignEntity__Clone(current, v18);
      v47 = v44;
      v48 = v12->fields._items;
      v49 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v12->fields._version;
      if ( !v48 )
        sub_1C3E7C0(v44, v44);
      v50 = v12->fields._size;
      if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v44,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &v48->obj.klass + v50;
        v12->fields._size = v50 + 1;
        v51[4] = (Il2CppClass *)v47;
        sub_1C3E508((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v47, v45, v46);
      }
      v43 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v70,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v43 & 1) == 0 )
      {
        v28 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v28,
          (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_1C3E7C0(v56, v57);
        v58 = (Il2CppObject *)EventCampaignEntity__Clone(current, v57);
        v61 = v58;
        if ( !v28 )
          sub_1C3E7C0(v58, v58);
        v62 = v28->fields._items;
        v63 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v28->fields._version;
        if ( !v62 )
          sub_1C3E7C0(v58, v58);
        v64 = v28->fields._size;
        if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            v58,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v28->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v61;
          sub_1C3E508((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
        }
        v52 = v4->fields._items;
        v53 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v4->fields._version;
        if ( !v52 )
          sub_1C3E7C0(v66, v67);
        v54 = v4->fields._size;
        if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
          goto LABEL_58;
LABEL_45:
        v55 = &v52->obj.klass + v54;
        v4->fields._size = v54 + 1;
        v55[4] = (Il2CppClass *)v28;
        sub_1C3E508((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v28, v41, v42);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_4C56C58 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
    byte_4C56C58 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_33B7A10 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
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
  const MethodInfo *v6; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v8; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v10; // x24
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

  if ( (byte_4C56C4F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56C4F = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_38;
  v8 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
                            (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
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
                       (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_38;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v8 || (__int64)entity[5].monitor > v8 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_38;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v8 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_38;
              v15 = entity[6].monitor;
              if ( (__int64)v15 < 1 || (__int64)v15 <= v8 || (__int64)entity[5].monitor >= v8 )
                continue;
            }
            if ( !v10 )
              goto LABEL_38;
            items = v10->fields._items;
            v18 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v10->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v12,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              v20 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v20[4] = (Il2CppClass *)v12;
              sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v13, v14);
            }
          }
        }
      }
    }
    while ( Count != ++v11 );
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v10,
                        v6);
  if ( !Instance )
LABEL_38:
    sub_1C3E7C0(Instance, v6);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


System_Collections_Generic_List_EventCampaignEntity__o *EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v8; // x22
  int32_t Count; // w0
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

  if ( (byte_4C56C51 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_IndexOf_int___);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C56C51 = 1;
  }
  entity = 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0);
  if ( !this->fields.list )
    goto LABEL_29;
  v8 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
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
               (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        if ( HIDWORD(Item[1].klass) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       (System_Int32_array *)Item[2].monitor,
                       gachaId,
                       (const MethodInfo_3200C2C *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         (int32_t)v14[1].klass,
                         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1 && (__int64)entity[5].monitor <= v8 && v8 <= (__int64)entity[6].klass )
              {
                if ( !v11 )
                {
                  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v11,
                    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
                    *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
                }
                else
                {
                  v20 = &items->obj.klass + size;
                  v11->fields._size = size + 1;
                  v20[4] = (Il2CppClass *)v14;
                  sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
                }
              }
            }
          }
        }
      }
      if ( v10 == ++v12 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v11,
                 v6);
    }
LABEL_29:
    sub_1C3E7C0(Instance, v6);
  }
  v11 = 0;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v11, v6);
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
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_4C56C53 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C3E564(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C3E564(&Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__);
    sub_1C3E564(&EventCampaignMaster___c__DisplayClass11_0_TypeInfo);
    byte_4C56C53 = 1;
  }
  v7 = sub_1C3E7B0(EventCampaignMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C3E7C0(v8, v9);
  *(_DWORD *)(v7 + 16) = campaignTarget;
  *(_DWORD *)(v7 + 20) = itemId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventCampaignEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v12,
                                                                     (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


EventCampaignEntity_array *EventCampaignMaster__GetTargetEntitiyAllList(
        EventCampaignMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C56C4B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_4C56C4B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( list )
      {
        v6 = list;
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
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v6;
            sub_1C3E508((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3E7C0(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_4C56C55 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C56C55 = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
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
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject **v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *v15; // x1
  const MethodInfo *v16; // x3
  System_String_o *EventName; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  System_Func_object__bool__o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x22
  EventCampaignMaster___c_c *v24; // x8
  System_Func_T__TResult__o *_9__18_1; // x23
  Il2CppObject *v26; // x24
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  Il2CppObject *v31; // x0
  const MethodInfo *v32; // x3
  Il2CppObject *v34; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C56C56 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
    sub_1C3E564(&System_Func_EventCampaignEntity__bool__TypeInfo);
    sub_1C3E564(&System_Func_EventCampaignEntity__Nullable_int___TypeInfo);
    sub_1C3E564(&Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__18_1__);
    sub_1C3E564(&Method_EventCampaignMaster___c__DisplayClass18_0__IsOverrideEntryCondMessage_b__0__);
    sub_1C3E564(&EventCampaignMaster___c__DisplayClass18_0_TypeInfo);
    sub_1C3E564(&EventCampaignMaster___c_TypeInfo);
    byte_4C56C56 = 1;
  }
  entitya = 0;
  v34 = 0;
  v7 = sub_1C3E7B0(EventCampaignMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_33;
  *(_QWORD *)(v7 + 16) = entity;
  v12 = (Il2CppObject **)(v7 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)entity, v10, v11);
  if ( !*(_QWORD *)(v7 + 16) )
    goto LABEL_33;
  v15 = *(System_String_o **)(*(_QWORD *)(v7 + 16) + 64LL);
  *message = v15;
  sub_1C3E508((CGThumbnailListItem_o *)message, (int32_t)v15, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  if ( !*v12 || !Master_object )
    goto LABEL_33;
  if ( !EventCampaignReleaseMaster__isRelease(
          (EventCampaignReleaseMaster_o *)Master_object,
          (int32_t)(*v12)[1].klass,
          HIDWORD((*v12)[1].klass),
          v16) )
  {
    Master_object = *v12;
    if ( *v12 )
    {
      if ( !EventCampaignEntity__IsNotDispEntryCondMessage((EventCampaignEntity_o *)Master_object, v9) )
        return 0;
      list = this->fields.list;
      v22 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v7,
        Method_EventCampaignMaster___c__DisplayClass18_0__IsOverrideEntryCondMessage_b__0__,
        0);
      v23 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)list,
              (System_Func_TSource__bool__o *)v22,
              (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v24 = EventCampaignMaster___c_TypeInfo;
      if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
        v24 = EventCampaignMaster___c_TypeInfo;
      }
      _9__18_1 = (System_Func_T__TResult__o *)v24->static_fields->__9__18_1;
      if ( !_9__18_1 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          v24 = EventCampaignMaster___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__18_1 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_EventCampaignEntity__Nullable_int___TypeInfo);
        System_Func_object__Nullable_int_____ctor(
          _9__18_1,
          v26,
          Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__18_1__,
          0);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
        static_fields->__9__18_1 = (struct System_Func_EventCampaignEntity__Nullable_int___o *)_9__18_1;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__18_1, (int32_t)_9__18_1, v28, v29);
      }
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Nullable_int__(
                                                                   v23,
                                                                   (System_Func_TSource__TKey__o *)_9__18_1,
                                                                   (const MethodInfo_3129748 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____);
      v31 = System_Linq_Enumerable__FirstOrDefault_object_(
              v30,
              (const MethodInfo_3122250 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
      if ( v31 )
        return EventCampaignMaster__IsOverrideEntryCondMessage(this, message, (EventCampaignEntity_o *)v31, v32);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
      if ( *v12 && Master_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                &v34,
                (int32_t)(*v12)[1].klass,
                (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          return 0;
        Master_object = v34;
        if ( v34 )
          goto LABEL_16;
      }
    }
LABEL_33:
    sub_1C3E7C0(Master_object, v9);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !*v12 || !Master_object )
    goto LABEL_33;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entitya,
          (int32_t)(*v12)[1].klass,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entitya;
  if ( !entitya )
    goto LABEL_33;
LABEL_16:
  EventName = EventEntity__getEventName((EventEntity_o *)Master_object, v9);
  *message = EventName;
  sub_1C3E508((CGThumbnailListItem_o *)message, (int32_t)EventName, v18, v19);
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

  if ( (byte_4C56C59 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
    byte_4C56C59 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  EventCampaignEntity_o *v17; // x21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4C56C4C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    byte_4C56C4C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3E7C0(0, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_EventCampaignEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v17 = (EventCampaignEntity_o *)v16;
    if ( v16 && *(_DWORD *)(v16 + 16) == event_id )
      goto LABEL_22;
  }
  v17 = 0;
LABEL_22:
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_26:
    v21 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  return v17;
}


EventCampaignEntity_array *EventCampaignMaster__getData_41990972(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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

  if ( (byte_4C56C4D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_4C56C4D = 1;
  }
  if ( !eventEntityList )
    return 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_334C3C8 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
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
                                                                 (const MethodInfo_334C458 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( !list )
        break;
      v8 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v15 = 0;
        while ( 1 )
        {
          if ( LODWORD(eventEntityList->max_length) == v15 )
            sub_1C3E7C8(list, list);
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
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v20[4] = (Il2CppClass *)v8;
          sub_1C3E508((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v8, v13, v14);
        }
      }
LABEL_22:
      if ( ++v12 == v11 )
        goto LABEL_23;
    }
LABEL_28:
    sub_1C3E7C0(list, v8);
  }
LABEL_23:
  if ( !v7 )
    goto LABEL_28;
  if ( v7->fields._size < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v7,
                                                             v8);
  if ( !list )
    goto LABEL_28;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C56C5A & 1) == 0 )
  {
    sub_1C3E564(&EventCampaignMaster___c_TypeInfo);
    byte_4C56C5A = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)EventCampaignMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void EventCampaignMaster___c___ctor(EventCampaignMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventCampaignMaster___c___CheckCampaignGrouping_b__16_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields.groupId;
}


EventCampaignEntity_o *EventCampaignMaster___c___CheckCampaignGrouping_b__16_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *EventCampaignMaster___c___CheckCampaignGrouping_b__16_2(
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
  System_Func_object__int__o *_9__16_3; // x21
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

  if ( (byte_4C56C5B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_First_EventCampaignEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1C3E564(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1C3E564(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1C3E564(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__);
    this = (EventCampaignMaster___c_o *)sub_1C3E564(&EventCampaignMaster___c_TypeInfo);
    byte_4C56C5B = 1;
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
    v7 = sub_1C8ED7C(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))v7)(
          x,
          *(_QWORD *)(v7 + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v9 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v9 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_3 = (System_Func_object__int__o *)v9->static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = EventCampaignMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__16_3 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_3, v11, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, 0);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__16_3, (int32_t)_9__16_3, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v15,
                                        (const MethodInfo_3120424 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v8
    || (items = v8->fields._items,
        v19 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_24:
    sub_1C3E7C0(this, x);
  }
  size = v8->fields._size;
  v21 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)this,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_1C3E508((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v8;
}


int32_t EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C3E7C0(this, 0);
  return y->fields.priority;
}


System_Nullable_int__o EventCampaignMaster___c___IsOverrideEntryCondMessage_b__18_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  int32_t priority; // w1
  System_Nullable_int__o v5; // x0
  System_Nullable_int__o v7; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C56C5C & 1) == 0 )
  {
    this = (EventCampaignMaster___c_o *)sub_1C3E564(&Method_System_Nullable_int___ctor__);
    byte_4C56C5C = 1;
  }
  if ( !x )
    sub_1C3E7C0(this, x);
  priority = x->fields.priority;
  v5 = (System_Nullable_int__o)&v7;
  v7 = 0;
  System_Nullable_int____ctor(v5, priority, (const MethodInfo_38DABE0 *)Method_System_Nullable_int___ctor__);
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
  if ( (byte_4C56C5D & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Any_int____78187928);
    sub_1C3E564(&System_Func_int__bool__TypeInfo);
    this = (EventCampaignMaster___c__DisplayClass11_0_o *)sub_1C3E564(&Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__);
    byte_4C56C5D = 1;
  }
  if ( !entity )
    sub_1C3E7C0(this, entity);
  if ( entity->fields.target != v4->fields.target )
    return 0;
  targetIds = entity->fields.targetIds;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1C3E7B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  return BasicHelper__Any_int__51260304(
           targetIds,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_30E2B90 *)Method_BasicHelper_Any_int____78187928);
}


bool EventCampaignMaster___c__DisplayClass11_0___GetQuestUseItemEventCampaignsByItemId_b__1(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.itemId == id;
}


void EventCampaignMaster___c__DisplayClass18_0___ctor(
        EventCampaignMaster___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventCampaignMaster___c__DisplayClass18_0___IsOverrideEntryCondMessage_b__0(
        EventCampaignMaster___c__DisplayClass18_0_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0 )
    sub_1C3E7C0(this, x);
  return x->fields.target == entity->fields.target
      && x->fields.groupId == entity->fields.groupId
      && x->fields.priority < entity->fields.priority;
}
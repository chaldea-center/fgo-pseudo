void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B061 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
    byte_4A5B061 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    83,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  EventCampaignMaster___c_c *v3; // x0
  System_Func_object__int__o *_9__16_0; // x20
  Il2CppObject *v5; // x21
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Func_object__object__o *_9__16_1; // x21
  Il2CppObject *v10; // x22
  struct EventCampaignMaster___c_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Linq_ILookup_TKey__TElement__o *v14; // x0
  EventCampaignMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__object__o *_9__16_2; // x20
  Il2CppObject *v18; // x21
  struct EventCampaignMaster___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4A5B06A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
    sub_1B885B0(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    sub_1B885B0(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1B885B0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__);
    sub_1B885B0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__);
    sub_1B885B0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__);
    sub_1B885B0(&EventCampaignMaster___c_TypeInfo);
    byte_4A5B06A = 1;
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
    _9__16_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_0, v5, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v7, v8);
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
    _9__16_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__16_1,
      v10,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
      0LL);
    v11 = EventCampaignMaster___c_TypeInfo->static_fields;
    v11->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->__9__16_1, (int32_t)_9__16_1, v12, v13);
  }
  v14 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (System_Func_TSource__TElement__o *)_9__16_1,
          (const MethodInfo_2EBC2E8 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
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
    _9__16_2 = (System_Func_object__object__o *)sub_1B887FC(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__16_2,
      v18,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
      0LL);
    v19 = EventCampaignMaster___c_TypeInfo->static_fields;
    v19->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->__9__16_2, (int32_t)_9__16_2, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v16,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                               (const MethodInfo_2EB2990 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v22,
                                                                     (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableEventCampaign(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v11; // x1
  EventMaster_o *v12; // x24
  int32_t Count; // w0
  int32_t v14; // w25
  int32_t v15; // w26
  const MethodInfo *v16; // x4
  Il2CppObject *v17; // x27
  __int64 methodPtr_low; // x10
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4A5B069 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&EventCampaignEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B069 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v12 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v15,
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v17 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventCampaignEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
          && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == campaignTarget )
        {
          if ( !v12 )
            break;
          Instance = (DataManager_o *)EventMaster__IsEnableEvent(
                                        v12,
                                        Instance->fields.m_CachedPtr,
                                        eventType,
                                        nowTime,
                                        v16);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v9 )
              break;
            items = v9->fields._items;
            v22 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v9->fields._version;
            if ( !items )
              break;
            size = v9->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                v17,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v17;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v17, v19, v20);
            }
          }
        }
      }
      if ( v14 == ++v15 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v9,
                 v11);
    }
LABEL_21:
    sub_1B8880C(Instance, v11);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v9, v11);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 30, 7, 0LL, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetCombineEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v6; // x27
  int32_t Count; // w22
  Il2CppObject *v8; // x0
  EventCampaignReleaseMaster_o *v9; // x28
  System_Collections_Generic_List_object__o *v10; // x25
  int32_t v11; // w24
  int64_t v12; // x26
  __int64 methodPtr_low; // x10
  unsigned int v14; // w8
  const MethodInfo *v15; // x5
  void *monitor; // x9
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t condTargetId; // w1
  int32_t condType; // w10
  int64_t condNum; // x2
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int32_t v27; // [xsp+Ch] [xbp-84h]
  int64_t condValue; // [xsp+10h] [xbp-80h]
  int32_t targetId; // [xsp+1Ch] [xbp-74h]
  EventCampaignReleaseEntity_o *v30; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A5B065 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&EventCampaignEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B065 = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_39;
  v6 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v9 = (EventCampaignReleaseMaster_o *)v8;
    v10 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v11,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo )
        {
          v14 = *(_DWORD *)(Instance + 20);
          if ( v14 <= 0x20 && ((1LL << v14) & 0x108000014LL) != 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *(_DWORD *)(Instance + 16),
                         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity[1].monitor) | 8) == 13 )
              {
                monitor = entity[6].monitor;
                if ( (__int64)monitor >= 1 && (__int64)monitor >= v6 && (__int64)entity[5].monitor <= v6 )
                {
                  if ( !v9 )
                    break;
                  Instance = EventCampaignReleaseMaster__TryGetEntity(
                               v9,
                               &v30,
                               *(_DWORD *)(v12 + 16),
                               *(_DWORD *)(v12 + 20),
                               *(_DWORD *)(v12 + 24),
                               v15);
                  if ( (Instance & 1) == 0 )
                    goto LABEL_42;
                  if ( !v30 )
                    break;
                  condType = v30->fields.condType;
                  condTargetId = v30->fields.condTargetId;
                  condNum = v30->fields.condNum;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v30->fields.condTargetId;
                    condValue = v30->fields.condNum;
                    v27 = v30->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    condType = v27;
                    condNum = condValue;
                    condTargetId = targetId;
                  }
                  Instance = CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
LABEL_42:
                    if ( !v10 )
                    {
                      v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v10,
                        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v10 )
                        break;
                    }
                    items = v10->fields._items;
                    v23 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                    ++v10->fields._version;
                    if ( !items )
                      break;
                    size = v10->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v10,
                        (Il2CppObject *)v12,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v25 = &items->obj.klass + size;
                      v10->fields._size = size + 1;
                      v25[4] = (Il2CppClass *)v12;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), v12, v17, v18);
                    }
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
LABEL_39:
    sub_1B8880C(Instance, v4);
  }
  v10 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v10, v4);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_39095772(
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
  int32_t v33; // w3
  Il2CppObject *v34; // x1
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  char v43; // w25
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
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
  int32_t v60; // w3
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

  if ( (byte_4A5B067 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
    byte_4A5B067 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  memset(&v70, 0, sizeof(v70));
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_1B8880C(v5, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v69,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v71 = v69;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v71,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v7 )
      break;
    if ( !v4 )
      sub_1B8880C(v7, v8);
    current = (EventCampaignEntity_o *)v71.fields._current;
    if ( v4->fields._size <= 0 )
    {
      v28 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v28,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_1B8880C(v29, v30);
      v31 = (Il2CppObject *)EventCampaignEntity__Clone(current, v30);
      v34 = v31;
      if ( !v28 )
        sub_1B8880C(v31, v31);
      items = v28->fields._items;
      v36 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        sub_1B8880C(v31, v31);
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          v31,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v34;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v34, v32, v33);
      }
      v52 = v4->fields._items;
      v53 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v4->fields._version;
      if ( !v52 )
        sub_1B8880C(v39, v40);
      v54 = v4->fields._size;
      if ( (unsigned int)v54 < v52->max_length )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)v28,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v69,
        v4,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v70 = v69;
      do
      {
        while ( 1 )
        {
          v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v70,
                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v10 )
          {
            v43 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_1B8880C(v10, v11);
          v12 = (System_Collections_Generic_List_object__o *)v70.fields._current;
          if ( !v70.fields._current )
            sub_1B8880C(v10, v11);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v70.fields._current,
                   0,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_1B8880C(0LL, v15);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v19 = current->fields.target;
          if ( v19 == 2 )
          {
            v20 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v20 )
              sub_1B8880C(0LL, v21);
            if ( HIDWORD(v20[1].klass) == 27 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 27 )
          {
            v22 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v22 )
              sub_1B8880C(0LL, v23);
            if ( HIDWORD(v22[1].klass) == 2 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 4 )
          {
            v24 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v24 )
              sub_1B8880C(0LL, v25);
            if ( HIDWORD(v24[1].klass) == 32 )
              break;
            v19 = current->fields.target;
          }
          if ( v19 == 32 )
          {
            v26 = System_Collections_Generic_List_object___get_Item(
                    v12,
                    0,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v26 )
              sub_1B8880C(0LL, v27);
            if ( HIDWORD(v26[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v17 = System_Collections_Generic_List_object___get_Item(
                v12,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v17 )
          sub_1B8880C(0LL, v18);
      }
      while ( value != LODWORD(v17[3].klass) );
      v44 = (Il2CppObject *)EventCampaignEntity__Clone(current, v18);
      v47 = v44;
      v48 = v12->fields._items;
      v49 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v12->fields._version;
      if ( !v48 )
        sub_1B8880C(v44, v44);
      v50 = v12->fields._size;
      if ( (unsigned int)v50 >= v48->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          v44,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &v48->obj.klass + v50;
        v12->fields._size = v50 + 1;
        v51[4] = (Il2CppClass *)v47;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v47, v45, v46);
      }
      v43 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v70,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v43 & 1) == 0 )
      {
        v28 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v28,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_1B8880C(v56, v57);
        v58 = (Il2CppObject *)EventCampaignEntity__Clone(current, v57);
        v61 = v58;
        if ( !v28 )
          sub_1B8880C(v58, v58);
        v62 = v28->fields._items;
        v63 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v28->fields._version;
        if ( !v62 )
          sub_1B8880C(v58, v58);
        v64 = v28->fields._size;
        if ( (unsigned int)v64 >= v62->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v28,
            v58,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
        }
        else
        {
          v65 = &v62->obj.klass + v64;
          v28->fields._size = v64 + 1;
          v65[4] = (Il2CppClass *)v61;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
        }
        v52 = v4->fields._items;
        v53 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v4->fields._version;
        if ( !v52 )
          sub_1B8880C(v66, v67);
        v54 = v4->fields._size;
        if ( (unsigned int)v54 >= v52->max_length )
          goto LABEL_58;
LABEL_45:
        v55 = &v52->obj.klass + v54;
        v4->fields._size = v54 + 1;
        v55[4] = (Il2CppClass *)v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 4), (int32_t)v28, v41, v42);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v71,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v4;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__GetEntity(
        EventCampaignMaster_o *this,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B05F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
    byte_4A5B05F = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetExchangeSvtCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 34, 7, 0LL, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetExchangeSvtCombineExpCampaign(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 27, 5, 0LL, v2);
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__GetFriendPointCampaigns(
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
  __int64 methodPtr_low; // x10
  int32_t v14; // w2
  int32_t v15; // w3
  void *v16; // x9
  void *monitor; // x9
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B066 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&EventCampaignEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B066 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_40;
  v8 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_40;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v11,
                            (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo
          && *(_DWORD *)(Instance + 20) == 24 )
        {
          if ( !MasterData_object )
            goto LABEL_40;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_40;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v8 || (__int64)entity[5].monitor > v8 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_40;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v8 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_40;
              v16 = entity[6].monitor;
              if ( (__int64)v16 < 1 || (__int64)v16 <= v8 || (__int64)entity[5].monitor >= v8 )
                continue;
            }
            if ( !v10 )
              goto LABEL_40;
            items = v10->fields._items;
            v19 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_40;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v12,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v12;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v14, v15);
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
LABEL_40:
    sub_1B8880C(Instance, v6);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
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
  System_Int32_array **Item; // x0
  System_Int32_array **v14; // x26
  __int64 methodPtr_low; // x10
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5B068 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&EventCampaignEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B068 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v8 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = (System_Int32_array **)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      v12,
                                      (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = Item;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE((*Item)->m_Items[69]) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)&(*Item)->m_Items[43] + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo
          && *((_DWORD *)Item + 5) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       Item[5],
                       gachaId,
                       (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *((_DWORD *)v14 + 4),
                         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1 && (__int64)entity[5].monitor <= v8 && v8 <= (__int64)entity[6].klass )
              {
                if ( !v11 )
                {
                  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v11,
                    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v11 )
                    break;
                }
                items = v11->fields._items;
                v19 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v11->fields._version;
                if ( !items )
                  break;
                size = v11->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v11,
                    (Il2CppObject *)v14,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
                }
                else
                {
                  v21 = &items->obj.klass + size;
                  v11->fields._size = size + 1;
                  v21[4] = (Il2CppClass *)v14;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
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
LABEL_31:
    sub_1B8880C(Instance, v6);
  }
  v11 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v11, v6);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendshipUpCampaigns(
        EventCampaignMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 31, 7, nowTime, v3);
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__GetTargetEntitiyAllList(
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
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5B062 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventCampaignEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_4A5B062 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
          && HIDWORD(list->fields.items) == targetType )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCampaignMaster__IsEnableServant(
        EventCampaignMaster_o *this,
        int32_t svtId,
        int32_t eventId,
        const MethodInfo *method)
{
  EventCampaignEntity_o *Data; // x0
  EventCampaignEntity_o *v8; // x20

  if ( (byte_4A5B06B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A5B06B = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0LL)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
  }
  return (char)Data;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventCampaignMaster__TryGetEntity(
        EventCampaignMaster_o *this,
        EventCampaignEntity_o **entity,
        int32_t eventId,
        int32_t target,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B060 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
    byte_4A5B060 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__getData(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  EventCampaignEntity_o *v16; // x0
  EventCampaignEntity_o *v17; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4A5B063 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&EventCampaignEntity_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5B063 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v16 = (EventCampaignEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                                     Enumerator,
                                     *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( v16 )
    {
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventCampaignEntity_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
        && v16->fields.eventId == event_id )
      {
        goto LABEL_24;
      }
    }
  }
  v17 = 0LL;
LABEL_24:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_28;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_28:
    v22 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v17;
}


EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_39092640(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  signed int max_length; // w25
  int v11; // w23
  int32_t v12; // w24
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 methodPtr_low; // x10
  int v16; // w10
  EventEntity_o *v17; // x11
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5B064 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventCampaignEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    byte_4A5B064 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = (const MethodInfo *)list;
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v16 = 0;
        while ( 1 )
        {
          if ( eventEntityList->max_length == v16 )
            sub_1B88814(list, list);
          v17 = eventEntityList->m_Items[v16];
          if ( !v17 )
            goto LABEL_30;
          if ( LODWORD(list->fields.items) == v17->fields.id )
            break;
          if ( max_length == ++v16 )
            goto LABEL_24;
        }
        if ( !v7 )
          break;
        items = v7->fields._items;
        v19 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v8;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v8, v13, v14);
        }
      }
LABEL_24:
      if ( ++v12 == v11 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1B8880C(list, v8);
  }
LABEL_25:
  if ( !v7 )
    goto LABEL_30;
  if ( v7->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v7,
                                                             v8);
  if ( !list )
    goto LABEL_30;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B06C & 1) == 0 )
  {
    sub_1B885B0(&EventCampaignMaster___c_TypeInfo);
    byte_4A5B06C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)EventCampaignMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall EventCampaignMaster___c___ctor(EventCampaignMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.groupId;
}


EventCampaignEntity_o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_2(
        EventCampaignMaster___c_o *this,
        System_Linq_IGrouping_int__EventCampaignEntity__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_List_object__o *v8; // x20
  EventCampaignMaster___c_c *v9; // x0
  System_Func_object__int__o *_9__16_3; // x21
  Il2CppObject *v11; // x22
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  EventCampaignMaster___c_o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4A5B06D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_First_EventCampaignEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
    sub_1B885B0(&System_Func_EventCampaignEntity__int__TypeInfo);
    sub_1B885B0(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
    sub_1B885B0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__);
    this = (EventCampaignMaster___c_o *)sub_1B885B0(&EventCampaignMaster___c_TypeInfo);
    byte_4A5B06D = 1;
  }
  if ( !x )
    goto LABEL_24;
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
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
    _9__16_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__16_3, v11, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_3, (int32_t)_9__16_3, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v15,
                                        (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v8
    || (items = v8->fields._items,
        v19 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_24:
    sub_1B8880C(this, x);
  }
  size = v8->fields._size;
  v21 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)this,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v21;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v8;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1B8880C(this, 0LL);
  return y->fields.priority;
}
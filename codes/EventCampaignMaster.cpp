void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC313 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__, method);
    byte_49FC313 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    83,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
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
  __int64 v12; // x1
  __int64 v13; // x1
  EventCampaignMaster___c_c *v14; // x0
  System_Func_object__int__o *_9__16_0; // x20
  Il2CppObject *v16; // x21
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Func_object__object__o *_9__16_1; // x21
  Il2CppObject *v21; // x22
  struct EventCampaignMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Linq_ILookup_TKey__TElement__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  EventCampaignMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_object__object__o *_9__16_2; // x20
  Il2CppObject *v31; // x21
  struct EventCampaignMaster___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_49FC31C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___,
      method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___, v5);
    sub_1B640C8(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo, v6);
    sub_1B640C8(&System_Func_EventCampaignEntity__int__TypeInfo, v7);
    sub_1B640C8(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v9);
    sub_1B640C8(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, v10);
    sub_1B640C8(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__, v11);
    sub_1B640C8(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__, v12);
    sub_1B640C8(&EventCampaignMaster___c_TypeInfo, v13);
    byte_49FC31C = 1;
  }
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  v14 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v14 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v14->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = EventCampaignMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventCampaignEntity__int__TypeInfo, method, v2);
    System_Func_object__int____ctor(_9__16_0, v16, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v18, v19);
    v14 = EventCampaignMaster___c_TypeInfo;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__object__o *)v14->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = EventCampaignMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v14->static_fields->__9;
    _9__16_1 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo,
                                                  method,
                                                  v2);
    System_Func_object__object____ctor(
      _9__16_1,
      v21,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
      0LL);
    v22 = EventCampaignMaster___c_TypeInfo->static_fields;
    v22->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->__9__16_1, (int32_t)_9__16_1, v23, v24);
  }
  v25 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (System_Func_TSource__TElement__o *)_9__16_1,
          (const MethodInfo_2E75308 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
  v28 = EventCampaignMaster___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v28 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_2 = (System_Func_object__object__o *)v28->static_fields->__9__16_2;
  if ( !_9__16_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = EventCampaignMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__16_2 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo,
                                                  v26,
                                                  v27);
    System_Func_object__object____ctor(
      _9__16_2,
      v31,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
      0LL);
    v32 = EventCampaignMaster___c_TypeInfo->static_fields;
    v32->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v32->__9__16_2, (int32_t)_9__16_2, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v29,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                               (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v35,
                                                                     (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableEventCampaign(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t eventType,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x23
  DataManager_o *Instance; // x0
  EventMaster_o *v18; // x24
  int32_t Count; // w0
  const MethodInfo *v20; // x1
  int32_t v21; // w25
  int32_t v22; // w26
  const MethodInfo *v23; // x4
  Il2CppObject *v24; // x27
  __int64 methodPtr_low; // x10
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_49FC31B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&campaignTarget);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1B640C8(&EventCampaignEntity_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FC31B = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       *(_QWORD *)&campaignTarget,
                                                       *(_QWORD *)&eventType);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v18 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v22,
                                    (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventCampaignEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
          && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == campaignTarget )
        {
          if ( !v18 )
            break;
          Instance = (DataManager_o *)EventMaster__IsEnableEvent(
                                        v18,
                                        Instance->fields.m_CachedPtr,
                                        eventType,
                                        nowTime,
                                        v23);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v29 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v24,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
            }
          }
        }
      }
      if ( v21 == ++v22 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v16,
                 v20);
    }
LABEL_21:
    sub_1B64324(Instance);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v16, v20);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  __int64 v16; // x27
  int32_t Count; // w22
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x1
  EventCampaignReleaseMaster_o *v20; // x28
  System_Collections_Generic_List_object__o *v21; // x25
  int32_t v22; // w24
  int64_t v23; // x26
  __int64 methodPtr_low; // x10
  unsigned int v25; // w8
  const MethodInfo *v26; // x5
  void *monitor; // x9
  __int64 v28; // x2
  int32_t v29; // w3
  int32_t condTargetId; // w1
  int32_t condType; // w10
  int64_t condNum; // x2
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v38; // [xsp+Ch] [xbp-84h]
  int64_t condValue; // [xsp+10h] [xbp-80h]
  int32_t targetId; // [xsp+1Ch] [xbp-74h]
  EventCampaignReleaseEntity_o *v41; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49FC317 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&EventCampaignEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_1B640C8(&NetworkManager_TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FC317 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_39;
  v16 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v20 = (EventCampaignReleaseMaster_o *)v18;
    v21 = 0LL;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v22,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v23 = Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo )
        {
          v25 = *(_DWORD *)(Instance + 20);
          if ( v25 <= 0x20 && ((1LL << v25) & 0x108000014LL) != 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *(_DWORD *)(Instance + 16),
                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity[1].monitor) | 8) == 13 )
              {
                monitor = entity[6].monitor;
                if ( (__int64)monitor >= 1 && (__int64)monitor >= v16 && (__int64)entity[5].monitor <= v16 )
                {
                  if ( !v20 )
                    break;
                  Instance = EventCampaignReleaseMaster__TryGetEntity(
                               v20,
                               &v41,
                               *(_DWORD *)(v23 + 16),
                               *(_DWORD *)(v23 + 20),
                               *(_DWORD *)(v23 + 24),
                               v26);
                  if ( (Instance & 1) == 0 )
                    goto LABEL_42;
                  if ( !v41 )
                    break;
                  condType = v41->fields.condType;
                  condTargetId = v41->fields.condTargetId;
                  condNum = v41->fields.condNum;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v41->fields.condTargetId;
                    condValue = v41->fields.condNum;
                    v38 = v41->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    condType = v38;
                    condNum = condValue;
                    condTargetId = targetId;
                  }
                  Instance = CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
LABEL_42:
                    if ( !v21 )
                    {
                      v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                           System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                           v19,
                                                                           v28);
                      System_Collections_Generic_List_object____ctor(
                        v21,
                        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v21 )
                        break;
                    }
                    items = v21->fields._items;
                    v34 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                    ++v21->fields._version;
                    if ( !items )
                      break;
                    size = v21->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v21,
                        (Il2CppObject *)v23,
                        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v36 = &items->obj.klass + size;
                      v21->fields._size = size + 1;
                      v36[4] = (Il2CppClass *)v23;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), v23, v28, v29);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( Count == ++v22 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v21,
                 v19);
    }
LABEL_39:
    sub_1B64324(Instance);
  }
  v21 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v21, v19);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_38775104(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  System_Collections_Generic_List_object__o *v19; // x19
  __int64 v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  EventCampaignEntity_o *current; // x20
  _BOOL8 v25; // x0
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t target; // w25
  Il2CppObject *Item; // x0
  int32_t value; // w25
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x1
  int32_t v32; // w8
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x0
  System_Collections_Generic_List_object__o *v37; // x21
  __int64 v38; // x0
  const MethodInfo *v39; // x1
  Il2CppObject *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x1
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  char v51; // w25
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppObject *v55; // x1
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x0
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x0
  const MethodInfo *v67; // x1
  Il2CppObject *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x1
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  __int64 v76; // x0
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_49FC319 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__,
      eventCampaignEntities);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v16);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v18);
    byte_49FC319 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  memset(&v79, 0, sizeof(v79));
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo,
                                                       eventCampaignEntities,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_1B64324(v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v80 = v78;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v19 )
      sub_1B64324(v21);
    current = (EventCampaignEntity_o *)v80.fields._current;
    if ( v19->fields._size <= 0 )
    {
      v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                           v22,
                                                           v23);
      System_Collections_Generic_List_object____ctor(
        v37,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_1B64324(v38);
      v40 = (Il2CppObject *)EventCampaignEntity__Clone(current, v39);
      v43 = v40;
      if ( !v37 )
        sub_1B64324(v40);
      items = v37->fields._items;
      v45 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v37->fields._version;
      if ( !items )
        sub_1B64324(v40);
      size = v37->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v37,
          v40,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = &items->obj.klass + size;
        v37->fields._size = size + 1;
        v47[4] = (Il2CppClass *)v43;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v43, v41, v42);
      }
      v60 = v19->fields._items;
      v61 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v19->fields._version;
      if ( !v60 )
        sub_1B64324(v48);
      v62 = v19->fields._size;
      if ( (unsigned int)v62 < v60->max_length )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)v37,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v78,
        v19,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v79 = v78;
      do
      {
        while ( 1 )
        {
          v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v79,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v25 )
          {
            v51 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_1B64324(v25);
          v26 = (System_Collections_Generic_List_object__o *)v79.fields._current;
          if ( !v79.fields._current )
            sub_1B64324(v25);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v79.fields._current,
                   0,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_1B64324(0LL);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v32 = current->fields.target;
          if ( v32 == 2 )
          {
            v33 = System_Collections_Generic_List_object___get_Item(
                    v26,
                    0,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v33 )
              sub_1B64324(0LL);
            if ( HIDWORD(v33[1].klass) == 27 )
              break;
            v32 = current->fields.target;
          }
          if ( v32 == 27 )
          {
            v34 = System_Collections_Generic_List_object___get_Item(
                    v26,
                    0,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v34 )
              sub_1B64324(0LL);
            if ( HIDWORD(v34[1].klass) == 2 )
              break;
            v32 = current->fields.target;
          }
          if ( v32 == 4 )
          {
            v35 = System_Collections_Generic_List_object___get_Item(
                    v26,
                    0,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v35 )
              sub_1B64324(0LL);
            if ( HIDWORD(v35[1].klass) == 32 )
              break;
            v32 = current->fields.target;
          }
          if ( v32 == 32 )
          {
            v36 = System_Collections_Generic_List_object___get_Item(
                    v26,
                    0,
                    (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v36 )
              sub_1B64324(0LL);
            if ( HIDWORD(v36[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v30 = System_Collections_Generic_List_object___get_Item(
                v26,
                0,
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v30 )
          sub_1B64324(0LL);
      }
      while ( value != LODWORD(v30[3].klass) );
      v52 = (Il2CppObject *)EventCampaignEntity__Clone(current, v31);
      v55 = v52;
      v56 = v26->fields._items;
      v57 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v26->fields._version;
      if ( !v56 )
        sub_1B64324(v52);
      v58 = v26->fields._size;
      if ( (unsigned int)v58 >= v56->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          v52,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v59 = &v56->obj.klass + v58;
        v26->fields._size = v58 + 1;
        v59[4] = (Il2CppClass *)v55;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v55, v53, v54);
      }
      v51 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v79,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v51 & 1) == 0 )
      {
        v37 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                             v64,
                                                             v65);
        System_Collections_Generic_List_object____ctor(
          v37,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_1B64324(v66);
        v68 = (Il2CppObject *)EventCampaignEntity__Clone(current, v67);
        v71 = v68;
        if ( !v37 )
          sub_1B64324(v68);
        v72 = v37->fields._items;
        v73 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v37->fields._version;
        if ( !v72 )
          sub_1B64324(v68);
        v74 = v37->fields._size;
        if ( (unsigned int)v74 >= v72->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            v68,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
        }
        else
        {
          v75 = &v72->obj.klass + v74;
          v37->fields._size = v74 + 1;
          v75[4] = (Il2CppClass *)v71;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v71, v69, v70);
        }
        v60 = v19->fields._items;
        v61 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v19->fields._version;
        if ( !v60 )
          sub_1B64324(v76);
        v62 = v19->fields._size;
        if ( (unsigned int)v62 >= v60->max_length )
          goto LABEL_58;
LABEL_45:
        v63 = &v60->obj.klass + v62;
        v19->fields._size = v62 + 1;
        v63[4] = (Il2CppClass *)v37;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v37, v49, v50);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v19;
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

  if ( (byte_49FC311 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_49FC311 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30D41FC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
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


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__GetFriendPointCampaigns(
        EventCampaignMaster_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v17; // x22
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x24
  const MethodInfo *v22; // x1
  int32_t v23; // w25
  Il2CppObject *v24; // x26
  __int64 methodPtr_low; // x10
  int32_t v26; // w2
  int32_t v27; // w3
  void *v28; // x9
  void *monitor; // x9
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FC318 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&EventCampaignEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FC318 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_40;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_40;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v23,
                            (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = (Il2CppObject *)Instance;
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
                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_40;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v17 || (__int64)entity[5].monitor > v17 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_40;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v17 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_40;
              v28 = entity[6].monitor;
              if ( (__int64)v28 < 1 || (__int64)v28 <= v17 || (__int64)entity[5].monitor >= v17 )
                continue;
            }
            if ( !v21 )
              goto LABEL_40;
            items = v21->fields._items;
            v31 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              goto LABEL_40;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                v24,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v24, v26, v27);
            }
          }
        }
      }
    }
    while ( Count != ++v23 );
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v21,
                        v22);
  if ( !Instance )
LABEL_40:
    sub_1B64324(Instance);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x21
  __int64 v17; // x22
  int32_t Count; // w0
  const MethodInfo *v19; // x1
  int32_t v20; // w23
  System_Collections_Generic_List_object__o *v21; // x25
  int32_t v22; // w24
  System_Int32_array **Item; // x0
  System_Int32_array **v24; // x26
  __int64 methodPtr_low; // x10
  __int64 v26; // x2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FC31A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, *(_QWORD *)&gachaId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&EventCampaignEntity_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FC31A = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0LL;
    v22 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = (System_Int32_array **)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      v22,
                                      (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE((*Item)->m_Items[69]) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)&(*Item)->m_Items[43] + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo
          && *((_DWORD *)Item + 5) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       Item[5],
                       gachaId,
                       (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *((_DWORD *)v24 + 4),
                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1
                && (__int64)entity[5].monitor <= v17
                && v17 <= (__int64)entity[6].klass )
              {
                if ( !v21 )
                {
                  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                       v19,
                                                                       v26);
                  System_Collections_Generic_List_object____ctor(
                    v21,
                    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v21 )
                    break;
                }
                items = v21->fields._items;
                v29 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v21->fields._version;
                if ( !items )
                  break;
                size = v21->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    (Il2CppObject *)v24,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v31 = &items->obj.klass + size;
                  v21->fields._size = size + 1;
                  v31[4] = (Il2CppClass *)v24;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
                }
              }
            }
          }
        }
      }
      if ( v20 == ++v22 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v21,
                 v19);
    }
LABEL_31:
    sub_1B64324(Instance);
  }
  v21 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v21, v19);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendshipUpCampaigns(
        EventCampaignMaster_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 31, 7, nowTime, v3);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__GetTargetEntitiyAllList(
        EventCampaignMaster_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_ObjectModel_Collection_T__o *v17; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_49FC314 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&EventCampaignEntity_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    byte_49FC314 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       *(_QWORD *)&targetType,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = list;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
          && HIDWORD(list->fields.items) == targetType )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v17;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v17, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(list);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_49FC31D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_49FC31D = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0LL)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_49FC312 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__, entity);
    byte_49FC312 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  EventCampaignEntity_o *v19; // x0
  EventCampaignEntity_o *v20; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_49FC315 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&event_id);
    sub_1B640C8(&EventCampaignEntity_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_49FC315 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (EventCampaignEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                     Enumerator,
                                     *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( v19 )
    {
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventCampaignEntity_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
        && v19->fields.eventId == event_id )
      {
        goto LABEL_24;
      }
    }
  }
  v20 = 0LL;
LABEL_24:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_28;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_28:
    v25 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v20;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_38771976(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v16; // x1
  signed int max_length; // w25
  int v18; // w23
  int32_t v19; // w24
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 methodPtr_low; // x10
  int v23; // w10
  EventEntity_o *v24; // x11
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_49FC316 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&EventCampaignEntity_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v13);
    byte_49FC316 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       *(_QWORD *)&targetType,
                                                       eventEntityList);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    max_length = eventEntityList->max_length;
    v18 = (int)list;
    v19 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v19,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v16 = (const MethodInfo *)list;
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( eventEntityList->max_length == v23 )
            sub_1B6432C(list, list);
          v24 = eventEntityList->m_Items[v23];
          if ( !v24 )
            goto LABEL_30;
          if ( LODWORD(list->fields.items) == v24->fields.id )
            break;
          if ( max_length == ++v23 )
            goto LABEL_24;
        }
        if ( !v14 )
          break;
        items = v14->fields._items;
        v26 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v16;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v16, v20, v21);
        }
      }
LABEL_24:
      if ( ++v19 == v18 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1B64324(list);
  }
LABEL_25:
  if ( !v14 )
    goto LABEL_30;
  if ( v14->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v14,
                                                             v16);
  if ( !list )
    goto LABEL_30;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC31E & 1) == 0 )
  {
    sub_1B640C8(&EventCampaignMaster___c_TypeInfo, v1);
    byte_49FC31E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(EventCampaignMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)EventCampaignMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  EventCampaignMaster___c_c *v22; // x0
  System_Func_object__int__o *_9__16_3; // x21
  Il2CppObject *v24; // x22
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  EventCampaignMaster___c_o *v34; // x1
  Il2CppClass **v35; // x0

  if ( (byte_49FC31F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_First_EventCampaignEntity___, x);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v5);
    sub_1B640C8(&System_Func_EventCampaignEntity__int__TypeInfo, v6);
    sub_1B640C8(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    sub_1B640C8(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, v11);
    this = (EventCampaignMaster___c_o *)sub_1B640C8(&EventCampaignMaster___c_TypeInfo, v12);
    byte_49FC31F = 1;
  }
  if ( !x )
    goto LABEL_24;
  klass = x->klass;
  v14 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v17,
                                                       v18);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v22 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v22 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_3 = (System_Func_object__int__o *)v22->static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = EventCampaignMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__16_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_EventCampaignEntity__int__TypeInfo, v20, v21);
    System_Func_object__int____ctor(_9__16_3, v24, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_3, (int32_t)_9__16_3, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v28,
                                        (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v19
    || (items = v19->fields._items,
        v32 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v19->fields._version,
        !items) )
  {
LABEL_24:
    sub_1B64324(this);
  }
  size = v19->fields._size;
  v34 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v35[4] = (Il2CppClass *)v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v19;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1B64324(this);
  return y->fields.priority;
}
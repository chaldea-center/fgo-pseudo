void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66ABC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__, method);
    byte_4B66ABC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    87,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
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
  EventCampaignMaster___c_c *v13; // x0
  System_Func_object__int__o *_9__13_0; // x20
  Il2CppObject *v15; // x21
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Func_object__object__o *_9__13_1; // x21
  Il2CppObject *v24; // x22
  struct EventCampaignMaster___c_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Linq_ILookup_TKey__TElement__o *v32; // x0
  EventCampaignMaster___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__object__o *_9__13_2; // x20
  Il2CppObject *v36; // x21
  struct EventCampaignMaster___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_4B66ABA & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___,
      method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___, v4);
    sub_1BE4ACC(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo, v5);
    sub_1BE4ACC(&System_Func_EventCampaignEntity__int__TypeInfo, v6);
    sub_1BE4ACC(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v8);
    sub_1BE4ACC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_0__, v9);
    sub_1BE4ACC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_1__, v10);
    sub_1BE4ACC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_2__, v11);
    sub_1BE4ACC(&EventCampaignMaster___c_TypeInfo, v12);
    byte_4B66ABA = 1;
  }
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  v13 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v13 = EventCampaignMaster___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__int__o *)v13->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventCampaignMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__13_0 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_0, v15, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_0__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__13_0;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_0,
      (int64_t)_9__13_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v13 = EventCampaignMaster___c_TypeInfo;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = EventCampaignMaster___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__object__o *)v13->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventCampaignMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v13->static_fields->__9;
    _9__13_1 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__13_1,
      v24,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_1__,
      0LL);
    v25 = EventCampaignMaster___c_TypeInfo->static_fields;
    v25->__9__13_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__13_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v25->__9__13_1, (int64_t)_9__13_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__13_0,
          (System_Func_TSource__TElement__o *)_9__13_1,
          (const MethodInfo_2F96BCC *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
  v33 = EventCampaignMaster___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v33 = EventCampaignMaster___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__object__o *)v33->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = EventCampaignMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__13_2 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__13_2,
      v36,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_2__,
      0LL);
    v37 = EventCampaignMaster___c_TypeInfo->static_fields;
    v37->__9__13_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__13_2;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v37->__9__13_2, (int64_t)_9__13_2, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v34,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__13_2,
                                                               (const MethodInfo_2F8CE2C *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v44,
                                                                     (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
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
  const MethodInfo *v18; // x1
  EventMaster_o *v19; // x24
  int32_t Count; // w0
  int32_t v21; // w25
  int32_t v22; // w26
  const MethodInfo *v23; // x4
  Il2CppObject *v24; // x27
  __int64 methodPtr_low; // x10
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_4B66AB9 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&campaignTarget);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1BE4ACC(&EventCampaignEntity_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v13);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B66AB9 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v19 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                    (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v24 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventCampaignEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
          && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == campaignTarget )
        {
          if ( !v19 )
            break;
          Instance = (DataManager_o *)EventMaster__IsEnableEvent(
                                        v19,
                                        Instance->fields.m_CachedPtr,
                                        eventType,
                                        nowTime,
                                        v23);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v16 )
              break;
            items = v16->fields._items;
            v33 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v16->fields._version;
            if ( !items )
              break;
            size = v16->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v16,
                v24,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v16->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v24;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v24, v26, v27, v28, v29, v30, v31);
            }
          }
        }
      }
      if ( v21 == ++v22 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v16,
                 v18);
    }
LABEL_21:
    sub_1BE4D28(Instance, v18);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v16, v18);
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
  const MethodInfo *v15; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v17; // x27
  int32_t Count; // w22
  Il2CppObject *v19; // x0
  EventCampaignReleaseMaster_o *v20; // x28
  System_Collections_Generic_List_object__o *v21; // x25
  int32_t v22; // w24
  int64_t v23; // x26
  __int64 methodPtr_low; // x10
  unsigned int v25; // w8
  const MethodInfo *v26; // x5
  void *monitor; // x9
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t condTargetId; // w1
  int32_t condType; // w10
  int64_t condNum; // x2
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int32_t v42; // [xsp+Ch] [xbp-84h]
  int64_t condValue; // [xsp+10h] [xbp-80h]
  int32_t targetId; // [xsp+1Ch] [xbp-74h]
  EventCampaignReleaseEntity_o *v45; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B66AB5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BE4ACC(&CondType_TypeInfo, v4);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1BE4ACC(&EventCampaignEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4B66AB5 = 1;
  }
  v45 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_39;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v19 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v20 = (EventCampaignReleaseMaster_o *)v19;
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
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                         (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity[1].monitor) | 8) == 13 )
              {
                monitor = entity[6].monitor;
                if ( (__int64)monitor >= 1 && (__int64)monitor >= v17 && (__int64)entity[5].monitor <= v17 )
                {
                  if ( !v20 )
                    break;
                  Instance = EventCampaignReleaseMaster__TryGetEntity(
                               v20,
                               &v45,
                               *(_DWORD *)(v23 + 16),
                               *(_DWORD *)(v23 + 20),
                               *(_DWORD *)(v23 + 24),
                               v26);
                  if ( (Instance & 1) == 0 )
                    goto LABEL_42;
                  if ( !v45 )
                    break;
                  condType = v45->fields.condType;
                  condTargetId = v45->fields.condTargetId;
                  condNum = v45->fields.condNum;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v45->fields.condTargetId;
                    condValue = v45->fields.condNum;
                    v42 = v45->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    condType = v42;
                    condNum = condValue;
                    condTargetId = targetId;
                  }
                  Instance = CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
LABEL_42:
                    if ( !v21 )
                    {
                      v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                      System_Collections_Generic_List_object____ctor(
                        v21,
                        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v21 )
                        break;
                    }
                    items = v21->fields._items;
                    v38 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                    ++v21->fields._version;
                    if ( !items )
                      break;
                    size = v21->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v21,
                        (Il2CppObject *)v23,
                        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v40 = &items->obj.klass + size;
                      v21->fields._size = size + 1;
                      v40[4] = (Il2CppClass *)v23;
                      sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 4), v23, v28, v29, v30, v31, v32, v33);
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
                 v15);
    }
LABEL_39:
    sub_1BE4D28(Instance, v15);
  }
  v21 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v21, v15);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_40018860(
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
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  EventCampaignEntity_o *current; // x20
  _BOOL8 v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t target; // w25
  Il2CppObject *Item; // x0
  __int64 v30; // x1
  int32_t value; // w25
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x1
  int32_t v34; // w8
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_object__o *v43; // x21
  __int64 v44; // x0
  const MethodInfo *v45; // x1
  Il2CppObject *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  char v66; // w25
  Il2CppObject *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x1
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  __int64 v83; // x0
  const MethodInfo *v84; // x1
  Il2CppObject *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x1
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass **v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v102; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B66AB7 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__,
      eventCampaignEntities);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v17);
    sub_1BE4ACC(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v18);
    byte_4B66AB7 = 1;
  }
  memset(&v102, 0, sizeof(v102));
  memset(&v101, 0, sizeof(v101));
  v19 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_1BE4D28(v20, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v100,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v102 = v100;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v102,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v22 )
      break;
    if ( !v19 )
      sub_1BE4D28(v22, v23);
    current = (EventCampaignEntity_o *)v102.fields._current;
    if ( v19->fields._size <= 0 )
    {
      v43 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v43,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_1BE4D28(v44, v45);
      v46 = (Il2CppObject *)EventCampaignEntity__Clone(current, v45);
      v53 = (int64_t)v46;
      if ( !v43 )
        sub_1BE4D28(v46, v46);
      items = v43->fields._items;
      v55 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v43->fields._version;
      if ( !items )
        sub_1BE4D28(v46, v46);
      size = v43->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          v46,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v43->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v53;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v57 + 4), v53, v47, v48, v49, v50, v51, v52);
      }
      v79 = v19->fields._items;
      v80 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v19->fields._version;
      if ( !v79 )
        sub_1BE4D28(v58, v59);
      v81 = v19->fields._size;
      if ( (unsigned int)v81 < v79->max_length )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)v43,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v100,
        v19,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v101 = v100;
      do
      {
        while ( 1 )
        {
          v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v101,
                  (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v25 )
          {
            v66 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_1BE4D28(v25, v26);
          v27 = (System_Collections_Generic_List_object__o *)v101.fields._current;
          if ( !v101.fields._current )
            sub_1BE4D28(v25, v26);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v101.fields._current,
                   0,
                   (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_1BE4D28(0LL, v30);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v34 = current->fields.target;
          if ( v34 == 2 )
          {
            v35 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v35 )
              sub_1BE4D28(0LL, v36);
            if ( HIDWORD(v35[1].klass) == 27 )
              break;
            v34 = current->fields.target;
          }
          if ( v34 == 27 )
          {
            v37 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v37 )
              sub_1BE4D28(0LL, v38);
            if ( HIDWORD(v37[1].klass) == 2 )
              break;
            v34 = current->fields.target;
          }
          if ( v34 == 4 )
          {
            v39 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v39 )
              sub_1BE4D28(0LL, v40);
            if ( HIDWORD(v39[1].klass) == 32 )
              break;
            v34 = current->fields.target;
          }
          if ( v34 == 32 )
          {
            v41 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v41 )
              sub_1BE4D28(0LL, v42);
            if ( HIDWORD(v41[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v32 = System_Collections_Generic_List_object___get_Item(
                v27,
                0,
                (const MethodInfo_35EBF54 *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v32 )
          sub_1BE4D28(0LL, v33);
      }
      while ( value != LODWORD(v32[3].klass) );
      v67 = (Il2CppObject *)EventCampaignEntity__Clone(current, v33);
      v74 = (int64_t)v67;
      v75 = v27->fields._items;
      v76 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v27->fields._version;
      if ( !v75 )
        sub_1BE4D28(v67, v67);
      v77 = v27->fields._size;
      if ( (unsigned int)v77 >= v75->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v67,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = &v75->obj.klass + v77;
        v27->fields._size = v77 + 1;
        v78[4] = (Il2CppClass *)v74;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v78 + 4), v74, v68, v69, v70, v71, v72, v73);
      }
      v66 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v101,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v66 & 1) == 0 )
      {
        v43 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v43,
          (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_1BE4D28(v83, v84);
        v85 = (Il2CppObject *)EventCampaignEntity__Clone(current, v84);
        v92 = (int64_t)v85;
        if ( !v43 )
          sub_1BE4D28(v85, v85);
        v93 = v43->fields._items;
        v94 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v43->fields._version;
        if ( !v93 )
          sub_1BE4D28(v85, v85);
        v95 = v43->fields._size;
        if ( (unsigned int)v95 >= v93->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            v85,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          v96 = &v93->obj.klass + v95;
          v43->fields._size = v95 + 1;
          v96[4] = (Il2CppClass *)v92;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v96 + 4), v92, v86, v87, v88, v89, v90, v91);
        }
        v79 = v19->fields._items;
        v80 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v19->fields._version;
        if ( !v79 )
          sub_1BE4D28(v97, v98);
        v81 = v19->fields._size;
        if ( (unsigned int)v81 >= v79->max_length )
          goto LABEL_58;
LABEL_45:
        v82 = &v79->obj.klass + v81;
        v19->fields._size = v81 + 1;
        v82[4] = (Il2CppClass *)v43;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v82 + 4), (int64_t)v43, v60, v61, v62, v63, v64, v65);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v102,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_4B66ABD & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4B66ABD = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31FDB1C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
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
  const MethodInfo *v16; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v18; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x24
  int32_t v21; // w25
  Il2CppObject *v22; // x26
  __int64 methodPtr_low; // x10
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  void *v30; // x9
  void *monitor; // x9
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B66AB6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1BE4ACC(&EventCampaignEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B66AB6 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_40;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_40;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v21,
                            (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v22 = (Il2CppObject *)Instance;
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
                       (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_40;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v18 || (__int64)entity[5].monitor > v18 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_40;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v18 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_40;
              v30 = entity[6].monitor;
              if ( (__int64)v30 < 1 || (__int64)v30 <= v18 || (__int64)entity[5].monitor >= v18 )
                continue;
            }
            if ( !v20 )
              goto LABEL_40;
            items = v20->fields._items;
            v33 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              goto LABEL_40;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                v22,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v35[4] = (Il2CppClass *)v22;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v22, v24, v25, v26, v27, v28, v29);
            }
          }
        }
      }
    }
    while ( Count != ++v21 );
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v20,
                        v16);
  if ( !Instance )
LABEL_40:
    sub_1BE4D28(Instance, v16);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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
  const MethodInfo *v16; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v18; // x22
  int32_t Count; // w0
  int32_t v20; // w23
  System_Collections_Generic_List_object__o *v21; // x25
  int32_t v22; // w24
  System_Int32_array **Item; // x0
  int64_t v24; // x26
  __int64 methodPtr_low; // x10
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B66AB8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Array_IndexOf_int___, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1BE4ACC(&EventCampaignEntity_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B66AB8 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v18 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                      (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (int64_t)Item;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE((*Item)->m_Items[69]) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)&(*Item)->m_Items[43] + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo
          && *((_DWORD *)Item + 5) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       Item[5],
                       gachaId,
                       (const MethodInfo_3055D98 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *(_DWORD *)(v24 + 16),
                         (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1
                && (__int64)entity[5].monitor <= v18
                && v18 <= (__int64)entity[6].klass )
              {
                if ( !v21 )
                {
                  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v21,
                    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v21 )
                    break;
                }
                items = v21->fields._items;
                v33 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v21->fields._version;
                if ( !items )
                  break;
                size = v21->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v21,
                    (Il2CppObject *)v24,
                    *(const MethodInfo_35EC224 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                }
                else
                {
                  v35 = &items->obj.klass + size;
                  v21->fields._size = size + 1;
                  v35[4] = (Il2CppClass *)v24;
                  sub_1BE4A70((PartyOrganizationUtility_o *)(v35 + 4), v24, v26, v27, v28, v29, v30, v31);
                }
              }
            }
          }
        }
      }
      if ( v20 == ++v22 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v21,
                 v16);
    }
LABEL_31:
    sub_1BE4D28(Instance, v16);
  }
  v21 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v21, v16);
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
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B66AB2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&EventCampaignEntity_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    byte_4B66AB2 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo
          && *(_DWORD *)(list + 20) == targetType )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_4B66ABB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_4B66ABB = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0LL)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_2F713FC *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4B66ABE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__, entity);
    byte_4B66ABE = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  EventCampaignEntity_o *v20; // x0
  EventCampaignEntity_o *v21; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4B66AB3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&event_id);
    sub_1BE4ACC(&EventCampaignEntity_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4B66AB3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (EventCampaignEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                     Enumerator,
                                     *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( v20 )
    {
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventCampaignEntity_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
        && v20->fields.eventId == event_id )
      {
        goto LABEL_24;
      }
    }
  }
  v21 = 0LL;
LABEL_24:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v21;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_40015728(
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
  const MethodInfo *v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  signed int max_length; // w25
  int v18; // w23
  int32_t v19; // w24
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 methodPtr_low; // x10
  int v27; // w10
  EventEntity_o *v28; // x11
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B66AB4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetType);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&EventCampaignEntity_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v13);
    byte_4B66AB4 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = (const MethodInfo *)list;
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v27 = 0;
        while ( 1 )
        {
          if ( eventEntityList->max_length == v27 )
            sub_1BE4D30(list, list);
          v28 = eventEntityList->m_Items[v27];
          if ( !v28 )
            goto LABEL_30;
          if ( LODWORD(list->fields.items) == v28->fields.id )
            break;
          if ( max_length == ++v27 )
            goto LABEL_24;
        }
        if ( !v14 )
          break;
        items = v14->fields._items;
        v30 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            (Il2CppObject *)list,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v14->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v15;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v15, v20, v21, v22, v23, v24, v25);
        }
      }
LABEL_24:
      if ( ++v19 == v18 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1BE4D28(list, v15);
  }
LABEL_25:
  if ( !v14 )
    goto LABEL_30;
  if ( v14->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v14,
                                                             v15);
  if ( !list )
    goto LABEL_30;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B66ABF & 1) == 0 )
  {
    sub_1BE4ACC(&EventCampaignMaster___c_TypeInfo, v1);
    byte_4B66ABF = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)EventCampaignMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventCampaignMaster___c___ctor(EventCampaignMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__13_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return x->fields.groupId;
}


EventCampaignEntity_o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__13_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__13_2(
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
  System_Collections_Generic_List_object__o *v17; // x20
  EventCampaignMaster___c_c *v18; // x0
  System_Func_object__int__o *_9__13_3; // x21
  Il2CppObject *v20; // x22
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  EventCampaignMaster___c_o *v38; // x1
  Il2CppClass **v39; // x0

  if ( (byte_4B66AC0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_First_EventCampaignEntity___, x);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v5);
    sub_1BE4ACC(&System_Func_EventCampaignEntity__int__TypeInfo, v6);
    sub_1BE4ACC(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    sub_1BE4ACC(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_3__, v11);
    this = (EventCampaignMaster___c_o *)sub_1BE4ACC(&EventCampaignMaster___c_TypeInfo, v12);
    byte_4B66AC0 = 1;
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
    p_method = sub_1C36AAC(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_2F96830 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v18 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v18 = EventCampaignMaster___c_TypeInfo;
  }
  _9__13_3 = (System_Func_object__int__o *)v18->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = EventCampaignMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__13_3 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_3, v20, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__13_3__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__13_3;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_3,
      (int64_t)_9__13_3,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__13_3,
                                                               (const MethodInfo_2F826FC *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v28,
                                        (const MethodInfo_2F79B74 *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v17
    || (items = v17->fields._items,
        v36 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_24:
    sub_1BE4D28(this, x);
  }
  size = v17->fields._size;
  v38 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)this,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v38;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v38, v29, v30, v31, v32, v33, v34);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v17;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__13_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BE4D28(this, 0LL);
  return y->fields.priority;
}
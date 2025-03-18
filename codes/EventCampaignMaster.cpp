void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21E55 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__, method);
    byte_4C21E55 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    87,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
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
  System_Func_object__int__o *_9__15_0; // x20
  Il2CppObject *v15; // x21
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Func_object__object__o *_9__15_1; // x21
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
  System_Func_object__object__o *_9__15_2; // x20
  Il2CppObject *v36; // x21
  struct EventCampaignMaster___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_4C21E52 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___,
      method);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v3);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___, v4);
    sub_1C3B764(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo, v5);
    sub_1C3B764(&System_Func_EventCampaignEntity__int__TypeInfo, v6);
    sub_1C3B764(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v8);
    sub_1C3B764(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_0__, v9);
    sub_1C3B764(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_1__, v10);
    sub_1C3B764(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_2__, v11);
    sub_1C3B764(&EventCampaignMaster___c_TypeInfo, v12);
    byte_4C21E52 = 1;
  }
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  v13 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v13 = EventCampaignMaster___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__int__o *)v13->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventCampaignMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__15_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_0, v15, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_0__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__15_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_0,
      (int64_t)_9__15_0,
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
  _9__15_1 = (System_Func_object__object__o *)v13->static_fields->__9__15_1;
  if ( !_9__15_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventCampaignMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v13->static_fields->__9;
    _9__15_1 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo);
    System_Func_object__object____ctor(
      _9__15_1,
      v24,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_1__,
      0LL);
    v25 = EventCampaignMaster___c_TypeInfo->static_fields;
    v25->__9__15_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__15_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v25->__9__15_1, (int64_t)_9__15_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__15_0,
          (System_Func_TSource__TElement__o *)_9__15_1,
          (const MethodInfo_302EE48 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
  v33 = EventCampaignMaster___c_TypeInfo;
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v33 = EventCampaignMaster___c_TypeInfo;
  }
  _9__15_2 = (System_Func_object__object__o *)v33->static_fields->__9__15_2;
  if ( !_9__15_2 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = EventCampaignMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__15_2 = (System_Func_object__object__o *)sub_1C3B9B0(System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo);
    System_Func_object__object____ctor(
      _9__15_2,
      v36,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_2__,
      0LL);
    v37 = EventCampaignMaster___c_TypeInfo->static_fields;
    v37->__9__15_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__15_2;
    sub_1C3B708((PartyOrganizationUtility_o *)&v37->__9__15_2, (int64_t)_9__15_2, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v34,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__15_2,
                                                               (const MethodInfo_3025020 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v44,
                                                                     (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
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
  System_Collections_Generic_List_object__o *v15; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v17; // x1
  EventMaster_o *v18; // x24
  int32_t Count; // w0
  int32_t v20; // w25
  int32_t v21; // w26
  const MethodInfo *v22; // x4
  Il2CppObject *v23; // x27
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4C21E50 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__,
      *(_QWORD *)&campaignTarget);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v13);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4C21E50 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_19;
  v18 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v21,
                                    (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v23 = (Il2CppObject *)Instance;
        if ( *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == campaignTarget )
        {
          if ( !v18 )
            break;
          Instance = (DataManager_o *)EventMaster__IsEnableEvent(
                                        v18,
                                        Instance->fields.m_CachedPtr,
                                        eventType,
                                        nowTime,
                                        v22);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v15 )
              break;
            items = v15->fields._items;
            v31 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              break;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v23,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v23;
              sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v23, v24, v25, v26, v27, v28, v29);
            }
          }
        }
      }
      if ( v20 == ++v21 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v15,
                 v17);
    }
LABEL_19:
    sub_1C3B9C0(Instance, v17);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v15, v17);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableFriendshipUpItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 30, 7, 0LL, v2);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetAvailableRewardAddItemEventCampaigns(
        EventCampaignMaster_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return EventCampaignMaster__GetAvailableEventCampaign(this, 36, 7, 0LL, v2);
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
  int64_t Instance; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v16; // x27
  int32_t Count; // w22
  Il2CppObject *v18; // x0
  EventCampaignReleaseMaster_o *v19; // x21
  System_Collections_Generic_List_object__o *v20; // x25
  int32_t v21; // w24
  unsigned int v22; // w8
  int64_t v23; // x26
  const MethodInfo *v24; // x5
  void *monitor; // x9
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int32_t condTargetId; // w1
  int32_t condType; // w29
  int64_t condNum; // x2
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  int64_t condValue; // [xsp+0h] [xbp-80h]
  int32_t targetId; // [xsp+Ch] [xbp-74h]
  EventCampaignReleaseEntity_o *v42; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C21E4C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__, method);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__, v3);
    sub_1C3B764(&CondType_TypeInfo, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    sub_1C3B764(&NetworkManager_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C21E4C = 1;
  }
  v42 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_37;
  v16 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v18 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v19 = (EventCampaignReleaseMaster_o *)v18;
    v20 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v21,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v22 = *(_DWORD *)(Instance + 20);
        v23 = Instance;
        if ( v22 <= 0x20 && ((1LL << v22) & 0x108000014LL) != 0 )
        {
          if ( !MasterData_object )
            break;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !entity )
              break;
            if ( (LODWORD(entity[1].monitor) | 8) == 13 )
            {
              monitor = entity[6].monitor;
              if ( (__int64)monitor >= 1 && (__int64)monitor >= v16 && (__int64)entity[5].monitor <= v16 )
              {
                if ( !v19 )
                  break;
                Instance = EventCampaignReleaseMaster__TryGetEntity(
                             v19,
                             &v42,
                             *(_DWORD *)(v23 + 16),
                             *(_DWORD *)(v23 + 20),
                             *(_DWORD *)(v23 + 24),
                             v24);
                if ( (Instance & 1) == 0 )
                  goto LABEL_40;
                if ( !v42 )
                  break;
                condType = v42->fields.condType;
                condTargetId = v42->fields.condTargetId;
                condNum = v42->fields.condNum;
                if ( !CondType_TypeInfo->_2.cctor_finished )
                {
                  targetId = v42->fields.condTargetId;
                  condValue = v42->fields.condNum;
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  condNum = condValue;
                  condTargetId = targetId;
                }
                Instance = CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
                if ( (Instance & 1) != 0 )
                {
LABEL_40:
                  if ( !v20 )
                  {
                    v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v20,
                      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                    if ( !v20 )
                      break;
                  }
                  items = v20->fields._items;
                  v36 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                  ++v20->fields._version;
                  if ( !items )
                    break;
                  size = v20->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v20,
                      (Il2CppObject *)v23,
                      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v38 = &items->obj.klass + size;
                    v20->fields._size = size + 1;
                    v38[4] = (Il2CppClass *)v23;
                    sub_1C3B708((PartyOrganizationUtility_o *)(v38 + 4), v23, v26, v27, v28, v29, v30, v31);
                  }
                }
              }
            }
          }
        }
      }
      if ( Count == ++v21 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v20,
                 v14);
    }
LABEL_37:
    sub_1C3B9C0(Instance, v14);
  }
  v20 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v20, v14);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_40531884(
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

  if ( (byte_4C21E4E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__,
      eventCampaignEntities);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v16);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v17);
    sub_1C3B764(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v18);
    byte_4C21E4E = 1;
  }
  memset(&v102, 0, sizeof(v102));
  memset(&v101, 0, sizeof(v101));
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_1C3B9C0(v20, v21);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v100,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v102 = v100;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v102,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v22 )
      break;
    if ( !v19 )
      sub_1C3B9C0(v22, v23);
    current = (EventCampaignEntity_o *)v102.fields._current;
    if ( v19->fields._size <= 0 )
    {
      v43 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v43,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_1C3B9C0(v44, v45);
      v46 = (Il2CppObject *)EventCampaignEntity__Clone(current, v45);
      v53 = (int64_t)v46;
      if ( !v43 )
        sub_1C3B9C0(v46, v46);
      items = v43->fields._items;
      v55 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v43->fields._version;
      if ( !items )
        sub_1C3B9C0(v46, v46);
      size = v43->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v43,
          v46,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v43->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v53;
        sub_1C3B708((PartyOrganizationUtility_o *)(v57 + 4), v53, v47, v48, v49, v50, v51, v52);
      }
      v79 = v19->fields._items;
      v80 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v19->fields._version;
      if ( !v79 )
        sub_1C3B9C0(v58, v59);
      v81 = v19->fields._size;
      if ( (unsigned int)v81 < v79->max_length )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)v43,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v100,
        v19,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v101 = v100;
      do
      {
        while ( 1 )
        {
          v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v101,
                  (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v25 )
          {
            v66 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_1C3B9C0(v25, v26);
          v27 = (System_Collections_Generic_List_object__o *)v101.fields._current;
          if ( !v101.fields._current )
            sub_1C3B9C0(v25, v26);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v101.fields._current,
                   0,
                   (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_1C3B9C0(0LL, v30);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v34 = current->fields.target;
          if ( v34 == 2 )
          {
            v35 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v35 )
              sub_1C3B9C0(0LL, v36);
            if ( HIDWORD(v35[1].klass) == 27 )
              break;
            v34 = current->fields.target;
          }
          if ( v34 == 27 )
          {
            v37 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v37 )
              sub_1C3B9C0(0LL, v38);
            if ( HIDWORD(v37[1].klass) == 2 )
              break;
            v34 = current->fields.target;
          }
          if ( v34 == 4 )
          {
            v39 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v39 )
              sub_1C3B9C0(0LL, v40);
            if ( HIDWORD(v39[1].klass) == 32 )
              break;
            v34 = current->fields.target;
          }
          if ( v34 == 32 )
          {
            v41 = System_Collections_Generic_List_object___get_Item(
                    v27,
                    0,
                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v41 )
              sub_1C3B9C0(0LL, v42);
            if ( HIDWORD(v41[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v32 = System_Collections_Generic_List_object___get_Item(
                v27,
                0,
                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v32 )
          sub_1C3B9C0(0LL, v33);
      }
      while ( value != LODWORD(v32[3].klass) );
      v67 = (Il2CppObject *)EventCampaignEntity__Clone(current, v33);
      v74 = (int64_t)v67;
      v75 = v27->fields._items;
      v76 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v27->fields._version;
      if ( !v75 )
        sub_1C3B9C0(v67, v67);
      v77 = v27->fields._size;
      if ( (unsigned int)v77 >= v75->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v27,
          v67,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
      }
      else
      {
        v78 = &v75->obj.klass + v77;
        v27->fields._size = v77 + 1;
        v78[4] = (Il2CppClass *)v74;
        sub_1C3B708((PartyOrganizationUtility_o *)(v78 + 4), v74, v68, v69, v70, v71, v72, v73);
      }
      v66 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v101,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v66 & 1) == 0 )
      {
        v43 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v43,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_1C3B9C0(v83, v84);
        v85 = (Il2CppObject *)EventCampaignEntity__Clone(current, v84);
        v92 = (int64_t)v85;
        if ( !v43 )
          sub_1C3B9C0(v85, v85);
        v93 = v43->fields._items;
        v94 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v43->fields._version;
        if ( !v93 )
          sub_1C3B9C0(v85, v85);
        v95 = v43->fields._size;
        if ( (unsigned int)v95 >= v93->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v43,
            v85,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
        }
        else
        {
          v96 = &v93->obj.klass + v95;
          v43->fields._size = v95 + 1;
          v96[4] = (Il2CppClass *)v92;
          sub_1C3B708((PartyOrganizationUtility_o *)(v96 + 4), v92, v86, v87, v88, v89, v90, v91);
        }
        v79 = v19->fields._items;
        v80 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v19->fields._version;
        if ( !v79 )
          sub_1C3B9C0(v97, v98);
        v81 = v19->fields._size;
        if ( (unsigned int)v81 >= v79->max_length )
          goto LABEL_58;
LABEL_45:
        v82 = &v79->obj.klass + v81;
        v19->fields._size = v81 + 1;
        v82[4] = (Il2CppClass *)v43;
        sub_1C3B708((PartyOrganizationUtility_o *)(v82 + 4), (int64_t)v43, v60, v61, v62, v63, v64, v65);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v102,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
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

  if ( (byte_4C21E56 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4C21E56 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_329F900 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
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
  int64_t Instance; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v17; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v19; // x24
  int32_t v20; // w25
  Il2CppObject *v21; // x26
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  void *v28; // x9
  void *monitor; // x9
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C21E4D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__, *(_QWORD *)&type);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C21E4D = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_38;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_38;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v20,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Instance )
      {
        v21 = (Il2CppObject *)Instance;
        if ( *(_DWORD *)(Instance + 20) == 24 )
        {
          if ( !MasterData_object )
            goto LABEL_38;
          Instance = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                       &entity,
                       *(_DWORD *)(Instance + 16),
                       (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_38;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v17 || (__int64)entity[5].monitor > v17 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_38;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v17 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_38;
              v28 = entity[6].monitor;
              if ( (__int64)v28 < 1 || (__int64)v28 <= v17 || (__int64)entity[5].monitor >= v17 )
                continue;
            }
            if ( !v19 )
              goto LABEL_38;
            items = v19->fields._items;
            v31 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              goto LABEL_38;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                v21,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
            }
            else
            {
              v33 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v33[4] = (Il2CppClass *)v21;
              sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v21, v22, v23, v24, v25, v26, v27);
            }
          }
        }
      }
    }
    while ( Count != ++v20 );
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v19,
                        v15);
  if ( !Instance )
LABEL_38:
    sub_1C3B9C0(Instance, v15);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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
  int64_t Instance; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v17; // x22
  int32_t Count; // w0
  int32_t v19; // w23
  System_Collections_Generic_List_object__o *v20; // x25
  int32_t v21; // w24
  Il2CppObject *Item; // x0
  int64_t v23; // x26
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C21E4F & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_IndexOf_int___, *(_QWORD *)&gachaId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v11);
    sub_1C3B764(&NetworkManager_TypeInfo, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4C21E4F = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_29;
  v17 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0LL;
    v21 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)Instance,
               v21,
               (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( Item )
      {
        v23 = (int64_t)Item;
        if ( HIDWORD(Item[1].klass) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       (System_Int32_array *)Item[2].monitor,
                       gachaId,
                       (const MethodInfo_30EE4E0 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *(_DWORD *)(v23 + 16),
                         (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1
                && (__int64)entity[5].monitor <= v17
                && v17 <= (__int64)entity[6].klass )
              {
                if ( !v20 )
                {
                  v20 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v20,
                    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v20 )
                    break;
                }
                items = v20->fields._items;
                v31 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v20->fields._version;
                if ( !items )
                  break;
                size = v20->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v20,
                    (Il2CppObject *)v23,
                    *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                }
                else
                {
                  v33 = &items->obj.klass + size;
                  v20->fields._size = size + 1;
                  v33[4] = (Il2CppClass *)v23;
                  sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), v23, v24, v25, v26, v27, v28, v29);
                }
              }
            }
          }
        }
      }
      if ( v19 == ++v21 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v20,
                 v15);
    }
LABEL_29:
    sub_1C3B9C0(Instance, v15);
  }
  v20 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v20, v15);
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
System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetQuestUseItemEventCampaignsByItemId(
        EventCampaignMaster_o *this,
        int32_t campaignTarget,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4C21E51 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, *(_QWORD *)&campaignTarget);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v7);
    sub_1C3B764(&System_Func_EventCampaignEntity__bool__TypeInfo, v8);
    sub_1C3B764(&Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__, v9);
    sub_1C3B764(&EventCampaignMaster___c__DisplayClass11_0_TypeInfo, v10);
    byte_4C21E51 = 1;
  }
  v11 = sub_1C3B9B0(EventCampaignMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1C3B9C0(v12, v13);
  *(_DWORD *)(v11 + 16) = campaignTarget;
  *(_DWORD *)(v11 + 20) = itemId;
  list = this->fields.list;
  v15 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventCampaignEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v16,
                                                                     (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
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
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4C21E49 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__,
      *(_QWORD *)&targetType);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v9);
    byte_4C21E49 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( *(_DWORD *)(list + 20) == targetType )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v22 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C3B9C0(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_4C21E53 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId);
    byte_4C21E53 = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0LL)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
  }
  return (char)Data;
}


bool __fastcall EventCampaignMaster__IsOverrideEntryCondMessage(
        EventCampaignMaster_o *this,
        System_String_o **message,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
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
  __int64 v19; // x23
  Il2CppObject *Master_object; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject **v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_String_o *v35; // x1
  const MethodInfo *v36; // x3
  System_String_o *EventName; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x22
  System_Func_object__bool__o *v46; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x22
  EventCampaignMaster___c_c *v48; // x8
  System_Func_T__TResult__o *_9__17_1; // x23
  Il2CppObject *v50; // x24
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  Il2CppObject *v59; // x0
  const MethodInfo *v60; // x3
  Il2CppObject *v62; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C21E54 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventCampaignReleaseMaster___, message);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_EventCampaignEntity___, v12);
    sub_1C3B764(&System_Func_EventCampaignEntity__bool__TypeInfo, v13);
    sub_1C3B764(&System_Func_EventCampaignEntity__Nullable_int___TypeInfo, v14);
    sub_1C3B764(&Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__17_1__, v15);
    sub_1C3B764(&Method_EventCampaignMaster___c__DisplayClass17_0__IsOverrideEntryCondMessage_b__0__, v16);
    sub_1C3B764(&EventCampaignMaster___c__DisplayClass17_0_TypeInfo, v17);
    sub_1C3B764(&EventCampaignMaster___c_TypeInfo, v18);
    byte_4C21E54 = 1;
  }
  entitya = 0LL;
  v62 = 0LL;
  v19 = sub_1C3B9B0(EventCampaignMaster___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_33;
  *(_QWORD *)(v19 + 16) = entity;
  v28 = (Il2CppObject **)(v19 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)entity, v22, v23, v24, v25, v26, v27);
  if ( !*(_QWORD *)(v19 + 16) )
    goto LABEL_33;
  v35 = *(System_String_o **)(*(_QWORD *)(v19 + 16) + 64LL);
  *message = v35;
  sub_1C3B708((PartyOrganizationUtility_o *)message, (int64_t)v35, v29, v30, v31, v32, v33, v34);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventCampaignReleaseMaster___);
  if ( !*v28 || !Master_object )
    goto LABEL_33;
  if ( !EventCampaignReleaseMaster__isRelease(
          (EventCampaignReleaseMaster_o *)Master_object,
          (int32_t)(*v28)[1].klass,
          HIDWORD((*v28)[1].klass),
          v36) )
  {
    Master_object = *v28;
    if ( *v28 )
    {
      if ( !EventCampaignEntity__IsNotDispEntryCondMessage((EventCampaignEntity_o *)Master_object, v21) )
        return 0;
      list = this->fields.list;
      v46 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventCampaignEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v19,
        Method_EventCampaignMaster___c__DisplayClass17_0__IsOverrideEntryCondMessage_b__0__,
        0LL);
      v47 = System_Linq_Enumerable__Where_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)list,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_EventCampaignEntity___);
      v48 = EventCampaignMaster___c_TypeInfo;
      if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
        v48 = EventCampaignMaster___c_TypeInfo;
      }
      _9__17_1 = (System_Func_T__TResult__o *)v48->static_fields->__9__17_1;
      if ( !_9__17_1 )
      {
        if ( !v48->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v48);
          v48 = EventCampaignMaster___c_TypeInfo;
        }
        v50 = (Il2CppObject *)v48->static_fields->__9;
        _9__17_1 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_EventCampaignEntity__Nullable_int___TypeInfo);
        System_Func_object__Nullable_int_____ctor(
          _9__17_1,
          v50,
          Method_EventCampaignMaster___c__IsOverrideEntryCondMessage_b__17_1__,
          0LL);
        static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
        static_fields->__9__17_1 = (struct System_Func_EventCampaignEntity__Nullable_int___o *)_9__17_1;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&static_fields->__9__17_1,
          (int64_t)_9__17_1,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
      }
      v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__Nullable_int__(
                                                                   v47,
                                                                   (System_Func_TSource__TKey__o *)_9__17_1,
                                                                   (const MethodInfo_301A6A8 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__Nullable_int____);
      v59 = System_Linq_Enumerable__FirstOrDefault_object_(
              v58,
              (const MethodInfo_3013368 *)Method_System_Linq_Enumerable_FirstOrDefault_EventCampaignEntity___);
      if ( v59 )
        return EventCampaignMaster__IsOverrideEntryCondMessage(this, message, (EventCampaignEntity_o *)v59, v60);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
      if ( *v28 && Master_object )
      {
        if ( !DataMasterBase_object__object__int___TryGetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                &v62,
                (int32_t)(*v28)[1].klass,
                (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
          return 0;
        Master_object = v62;
        if ( v62 )
          goto LABEL_16;
      }
    }
LABEL_33:
    sub_1C3B9C0(Master_object, v21);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !*v28 || !Master_object )
    goto LABEL_33;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entitya,
          (int32_t)(*v28)[1].klass,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entitya;
  if ( !entitya )
    goto LABEL_33;
LABEL_16:
  EventName = EventEntity__getEventName((EventEntity_o *)Master_object, v21);
  *message = EventName;
  sub_1C3B708((PartyOrganizationUtility_o *)message, (int64_t)EventName, v38, v39, v40, v41, v42, v43);
  return 1;
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

  if ( (byte_4C21E57 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__, entity);
    byte_4C21E57 = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  EventCampaignEntity_o *v20; // x21
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4C21E4A & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__,
      *(_QWORD *)&event_id);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4C21E4A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v9);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_EventCampaignEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo )
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
      v18 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_EventCampaignEntity__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v20 = (EventCampaignEntity_o *)v19;
    if ( v19 && *(_DWORD *)(v19 + 16) == event_id )
      goto LABEL_22;
  }
  v20 = 0LL;
LABEL_22:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_26;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_26:
    v24 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v20;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_40528960(
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
  System_Collections_Generic_List_object__o *v13; // x22
  const MethodInfo *v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  signed int max_length; // w25
  int v17; // w23
  int32_t v18; // w24
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int v25; // w10
  EventEntity_o *v26; // x11
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4C21E4B & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__,
      *(_QWORD *)&targetType);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v11);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v12);
    byte_4C21E4B = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    max_length = eventEntityList->max_length;
    v17 = (int)list;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v18,
                                                                 (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_EventCampaignEntity__get_Item__);
      if ( !list )
        break;
      v14 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v25 = 0;
        while ( 1 )
        {
          if ( eventEntityList->max_length == v25 )
            sub_1C3B9C8(list, list);
          v26 = eventEntityList->m_Items[v25];
          if ( !v26 )
            goto LABEL_28;
          if ( LODWORD(list->fields.items) == v26->fields.id )
            break;
          if ( max_length == ++v25 )
            goto LABEL_22;
        }
        if ( !v13 )
          break;
        items = v13->fields._items;
        v28 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          break;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)list,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v14;
          sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v14, v19, v20, v21, v22, v23, v24);
        }
      }
LABEL_22:
      if ( ++v18 == v17 )
        goto LABEL_23;
    }
LABEL_28:
    sub_1C3B9C0(list, v14);
  }
LABEL_23:
  if ( !v13 )
    goto LABEL_28;
  if ( v13->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v13,
                                                             v14);
  if ( !list )
    goto LABEL_28;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_4C21E58 & 1) == 0 )
  {
    sub_1C3B764(&EventCampaignMaster___c_TypeInfo, v1);
    byte_4C21E58 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventCampaignMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v2;
  sub_1C3B708(
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


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__15_0(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.groupId;
}


EventCampaignEntity_o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__15_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  return x;
}


System_Collections_Generic_IEnumerable_EventCampaignEntity__o *__fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__15_2(
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
  System_Func_object__int__o *_9__15_3; // x21
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

  if ( (byte_4C21E59 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_First_EventCampaignEntity___, x);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v5);
    sub_1C3B764(&System_Func_EventCampaignEntity__int__TypeInfo, v6);
    sub_1C3B764(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v10);
    sub_1C3B764(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_3__, v11);
    this = (EventCampaignMaster___c_o *)sub_1C3B764(&EventCampaignMaster___c_TypeInfo, v12);
    byte_4C21E59 = 1;
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
    p_method = sub_1C8D744(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventCampaignEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v18 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo);
    v18 = EventCampaignMaster___c_TypeInfo;
  }
  _9__15_3 = (System_Func_object__int__o *)v18->static_fields->__9__15_3;
  if ( !_9__15_3 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = EventCampaignMaster___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__15_3 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_EventCampaignEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_3, v20, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__15_3__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__15_3;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__15_3,
      (int64_t)_9__15_3,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__15_3,
                                                               (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v28,
                                        (const MethodInfo_301153C *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v17
    || (items = v17->fields._items,
        v36 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v17->fields._version,
        !items) )
  {
LABEL_24:
    sub_1C3B9C0(this, x);
  }
  size = v17->fields._size;
  v38 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)this,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v38;
    sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v38, v29, v30, v31, v32, v33, v34);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v17;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__15_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C3B9C0(this, 0LL);
  return y->fields.priority;
}


System_Nullable_int__o __fastcall EventCampaignMaster___c___IsOverrideEntryCondMessage_b__17_1(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  int32_t priority; // w1
  System_Nullable_int__o v6; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v7; // 0:x0.8

  if ( (byte_4C21E5A & 1) == 0 )
  {
    this = (EventCampaignMaster___c_o *)sub_1C3B764(&Method_System_Nullable_int___ctor__, x);
    byte_4C21E5A = 1;
  }
  if ( !x )
    sub_1C3B9C0(this, x);
  priority = x->fields.priority;
  v7 = (System_Nullable_int__o)&v6;
  v6 = 0LL;
  System_Nullable_int____ctor(v7, priority, (const MethodInfo_37A8420 *)Method_System_Nullable_int___ctor__);
  return v6;
}


void __fastcall EventCampaignMaster___c__DisplayClass11_0___ctor(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCampaignMaster___c__DisplayClass11_0___GetQuestUseItemEventCampaignsByItemId_b__0(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        EventCampaignEntity_o *entity,
        const MethodInfo *method)
{
  EventCampaignMaster___c__DisplayClass11_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array *targetIds; // x20
  System_Func_int__bool__o *_9__1; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4C21E5B & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_int____77906328, entity);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v5);
    this = (EventCampaignMaster___c__DisplayClass11_0_o *)sub_1C3B764(
                                                            &Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__,
                                                            v6);
    byte_4C21E5B = 1;
  }
  if ( !entity )
    sub_1C3B9C0(this, entity);
  if ( entity->fields.target != v4->fields.target )
    return 0;
  targetIds = entity->fields.targetIds;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_EventCampaignMaster___c__DisplayClass11_0__GetQuestUseItemEventCampaignsByItemId_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  return BasicHelper__Any_int__50178292(
           targetIds,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2FDA8F4 *)Method_BasicHelper_Any_int____77906328);
}


bool __fastcall EventCampaignMaster___c__DisplayClass11_0___GetQuestUseItemEventCampaignsByItemId_b__1(
        EventCampaignMaster___c__DisplayClass11_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return this->fields.itemId == id;
}


void __fastcall EventCampaignMaster___c__DisplayClass17_0___ctor(
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventCampaignMaster___c__DisplayClass17_0___IsOverrideEntryCondMessage_b__0(
        EventCampaignMaster___c__DisplayClass17_0_o *this,
        EventCampaignEntity_o *x,
        const MethodInfo *method)
{
  struct EventCampaignEntity_o *entity; // x8

  if ( !x || (entity = this->fields.entity) == 0LL )
    sub_1C3B9C0(this, x);
  return x->fields.target == entity->fields.target
      && x->fields.groupId == entity->fields.groupId
      && x->fields.priority < entity->fields.priority;
}
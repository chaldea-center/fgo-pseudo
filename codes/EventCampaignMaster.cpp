void __fastcall EventCampaignMaster___ctor(EventCampaignMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B160EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__, method, v2);
    byte_4B160EE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    83,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string___ctor__);
}


System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__CheckCampaignGrouping(
        System_Collections_Generic_List_EventCampaignEntity__o *campaignList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  EventCampaignMaster___c_c *v25; // x0
  System_Func_object__int__o *_9__16_0; // x20
  Il2CppObject *v27; // x21
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Func_object__object__o *_9__16_1; // x21
  Il2CppObject *v36; // x22
  struct EventCampaignMaster___c_StaticFields *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Linq_ILookup_TKey__TElement__o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  EventCampaignMaster___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x19
  System_Func_object__object__o *_9__16_2; // x20
  Il2CppObject *v51; // x21
  struct EventCampaignMaster___c_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0

  if ( (byte_4B160F7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v15, v16);
    sub_1BCA7E0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, v17, v18);
    sub_1BCA7E0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__, v19, v20);
    sub_1BCA7E0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__, v21, v22);
    sub_1BCA7E0(&EventCampaignMaster___c_TypeInfo, v23, v24);
    byte_4B160F7 = 1;
  }
  if ( !campaignList || !campaignList->fields._size )
    return campaignList;
  v25 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, method);
    v25 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_0 = (System_Func_object__int__o *)v25->static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, method);
      v25 = EventCampaignMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__16_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventCampaignEntity__int__TypeInfo, method, v2, v3);
    System_Func_object__int____ctor(_9__16_0, v27, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_0__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_0,
      (int64_t)_9__16_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v25 = EventCampaignMaster___c_TypeInfo;
  }
  if ( !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25, method);
    v25 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_1 = (System_Func_object__object__o *)v25->static_fields->__9__16_1;
  if ( !_9__16_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, method);
      v25 = EventCampaignMaster___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v25->static_fields->__9;
    _9__16_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_EventCampaignEntity__EventCampaignEntity__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
    System_Func_object__object____ctor(
      _9__16_1,
      v36,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_1__,
      0LL);
    v37 = EventCampaignMaster___c_TypeInfo->static_fields;
    v37->__9__16_1 = (struct System_Func_EventCampaignEntity__EventCampaignEntity__o *)_9__16_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v37->__9__16_1, (int64_t)_9__16_1, v38, v39, v40, v41, v42, v43);
  }
  v44 = System_Linq_Enumerable__ToLookup_object__int__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)campaignList,
          (System_Func_TSource__TKey__o *)_9__16_0,
          (System_Func_TSource__TElement__o *)_9__16_1,
          (const MethodInfo_2F4FB00 *)Method_System_Linq_Enumerable_ToLookup_EventCampaignEntity__int__EventCampaignEntity___);
  v48 = EventCampaignMaster___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, v45);
    v48 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_2 = (System_Func_object__object__o *)v48->static_fields->__9__16_2;
  if ( !_9__16_2 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48, v45);
      v48 = EventCampaignMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__16_2 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___TypeInfo,
                                                  v45,
                                                  v46,
                                                  v47);
    System_Func_object__object____ctor(
      _9__16_2,
      v51,
      Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_2__,
      0LL);
    v52 = EventCampaignMaster___c_TypeInfo->static_fields;
    v52->__9__16_2 = (struct System_Func_IGrouping_int__EventCampaignEntity___IEnumerable_EventCampaignEntity___o *)_9__16_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v52->__9__16_2, (int64_t)_9__16_2, v53, v54, v55, v56, v57, v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v49,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__16_2,
                                                               (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_IGrouping_int__EventCampaignEntity___EventCampaignEntity___);
  return (System_Collections_Generic_List_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                     v59,
                                                                     (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x23
  DataManager_o *Instance; // x0
  const MethodInfo *v25; // x1
  EventMaster_o *v26; // x24
  int32_t Count; // w0
  int32_t v28; // w25
  int32_t v29; // w26
  const MethodInfo *v30; // x4
  Il2CppObject *v31; // x27
  __int64 methodPtr_low; // x10
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4B160F6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&campaignTarget,
      *(_QWORD *)&eventType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v11, v12);
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B160F6 = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       *(_QWORD *)&campaignTarget,
                                                       *(_QWORD *)&eventType,
                                                       nowTime);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v26 = (EventMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v29,
                                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v31 = (Il2CppObject *)Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventCampaignEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
          && *((_DWORD *)&Instance->fields.UnityEngine_Behaviour_Fields + 1) == campaignTarget )
        {
          if ( !v26 )
            break;
          Instance = (DataManager_o *)EventMaster__IsEnableEvent(
                                        v26,
                                        Instance->fields.m_CachedPtr,
                                        eventType,
                                        nowTime,
                                        v30);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !v23 )
              break;
            items = v23->fields._items;
            v40 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v23->fields._version;
            if ( !items )
              break;
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v23,
                v31,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &items->obj.klass + size;
              v23->fields._size = size + 1;
              v42[4] = (Il2CppClass *)v31;
              sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v31, v33, v34, v35, v36, v37, v38);
            }
          }
        }
      }
      if ( v28 == ++v29 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v23,
                 v25);
    }
LABEL_21:
    sub_1BCAA3C(Instance, v25);
  }
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v23, v25);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  int64_t Instance; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v30; // x27
  int32_t Count; // w22
  Il2CppObject *v32; // x0
  EventCampaignReleaseMaster_o *v33; // x28
  System_Collections_Generic_List_object__o *v34; // x25
  int32_t v35; // w24
  int64_t v36; // x26
  __int64 methodPtr_low; // x10
  unsigned int v38; // w8
  const MethodInfo *v39; // x5
  void *monitor; // x9
  int64_t v41; // x2
  __int64 v42; // x3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 condTargetId; // x1
  int32_t condType; // w10
  int64_t condNum; // x2
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  int32_t v55; // [xsp+Ch] [xbp-84h]
  int64_t condValue; // [xsp+10h] [xbp-80h]
  int32_t targetId; // [xsp+1Ch] [xbp-74h]
  EventCampaignReleaseEntity_o *v58; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4B160F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25);
    byte_4B160F2 = 1;
  }
  v58 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_39;
  v30 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v32 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  if ( Count >= 1 )
  {
    v33 = (EventCampaignReleaseMaster_o *)v32;
    v34 = 0LL;
    v35 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v35,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v36 = Instance;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo )
        {
          v38 = *(_DWORD *)(Instance + 20);
          if ( v38 <= 0x20 && ((1LL << v38) & 0x108000014LL) != 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *(_DWORD *)(Instance + 16),
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (LODWORD(entity[1].monitor) | 8) == 13 )
              {
                monitor = entity[6].monitor;
                if ( (__int64)monitor >= 1 && (__int64)monitor >= v30 && (__int64)entity[5].monitor <= v30 )
                {
                  if ( !v33 )
                    break;
                  Instance = EventCampaignReleaseMaster__TryGetEntity(
                               v33,
                               &v58,
                               *(_DWORD *)(v36 + 16),
                               *(_DWORD *)(v36 + 20),
                               *(_DWORD *)(v36 + 24),
                               v39);
                  if ( (Instance & 1) == 0 )
                    goto LABEL_42;
                  if ( !v58 )
                    break;
                  condType = v58->fields.condType;
                  condTargetId = (unsigned int)v58->fields.condTargetId;
                  condNum = v58->fields.condNum;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                  {
                    targetId = v58->fields.condTargetId;
                    condValue = v58->fields.condNum;
                    v55 = v58->fields.condType;
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, condTargetId);
                    condType = v55;
                    condNum = condValue;
                    LODWORD(condTargetId) = targetId;
                  }
                  Instance = CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
LABEL_42:
                    if ( !v34 )
                    {
                      v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                           System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                           v27,
                                                                           v41,
                                                                           v42);
                      System_Collections_Generic_List_object____ctor(
                        v34,
                        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                      if ( !v34 )
                        break;
                    }
                    items = v34->fields._items;
                    v51 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                    ++v34->fields._version;
                    if ( !items )
                      break;
                    size = v34->fields._size;
                    if ( (unsigned int)size >= items->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v34,
                        (Il2CppObject *)v36,
                        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v53 = &items->obj.klass + size;
                      v34->fields._size = size + 1;
                      v53[4] = (Il2CppClass *)v36;
                      sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), v36, v41, v42, v43, v44, v45, v46);
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( Count == ++v35 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v34,
                 v27);
    }
LABEL_39:
    sub_1BCAA3C(Instance, v27);
  }
  v34 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v34, v27);
}


System_Collections_Generic_List_List_EventCampaignEntity___o *__fastcall EventCampaignMaster__GetCombineEventCampaigns_39815744(
        EventCampaignMaster_o *this,
        System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x19
  __int64 v36; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  EventCampaignEntity_o *current; // x20
  _BOOL8 v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_List_object__o *v45; // x21
  int32_t target; // w25
  Il2CppObject *Item; // x0
  __int64 v48; // x1
  int32_t value; // w25
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x1
  int32_t v52; // w8
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_List_object__o *v61; // x21
  __int64 v62; // x0
  const MethodInfo *v63; // x1
  Il2CppObject *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x1
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  char v84; // w25
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
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x0
  const MethodInfo *v105; // x1
  Il2CppObject *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x1
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  __int64 v118; // x0
  __int64 v119; // x1
  System_Collections_Generic_List_Enumerator_object__o v121; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v122; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B160F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__,
      eventCampaignEntities,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_EventCampaignEntity___get_Count__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo, v33, v34);
    byte_4B160F4 = 1;
  }
  memset(&v123, 0, sizeof(v123));
  memset(&v122, 0, sizeof(v122));
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_List_EventCampaignEntity___TypeInfo,
                                                       eventCampaignEntities,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_EventCampaignEntity____ctor__);
  if ( !eventCampaignEntities )
    sub_1BCAA3C(v36, v37);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v121,
    (System_Collections_Generic_List_object__o *)eventCampaignEntities,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
  v123 = v121;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v123,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    if ( !v38 )
      break;
    if ( !v35 )
      sub_1BCAA3C(v38, v39);
    current = (EventCampaignEntity_o *)v123.fields._current;
    if ( v35->fields._size <= 0 )
    {
      v61 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                           v39,
                                                           v40,
                                                           v41);
      System_Collections_Generic_List_object____ctor(
        v61,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
      if ( !current )
        sub_1BCAA3C(v62, v63);
      v64 = (Il2CppObject *)EventCampaignEntity__Clone(current, v63);
      v71 = (int64_t)v64;
      if ( !v61 )
        sub_1BCAA3C(v64, v64);
      items = v61->fields._items;
      v73 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v61->fields._version;
      if ( !items )
        sub_1BCAA3C(v64, v64);
      size = v61->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v61,
          v64,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v61->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v71;
        sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), v71, v65, v66, v67, v68, v69, v70);
      }
      v97 = v35->fields._items;
      v98 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
      ++v35->fields._version;
      if ( !v97 )
        sub_1BCAA3C(v76, v77);
      v99 = v35->fields._size;
      if ( (unsigned int)v99 < v97->max_length )
        goto LABEL_45;
LABEL_58:
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        (Il2CppObject *)v61,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v121,
        v35,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v122 = v121;
      do
      {
        while ( 1 )
        {
          v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v122,
                  (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
          if ( !v43 )
          {
            v84 = 0;
            goto LABEL_49;
          }
          if ( !current )
            sub_1BCAA3C(v43, v44);
          v45 = (System_Collections_Generic_List_object__o *)v122.fields._current;
          if ( !v122.fields._current )
            sub_1BCAA3C(v43, v44);
          target = current->fields.target;
          Item = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v122.fields._current,
                   0,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
          if ( !Item )
            sub_1BCAA3C(0LL, v48);
          if ( target == HIDWORD(Item[1].klass) )
            break;
          v52 = current->fields.target;
          if ( v52 == 2 )
          {
            v53 = System_Collections_Generic_List_object___get_Item(
                    v45,
                    0,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v53 )
              sub_1BCAA3C(0LL, v54);
            if ( HIDWORD(v53[1].klass) == 27 )
              break;
            v52 = current->fields.target;
          }
          if ( v52 == 27 )
          {
            v55 = System_Collections_Generic_List_object___get_Item(
                    v45,
                    0,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v55 )
              sub_1BCAA3C(0LL, v56);
            if ( HIDWORD(v55[1].klass) == 2 )
              break;
            v52 = current->fields.target;
          }
          if ( v52 == 4 )
          {
            v57 = System_Collections_Generic_List_object___get_Item(
                    v45,
                    0,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v57 )
              sub_1BCAA3C(0LL, v58);
            if ( HIDWORD(v57[1].klass) == 32 )
              break;
            v52 = current->fields.target;
          }
          if ( v52 == 32 )
          {
            v59 = System_Collections_Generic_List_object___get_Item(
                    v45,
                    0,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
            if ( !v59 )
              sub_1BCAA3C(0LL, v60);
            if ( HIDWORD(v59[1].klass) == 4 )
              break;
          }
        }
        value = current->fields.value;
        v50 = System_Collections_Generic_List_object___get_Item(
                v45,
                0,
                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
        if ( !v50 )
          sub_1BCAA3C(0LL, v51);
      }
      while ( value != LODWORD(v50[3].klass) );
      v85 = (Il2CppObject *)EventCampaignEntity__Clone(current, v51);
      v92 = (int64_t)v85;
      v93 = v45->fields._items;
      v94 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
      ++v45->fields._version;
      if ( !v93 )
        sub_1BCAA3C(v85, v85);
      v95 = v45->fields._size;
      if ( (unsigned int)v95 >= v93->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          v85,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v96 = &v93->obj.klass + v95;
        v45->fields._size = v95 + 1;
        v96[4] = (Il2CppClass *)v92;
        sub_1BCA784((PartyOrganizationUtility_o *)(v96 + 4), v92, v86, v87, v88, v89, v90, v91);
      }
      v84 = 1;
LABEL_49:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v122,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( (v84 & 1) == 0 )
      {
        v61 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                             v101,
                                                             v102,
                                                             v103);
        System_Collections_Generic_List_object____ctor(
          v61,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
        if ( !current )
          sub_1BCAA3C(v104, v105);
        v106 = (Il2CppObject *)EventCampaignEntity__Clone(current, v105);
        v113 = (int64_t)v106;
        if ( !v61 )
          sub_1BCAA3C(v106, v106);
        v114 = v61->fields._items;
        v115 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v61->fields._version;
        if ( !v114 )
          sub_1BCAA3C(v106, v106);
        v116 = v61->fields._size;
        if ( (unsigned int)v116 >= v114->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v61,
            v106,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
        }
        else
        {
          v117 = &v114->obj.klass + v116;
          v61->fields._size = v116 + 1;
          v117[4] = (Il2CppClass *)v113;
          sub_1BCA784((PartyOrganizationUtility_o *)(v117 + 4), v113, v107, v108, v109, v110, v111, v112);
        }
        v97 = v35->fields._items;
        v98 = Method_System_Collections_Generic_List_List_EventCampaignEntity___Add__;
        ++v35->fields._version;
        if ( !v97 )
          sub_1BCAA3C(v118, v119);
        v99 = v35->fields._size;
        if ( (unsigned int)v99 >= v97->max_length )
          goto LABEL_58;
LABEL_45:
        v100 = &v97->obj.klass + v99;
        v35->fields._size = v99 + 1;
        v100[4] = (Il2CppClass *)v61;
        sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), (int64_t)v61, v78, v79, v80, v81, v82, v83);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v123,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  return (System_Collections_Generic_List_List_EventCampaignEntity___o *)v35;
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

  if ( (byte_4B160EC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&target);
    byte_4B160EC = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&idx);
  return (EventCampaignEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__GetEntity__);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t Instance; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v29; // x22
  int32_t Count; // w23
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Collections_Generic_List_object__o *v34; // x24
  int32_t v35; // w25
  Il2CppObject *v36; // x26
  __int64 methodPtr_low; // x10
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  void *v44; // x9
  void *monitor; // x9
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B160F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B160F3 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_40;
  v29 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v31,
                                                       v32,
                                                       v33);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_40;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v35,
                            (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v36 = (Il2CppObject *)Instance;
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
                       (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( type == 2 )
            {
              if ( !entity )
                goto LABEL_40;
              monitor = entity[6].monitor;
              if ( (__int64)monitor < 1 || (__int64)monitor < v29 || (__int64)entity[5].monitor > v29 )
                continue;
            }
            else if ( type == 1 )
            {
              if ( !entity )
                goto LABEL_40;
              if ( (__int64)entity[6].monitor < 1 || (__int64)entity[5].monitor <= v29 )
                continue;
            }
            else
            {
              if ( type )
                continue;
              if ( !entity )
                goto LABEL_40;
              v44 = entity[6].monitor;
              if ( (__int64)v44 < 1 || (__int64)v44 <= v29 || (__int64)entity[5].monitor >= v29 )
                continue;
            }
            if ( !v34 )
              goto LABEL_40;
            items = v34->fields._items;
            v47 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
            ++v34->fields._version;
            if ( !items )
              goto LABEL_40;
            size = v34->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v34,
                v36,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &items->obj.klass + size;
              v34->fields._size = size + 1;
              v49[4] = (Il2CppClass *)v36;
              sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 4), (int64_t)v36, v38, v39, v40, v41, v42, v43);
            }
          }
        }
      }
    }
    while ( Count != ++v35 );
  }
  Instance = (int64_t)EventCampaignMaster__CheckCampaignGrouping(
                        (System_Collections_Generic_List_EventCampaignEntity__o *)v34,
                        v26);
  if ( !Instance )
LABEL_40:
    sub_1BCAA3C(Instance, v26);
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)Instance,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_EventCampaignEntity__o *__fastcall EventCampaignMaster__GetFriendPointSummonMultipleFreeCampaign(
        EventCampaignMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t Instance; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v29; // x22
  int32_t Count; // w0
  int32_t v31; // w23
  System_Collections_Generic_List_object__o *v32; // x25
  int32_t v33; // w24
  System_Int32_array **Item; // x0
  int64_t v35; // x26
  __int64 methodPtr_low; // x10
  int64_t v37; // x2
  __int64 v38; // x3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B160F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_int___, *(_QWORD *)&gachaId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B160F5 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
  Instance = NetworkManager__getTime(0LL);
  if ( !this->fields.list )
    goto LABEL_31;
  v29 = Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0LL;
    v33 = 0;
    while ( 1 )
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        break;
      Item = (System_Int32_array **)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                      v33,
                                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v35 = (int64_t)Item;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE((*Item)->m_Items[69]) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)&(*Item)->m_Items[43] + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo
          && *((_DWORD *)Item + 5) == 29 )
        {
          Instance = System_Array__IndexOf_int_(
                       Item[5],
                       gachaId,
                       (const MethodInfo_300E9A0 *)Method_System_Array_IndexOf_int___);
          if ( (Instance & 0x80000000) == 0 )
          {
            if ( !MasterData_object )
              break;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                         &entity,
                         *(_DWORD *)(v35 + 16),
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              if ( !entity )
                break;
              if ( (__int64)entity[6].monitor >= 1
                && (__int64)entity[5].monitor <= v29
                && v29 <= (__int64)entity[6].klass )
              {
                if ( !v32 )
                {
                  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                                       v26,
                                                                       v37,
                                                                       v38);
                  System_Collections_Generic_List_object____ctor(
                    v32,
                    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
                  if ( !v32 )
                    break;
                }
                items = v32->fields._items;
                v44 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
                ++v32->fields._version;
                if ( !items )
                  break;
                size = v32->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v32,
                    (Il2CppObject *)v35,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                }
                else
                {
                  v46 = &items->obj.klass + size;
                  v32->fields._size = size + 1;
                  v46[4] = (Il2CppClass *)v35;
                  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v35, v37, v38, v39, v40, v41, v42);
                }
              }
            }
          }
        }
      }
      if ( v31 == ++v33 )
        return EventCampaignMaster__CheckCampaignGrouping(
                 (System_Collections_Generic_List_EventCampaignEntity__o *)v32,
                 v26);
    }
LABEL_31:
    sub_1BCAA3C(Instance, v26);
  }
  v32 = 0LL;
  return EventCampaignMaster__CheckCampaignGrouping((System_Collections_Generic_List_EventCampaignEntity__o *)v32, v26);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int v21; // w22
  int32_t v22; // w23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B160EF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetType,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v16, v17);
    byte_4B160EF = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       *(_QWORD *)&targetType,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v21 = list;
    v22 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v22,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(EventCampaignEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == EventCampaignEntity_TypeInfo
          && *(_DWORD *)(list + 20) == targetType )
        {
          if ( !v18 )
            break;
          items = v18->fields._items;
          v31 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            break;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v19;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v19, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, v19);
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_19;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
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

  if ( (byte_4B160F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&svtId, *(_QWORD *)&eventId);
    byte_4B160F8 = 1;
  }
  Data = EventCampaignMaster__getData(this, eventId, *(const MethodInfo **)&eventId);
  if ( Data )
  {
    v8 = Data;
    LOBYTE(Data) = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Data->fields.targetIds, 0LL)
                || System_Linq_Enumerable__Contains_int_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.targetIds,
                     svtId,
                     (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4B160ED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B160ED = 1;
  }
  PK = (Il2CppObject *)EventCampaignEntity__CreatePK(eventId, target, idx, *(const MethodInfo **)&target);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventCampaignMaster__EventCampaignEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall EventCampaignMaster__getData(
        EventCampaignMaster_o *this,
        int32_t event_id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  EventCampaignEntity_o *v24; // x0
  EventCampaignEntity_o *v25; // x21
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B160F0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&event_id,
      method);
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    byte_4B160F0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&event_id);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (EventCampaignEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                     Enumerator,
                                     *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( v24 )
    {
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (EventCampaignEntity_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] == EventCampaignEntity_TypeInfo
        && v24->fields.eventId == event_id )
      {
        goto LABEL_24;
      }
    }
  }
  v25 = 0LL;
LABEL_24:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_28;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_28:
    v30 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v25;
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_array *__fastcall EventCampaignMaster__getData_39812612(
        EventCampaignMaster_o *this,
        int32_t targetType,
        EventEntity_array *eventEntityList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x22
  const MethodInfo *v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  signed int max_length; // w25
  int v25; // w23
  int32_t v26; // w24
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  int v34; // w10
  EventEntity_o *v35; // x11
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0

  if ( (byte_4B160F1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetType,
      eventEntityList);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventCampaignEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v19, v20);
    byte_4B160F1 = 1;
  }
  if ( !eventEntityList )
    return 0LL;
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       *(_QWORD *)&targetType,
                                                       eventEntityList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_30;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    max_length = eventEntityList->max_length;
    v25 = (int)list;
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v26,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v22 = (const MethodInfo *)list;
      methodPtr_low = LOBYTE(EventCampaignEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventCampaignEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventCampaignEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == targetType && max_length >= 1 )
      {
        v34 = 0;
        while ( 1 )
        {
          if ( eventEntityList->max_length == v34 )
            sub_1BCAA44(list, list);
          v35 = eventEntityList->m_Items[v34];
          if ( !v35 )
            goto LABEL_30;
          if ( LODWORD(list->fields.items) == v35->fields.id )
            break;
          if ( max_length == ++v34 )
            goto LABEL_24;
        }
        if ( !v21 )
          break;
        items = v21->fields._items;
        v37 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__;
        ++v21->fields._version;
        if ( !items )
          break;
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v22;
          sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)v22, v27, v28, v29, v30, v31, v32);
        }
      }
LABEL_24:
      if ( ++v26 == v25 )
        goto LABEL_25;
    }
LABEL_30:
    sub_1BCAA3C(list, v22);
  }
LABEL_25:
  if ( !v21 )
    goto LABEL_30;
  if ( v21->fields._size < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)EventCampaignMaster__CheckCampaignGrouping(
                                                             (System_Collections_Generic_List_EventCampaignEntity__o *)v21,
                                                             v22);
  if ( !list )
    goto LABEL_30;
  return (EventCampaignEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        (System_Collections_Generic_List_object__o *)list,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventCampaignEntity__ToArray__);
}


void __fastcall EventCampaignMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B160F9 & 1) == 0 )
  {
    sub_1BCA7E0(&EventCampaignMaster___c_TypeInfo, v1, v2);
    byte_4B160F9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventCampaignMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventCampaignMaster___c_TypeInfo->static_fields->__9 = (struct EventCampaignMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventCampaignMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Linq_IGrouping_int__EventCampaignEntity__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  EventCampaignMaster___c_c *v33; // x0
  System_Func_object__int__o *_9__16_3; // x21
  Il2CppObject *v35; // x22
  struct EventCampaignMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  EventCampaignMaster___c_o *v53; // x1
  Il2CppClass **v54; // x0

  if ( (byte_4B160FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_EventCampaignEntity___, x, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventCampaignEntity___, v6, v7);
    sub_1BCA7E0(&System_Func_EventCampaignEntity__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCampaignEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_EventCampaignEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, v18, v19);
    this = (EventCampaignMaster___c_o *)sub_1BCA7E0(&EventCampaignMaster___c_TypeInfo, v20, v21);
    byte_4B160FA = 1;
  }
  if ( !x )
    goto LABEL_24;
  klass = x->klass;
  v23 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__EventCampaignEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, System_Linq_IGrouping_int__EventCampaignEntity__TypeInfo, 0LL);
  }
  if ( !(*(unsigned int (__fastcall **)(System_Linq_IGrouping_int__EventCampaignEntity__o *, _QWORD))p_method)(
          x,
          *(_QWORD *)(p_method + 8)) )
    return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                                              (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventCampaignEntity___);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventCampaignEntity__TypeInfo,
                                                       v26,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventCampaignEntity___ctor__);
  v33 = EventCampaignMaster___c_TypeInfo;
  if ( !EventCampaignMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventCampaignMaster___c_TypeInfo, v30);
    v33 = EventCampaignMaster___c_TypeInfo;
  }
  _9__16_3 = (System_Func_object__int__o *)v33->static_fields->__9__16_3;
  if ( !_9__16_3 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = EventCampaignMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__16_3 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_EventCampaignEntity__int__TypeInfo, v30, v31, v32);
    System_Func_object__int____ctor(_9__16_3, v35, Method_EventCampaignMaster___c__CheckCampaignGrouping_b__16_3__, 0LL);
    static_fields = EventCampaignMaster___c_TypeInfo->static_fields;
    static_fields->__9__16_3 = (struct System_Func_EventCampaignEntity__int__o *)_9__16_3;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__16_3,
      (int64_t)_9__16_3,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                                               (System_Func_TSource__TKey__o *)_9__16_3,
                                                               (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_EventCampaignEntity__int___);
  this = (EventCampaignMaster___c_o *)System_Linq_Enumerable__First_object_(
                                        v43,
                                        (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_EventCampaignEntity___);
  if ( !v29
    || (items = v29->fields._items,
        v51 = Method_System_Collections_Generic_List_EventCampaignEntity__Add__,
        ++v29->fields._version,
        !items) )
  {
LABEL_24:
    sub_1BCAA3C(this, x);
  }
  size = v29->fields._size;
  v53 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v29,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v29->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v53;
    sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v53, v44, v45, v46, v47, v48, v49);
  }
  return (System_Collections_Generic_IEnumerable_EventCampaignEntity__o *)v29;
}


int32_t __fastcall EventCampaignMaster___c___CheckCampaignGrouping_b__16_3(
        EventCampaignMaster___c_o *this,
        EventCampaignEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BCAA3C(this, 0LL);
  return y->fields.priority;
}
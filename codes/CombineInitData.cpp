void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B3A974 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_4B3A974 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1BD36A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_35A3518 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v4;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.eventIdList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventCampaignEntity_o *__fastcall CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  int m_CancellationTokenSource; // w8
  __int64 v10; // x9
  EventCampaignEntity_o *v11; // x21
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_4B3A973 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B3A973 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__getEntitys_object__object_(
                                Instance,
                                (const MethodInfo_2F318E4 *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( !Instance )
    return 0LL;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 1 )
    return 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= m_CancellationTokenSource )
      sub_1BD36BC(Instance, v8);
    v11 = (EventCampaignEntity_o *)*((_QWORD *)&Instance->fields._DispLog + v10);
    if ( !v11 )
      goto LABEL_18;
    if ( v11->fields.eventId == eventId )
      break;
    if ( (int)++v10 >= m_CancellationTokenSource )
      return 0LL;
  }
  Instance = (DataManager_o *)this->fields.eventIdList;
  if ( !Instance
    || (v13 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v14 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v13) )
  {
LABEL_18:
    sub_1BD36B4(Instance, v8);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      eventId,
      *(const MethodInfo_35A3D6C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v13 + 4 * m_CancellationTokenSource_low + 32) = eventId;
  }
  return v11;
}


EventEntity_array *__fastcall CombineInitData__getCombineEventList(CombineInitData_o *this, const MethodInfo *method)
{
  return this->fields.combineEventList;
}


void __fastcall CombineInitData__getEventData(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EventEntity_array *Instance; // x0
  __int64 v9; // x1
  EventMaster_o *v10; // x21
  EventEntity_array *EnableEntityList; // x20
  EventEntity_array *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x22
  struct EventEntity_array *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B3A972 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_EventEntity___ctor___76912864, v5);
    sub_1BD3458(&System_Collections_Generic_List_EventEntity__TypeInfo, v6);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B3A972 = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v10 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = EventMaster__GetEnableEntityList(v10, 13, 1, 0LL),
        !EnableEntityList)
    || (v12 = Instance) == 0LL
    || (v13 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_56362444(
          v13,
          v12->max_length + EnableEntityList->max_length,
          (const MethodInfo_35C05CC *)Method_System_Collections_Generic_List_EventEntity___ctor___76912864),
        !v13) )
  {
    sub_1BD36B4(Instance, v9);
  }
  System_Collections_Generic_List_object___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v14 = (struct EventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v14;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.combineEventList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
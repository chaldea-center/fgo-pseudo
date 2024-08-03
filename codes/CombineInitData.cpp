void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF95C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_49FF95C = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)v5, v6, v7);
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

  if ( (byte_49FF95B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FF95B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__getEntitys_object__object_(
                                Instance,
                                (const MethodInfo_2E3964C *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( !Instance )
    return 0LL;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 1 )
    return 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v10 >= m_CancellationTokenSource )
      sub_1B6432C(Instance, v8);
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
    sub_1B64324(Instance);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v13 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      eventId,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
  EventMaster_o *v9; // x21
  EventEntity_array *EnableEntityList; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  EventEntity_array *v13; // x21
  System_Collections_Generic_List_object__o *v14; // x22
  System_Object_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FF95A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity___ctor___75650400, v5);
    sub_1B640C8(&System_Collections_Generic_List_EventEntity__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FF95A = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v9 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = EventMaster__GetEnableEntityList(v9, 13, 1, 0LL),
        !EnableEntityList)
    || (v13 = Instance) == 0LL
    || (v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_EventEntity__TypeInfo,
                                                             v11,
                                                             v12),
        System_Collections_Generic_List_object____ctor_55234320(
          v14,
          v13->max_length + EnableEntityList->max_length,
          (const MethodInfo_34ACF10 *)Method_System_Collections_Generic_List_EventEntity___ctor___75650400),
        !v14) )
  {
    sub_1B64324(Instance);
  }
  System_Collections_Generic_List_object___AddRange(
    v14,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v14,
    (System_Collections_Generic_IEnumerable_T__o *)v13,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v15 = System_Collections_Generic_List_object___ToArray(
          v14,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = (struct EventEntity_array *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)v15, v16, v17);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
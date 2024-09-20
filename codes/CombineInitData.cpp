void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E83D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5E83D = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventIdList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EventCampaignEntity_o *__fastcall CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  int m_CancellationTokenSource; // w8
  __int64 v8; // x9
  EventCampaignEntity_o *v9; // x21
  __int64 v11; // x8
  _QWORD *v12; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_4A5E83C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E83C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__getEntitys_object__object_(
                                Instance,
                                (const MethodInfo_2E7FB68 *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( !Instance )
    return 0LL;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource < 1 )
    return 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= m_CancellationTokenSource )
      sub_1B88814(Instance, v6);
    v9 = (EventCampaignEntity_o *)*((_QWORD *)&Instance->fields._DispLog + v8);
    if ( !v9 )
      goto LABEL_18;
    if ( v9->fields.eventId == eventId )
      break;
    if ( (int)++v8 >= m_CancellationTokenSource )
      return 0LL;
  }
  Instance = (DataManager_o *)this->fields.eventIdList;
  if ( !Instance
    || (v11 = *(_QWORD *)&Instance->fields.m_CachedPtr,
        v12 = Method_System_Collections_Generic_List_int__Add__,
        ++HIDWORD(Instance->fields.m_CancellationTokenSource),
        !v11) )
  {
LABEL_18:
    sub_1B8880C(Instance, v6);
  }
  m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
  if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v11 + 24) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)Instance,
      eventId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
    *(_DWORD *)(v11 + 4 * m_CancellationTokenSource_low + 32) = eventId;
  }
  return v9;
}


EventEntity_array *__fastcall CombineInitData__getCombineEventList(CombineInitData_o *this, const MethodInfo *method)
{
  return this->fields.combineEventList;
}


void __fastcall CombineInitData__getEventData(CombineInitData_o *this, const MethodInfo *method)
{
  EventEntity_array *Instance; // x0
  __int64 v4; // x1
  EventMaster_o *v5; // x21
  EventEntity_array *EnableEntityList; // x20
  EventEntity_array *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  System_Object_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5E83B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventEntity___ctor___76029712);
    sub_1B885B0(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E83B = 1;
  }
  Instance = (EventEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventEntity_array *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)Instance,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v5 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = EventMaster__GetEnableEntityList(v5, 13, 1, 0LL),
        !EnableEntityList)
    || (v7 = Instance) == 0LL
    || (v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_object____ctor_55562352(
          v8,
          v7->max_length + EnableEntityList->max_length,
          (const MethodInfo_34FD070 *)Method_System_Collections_Generic_List_EventEntity___ctor___76029712),
        !v8) )
  {
    sub_1B8880C(Instance, v4);
  }
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v9 = System_Collections_Generic_List_object___ToArray(
         v8,
         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = (struct EventEntity_array *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.combineEventList, (int32_t)v9, v10, v11);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
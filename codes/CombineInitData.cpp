void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20

  if ( (byte_4210FB8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4210FB8 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v5;
  sub_B0D840(&this->fields.eventIdList, v5);
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
  void *Instance; // x0
  int v8; // w8
  __int64 v9; // x9
  EventCampaignEntity_o *v10; // x21
  __int64 v12; // x0

  if ( (byte_4210FB7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4210FB7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__getEntitys_WarMaster__WarEntity_(
               (DataManager_o *)Instance,
               (const MethodInfo_171483C *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( Instance )
  {
    v8 = *((_DWORD *)Instance + 6);
    if ( v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= v8 )
        {
          v12 = sub_B0D9A8(Instance);
          sub_B0D948(v12, 0LL);
        }
        v10 = (EventCampaignEntity_o *)*((_QWORD *)Instance + v9 + 4);
        if ( !v10 )
          goto LABEL_15;
        if ( v10->fields.eventId == eventId )
          break;
        if ( (int)++v9 >= v8 )
          return 0LL;
      }
      Instance = this->fields.eventIdList;
      if ( Instance )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          eventId,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        return v10;
      }
LABEL_15:
      sub_B0D97C(Instance);
    }
  }
  return 0LL;
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
  DataManager_o *Instance; // x0
  EventMaster_o *v9; // x21
  EventEntity_array *EnableEntityList; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *v13; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v14; // x22
  struct EventEntity_array *v15; // x0

  if ( (byte_4210FB6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity___ctor___67878888, v5);
    sub_B0D8A4(&System_Collections_Generic_List_EventEntity__TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4210FB6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v9 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = (DataManager_o *)EventMaster__GetEnableEntityList(v9, 13, 1, 0LL),
        !EnableEntityList)
    || (v13 = Instance) == 0LL
    || (v14 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B0D974(
                                                                                 System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                 v11,
                                                                                 v12),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v14,
          LODWORD(v13->fields.datalist) + EnableEntityList->max_length,
          (const MethodInfo_2FC4AF4 *)Method_System_Collections_Generic_List_EventEntity___ctor___67878888),
        !v14) )
  {
    sub_B0D97C(Instance);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v14,
    (System_Collections_Generic_IEnumerable_T__o *)v13,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v15 = (struct EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v15;
  sub_B0D840(&this->fields.combineEventList, v15);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_int__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_41861D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v3);
    byte_41861D2 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v8; // x1
  int v9; // w8
  __int64 v10; // x9
  EventCampaignEntity_o *v11; // x21
  __int64 v13; // x0

  if ( (byte_41861D1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_41861D1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__getEntitys_WarMaster__WarEntity_(
               (DataManager_o *)Instance,
               (const MethodInfo_1733C80 *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( Instance )
  {
    v9 = *((_DWORD *)Instance + 6);
    if ( v9 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= v9 )
        {
          v13 = sub_B2C460(Instance);
          sub_B2C400(v13, 0LL);
        }
        v11 = (EventCampaignEntity_o *)*((_QWORD *)Instance + v10 + 4);
        if ( !v11 )
          goto LABEL_15;
        if ( v11->fields.eventId == eventId )
          break;
        if ( (int)++v10 >= v9 )
          return 0LL;
      }
      Instance = this->fields.eventIdList;
      if ( Instance )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          eventId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        return v11;
      }
LABEL_15:
      sub_B2C434(Instance, v8);
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
  __int64 v9; // x1
  EventMaster_o *v10; // x21
  EventEntity_array *EnableEntityList; // x20
  DataManager_o *v12; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v13; // x22
  struct EventEntity_array *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_41861D0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventEntity___ctor___67305328, v5);
    sub_B2C35C(&System_Collections_Generic_List_EventEntity__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_41861D0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v10 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = (DataManager_o *)EventMaster__GetEnableEntityList(v10, 13, 1, 0LL),
        !EnableEntityList)
    || (v12 = Instance) == 0LL
    || (v13 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B2C42C(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v13,
          LODWORD(v12->fields.datalist) + EnableEntityList->max_length,
          (const MethodInfo_2EF386C *)Method_System_Collections_Generic_List_EventEntity___ctor___67305328),
        !v13) )
  {
    sub_B2C434(Instance, v9);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v14 = (struct EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
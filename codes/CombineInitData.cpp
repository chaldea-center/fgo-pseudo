void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438B218 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438B218 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.eventIdList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EventCampaignEntity_o *__fastcall CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  __int64 v8; // x9
  EventCampaignEntity_o *v9; // x21
  __int64 v11; // x0

  if ( (byte_438B217 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B217 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__getEntitys_WarMaster__WarEntity_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D18684 *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( Instance )
  {
    v7 = *((_DWORD *)Instance + 6);
    if ( v7 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= v7 )
        {
          v11 = sub_B776C8(Instance);
          sub_B77668(v11, 0LL);
        }
        v9 = (EventCampaignEntity_o *)*((_QWORD *)Instance + v8 + 4);
        if ( !v9 )
          goto LABEL_15;
        if ( v9->fields.eventId == eventId )
          break;
        if ( (int)++v8 >= v7 )
          return 0LL;
      }
      Instance = this->fields.eventIdList;
      if ( Instance )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          eventId,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        return v9;
      }
LABEL_15:
      sub_B7769C(Instance, v6);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  EventMaster_o *v5; // x21
  EventEntity_array *EnableEntityList; // x20
  DataManager_o *v7; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v8; // x22
  struct EventEntity_array *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_438B216 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity___ctor___69391240);
    sub_B775C4(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B216 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v5 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = (DataManager_o *)EventMaster__GetEnableEntityList(v5, 13, 1, 0LL),
        !EnableEntityList)
    || (v7 = Instance) == 0LL
    || (v8 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B77694(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v8,
          LODWORD(v7->fields.datalist) + EnableEntityList->max_length,
          (const MethodInfo_30526A4 *)Method_System_Collections_Generic_List_EventEntity___ctor___69391240),
        !v8) )
  {
    sub_B7769C(Instance, v4);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v9 = (struct EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                     (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v9;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
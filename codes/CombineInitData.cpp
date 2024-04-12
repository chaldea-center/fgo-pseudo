void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B2C08 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B2C08 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v3;
  sub_B52920(
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

  if ( (byte_42B2C07 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C07 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__getEntitys_WarMaster__WarEntity_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F418 *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
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
          v11 = sub_B52A88(Instance);
          sub_B52A28(v11, 0LL);
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
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        return v9;
      }
LABEL_15:
      sub_B52A5C(Instance, v6);
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

  if ( (byte_42B2C06 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_EventEntity__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_EventEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_EventEntity___ctor___68506752);
    sub_B52984(&System_Collections_Generic_List_EventEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2C06 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v5 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = (DataManager_o *)EventMaster__GetEnableEntityList(v5, 13, 1, 0LL),
        !EnableEntityList)
    || (v7 = Instance) == 0LL
    || (v8 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B52A54(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v8,
          LODWORD(v7->fields.datalist) + EnableEntityList->max_length,
          (const MethodInfo_2FF0A10 *)Method_System_Collections_Generic_List_EventEntity___ctor___68506752),
        !v8) )
  {
    sub_B52A5C(Instance, v4);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
    (System_Collections_Generic_IEnumerable_T__o *)v7,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v9 = (struct EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v9;
  sub_B52920(
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
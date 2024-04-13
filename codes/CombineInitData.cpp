void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E99B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v5, v6, v7);
    byte_42E99B3 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.eventIdList = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EventCampaignEntity_o *__fastcall CombineInitData__getCombineEventData(
        CombineInitData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *Instance; // x0
  __int64 v13; // x1
  int v14; // w8
  __int64 v15; // x9
  EventCampaignEntity_o *v16; // x21
  __int64 v18; // x0

  if ( (byte_42E99B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E99B2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__getEntitys_WarMaster__WarEntity_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE44E0 *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( Instance )
  {
    v14 = *((_DWORD *)Instance + 6);
    if ( v14 >= 1 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v15 >= v14 )
        {
          v18 = sub_B5D6C8(Instance);
          sub_B5D668(v18, 0LL);
        }
        v16 = (EventCampaignEntity_o *)*((_QWORD *)Instance + v15 + 4);
        if ( !v16 )
          goto LABEL_15;
        if ( v16->fields.eventId == eventId )
          break;
        if ( (int)++v15 >= v14 )
          return 0LL;
      }
      Instance = this->fields.eventIdList;
      if ( Instance )
      {
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)Instance,
          eventId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        return v16;
      }
LABEL_15:
      sub_B5D69C(Instance, v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  EventMaster_o *v22; // x21
  EventEntity_array *EnableEntityList; // x20
  DataManager_o *v24; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v25; // x22
  struct EventEntity_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E99B1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity___ctor___68734136, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_EventEntity__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E99B1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v22 = (EventMaster_o *)Instance,
        EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)Instance, 5, 1, 0LL),
        Instance = (DataManager_o *)EventMaster__GetEnableEntityList(v22, 13, 1, 0LL),
        !EnableEntityList)
    || (v24 = Instance) == 0LL
    || (v25 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B5D694(System_Collections_Generic_List_EventEntity__TypeInfo),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v25,
          LODWORD(v24->fields.datalist) + EnableEntityList->max_length,
          (const MethodInfo_30563CC *)Method_System_Collections_Generic_List_EventEntity___ctor___68734136),
        !v25) )
  {
    sub_B5D69C(Instance, v21);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v25,
    (System_Collections_Generic_IEnumerable_T__o *)v24,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v26 = (struct EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
void __fastcall CombineInitData___ctor(CombineInitData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F9911 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_40F9911 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.eventIdList = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventIdList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  WebViewManager_o *Instance; // x0
  WarEntity_array *Entitys_WarMaster__WarEntity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  __int64 v12; // x9
  EventCampaignEntity_o *v13; // x21
  System_Collections_Generic_List_int__o *eventIdList; // x0

  if ( (byte_40F9910 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F9910 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Entitys_WarMaster__WarEntity = DataManager__getEntitys_WarMaster__WarEntity_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_18C3518 *)Method_DataManager_getEntitys_EventCampaignMaster__EventCampaignEntity___);
  if ( Entitys_WarMaster__WarEntity )
  {
    max_length = Entitys_WarMaster__WarEntity->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
        {
          sub_B17100(Entitys_WarMaster__WarEntity, v9, v10);
          sub_B170A0();
        }
        v13 = (EventCampaignEntity_o *)Entitys_WarMaster__WarEntity->m_Items[v12];
        if ( !v13 )
          goto LABEL_15;
        if ( v13->fields.eventId == eventId )
          break;
        if ( (int)++v12 >= max_length )
          return 0LL;
      }
      eventIdList = this->fields.eventIdList;
      if ( eventIdList )
      {
        System_Collections_Generic_List_int___Add(
          eventIdList,
          eventId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        return v13;
      }
LABEL_15:
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  EventMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMaster_o *v10; // x21
  EventEntity_array *EnableEntityList; // x20
  EventEntity_array *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  EventEntity_array *v17; // x21
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *v18; // x22
  struct EventEntity_array *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F990F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__AddRange__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventEntity___ctor___66731144, v5);
    sub_B16FFC(&System_Collections_Generic_List_EventEntity__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F990F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
    || (v10 = MasterData_WarQuestSelectionMaster,
        EnableEntityList = EventMaster__GetEnableEntityList(MasterData_WarQuestSelectionMaster, 5, 1, 0LL),
        v12 = EventMaster__GetEnableEntityList(v10, 13, 1, 0LL),
        !EnableEntityList)
    || (v17 = v12) == 0LL
    || (v18 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)sub_B170CC(
                                                                                 System_Collections_Generic_List_EventEntity__TypeInfo,
                                                                                 v13,
                                                                                 v14,
                                                                                 v15,
                                                                                 v16),
        System_Collections_Generic_List_RegexCharClass_SingleRange____ctor(
          v18,
          v17->max_length + EnableEntityList->max_length,
          (const MethodInfo_2F250E4 *)Method_System_Collections_Generic_List_EventEntity___ctor___66731144),
        !v18) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    (System_Collections_Generic_IEnumerable_T__o *)EnableEntityList,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v18,
    (System_Collections_Generic_IEnumerable_T__o *)v17,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_EventEntity__AddRange__);
  v19 = (struct EventEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventEntity__ToArray__);
  this->fields.combineEventList = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.combineEventList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


System_Collections_Generic_List_int__o *__fastcall CombineInitData__getEventIdList(
        CombineInitData_o *this,
        const MethodInfo *method)
{
  return this->fields.eventIdList;
}
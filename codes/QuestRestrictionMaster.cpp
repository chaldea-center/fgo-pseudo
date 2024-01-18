void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418AF5F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_418AF5F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    174,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionEntity_o *__fastcall QuestRestrictionMaster__GetEntity(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418AF5D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_418AF5D = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *Instance; // x0
  __int64 v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  WarEntity_o *Entity; // x25
  int32_t i; // w24
  __int64 v19; // x10
  int v20; // w8
  System_String_o *result; // x0

  if ( (byte_418AF62 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_B2C35C(&QuestRestrictionEntity_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418AF62 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  Entity = 0LL;
  for ( i = 0; i < v16; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 i,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_26;
    v19 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v19
      || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v19 - 8) != QuestRestrictionEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v20 = *((_DWORD *)Instance + 5);
      if ( v20 != phase )
      {
        if ( !Entity )
        {
          if ( v20 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v14 )
              goto LABEL_26;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v14,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v14 )
      {
        result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v14,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_B2C434(Instance, v13);
    }
  }
  if ( Entity )
    return Entity->fields.age;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionMaster__TryGetEntity(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418AF5E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_418AF5E = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  void *v16; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x24
  int32_t v20; // w25
  _DWORD *v21; // x26
  __int64 v22; // x10
  int v23; // w8

  if ( (byte_418AF60 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_RestrictionMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v12);
    sub_B2C35C(&QuestRestrictionEntity_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_418AF60 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v20,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v21 = Instance;
      v22 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v22
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v22 - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v17 )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v17,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v23 = v21[5];
          v16 = Instance;
          if ( !v23 || v23 == phase )
          {
            if ( !v19 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v19,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          }
        }
      }
      if ( ++v20 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B2C434(Instance, v16);
  }
LABEL_19:
  if ( !v19 )
    goto LABEL_21;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_31206808(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  void *Instance; // x0
  void *v22; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x24
  int32_t Count; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x26
  int32_t v27; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x28
  __int64 v29; // x10
  int32_t missionConditionDetailId; // w8
  QuestRestrictionEntity_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_418AF61 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questRestrictionEntityList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_RestrictionMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v18);
    sub_B2C35C(&QuestRestrictionEntity_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_418AF61 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v27,
                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v29 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v29
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v23 )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v23,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          missionConditionDetailId = v28->fields.missionConditionDetailId;
          v22 = Instance;
          if ( !missionConditionDetailId || missionConditionDetailId == phase )
          {
            if ( !v25 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v25,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
            if ( !v26 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v26,
              v28,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
          }
        }
      }
      if ( ++v27 >= Count )
        goto LABEL_20;
    }
LABEL_23:
    sub_B2C434(Instance, v22);
  }
LABEL_20:
  if ( !v26 )
    goto LABEL_23;
  v31 = (QuestRestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  *questRestrictionEntityList = v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)questRestrictionEntityList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !v25 )
    goto LABEL_23;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}
void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED2F0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED2F0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    175,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_42ED2EE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      questId,
      phase,
      *(_QWORD *)&restrictionId);
    byte_42ED2EE = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


System_String_o *__fastcall QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  void *Instance; // x0
  __int64 v23; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x22
  int32_t Count; // w0
  int32_t v26; // w23
  WarEntity_o *Entity; // x25
  int32_t i; // w24
  __int64 v29; // x10
  int v30; // w8
  System_String_o *result; // x0

  if ( (byte_42ED2F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questId, phase, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_RestrictionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&QuestRestrictionEntity_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42ED2F3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v26 = Count;
  Entity = 0LL;
  for ( i = 0; i < v26; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 i,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_26;
    v29 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v29
      || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v29 - 8) != QuestRestrictionEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v30 = *((_DWORD *)Instance + 5);
      if ( v30 != phase )
      {
        if ( !Entity )
        {
          if ( v30 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v24 )
              goto LABEL_26;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v24,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_23FAE10 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v24 )
      {
        result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v24,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_B5D69C(Instance, v23);
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

  if ( (byte_42ED2EF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&phase);
    byte_42ED2EF = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  void *Instance; // x0
  void *v34; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x24
  int32_t v38; // w25
  _DWORD *v39; // x26
  __int64 v40; // x10
  int v41; // w8

  if ( (byte_42ED2F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questId, phase, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_RestrictionMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&QuestRestrictionEntity_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    byte_42ED2F1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v37 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v37,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v38,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v39 = Instance;
      v40 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v40
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v40 - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v35 )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v35,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v41 = v39[5];
          v34 = Instance;
          if ( !v41 || v41 == phase )
          {
            if ( !v37 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v37,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          }
        }
      }
      if ( ++v38 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(Instance, v34);
  }
LABEL_19:
  if ( !v37 )
    goto LABEL_21;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v37,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_34244420(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  void *Instance; // x0
  void *v48; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x24
  int32_t Count; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x26
  int32_t v53; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x28
  __int64 v55; // x10
  int32_t missionConditionDetailId; // w8
  QuestRestrictionEntity_array *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7

  if ( (byte_42ED2F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)questRestrictionEntityList,
      questId,
      *(_QWORD *)&phase);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_RestrictionMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&QuestRestrictionEntity_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    byte_42ED2F2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v53 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v53,
                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v55 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v55
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v55 - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v49 )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v49,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          missionConditionDetailId = v54->fields.missionConditionDetailId;
          v48 = Instance;
          if ( !missionConditionDetailId || missionConditionDetailId == phase )
          {
            if ( !v51 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v51,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
            if ( !v52 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v52,
              v54,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
          }
        }
      }
      if ( ++v53 >= Count )
        goto LABEL_20;
    }
LABEL_23:
    sub_B5D69C(Instance, v48);
  }
LABEL_20:
  if ( !v52 )
    goto LABEL_23;
  v57 = (QuestRestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v52,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  *questRestrictionEntityList = v57;
  sub_B5D560(
    (BattleServantConfConponent_o *)questRestrictionEntityList,
    (System_Int32_array **)v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  if ( !v51 )
    goto LABEL_23;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v51,
                                      (const MethodInfo_305910C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}
void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43898E7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
    byte_43898E7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    175,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
}


QuestRestrictionEntity_o *__fastcall QuestRestrictionMaster__GetEntity(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_43898E5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
    byte_43898E5 = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, 0LL);
  return (QuestRestrictionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21FBCE4 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


System_String_o *__fastcall QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  WarEntity_o *Entity; // x25
  int32_t i; // w24
  __int64 v14; // x10
  int v15; // w8
  System_String_o *result; // x0

  if ( (byte_43898EA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_B775C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_B775C4(&QuestRestrictionEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43898EA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  Entity = 0LL;
  for ( i = 0; i < v11; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                 i,
                 (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_26;
    v14 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v14
      || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v14 - 8) != QuestRestrictionEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v15 = *((_DWORD *)Instance + 5);
      if ( v15 != phase )
      {
        if ( !Entity )
        {
          if ( v15 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v9 )
              goto LABEL_26;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v9,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_21FB894 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v9 )
      {
        result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v9,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_B7769C(Instance, v8);
    }
  }
  if ( Entity )
    return Entity->fields.age;
  return 0LL;
}


bool __fastcall QuestRestrictionMaster__TryGetEntity(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_43898E6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
    byte_43898E6 = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  void *v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x24
  int32_t v11; // w25
  _DWORD *v12; // x26
  __int64 v13; // x10
  int v14; // w8

  if ( (byte_43898E8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_B775C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_B775C4(&QuestRestrictionEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43898E8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v11,
                   (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v12 = Instance;
      v13 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v13
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v13 - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v8 )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v8,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v14 = v12[5];
          v7 = Instance;
          if ( !v14 || v14 == phase )
          {
            if ( !v10 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v10,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          }
        }
      }
      if ( ++v11 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B7769C(Instance, v7);
  }
LABEL_19:
  if ( !v10 )
    goto LABEL_21;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_22553748(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  void *v9; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x24
  int32_t Count; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x26
  int32_t v14; // w27
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x28
  __int64 v16; // x10
  int32_t missionConditionDetailId; // w8
  QuestRestrictionEntity_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_43898E9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_B775C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
    sub_B775C4(&QuestRestrictionEntity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43898E9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                   v14,
                   (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v16 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v16
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v16 - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v10 )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v10,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          missionConditionDetailId = v15->fields.missionConditionDetailId;
          v9 = Instance;
          if ( !missionConditionDetailId || missionConditionDetailId == phase )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
            if ( !v13 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v13,
              v15,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
          }
        }
      }
      if ( ++v14 >= Count )
        goto LABEL_20;
    }
LABEL_23:
    sub_B7769C(Instance, v9);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_23;
  v18 = (QuestRestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  *questRestrictionEntityList = v18;
  sub_B77560(
    (BattleServantConfConponent_o *)questRestrictionEntityList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !v12 )
    goto LABEL_23;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                      (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}
void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD5DB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_40FD5DB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    174,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_40FD5D9 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_40FD5D9 = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  WarEntity_o *Entity; // x25
  int32_t i; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v21; // x10
  int klass_high; // w8
  System_String_o *result; // x0

  if ( (byte_40FD5DE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_B16FFC(&QuestRestrictionEntity_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FD5DE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  Entity = 0LL;
  for ( i = 0; i < v16; ++i )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_26;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             i,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_26;
    v21 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (QuestRestrictionEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] != QuestRestrictionEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( LODWORD(Item[1].klass) == questId )
    {
      klass_high = HIDWORD(Item[1].klass);
      if ( klass_high != phase )
      {
        if ( !Entity )
        {
          if ( klass_high )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v14 )
              goto LABEL_26;
            Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                       v14,
                       (int32_t)Item[1].monitor,
                       (const MethodInfo_266F388 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v14 )
      {
        result = (System_String_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v14,
                                      (int32_t)Item[1].monitor,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_B170D4();
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

  if ( (byte_40FD5DA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_40FD5DA = 1;
  }
  PK = QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x22
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x24
  int32_t v24; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v27; // x26
  __int64 v28; // x10
  WarEntity_o *Entity; // x0
  int klass_high; // w8

  if ( (byte_40FD5DC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_RestrictionMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v12);
    sub_B16FFC(&QuestRestrictionEntity_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_40FD5DC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_21;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v24,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v27 = Item;
      v28 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (QuestRestrictionEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == questId )
      {
        if ( !v17 )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v17,
                   (int32_t)Item[1].monitor,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Entity )
        {
          klass_high = HIDWORD(v27[1].klass);
          if ( !klass_high || klass_high == phase )
          {
            if ( !v23 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
          }
        }
      }
      if ( ++v24 >= Count )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  if ( !v23 )
    goto LABEL_21;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_31224096(
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x24
  int32_t Count; // w25
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x26
  int32_t v35; // w27
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x28
  __int64 v39; // x10
  WarEntity_o *Entity; // x0
  int32_t missionConditionDetailId; // w8
  QuestRestrictionEntity_array *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40FD5DD & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questRestrictionEntityList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_RestrictionMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v18);
    sub_B16FFC(&QuestRestrictionEntity_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40FD5DD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_23;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v35,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
      v39 = *(&QuestRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v39
        || (QuestRestrictionEntity_c *)Item->klass->_2.typeHierarchy[v39 - 1] != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == questId )
      {
        if ( !v23 )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v23,
                   (int32_t)Item[1].monitor,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Entity )
        {
          missionConditionDetailId = v38->fields.missionConditionDetailId;
          if ( !missionConditionDetailId || missionConditionDetailId == phase )
          {
            if ( !v29 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              (EventMissionProgressRequest_Argument_ProgressData_o *)Entity,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_RestrictionEntity__Add__);
            if ( !v34 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v34,
              v38,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
          }
        }
      }
      if ( ++v35 >= Count )
        goto LABEL_20;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_20:
  if ( !v34 )
    goto LABEL_23;
  v42 = (QuestRestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  *questRestrictionEntityList = v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)questRestrictionEntityList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  if ( !v29 )
    goto LABEL_23;
  return (RestrictionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}
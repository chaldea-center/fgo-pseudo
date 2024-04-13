void __fastcall WarBoardStageBossMaster___ctor(WarBoardStageBossMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABC7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EABC7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    467,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageBossEntity_o *__fastcall WarBoardStageBossMaster__GetEntity(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EABC8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__,
      stageId,
      idx,
      method);
    byte_42EABC8 = 1;
  }
  PK = WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardStageBossEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarBoardStageBossEntity__o *__fastcall WarBoardStageBossMaster__GetEntityList(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 v27; // x10

  if ( (byte_42EABC6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      stageId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&WarBoardStageBossEntity_TypeInfo, v18, v19, v20);
    byte_42EABC6 = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v26,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v22 = list;
      v27 = *(&WarBoardStageBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (WarBoardStageBossEntity_c *)list->klass->_2.typeHierarchy[v27 - 1] != WarBoardStageBossEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == stageId )
      {
        if ( !v21 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v21,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__);
      }
      if ( ++v26 >= v25 )
        return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v21;
    }
LABEL_15:
    sub_B5D69C(list, v22);
  }
  return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardStageBossMaster__TryGetEntity(
        WarBoardStageBossMaster_o *this,
        WarBoardStageBossEntity_o **entity,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EABC9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__,
      (_DWORD)entity,
      stageId,
      *(_QWORD *)&idx);
    byte_42EABC9 = 1;
  }
  PK = WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__);
}
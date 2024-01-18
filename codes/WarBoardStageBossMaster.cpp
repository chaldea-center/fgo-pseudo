void __fastcall WarBoardStageBossMaster___ctor(WarBoardStageBossMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41892E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__, method);
    byte_41892E7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    465,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageBossEntity_o *__fastcall WarBoardStageBossMaster__GetEntity(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41892E8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__,
      *(_QWORD *)&stageId);
    byte_41892E8 = 1;
  }
  PK = WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&idx);
  return (WarBoardStageBossEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_WarBoardStageBossEntity__o *__fastcall WarBoardStageBossMaster__GetEntityList(
        WarBoardStageBossMaster_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_41892E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo, v8);
    sub_B2C35C(&WarBoardStageBossEntity_TypeInfo, v9);
    byte_41892E6 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardStageBossEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardStageBossEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v11 = list;
      v16 = *(&WarBoardStageBossEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (WarBoardStageBossEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != WarBoardStageBossEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == stageId )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardStageBossEntity__Add__);
      }
      if ( ++v15 >= v14 )
        return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v10;
    }
LABEL_15:
    sub_B2C434(list, v11);
  }
  return (System_Collections_Generic_List_WarBoardStageBossEntity__o *)v10;
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

  if ( (byte_41892E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__, entity);
    byte_41892E9 = 1;
  }
  PK = WarBoardStageBossEntity__CreatePK(stageId, idx, *(const MethodInfo **)&stageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_WarBoardStageBossMaster__WarBoardStageBossEntity__string__TryGetEntity__);
}
void __fastcall BgmReleaseMaster___ctor(BgmReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41875CE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__, method);
    byte_41875CE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    191,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BgmReleaseEntity_o *__fastcall BgmReleaseMaster__GetEntity(
        BgmReleaseMaster_o *this,
        int32_t bgmId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41875CC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__, *(_QWORD *)&bgmId);
    byte_41875CC = 1;
  }
  PK = BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&id);
  return (BgmReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmReleaseMaster__TryGetEntity(
        BgmReleaseMaster_o *this,
        BgmReleaseEntity_o **entity,
        int32_t bgmId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_41875CD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__, entity);
    byte_41875CD = 1;
  }
  PK = BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&bgmId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BgmReleaseEntity_array *__fastcall BgmReleaseMaster__getEntitys(
        BgmReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_41875CF & 1) == 0 )
  {
    sub_B2C35C(&BgmReleaseEntity_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmReleaseEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BgmReleaseEntity__TypeInfo, v10);
    byte_41875CF = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BgmReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
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
      v12 = list;
      v16 = *(&BgmReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (BgmReleaseEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != BgmReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BgmReleaseEntity__Add__);
      }
      if ( ++v15 >= v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v12);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (BgmReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__);
}
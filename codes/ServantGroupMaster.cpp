void __fastcall ServantGroupMaster___ctor(ServantGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4189FA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__, method);
    byte_4189FA2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    17,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_o *__fastcall ServantGroupMaster__GetEntity(
        ServantGroupMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4189FA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4189FA0 = 1;
  }
  PK = ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&svtId);
  return (ServantGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantGroupMaster__TryGetEntity(
        ServantGroupMaster_o *this,
        ServantGroupEntity_o **entity,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4189FA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__, entity);
    byte_4189FA1 = 1;
  }
  PK = ServantGroupEntity__CreatePK(id, svtId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ServantGroupMaster__ServantGroupEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_array *__fastcall ServantGroupMaster__getEntityListById(
        ServantGroupMaster_o *this,
        int32_t groupId,
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

  if ( (byte_4189FA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo, v9);
    sub_B2C35C(&ServantGroupEntity_TypeInfo, v10);
    byte_4189FA3 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
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
      if ( list )
      {
        v12 = list;
        v16 = *(&ServantGroupEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (ServantGroupEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == ServantGroupEntity_TypeInfo
          && LODWORD(list->fields.items) == groupId )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantGroupEntity__Add__);
        }
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
  return (ServantGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantGroupEntity_array *__fastcall ServantGroupMaster__getListByServantID(
        ServantGroupMaster_o *this,
        int32_t svt_id,
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
  __int64 v15; // x10

  if ( (byte_4189FA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svt_id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantGroupEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantGroupEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantGroupEntity__TypeInfo, v9);
    sub_B2C35C(&ServantGroupEntity_TypeInfo, v10);
    byte_4189FA4 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                         list,
                                                                                         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      v15 = *(&ServantGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (ServantGroupEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] == ServantGroupEntity_TypeInfo
        && HIDWORD(list->fields.items) == svt_id )
      {
        if ( !v11 )
          goto LABEL_17;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantGroupEntity__Add__);
      }
    }
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_17;
  }
  if ( !v11 )
LABEL_17:
    sub_B2C434(list, v12);
  return (ServantGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ServantGroupEntity__ToArray__);
}
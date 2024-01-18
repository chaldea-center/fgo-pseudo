void __fastcall BoxGachaTalkMaster___ctor(BoxGachaTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418970F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__, method);
    byte_418970F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    124,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaTalkEntity_o *__fastcall BoxGachaTalkMaster__GetEntity(
        BoxGachaTalkMaster_o *this,
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418970D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_418970D = 1;
  }
  PK = BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&no);
  return (BoxGachaTalkEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                   (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_24E4520 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoxGachaTalkMaster__TryGetEntity(
        BoxGachaTalkMaster_o *this,
        BoxGachaTalkEntity_o **entity,
        int32_t id,
        int32_t guideImageId,
        int32_t no,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418970E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__, entity);
    byte_418970E = 1;
  }
  PK = BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&guideImageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData(
        BoxGachaTalkMaster_o *this,
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

  if ( (byte_4189710 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaTalkEntity_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v10);
    byte_4189710 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
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
        v16 = *(&BoxGachaTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (BoxGachaTalkEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == BoxGachaTalkEntity_TypeInfo
          && (id < 1 || LODWORD(list->fields.items) == id) )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B2C434(list, v12);
  }
LABEL_15:
  if ( !v11 )
    goto LABEL_17;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData_28338772(
        BoxGachaTalkMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  __int64 v13; // x1
  void *list; // x0
  int32_t v15; // w22
  int32_t v16; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x24
  __int64 v18; // x10

  if ( (byte_4189711 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaTalkEntity_TypeInfo, ids);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v11);
    byte_4189711 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v16,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v18 = *(&BoxGachaTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v18
          && *(BoxGachaTalkEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v18 - 8) == BoxGachaTalkEntity_TypeInfo )
        {
          list = (void *)System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v12 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              v17,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
          }
        }
      }
      if ( ++v16 >= v15 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v13);
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_16;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}
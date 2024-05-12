void __fastcall BoxGachaTalkMaster___ctor(BoxGachaTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D7A8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
    byte_438D7A8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    125,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
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

  if ( (byte_438D7A6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
    byte_438D7A6 = 1;
  }
  PK = BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&no);
  return (BoxGachaTalkEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_21FBCE4 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
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

  if ( (byte_438D7A7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
    byte_438D7A7 = 1;
  }
  PK = BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&guideImageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData(
        BoxGachaTalkMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_438D7A9 & 1) == 0 )
  {
    sub_B775C4(&BoxGachaTalkEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
    byte_438D7A9 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&BoxGachaTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (BoxGachaTalkEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == BoxGachaTalkEntity_TypeInfo
          && (id < 1 || LODWORD(list->fields.items) == id) )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B7769C(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData_29580792(
        BoxGachaTalkMaster_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x24
  __int64 v11; // x10

  if ( (byte_438D7AA & 1) == 0 )
  {
    sub_B775C4(&BoxGachaTalkEntity_TypeInfo);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
    byte_438D7AA = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v9,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v11 = *(&BoxGachaTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(BoxGachaTalkEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == BoxGachaTalkEntity_TypeInfo )
        {
          list = (void *)System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v5 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v5,
              v10,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
          }
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7769C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}
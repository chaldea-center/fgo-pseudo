void __fastcall BoxGachaTalkMaster___ctor(BoxGachaTalkMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA5C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA5C8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    125,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string___ctor__);
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

  if ( (byte_42EA5C6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__,
      id,
      guideImageId,
      *(_QWORD *)&no);
    byte_42EA5C6 = 1;
  }
  PK = BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&no);
  return (BoxGachaTalkEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__GetEntity__);
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

  if ( (byte_42EA5C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&guideImageId);
    byte_42EA5C7 = 1;
  }
  PK = BoxGachaTalkEntity__CreatePK(id, guideImageId, no, *(const MethodInfo **)&guideImageId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_BoxGachaTalkMaster__BoxGachaTalkEntity__string__TryGetEntity__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData(
        BoxGachaTalkMaster_o *this,
        int32_t id,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42EA5C9 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaTalkEntity_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v21, v22, v23);
    byte_42EA5C9 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v25 = list;
        v29 = *(&BoxGachaTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v29
          && (BoxGachaTalkEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] == BoxGachaTalkEntity_TypeInfo
          && (id < 1 || LODWORD(list->fields.items) == id) )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_15;
    }
LABEL_17:
    sub_B5D69C(list, v25);
  }
LABEL_15:
  if ( !v24 )
    goto LABEL_17;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}


BoxGachaTalkEntity_array *__fastcall BoxGachaTalkMaster__getTalkData_28554248(
        BoxGachaTalkMaster_o *this,
        System_Int32_array *ids,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  void *list; // x0
  int32_t v30; // w22
  int32_t v31; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v32; // x24
  __int64 v33; // x10

  if ( (byte_42EA5CA & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaTalkEntity_TypeInfo, (_DWORD)ids, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo, v24, v25, v26);
    byte_42EA5CA = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoxGachaTalkEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoxGachaTalkEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v30 = (int)list;
    v31 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v31,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v32 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v33 = *(&BoxGachaTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v33
          && *(BoxGachaTalkEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v33 - 8) == BoxGachaTalkEntity_TypeInfo )
        {
          list = (void *)System_Linq_Enumerable__Contains_int_(
                           (System_Collections_Generic_IEnumerable_TSource__o *)ids,
                           *((_DWORD *)list + 4),
                           (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v27 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v27,
              v32,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__Add__);
          }
        }
      }
      if ( ++v31 >= v30 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v28);
  }
LABEL_14:
  if ( !v27 )
    goto LABEL_16;
  return (BoxGachaTalkEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BoxGachaTalkEntity__ToArray__);
}
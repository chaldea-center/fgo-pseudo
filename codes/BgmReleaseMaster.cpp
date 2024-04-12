void __fastcall BgmReleaseMaster___ctor(BgmReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFCEB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__);
    byte_42AFCEB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    192,
    (const MethodInfo_23E268C *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BgmReleaseEntity_o *__fastcall BgmReleaseMaster__GetEntity(
        BgmReleaseMaster_o *this,
        int32_t bgmId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AFCE9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__);
    byte_42AFCE9 = 1;
  }
  PK = BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&id);
  return (BgmReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23E2728 *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__GetEntity__);
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

  if ( (byte_42AFCEA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__);
    byte_42AFCEA = 1;
  }
  PK = BgmReleaseEntity__CreatePK(bgmId, id, *(const MethodInfo **)&bgmId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_BgmReleaseMaster__BgmReleaseEntity__string__TryGetEntity__);
}


BgmReleaseEntity_array *__fastcall BgmReleaseMaster__getEntitys(
        BgmReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42AFCEC & 1) == 0 )
  {
    sub_B52984(&BgmReleaseEntity_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_BgmReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_BgmReleaseEntity__TypeInfo);
    byte_42AFCEC = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BgmReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BgmReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v6 = list;
      v10 = *(&BgmReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (BgmReleaseEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] != BgmReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BgmReleaseEntity__Add__);
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (BgmReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BgmReleaseEntity__ToArray__);
}
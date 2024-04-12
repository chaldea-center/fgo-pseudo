void __fastcall TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2349 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
    byte_42B2349 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    377,
    (const MethodInfo_23E268C *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *__fastcall TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2347 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
    byte_42B2347 = 1;
  }
  PK = TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23E2728 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
}


System_String_array *__fastcall TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w23
  __int64 v9; // x10
  Il2CppObject *syncRoot; // x27
  void *monitor; // x8
  unsigned __int64 v12; // x28
  __int64 v14; // x0

  if ( (byte_42B234A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_string__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&TreasureBoxTalkEntity_TypeInfo);
    byte_42B234A = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = *(&TreasureBoxTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (TreasureBoxTalkEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == TreasureBoxTalkEntity_TypeInfo
          && LODWORD(list->fields.items) == treasureBoxId )
        {
          syncRoot = list->fields._syncRoot;
          if ( !syncRoot )
            goto LABEL_20;
          monitor = syncRoot[1].monitor;
          if ( (int)monitor >= 1 )
            break;
        }
      }
LABEL_17:
      if ( ++v8 >= v7 )
        goto LABEL_18;
    }
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)monitor )
      {
        v14 = sub_B52A88(list);
        sub_B52A28(v14, 0LL);
      }
      if ( !v4 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&syncRoot[2].klass + v12),
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(monitor) = syncRoot[1].monitor;
      if ( (__int64)++v12 >= (int)monitor )
        goto LABEL_17;
    }
LABEL_20:
    sub_B52A5C(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureBoxTalkMaster__TryGetEntity(
        TreasureBoxTalkMaster_o *this,
        TreasureBoxTalkEntity_o **entity,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B2348 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
    byte_42B2348 = 1;
  }
  PK = TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}
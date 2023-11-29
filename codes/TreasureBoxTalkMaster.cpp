void __fastcall TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB873 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__, method);
    byte_40FB873 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    376,
    (const MethodInfo_266F73C *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *__fastcall TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB871 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__,
      *(_QWORD *)&treasureBoxId);
    byte_40FB871 = 1;
  }
  PK = TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_266F7D8 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x10
  _QWORD *monitor; // x27
  __int64 v23; // x8
  unsigned __int64 v24; // x28

  if ( (byte_40FB874 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&treasureBoxId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B16FFC(&TreasureBoxTalkEntity_TypeInfo, v11);
    byte_40FB874 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  *(_QWORD *)&treasureBoxId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        goto LABEL_20;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v17,
               v16,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&TreasureBoxTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (TreasureBoxTalkEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == TreasureBoxTalkEntity_TypeInfo
          && LODWORD(Item[1].klass) == treasureBoxId )
        {
          monitor = Item[1].monitor;
          if ( !monitor )
            goto LABEL_20;
          v23 = monitor[3];
          if ( (int)v23 >= 1 )
            break;
        }
      }
LABEL_17:
      if ( ++v16 >= v15 )
        goto LABEL_18;
    }
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v23 )
      {
        sub_B17100(Item, v19, v20);
        sub_B170A0();
      }
      if ( !v12 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        (EventMissionProgressRequest_Argument_ProgressData_o *)monitor[v24 + 4],
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(v23) = *((_DWORD *)monitor + 6);
      if ( (__int64)++v24 >= (int)v23 )
        goto LABEL_17;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  if ( !v12 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_40FB872 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__, entity);
    byte_40FB872 = 1;
  }
  PK = TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}
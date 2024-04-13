void __fastcall TreasureBoxTalkMaster___ctor(TreasureBoxTalkMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACAA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EACAA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    377,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxTalkEntity_o *__fastcall TreasureBoxTalkMaster__GetEntity(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EACA8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__,
      treasureBoxId,
      idx,
      method);
    byte_42EACA8 = 1;
  }
  PK = TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxTalkEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__GetEntity__);
}


System_String_array *__fastcall TreasureBoxTalkMaster__GetTreasureBoxVoiceData(
        TreasureBoxTalkMaster_o *this,
        int32_t treasureBoxId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  __int64 v24; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v26; // w22
  int32_t v27; // w23
  __int64 v28; // x10
  Il2CppObject *syncRoot; // x27
  void *monitor; // x8
  unsigned __int64 v31; // x28
  __int64 v33; // x0

  if ( (byte_42EACAB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      treasureBoxId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TreasureBoxTalkEntity_TypeInfo, v20, v21, v22);
    byte_42EACAB = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v26 = (int)list;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_20;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v28 = *(&TreasureBoxTalkEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (TreasureBoxTalkEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == TreasureBoxTalkEntity_TypeInfo
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
      if ( ++v27 >= v26 )
        goto LABEL_18;
    }
    v31 = 0LL;
    while ( 1 )
    {
      if ( v31 >= (unsigned int)monitor )
      {
        v33 = sub_B5D6C8(list);
        sub_B5D668(v33, 0LL);
      }
      if ( !v23 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v23,
        *((EventMissionProgressRequest_Argument_ProgressData_o **)&syncRoot[2].klass + v31),
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      LODWORD(monitor) = syncRoot[1].monitor;
      if ( (__int64)++v31 >= (int)monitor )
        goto LABEL_17;
    }
LABEL_20:
    sub_B5D69C(list, v24);
  }
LABEL_18:
  if ( !v23 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
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

  if ( (byte_42EACA9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__,
      (_DWORD)entity,
      treasureBoxId,
      *(_QWORD *)&idx);
    byte_42EACA9 = 1;
  }
  PK = TreasureBoxTalkEntity__CreatePK(treasureBoxId, idx, *(const MethodInfo **)&treasureBoxId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TreasureBoxTalkMaster__TreasureBoxTalkEntity__string__TryGetEntity__);
}
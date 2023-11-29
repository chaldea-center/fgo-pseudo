void __fastcall ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC204 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__, method);
    byte_40FC204 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    208,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *__fastcall ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FC202 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__, *(_QWORD *)&itemId);
    byte_40FC202 = 1;
  }
  PK = ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_266F7D8 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_array *__fastcall ItemSelectMaster__GetSelectables(
        ItemSelectMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  const MethodInfo *v11; // x4
  int32_t v12; // w22
  const MethodInfo *v13; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FC205 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__, *(_QWORD *)&itemId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo, v9);
    byte_40FC205 = 1;
  }
  entity = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ItemSelectEntity__TypeInfo,
                                                                                                  *(_QWORD *)&itemId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  if ( ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v11) )
  {
    if ( !v10 )
      goto LABEL_9;
    v12 = 2;
    do
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v10,
        (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemSelectEntity__Add__);
    while ( ItemSelectMaster__TryGetEntity(this, &entity, itemId, v12++, v13) );
  }
  if ( !v10 )
LABEL_9:
    sub_B170D4();
  return (ItemSelectEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemSelectMaster__TryGetEntity(
        ItemSelectMaster_o *this,
        ItemSelectEntity_o **entity,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FC203 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__, entity);
    byte_40FC203 = 1;
  }
  PK = ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}
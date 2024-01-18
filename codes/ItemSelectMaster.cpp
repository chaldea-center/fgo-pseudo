void __fastcall ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41870D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__, method);
    byte_41870D9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    208,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *__fastcall ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41870D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__, *(_QWORD *)&itemId);
    byte_41870D7 = 1;
  }
  PK = ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                 (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_24E4520 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_array *__fastcall ItemSelectMaster__GetSelectables(
        ItemSelectMaster_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  const MethodInfo *v9; // x4
  _BOOL8 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w22
  const MethodInfo *v13; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41870DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__, *(_QWORD *)&itemId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo, v7);
    byte_41870DA = 1;
  }
  entity = 0LL;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  v10 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v9);
  if ( v10 )
  {
    if ( !v8 )
      goto LABEL_9;
    v12 = 2;
    do
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemSelectEntity__Add__);
      v10 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, v12++, v13);
    }
    while ( v10 );
  }
  if ( !v8 )
LABEL_9:
    sub_B2C434(v10, v11);
  return (ItemSelectEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
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

  if ( (byte_41870D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__, entity);
    byte_41870D8 = 1;
  }
  PK = ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}
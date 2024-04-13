void __fastcall ItemSelectMaster___ctor(ItemSelectMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7D16 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E7D16 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    209,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ItemSelectEntity_o *__fastcall ItemSelectMaster__GetEntity(
        ItemSelectMaster_o *this,
        int32_t itemId,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E7D14 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__, itemId, idx, method);
    byte_42E7D14 = 1;
  }
  PK = ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&idx);
  return (ItemSelectEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                 (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                 PK,
                                 (const MethodInfo_23FB260 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__GetEntity__);
}


ItemSelectEntity_array *__fastcall ItemSelectMaster__GetSelectables(
        ItemSelectMaster_o *this,
        int32_t itemId,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  const MethodInfo *v16; // x4
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w22
  const MethodInfo *v20; // x4
  ItemSelectEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7D17 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemSelectEntity__Add__, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ItemSelectEntity___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_ItemSelectEntity__TypeInfo, v12, v13, v14);
    byte_42E7D17 = 1;
  }
  entity = 0LL;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemSelectEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemSelectEntity___ctor__);
  v17 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, 1, v16);
  if ( v17 )
  {
    if ( !v15 )
      goto LABEL_9;
    v19 = 2;
    do
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        (EventMissionProgressRequest_Argument_ProgressData_o *)entity,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemSelectEntity__Add__);
      v17 = ItemSelectMaster__TryGetEntity(this, &entity, itemId, v19++, v20);
    }
    while ( v17 );
  }
  if ( !v15 )
LABEL_9:
    sub_B5D69C(v17, v18);
  return (ItemSelectEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ItemSelectEntity__ToArray__);
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

  if ( (byte_42E7D15 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__,
      (_DWORD)entity,
      itemId,
      *(_QWORD *)&idx);
    byte_42E7D15 = 1;
  }
  PK = ItemSelectEntity__CreatePK(itemId, idx, *(const MethodInfo **)&itemId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ItemSelectMaster__ItemSelectEntity__string__TryGetEntity__);
}
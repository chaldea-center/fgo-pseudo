void __fastcall TreasureBoxGiftMaster___ctor(TreasureBoxGiftMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EACA2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EACA2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    376,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__);
}


System_Int32_array *__fastcall TreasureBoxGiftMaster__GetEmissionItemList(
        TreasureBoxGiftMaster_o *this,
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
  System_Collections_Generic_List_int__o *v24; // x21
  __int64 v25; // x1
  void *list; // x0
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42EACA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, id, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&TreasureBoxGiftEntity_TypeInfo, v21, v22, v23);
    byte_42EACA3 = 1;
  }
  v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v28,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v29 = *(&TreasureBoxGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v29
          && *(TreasureBoxGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v29 - 8) == TreasureBoxGiftEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v24 )
            break;
          System_Collections_Generic_List_int___Add(
            v24,
            *((_DWORD *)list + 6),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v28 >= v27 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v25);
  }
LABEL_14:
  if ( !v24 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v24,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxGiftEntity_o *__fastcall TreasureBoxGiftMaster__GetEntity(
        TreasureBoxGiftMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EACA0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__,
      id,
      idx,
      method);
    byte_42EACA0 = 1;
  }
  PK = TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureBoxGiftMaster__TryGetEntity(
        TreasureBoxGiftMaster_o *this,
        TreasureBoxGiftEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EACA1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&idx);
    byte_42EACA1 = 1;
  }
  PK = TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__);
}
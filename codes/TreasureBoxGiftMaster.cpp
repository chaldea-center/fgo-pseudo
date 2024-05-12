void __fastcall TreasureBoxGiftMaster___ctor(TreasureBoxGiftMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D643 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__);
    byte_438D643 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    376,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string___ctor__);
}


System_Int32_array *__fastcall TreasureBoxGiftMaster__GetEmissionItemList(
        TreasureBoxGiftMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  __int64 v6; // x1
  void *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_438D644 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&TreasureBoxGiftEntity_TypeInfo);
    byte_438D644 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
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
        v10 = *(&TreasureBoxGiftEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v10
          && *(TreasureBoxGiftEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) == TreasureBoxGiftEntity_TypeInfo
          && *((_DWORD *)list + 4) == id )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_int___Add(
            v5,
            *((_DWORD *)list + 6),
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
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
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxGiftEntity_o *__fastcall TreasureBoxGiftMaster__GetEntity(
        TreasureBoxGiftMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D641 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__);
    byte_438D641 = 1;
  }
  PK = TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (TreasureBoxGiftEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_21FBCE4 *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__GetEntity__);
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

  if ( (byte_438D642 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__);
    byte_438D642 = 1;
  }
  PK = TreasureBoxGiftEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_TreasureBoxGiftMaster__TreasureBoxGiftEntity__string__TryGetEntity__);
}
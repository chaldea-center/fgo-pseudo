void __fastcall TreasureBoxMaster___ctor(TreasureBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D645 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
    byte_438D645 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    375,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxEntity_o *__fastcall TreasureBoxMaster__GetTreasureBoxData(
        TreasureBoxMaster_o *this,
        int32_t eventId,
        int32_t Index,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w23
  TreasureBoxEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_438D646 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&TreasureBoxEntity_TypeInfo);
    byte_438D646 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (TreasureBoxEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        list,
                                        v10,
                                        (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&TreasureBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (TreasureBoxEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == TreasureBoxEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.idx == Index )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_15:
    sub_B7769C(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}
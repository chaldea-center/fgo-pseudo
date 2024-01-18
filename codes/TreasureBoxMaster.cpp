void __fastcall TreasureBoxMaster___ctor(TreasureBoxMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41899A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__, method);
    byte_41899A5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    374,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_TreasureBoxMaster__TreasureBoxEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureBoxEntity_o *__fastcall TreasureBoxMaster__GetTreasureBoxData(
        TreasureBoxMaster_o *this,
        int32_t eventId,
        int32_t Index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w23
  TreasureBoxEntity_o *result; // x0
  __int64 v14; // x10

  if ( (byte_41899A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&TreasureBoxEntity_TypeInfo, v8);
    byte_41899A6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (TreasureBoxEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                        list,
                                        v12,
                                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v14 = *(&TreasureBoxEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v14
          && (TreasureBoxEntity_c *)result->klass->_2.typeHierarchy[v14 - 1] == TreasureBoxEntity_TypeInfo
          && result->fields.eventId == eventId
          && result->fields.idx == Index )
        {
          return result;
        }
      }
      if ( ++v12 >= v11 )
        return 0LL;
    }
LABEL_15:
    sub_B2C434(list, *(_QWORD *)&eventId);
  }
  return 0LL;
}
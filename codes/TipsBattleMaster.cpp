void __fastcall TipsBattleMaster___ctor(TipsBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4184CE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__, method);
    byte_4184CE8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    128,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
}


int32_t __fastcall TipsBattleMaster__getSum(TipsBattleMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_4184CE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    byte_4184CE9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}
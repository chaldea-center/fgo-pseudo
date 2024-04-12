void __fastcall TipsBattleMaster___ctor(TipsBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC6BA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
    byte_42AC6BA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    129,
    (const MethodInfo_23E223C *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
}


int32_t __fastcall TipsBattleMaster__getSum(TipsBattleMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42AC6BB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_42AC6BB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}
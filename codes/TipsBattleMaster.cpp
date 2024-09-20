void __fastcall TipsBattleMaster___ctor(TipsBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC8E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
    byte_4A5BC8E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    130,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
}


int32_t __fastcall TipsBattleMaster__getSum(TipsBattleMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4A5BC8F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_4A5BC8F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
}
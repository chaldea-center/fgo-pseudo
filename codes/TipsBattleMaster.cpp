void __fastcall TipsBattleMaster___ctor(TipsBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBA67 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__, method);
    byte_49BBA67 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    134,
    (const MethodInfo_319B678 *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
}


int32_t __fastcall TipsBattleMaster__getSum(TipsBattleMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_49BBA68 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__, method);
    byte_49BBA68 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__);
}
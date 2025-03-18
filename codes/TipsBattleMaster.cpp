void __fastcall TipsBattleMaster___ctor(TipsBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22B39 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__, method);
    byte_4C22B39 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    134,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
}


int32_t __fastcall TipsBattleMaster__getSum(TipsBattleMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4C22B3A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__, method);
    byte_4C22B3A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__);
}
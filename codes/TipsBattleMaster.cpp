void TipsBattleMaster___ctor(TipsBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D55B & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
    byte_4D2D55B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    134,
    (const MethodInfo_345919C *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
}


int32_t TipsBattleMaster__getSum(TipsBattleMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4D2D55C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__);
    byte_4D2D55C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__);
}
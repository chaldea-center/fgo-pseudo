void TipsBattleMaster___ctor(TipsBattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59393C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
    byte_59393C3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    136,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_TipsBattleMaster__TipsBattleEntity__int___ctor__);
}


int32_t TipsBattleMaster__getSum(TipsBattleMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_59393C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__);
    byte_59393C4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_TipsBattleEntity__get_Count__);
}
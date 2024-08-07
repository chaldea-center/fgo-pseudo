void __fastcall WarBoardActionTrendGroupMaster___ctor(WarBoardActionTrendGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFA66 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__,
      method);
    byte_49FFA66 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    470,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__);
}
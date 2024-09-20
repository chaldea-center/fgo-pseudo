void __fastcall WarBoardActionTrendGroupMaster___ctor(WarBoardActionTrendGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C0C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__);
    byte_4A5C0C5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    470,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__);
}
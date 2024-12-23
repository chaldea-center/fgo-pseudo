void __fastcall WarBoardActionTrendGroupMaster___ctor(WarBoardActionTrendGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67B7E & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__,
      method);
    byte_4B67B7E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    474,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__);
}
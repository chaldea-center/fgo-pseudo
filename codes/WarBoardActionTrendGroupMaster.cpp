void __fastcall WarBoardActionTrendGroupMaster___ctor(WarBoardActionTrendGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438902F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__);
    byte_438902F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    469,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__);
}
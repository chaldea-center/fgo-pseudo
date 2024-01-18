void __fastcall WarBoardActionTrendGroupMaster___ctor(WarBoardActionTrendGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41867B8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__,
      method);
    byte_41867B8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    467,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardActionTrendGroupMaster__WarBoardActionTrendGroupEntity__int___ctor__);
}
void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42132C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_42132C2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    317,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}
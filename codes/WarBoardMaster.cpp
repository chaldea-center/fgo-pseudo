void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438AE81 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
    byte_438AE81 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    318,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}
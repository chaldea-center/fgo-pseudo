void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AEA3E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
    byte_42AEA3E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    318,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}
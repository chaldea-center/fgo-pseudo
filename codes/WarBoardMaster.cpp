void __fastcall WarBoardMaster___ctor(WarBoardMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8559 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__, method);
    byte_40F8559 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    317,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_WarBoardMaster__WarBoardEntity__int___ctor__);
}
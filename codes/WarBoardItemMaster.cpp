void __fastcall WarBoardItemMaster___ctor(WarBoardItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F6433 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__, method);
    byte_40F6433 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    330,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
}
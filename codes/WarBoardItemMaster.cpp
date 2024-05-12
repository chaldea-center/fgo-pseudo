void __fastcall WarBoardItemMaster___ctor(WarBoardItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387BF5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
    byte_4387BF5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    331,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
}
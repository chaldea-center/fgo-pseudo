void __fastcall WarBoardItemMaster___ctor(WarBoardItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC84F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
    byte_42AC84F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    331,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardItemMaster__WarBoardItemEntity__int___ctor__);
}
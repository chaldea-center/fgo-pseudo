void __fastcall WarBoardRatingOffsetMaster___ctor(WarBoardRatingOffsetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B21C6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int___ctor__);
    byte_42B21C6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    330,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int___ctor__);
}
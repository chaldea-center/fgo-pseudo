void __fastcall WarBoardRatingOffsetMaster___ctor(WarBoardRatingOffsetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D207 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int___ctor__);
    byte_438D207 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    330,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int___ctor__);
}
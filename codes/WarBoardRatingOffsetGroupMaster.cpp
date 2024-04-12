void __fastcall WarBoardRatingOffsetGroupMaster___ctor(
        WarBoardRatingOffsetGroupMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B21C5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__);
    byte_42B21C5 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    469,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__);
}
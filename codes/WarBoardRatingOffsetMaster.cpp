void __fastcall WarBoardRatingOffsetMaster___ctor(WarBoardRatingOffsetMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FFAF2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int___ctor__, method);
    byte_49FFAF2 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    331,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_WarBoardRatingOffsetMaster__WarBoardRatingOffsetEntity__int___ctor__);
}
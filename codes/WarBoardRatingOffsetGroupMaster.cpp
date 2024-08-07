void __fastcall WarBoardRatingOffsetGroupMaster___ctor(
        WarBoardRatingOffsetGroupMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFAF1 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__,
      method);
    byte_49FFAF1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    471,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_WarBoardRatingOffsetGroupMaster__WarBoardRatingOffsetGroupEntity__int___ctor__);
}
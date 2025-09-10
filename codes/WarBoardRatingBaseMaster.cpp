void WarBoardRatingBaseMaster___ctor(WarBoardRatingBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28489 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__);
    byte_4C28489 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    336,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__);
}
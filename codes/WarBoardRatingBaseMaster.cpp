void WarBoardRatingBaseMaster___ctor(WarBoardRatingBaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59398D3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__);
    byte_59398D3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    338,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_WarBoardRatingBaseMaster__WarBoardRatingBaseEntity__int___ctor__);
}
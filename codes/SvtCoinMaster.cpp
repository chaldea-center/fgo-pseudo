void SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D532 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
    byte_4D2D532 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_345919C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
void SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF2F8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
    byte_4CEF2F8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
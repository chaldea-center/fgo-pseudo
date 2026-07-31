void SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593939B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
    byte_593939B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    381,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
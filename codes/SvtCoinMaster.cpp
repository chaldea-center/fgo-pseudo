void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A09670 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__, method);
    byte_4A09670 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    373,
    (const MethodInfo_30E4480 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
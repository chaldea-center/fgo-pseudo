void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02C57 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__, method);
    byte_4B02C57 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE2EB & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__, method);
    byte_4BFE2EB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    377,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
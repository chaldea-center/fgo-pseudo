void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4357936 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
    byte_4357936 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    372,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5B1E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
    byte_42B5B1E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    372,
    (const MethodInfo_23E223C *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
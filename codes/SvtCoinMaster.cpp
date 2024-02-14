void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421A059 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__, method);
    byte_421A059 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    371,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
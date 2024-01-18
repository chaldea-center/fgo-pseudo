void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B376 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__, method);
    byte_418B376 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    371,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
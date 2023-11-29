void __fastcall SvtCoinMaster___ctor(SvtCoinMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FDA59 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__, method);
    byte_40FDA59 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    371,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int___ctor__);
}
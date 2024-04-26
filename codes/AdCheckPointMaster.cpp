void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434FB8E & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
    byte_434FB8E = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    419,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
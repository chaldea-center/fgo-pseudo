void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CE43 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
    byte_438CE43 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    419,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
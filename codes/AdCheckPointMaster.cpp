void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7E69 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__, method);
    byte_40F7E69 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    418,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
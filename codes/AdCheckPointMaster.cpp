void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADF59 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
    byte_42ADF59 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    419,
    (const MethodInfo_23E223C *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
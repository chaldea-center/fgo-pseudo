void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4185A07 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__, method);
    byte_4185A07 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    418,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
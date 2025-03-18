void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C21B47 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__, method);
    byte_4C21B47 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    426,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
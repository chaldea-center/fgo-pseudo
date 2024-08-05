void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE124 & 1) == 0 )
  {
    sub_1B64870(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__, method);
    byte_49FE124 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    420,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
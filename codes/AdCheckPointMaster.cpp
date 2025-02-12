void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC769A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__, method);
    byte_4BC769A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    424,
    (const MethodInfo_3246354 *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
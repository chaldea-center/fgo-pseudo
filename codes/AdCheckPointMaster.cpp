void __fastcall AdCheckPointMaster___ctor(AdCheckPointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB595D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__, method);
    byte_4AB595D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    420,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_AdCheckPointMaster__AdCheckPointEntity__int___ctor__);
}
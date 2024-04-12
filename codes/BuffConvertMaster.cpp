void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B17FA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
    byte_42B17FA = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    440,
    (const MethodInfo_23E223C *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}
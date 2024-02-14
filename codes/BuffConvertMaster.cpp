void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216392 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__, method);
    byte_4216392 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    439,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}
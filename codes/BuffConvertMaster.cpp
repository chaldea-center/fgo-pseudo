void __fastcall BuffConvertMaster___ctor(BuffConvertMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D7BC & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
    byte_438D7BC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    440,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BuffConvertMaster__BuffConvertEntity__int___ctor__);
}
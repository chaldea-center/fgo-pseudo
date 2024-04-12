void __fastcall BuffTypeDetailMaster___ctor(BuffTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1847 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int___ctor__);
    byte_42B1847 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    411,
    (const MethodInfo_23E223C *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int___ctor__);
}
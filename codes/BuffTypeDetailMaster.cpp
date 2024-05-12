void __fastcall BuffTypeDetailMaster___ctor(BuffTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D80D & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int___ctor__);
    byte_438D80D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    411,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int___ctor__);
}
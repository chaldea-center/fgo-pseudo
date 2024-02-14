void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421288B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__, method);
    byte_421288B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    37,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}
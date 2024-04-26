void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434FB21 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
    byte_434FB21 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    38,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}
void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438CD58 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
    byte_438CD58 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    38,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}
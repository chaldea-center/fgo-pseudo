void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42ADEEC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
    byte_42ADEEC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    38,
    (const MethodInfo_23E223C *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}
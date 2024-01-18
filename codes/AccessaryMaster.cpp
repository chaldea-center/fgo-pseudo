void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418599A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__, method);
    byte_418599A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    37,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}
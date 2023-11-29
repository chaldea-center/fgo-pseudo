void __fastcall AccessaryMaster___ctor(AccessaryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F7DFC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__, method);
    byte_40F7DFC = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    37,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_AccessaryMaster__AccessaryEntity__int___ctor__);
}
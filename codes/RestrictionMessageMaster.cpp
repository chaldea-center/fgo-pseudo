void __fastcall RestrictionMessageMaster___ctor(RestrictionMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4354325 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
    byte_4354325 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    447,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
}
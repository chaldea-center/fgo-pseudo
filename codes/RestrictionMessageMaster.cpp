void __fastcall RestrictionMessageMaster___ctor(RestrictionMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DBE3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
    byte_438DBE3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    447,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
}
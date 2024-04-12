void __fastcall RestrictionMessageMaster___ctor(RestrictionMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B28B3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
    byte_42B28B3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    447,
    (const MethodInfo_23E223C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
}
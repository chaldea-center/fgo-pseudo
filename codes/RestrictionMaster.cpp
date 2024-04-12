void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B28B1 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
    byte_42B28B1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    174,
    (const MethodInfo_23E223C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}
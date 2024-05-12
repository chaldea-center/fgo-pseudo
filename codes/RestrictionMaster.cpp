void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438DBE1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
    byte_438DBE1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    174,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}
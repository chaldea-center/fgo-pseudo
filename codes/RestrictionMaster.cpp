void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC834 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__, method);
    byte_40FC834 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    173,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}
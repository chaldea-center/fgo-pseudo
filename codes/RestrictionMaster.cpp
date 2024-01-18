void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418BB55 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__, method);
    byte_418BB55 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    173,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}
void __fastcall RestrictionMessageMaster___ctor(RestrictionMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418BB57 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__, method);
    byte_418BB57 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    446,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
}
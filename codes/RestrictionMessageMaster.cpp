void __fastcall RestrictionMessageMaster___ctor(RestrictionMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B0328D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__, method);
    byte_4B0328D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    454,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
}
void __fastcall RestrictionMessageMaster___ctor(RestrictionMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67D0A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__, method);
    byte_4B67D0A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    452,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
}
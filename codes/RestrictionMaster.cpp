void __fastcall RestrictionMaster___ctor(RestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B75F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
    byte_4A5B75F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    175,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int___ctor__);
}
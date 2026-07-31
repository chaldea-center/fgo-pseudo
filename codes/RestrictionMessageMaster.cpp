void RestrictionMessageMaster___ctor(RestrictionMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939AC0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
    byte_5939AC0 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    456,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_RestrictionMessageMaster__RestrictionMessageEntity__int___ctor__);
}
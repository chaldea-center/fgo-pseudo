void AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE262 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
    byte_4CEE262 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    84,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}
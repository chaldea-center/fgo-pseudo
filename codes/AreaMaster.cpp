void AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D305C1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
    byte_4D305C1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    84,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}
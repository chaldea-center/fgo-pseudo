void AreaMaster___ctor(AreaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C411 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
    byte_4D2C411 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    84,
    (const MethodInfo_345919C *)Method_DataMasterBase_AreaMaster__AreaEntity__int___ctor__);
}
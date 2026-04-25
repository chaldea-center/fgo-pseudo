void FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E04D6C & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
    byte_4E04D6C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    408,
    (const MethodInfo_34E6CE4 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}
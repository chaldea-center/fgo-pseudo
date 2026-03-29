void CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D307A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
    byte_4D307A1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    184,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}
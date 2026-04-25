void CombineMaster___ctor(CombineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E047D7 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
    byte_4E047D7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    184,
    (const MethodInfo_34E6CE4 *)Method_DataMasterBase_CombineMaster__CombineEntity__int___ctor__);
}
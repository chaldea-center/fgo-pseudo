void CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56BAA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
    byte_4C56BAA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
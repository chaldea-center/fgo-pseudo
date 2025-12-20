void CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C6A6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
    byte_4D2C6A6 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_345919C *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
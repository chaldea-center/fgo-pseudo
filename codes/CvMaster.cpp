void CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4E774F1 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
    byte_4E774F1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_3533604 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
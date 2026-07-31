void CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59384C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
    byte_59384C1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
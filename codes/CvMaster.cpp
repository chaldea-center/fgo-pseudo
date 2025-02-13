void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC397 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
    byte_4BDC397 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BACC1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_49BACC1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_319B678 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
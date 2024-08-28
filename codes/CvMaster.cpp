void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A1F93B & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_4A1F93B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    91,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
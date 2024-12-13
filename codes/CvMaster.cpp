void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B37000 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_4B37000 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    91,
    (const MethodInfo_31D1EB0 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
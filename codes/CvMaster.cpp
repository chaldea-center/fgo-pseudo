void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01E6B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_4B01E6B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    95,
    (const MethodInfo_32ACD4C *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
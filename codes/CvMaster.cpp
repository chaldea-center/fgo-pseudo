void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A08ACF & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_4A08ACF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    91,
    (const MethodInfo_30E4480 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A2DDA8 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_4A2DDA8 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    91,
    (const MethodInfo_30FF740 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
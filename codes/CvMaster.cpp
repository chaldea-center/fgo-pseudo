void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B19E6 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
    byte_42B19E6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    90,
    (const MethodInfo_23E223C *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
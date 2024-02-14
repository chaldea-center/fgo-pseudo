void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216034 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_4216034 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    89,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
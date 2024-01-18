void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418900D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_418900D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    89,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
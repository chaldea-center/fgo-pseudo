void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C851 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
    byte_438C851 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    90,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
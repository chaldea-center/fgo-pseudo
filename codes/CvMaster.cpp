void __fastcall CvMaster___ctor(CvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB3D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CvMaster__CvEntity__int___ctor__, method);
    byte_40FB3D4 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    89,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_CvMaster__CvEntity__int___ctor__);
}
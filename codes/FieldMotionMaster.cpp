void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8E6D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_40F8E6D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    400,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}
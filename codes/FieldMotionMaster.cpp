void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE9A2 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
    byte_42AE9A2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    401,
    (const MethodInfo_23E223C *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}
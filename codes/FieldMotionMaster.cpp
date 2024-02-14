void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4213226 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_4213226 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    400,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}
void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418697F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__, method);
    byte_418697F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    400,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}
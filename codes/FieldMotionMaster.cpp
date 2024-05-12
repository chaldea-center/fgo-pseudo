void __fastcall FieldMotionMaster___ctor(FieldMotionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389700 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
    byte_4389700 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    401,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_FieldMotionMaster__FieldMotionEntity__int___ctor__);
}
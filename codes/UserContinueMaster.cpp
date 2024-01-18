void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188AE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__, method);
    byte_4188AE1 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    98,
    (const MethodInfo_24E425C *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}
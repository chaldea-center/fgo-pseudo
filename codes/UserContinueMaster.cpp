void __fastcall UserContinueMaster___ctor(UserContinueMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215BA2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__, method);
    byte_4215BA2 = 1;
  }
  DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long____ctor(
    (DataMasterBase_UserSubEquipMaster__UserSubEquipEntity__long__o *)this,
    98,
    (const MethodInfo_2669D60 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long___ctor__);
}